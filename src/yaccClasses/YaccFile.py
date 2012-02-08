

from Token import Token
from Pattern import Pattern
from Rule import Rule
import os
import ClassCode
from Cheetah.Template import Template as CheetahTemplate

cheetahTemplatesDir=os.path.dirname(os.path.abspath(__file__))+"/cheetahTemplates/"

class YaccFile(object):
	def __init__(self,fileName):
		self.fileName=fileName
		self.__parse()
		self.__resolve()
		for rn in self.ruleMap:
			rule=self.ruleMap[rn]
			rule.finalize()
	

	def __parse(self):
		mode=0
		tokens=[]
		codeLines=[]
		rules={}
		with open(self.fileName) as fh:
			for l in fh:
				l=l.strip('\n')
				if(len(l)==0):
					continue
				if(l.strip()=='%%'):
					mode+=1
					continue
				if(mode==0):
					lspl=l.split()
					if(lspl[0]=="%token"):
						tokens.extend(lspl[1:])
					elif(lspl[0]=="%start"):
						start=lspl[1]
				if(mode==1):
					tokens=dict([(i,Token(i)) for i in tokens])
					if(l[0] not in [' ','\t']):
						l=l.strip()
						rules[l]=[]
						currentRule=l
					else:
						l=l.strip()
						if(l==';'):
							continue
						
						rules[currentRule].append(tuple(l.split()[1:]))
				if(mode>1):
					codeLines.append(l)
		
		
		
		ruleMap=dict([(i,Rule(i)) for i in rules.keys()])
		
		for r in rules:
			rr=ruleMap[r]
			for rTokens in rules[r]:
				ruleMap[r].append([])
				for ra in rTokens:
					if(ra in ruleMap):
						ruleMap[r][-1].append(ruleMap[ra])
					elif(ra in tokens):
						ruleMap[r][-1].append(tokens[ra])
					else:
						tokens[ra]=Token(ra,chrType=True)
						ruleMap[r][-1].append(tokens[ra])
		self.tokens=tokens
		self.codeLines=codeLines
		self.ruleMap=ruleMap
		self.start=start
		self.ruleMap[self.start].isStart=True
	
	def __resolve(self):
		for rn in self.ruleMap:
			rule=self.ruleMap[rn]
			rule.resolve()
	
	def dump(self,yaccFileHandle,cHeaderFileHandle,cSourceFileHandle,pythonFileHandle):
		self._dumpYacc(yaccFileHandle)
		self._dumpCHeader(cHeaderFileHandle)
		self._dumpCSource(cSourceFileHandle)
		self._dumpPython ( pythonFileHandle)


	def _dumpPython(self,fh):
		fh.write("""
#include <Python.h>
#include <structmember.h>

""")
		classNames=[]
		for rn in self.ruleMap:
			rule=self.ruleMap[rn]
			classNames.extend(rule._dumpPython(fh))
		
		fh.write("""

static PyObject* parseFile(PyObject *args,PyObject *kwargs)
{
	CAst::translation_unit *tu=CAst::parseFile("test.c");
	PyCAst_object_translation_unit *pyTu=(PyCAst_object_translation_unit*)PyCAst_type_translation_unit.tp_new(&PyCAst_type_translation_unit,NULL,NULL);
	pyTu->_p_cast_object=tu;
	return (PyObject*)pyTu;
}

static PyMethodDef module_methods[] = {
	{ "parseFile",(PyCFunction)parseFile,METH_KEYWORDS,"parses a file"},
	NULL
};


#ifndef PyMODINIT_FUNC
#define PyMODINIT_FUNC void
#endif
PyMODINIT_FUNC
initPyCAst(void) 
{
    PyObject* m;
""")

		for c in classNames:
    			fh.write("\tif (PyType_Ready(&PyCAst_type_%(className)s) < 0) {printf(\"Initialization of PyCAst_type_%(className)s FAILED\\n\\n\");return;}\n"%{"className":c})

		fh.write("""
    m = Py_InitModule3("PyCAst", module_methods,"The PyCAst Module");

    if (m == NULL) return;
""")
		for c in classNames:
    			fh.write("""
	Py_INCREF(&PyCAst_type_%(className)s);
	PyModule_AddObject(m,"%(className)s", (PyObject *)&PyCAst_type_%(className)s);\n"""%{"className":c})
		fh.write("}")
		
	def _dumpYacc(self,fh):
		for j,t in enumerate([ i for i in self.tokens.values() if i.typeName=='tok' ]):
			if(j%5==0):
				if(j):fh.write("\n")
				fh.write("%token ")
			
			fh.write(t.tokName+" ")
		fh.write("\n\n%union {\n\tconst char*                           _t_str;")
		fh.write("\n\tCAst::Token*                          _t_Token;")
		for i in self.ruleMap:
			fh.write("\n\tCAst::%s*%s _t_%s;"%(i," "*(30-len(i)),i))
		fh.write("\n}")

		fh.write("\n%start "+self.start+"\n%%\n\n")
		for rn in self.ruleMap:
			rule=self.ruleMap[rn]
			rule._dumpYacc(fh)
		fh.write("\n%%\n\n")
		for c in self.codeLines:
			fh.write(c+"\n")

	def __writeTemplate(self,template,fh):
		tmpl=CheetahTemplate(file=cheetahTemplatesDir+"/"+template+".tmpl",searchList=self.__dict__)
		fh.write(str(tmpl))
		
	def _dumpCHeader(self,fh):
		self.__writeTemplate("cHeader",fh)
	
	def _dumpCSource(self,fh):
		self.cBaseName=os.path.splitext(os.path.basename(fh.name))[0]
		self.__writeTemplate("cSource",fh)
		return
		for rn in self.ruleMap:
			rule=self.ruleMap[rn]
			rule._dumpCSource(fh)
		fh.write("}//namespace CAst\n")






















