from Token import Token
from string import Template
from Cheetah.Template import Template as CheetahTemplate
import os

cheetahTemplatesDir=os.path.dirname(os.path.abspath(__file__))+"/cheetahTemplates/"

class ConstructorClassCoder(object):
	def __init__(self,constructor):
		self.constructor=constructor
		self.className=self.constructor.className
		self.baseClassFlag=False
		if(self.constructor._index==0):
			self.inheritancePublic=["CAst"]
		else:
			if(self.constructor._index==1):
				self.baseClassFlag=True
			else:
				self.baseClassFlag=False

			self.inheritancePublic=[self.constructor._name]
		self.pattern=repr(self.constructor.pattern)
		self.parameters=self.constructor.parameters


	def _dumpPython(self,fh):
		if(self.baseClassFlag):
			pass

		table="";
		functionText="";
		for t,n,p,v,i,v1 in self.parameters:
			functionText="PyObject* PyCAst_getter_%(className)s_%(varName)s(PyObject* attr)\n{\n\treturn PyString_FromString(\"test\");\n}\n"%{"className":self.className,"varName":n.replace("_p_","")};
			table+="""{(char*)"%(varName)s", (getter)PyCAst_getter_%(className)s_%(varName)s,NULL,(char*)"%(varName)s", NULL},"""%{"className":self.className,"varName":n.replace("_p_","")}

			
		template=Template("""
\n\n\n\n
/*==============================================================*\\
DEFINITION OF $className

\\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::$className *_p_cast_object;
}PyCAst_object_$className;



static PyMethodDef PyCAst_methods_$className [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_$className [] = {
    {NULL}
};
static int PyCAst_init_$className(PyCAst_object_$className *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::$className\\n\\n");
    return 0;
}
static PyObject *PyCAst_getter_${className}_ast(PyObject *_self)
{
	PyCAst_object_$className *self=(PyCAst_object_$className*)(_self);
	if(self->_p_cast_object->isList())
		return PyString_FromString
		(
			self->_p_cast_object->getPropertiesList().str().c_str()
		);
	else 
		return PyString_FromString
		(
			self->_p_cast_object->getProperties().str().c_str()
		);


}

${functionText}

static PyGetSetDef PyCAst_getsetter_$className[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_${className}_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	$table
	NULL
};


static PyObject * PyCAst_new_$className(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::$className\\n\\n");
    PyCAst_object_$className *self;
    self = (PyCAst_object_$className*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_$className = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.$className",
    sizeof(PyCAst_object_$className),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    Py_TPFLAGS_DEFAULT,
    "Object representing the $className for pattern $pattern",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_$className,
    PyCAst_members_$className,
    PyCAst_getsetter_$className,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_${className},
    0,
    PyCAst_new_$className,



};


""")
		fh.write(template.substitute(functionText=functionText,className=self.className,table=table,pattern=str(self.pattern)))
		return [self.className]


	def __writeTemplate(self,template,fh):
		tmpl=CheetahTemplate(file=cheetahTemplatesDir+"/"+template+".tmpl",searchList=self.__dict__)
		fh.write(str(tmpl))
		
		
	def _dumpCHeader(self,fh):
		self.__writeTemplate("cClassHeader",fh)
		return
		if(self.baseClassFlag):self._dumpBaseClassCHeader(fh)
		fh.write("//%s\n\n"%self.pattern)

		fh.write("//Forward Declaration --\n")
		for t,n,p,v,i,v1 in self.parameters:
			fh.write("class %s;\n"%t)
		fh.write("//class declaration --\n")
		fh.write("class %s"%self.className)
		if(self.inheritancePublic):
			fh.write(":public "+" ".join(self.inheritancePublic)+"\n")
		fh.write("{\n")
		fh.write("private:\n")
		fh.write("\tstd::string _s_matchedPattern;\n")
		for t,n,p,v,i,v1 in self.parameters:
			fh.write("\t%s *%s;%s//%s\n"%(t,n," "*(60-len(t)-len(n)),repr(p)))
		fh.write("public:\n")
		fh.write("\t%s(std::string _arg__s_matchedPattern, "%(self.className))
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters]))
		fh.write(");\n")
		fh.write("\tvirtual std::string name()const;\n")
		fh.write("\tvirtual std::string pattern()const;\n")
		fh.write("\tvirtual bool isList()const{return false;}\n")
		fh.write("\tvirtual Properties getProperties()const;\n")
		fh.write("\tvirtual PropertiesList getPropertiesList()const{return PropertiesList(name());}\n")


		fh.write("\tvirtual ~%s();\n"%self.className)
		fh.write("};\n"+"\n"*2)

	def _dumpCSource(self,fh):
		fh.write("std::string %s::name()const\n{\n\treturn std::string(\"%s\");\n}"%(self.className,self.className)+"\n"*2)
		fh.write("std::string %s::pattern()const\n{\n\treturn std::string(\"%s\");\n}"%(self.className,self.pattern[1:-1])+"\n"*2)
		fh.write("%s::%s(std::string _arg__s_matchedPattern, "%(self.className,self.className))
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters]))
		fh.write("):\n"+"\t"*5+"_s_matchedPattern(_arg__s_matchedPattern)"+(",\n" if len(self.parameters) else "\n"))
		fh.write(",\n".join(["\t"*5+"%s(_arg_%s)"%(n,n) for t,n,p,v,i,v1 in self.parameters ]))
		fh.write("\n{\n")
		fh.write("\n\tLOG(\"\\033[32mCREATING\\033[0m %s\")\n"%self.className);
		fh.write("}\n")

		fh.write("Properties %s::getProperties()const\n"%self.className)
		fh.write("{\n")
		fh.write("\tProperties props(name());\n")
		fh.write("".join(["\tprops[\"%s\"]=%s;\n"%(n.replace('_p_',''),n) for t,n,p,v,i,v1 in self.parameters]))
		fh.write("\treturn props;\n")
		fh.write("}\n")





		fh.write("%s::~%s()"%(self.className,self.className))
		fh.write("\n{\n")
		fh.write("\n\tLOG(\"\\033[31mDELETING\\033[0m %s\")\n"%self.className);
		fh.write("\n".join(["\tif (%s)%s{delete(%s);%s=0;}"%(n," "*(30-len(n)),n,n) for t,n,p,v,i,v1 in self.parameters]))
		fh.write("\n}\n")


	def _dumpBaseClassCHeader(self,fh):
		fh.write("class %s"%self.constructor._name)
		fh.write(":public CAst\n{\n")
		fh.write("public:\n")
		fh.write("\tvirtual std::string name()const=0;\n")
		fh.write("\tvirtual std::string pattern()const=0;\n")
		fh.write("\tvirtual bool isList()const=0;\n")
		fh.write("\tvirtual Properties getProperties()const=0;\n")
		fh.write("\tvirtual PropertiesList getPropertiesList()const=0;\n")
		fh.write("\tvirtual ~%s(){}\n"%self.constructor._name)
		fh.write("};\n"+"\n"*2)

