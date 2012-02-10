

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
	
	def dump(self,yaccFileHandle,cHeaderFileHandle,cSourceFileHandle):
		self._dumpYacc(yaccFileHandle)
		self._dumpCHeader(cHeaderFileHandle)
		self._dumpCSource(cSourceFileHandle)


	def _dumpPython(self,fh):
		self.writeTemplate("pySource",fh)
		return

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

	def writeTemplate(self,template,fh):
		d={}
		d.update(self.__dict__)
		d["fileNameBase"]=os.path.splitext(os.path.basename(fh.name))[0]
		tmpl=CheetahTemplate(file=cheetahTemplatesDir+"/"+template+".tmpl",searchList=d)
		fh.write(str(tmpl))
		
	def _dumpCHeader(self,fh):
		self.writeTemplate("cHeader",fh)
	
	def _dumpCSource(self,fh):
		self.writeTemplate("cSource",fh)
		return
		for rn in self.ruleMap:
			rule=self.ruleMap[rn]
			rule._dumpCSource(fh)
		fh.write("}//namespace CAst\n")