baseClass="""
class CAst;




class Properties:public std::map<std::string,CAst*> 
{
private:
	std::string __className;
	std::string __tokValue;
public:
	Properties(std::string className):
		std::map<std::string,CAst*>(),
		__className(className)
	{}
	void setTokValue(std::string v){__tokValue=v;}
	
	std::ostream& toStream(std::ostream& stream,int indent=0)const;
	std::string str()const
	{
		std::stringstream stream;
		toStream(stream);
		return stream.str();
	}
};
inline std::ostream& operator<<(std::ostream &stream,const Properties &p)
{
	return p.toStream(stream);
}

class PropertiesList:public std::list<Properties>
{
private:
	std::string __className;
public:
	PropertiesList(std::string className):
			std::list<Properties>(),
			__className(className)
	{}
			
	std::ostream& toStream(std::ostream& stream,int indent=0)const
	{
		std::string sp="  ";
		std::string nl="\\n";
		std::string tab=nl;
		for(register int i=0;i<indent;i++)tab+=sp;
		if(size()>1)
		{
			stream<<tab<<"{"<<tab<<sp<<"\\\"type\\\":\\\""<<__className<<"\\\","<<tab<<sp<<"\\\"value\\\":";
			stream<<tab<<sp<<"[";
			for(const_iterator i=begin();i!=end();i++)
			{
				if(i!=begin())stream<<","<<tab<<sp;
				i->toStream(stream,indent+2);
			}
			stream<<tab<<sp<<"]";
			stream<<tab<<"}";
		}
		else
		{
			begin()->toStream(stream,indent);
		}
		return stream;
	}
	std::string str()const
	{
		std::stringstream stream;
		toStream(stream);
		return stream.str();
	}
};

inline std::ostream& operator<<(std::ostream &stream,const PropertiesList &p){return p.toStream(stream);}

class CAst
{
	public:
		virtual std::string name()const=0;
		virtual bool isList()const=0;
		virtual PropertiesList getPropertiesList()const=0;
		virtual Properties getProperties()const=0;
};
class Token: public CAst
{
	public:
		virtual std::string name()const=0;
		virtual bool isList()const			=0;
		virtual Properties getProperties()const		=0;
		virtual PropertiesList getPropertiesList()const	=0;
		Token()
		{
			LOG("\\033[32mCREATING\\033[0m Token")
		}
		virtual ~Token()
		{
			LOG("\\033[31mDELETING\\033[0m Token")
		}
};
class GenericToken:public Token
{
	std::string _txt;
public:
	
	virtual std::string name()const{return "token";}
	GenericToken(std::string txt):
		Token(),
		_txt(txt)
	{
	}
	
	virtual bool isList()const			{return false;}
	virtual Properties getProperties()const		{Properties p(name());p.setTokValue(_txt);return p;}
	virtual PropertiesList getPropertiesList()const	{return PropertiesList(name());}
	virtual ~GenericToken()
	{
	}
};
inline Token* GetToken(int i,std::string txt)
{
	std::cerr<<"\\033[34m GENERATING TOKEN \\033[0m"<<"i"<<i<<" txt:"<<txt;
	return new GenericToken(txt);
}
"""