class ListAccumulatorClassCoder(ConstructorClassCoder):

	def _dumpCHeader(self,fh):
		return
		#base class if necessary
		if(self.baseClassFlag):self._dumpBaseClassCHeader(fh)


		fh.write("//%s\n\n"%self.pattern)

		fh.write("//Forward Declaration --\n")
		for t,n,p,v,i,v1 in self.parameters:
			fh.write("class %s;\n"%t)


		#item class
		fh.write("//List Element Declaration--\n")
		fh.write("class %s_item\n"%self.className)
		fh.write("{\n")
		fh.write("private:\n")
		fh.write("\tint *_refCount;\n")
		fh.write("\tstd::string _s_matchedPattern;\n")
		for t,n,p,v,i,v1 in self.parameters:
			if(i!=self.constructor.selfIndex):
				fh.write("\t%s *%s;%s//%s\n"%(t,n," "*(60-len(t)-len(n)),repr(p)))
		fh.write("public:\n")
		fh.write("\t%s_item(std::string _arg__s_matchedPattern, "%(self.className))
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i!=self.constructor.selfIndex]))
		fh.write(");\n")
		fh.write("\t%s_item(const %s_item&);\n"%(self.className,self.className))
		fh.write("\tvirtual Properties getProperties()const;\n")
		fh.write("\tvirtual ~%s_item();\n"%self.className)
		fh.write("};\n")


		#main class



		fh.write("//class declaration --\n")
		fh.write("class %s"%self.className)
		if(self.inheritancePublic):
			fh.write(":public "+" ".join(self.inheritancePublic)+"\n")
		fh.write("{\n")
		fh.write("private:\n")
		fh.write("\ttypedef std::list<%s_item> ItemsListType;\n"%(self.className))
		fh.write("\ttypedef ItemsListType::iterator ItemsListIter;\n")
		fh.write("\ttypedef ItemsListType::const_iterator CItemsListIter;\n")
		fh.write("\tstd::list<%s_item> _items;\n"%(self.className))
		fh.write("public:\n")
		fh.write("\t%s(std::string _arg__s_matchedPattern, "%(self.className))
		#fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i in self.constructor.init_includedParameterIndices]))
		fh.write(");\n")

		fh.write("\tvoid append(std::string _arg__s_matchedPattern, ")
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write(");\n")


		fh.write("\tvirtual std::string name()const;\n")
		fh.write("\tvirtual std::string pattern()const;\n")
		fh.write("\tvirtual bool isList()const{return true;}\n")
		fh.write("\tvirtual Properties getProperties()const{return Properties(name());}\n")
		fh.write("\tvirtual PropertiesList getPropertiesList()const;\n")
		fh.write("\tvirtual ~%s();\n"%self.className)
		fh.write("};\n"+"\n"*2)


	def _dumpCSource(self,fh):
		#item class
		fh.write("%s_item::%s_item(std::string _arg__s_matchedPattern, "%(self.className,self.className))
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write("):\n")
		fh.write("\t"*5+"_refCount(new int(1)),\n")
		fh.write("\t"*5+"_s_matchedPattern(_arg__s_matchedPattern)"+(",\n" if len(self.parameters) else "\n"))
		fh.write(",\n".join(["\t"*5+"%s(_arg_%s)"%(n,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write("\n{\n")
		fh.write("\n\tLOG(\"\\033[32mCREATING\\033[0m %s_item\")\n"%self.className);
		fh.write("\tLOG(\"[ \"<<_refCount<<\" ]\t\"<<\"refCount after creation:\"<<(*_refCount))")
		fh.write("\n}\n")


		fh.write("\t%s_item::%s_item(const %s_item &other):\n"%(self.className,self.className,self.className))
		fh.write("\t"*5+"_refCount(other._refCount),\n")
		fh.write("\t"*5+"_s_matchedPattern(other._s_matchedPattern)"+(",\n" if len(self.parameters) else "\n"))
		fh.write(",\n".join(["\t"*5+"%s(other.%s)"%(n,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write("\n{\n")
		fh.write("\n\tLOG(\"COPYING %s_item\")\n"%self.className);
		fh.write("\t(*_refCount)++;\n")
		fh.write("\tLOG(\"[ \"<<_refCount<<\" ]\t\"<<\"refCount after increment:\"<<(*_refCount))")
		fh.write("\n}\n\n")

		fh.write("\tProperties %s_item::getProperties()const"%(self.className))
		fh.write("\n{\n")
		fh.write("\tProperties props(\"%s_item\");\n"%(self.className))
#		fh.write("\n".join(["\t"+"props[%s]=%s;"%(n,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write("".join(["\tprops[\"%s\"]=%s;\n"%(n.replace('_p_',''),n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write("\treturn props;\n")
		fh.write("\n}\n\n")


		fh.write("%s_item::~%s_item()"%(self.className,self.className))
		fh.write("\n{\n")
		fh.write("\n\tLOG(\"\\033[31mDELETING\\033[0m(?) %s_item\")\n"%self.className);
		fh.write("\n\t(*_refCount)--;")
		fh.write("\tLOG(\"[ \"<<_refCount<<\" ]\t\"<<\"refCount after decrement:\"<<(*_refCount))")
		fh.write("\n\tif((*_refCount)>0)return;")
		fh.write("\n\tLOG(\"\\033[31mDELETING\\033[0m %s_item\")\n"%self.className);
		fh.write("\n\tdelete(_refCount);_refCount=0;\n")
		fh.write("\n".join(["\tif (%s)%s\n\t{\n\t\tdelete(%s);\n\t\t%s=0;\n\t}"%(n," "*(30-len(n)),n,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write("\n\tLOG(\"\\033[31mDELETED\\033[0m %s_item\")\n"%self.className);
		fh.write("\n}\n")




		#main class
		fh.write("std::string %s::name()const\n{\n\treturn std::string(\"%s\");\n}"%(self.className,self.className)+"\n"*2)
		fh.write("std::string %s::pattern()const\n{\n\treturn std::string(\"%s\");\n}"%(self.className,self.pattern[1:-1])+"\n"*2)
		fh.write("%s::%s(std::string _arg__s_matchedPattern, "%(self.className,self.className))
		#fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i in self.constructor.init_includedParameterIndices]))
		fh.write(")")
		fh.write("\n{\n")
		fh.write("\n\tLOG(\"CREATING %s\")\n"%self.className);
		fh.write("\t%s_item item(_arg__s_matchedPattern, "%(self.className))
		fh.write(", ".join(["_arg_%s"%(n) if i in self.constructor.init_includedParameterIndices else "NULL" for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write(");\n")
		fh.write("\n\tLOG(\"APPENDING to %s\")\n"%self.className);
		fh.write("\t_items.push_back(item);\n")
		fh.write("}\n")

		fh.write("void %s::append(std::string _arg__s_matchedPattern, "%(self.className))
		fh.write(", ".join(["%s *_arg_%s"%(t,n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write(")")
		fh.write("\n{\n")
		fh.write("\t%s_item item(_arg__s_matchedPattern, "%(self.className))
		fh.write(", ".join(["_arg_%s"%(n) for t,n,p,v,i,v1 in self.parameters if i != self.constructor.selfIndex]))
		fh.write(");\n")
		fh.write("\t_items.push_back(item);\n")
		fh.write("}\n")

		fh.write("PropertiesList %s::getPropertiesList()const\n"%self.className)
		fh.write("{\n")
		fh.write("\tPropertiesList pList(name());\n");
		fh.write("\tfor(CItemsListIter i=_items.begin();i!=_items.end();i++)\n")
		fh.write("\t{\n")
		fh.write("\t\tpList.push_back(i->getProperties());\n")
		fh.write("\t}\n")

		fh.write("\treturn pList;\n");
		fh.write("}\n\n")


		fh.write("%s::~%s()\n{\n"%(self.className,self.className))
		fh.write("\n\tLOG(\"DELETING %s\")\n"%self.className);
		fh.write("\t_items.clear();\n")
		fh.write("}\n\n")

#	def _dumpPython(self,fh):
#
#		if(self.baseClassFlag):
#			pass
#
#		return [self.className]
