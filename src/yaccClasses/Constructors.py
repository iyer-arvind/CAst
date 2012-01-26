import copy
from ClassCode import *

class _Constructor_(object):
	NAME="Constructor"
	def __init__(self,pattern):
		from Rule import Rule
		from Token import Token
		self.pattern=pattern
		self.includedParameterIndices=set([ i for i,r in enumerate(self.pattern) if isinstance(r,Rule) or (isinstance(r,Token) and r.tokName=="IDENTIFIER")])
		#this differs amongs objects of same pattern
		self.nullParameterIndices=set([])
		self.copies=[]
		self.parent=None
	
	def copy(self):
		#make a copy of everything
		cpy=copy.copy(self)

		#separate nullParameterIndices
		cpy.nullParameterIndices=copy.copy(self.nullParameterIndices)


		self.copies.append(cpy)
		cpy.parent=self
		return cpy

	def setName(self,name,index):
		self._name=name
		self._index=index

	def __getClassName(self):
		if(self.parent is not None):
			return self.parent.className
		else:
			#print self.__dict__
			if hasattr(self,"_name"):
				return self._name+("%d"%self._index if self._index else "")
			else:
				return "<noname>"

	def __getBaseClassName(self):
		if(self.parent is not None):
			return self.parent.baseClassName
		else:
			if hasattr(self,"_name"):
				return self._name
			else:
				return "<noname>"



	className = property(__getClassName,None,None,"")
	baseClassName = property(__getBaseClassName,None,None,"")

	def __repr__(self):
		if(not hasattr(self,"parameters")):self._setParameters()
		from Rule import Rule
		st=self.className
		st+="\033[0m("
		st+=", ".join([ "\033[1m%s\033[0m"%(v if v!='NULL' else "\033[38;5;236m"+v+"\033[0m") for t,n,p,v,i,v1 in self.parameters])
		st+=")"
		return st

	def __str__(self):
		return "\033[31m"+self.NAME+"\033[0m:  "+repr(self)

	
	def _dumpPython(self,fh):
		if(not hasattr(self,"classCoder")):self._setClassCoder()
		if(not hasattr(self,"parameters")):self._setParameters()
		self.classCoder._dumpPython(fh)
	
	def _dumpCHeader(self,fh):
		if(not hasattr(self,"classCoder")):self._setClassCoder()
		if(not hasattr(self,"parameters")):self._setParameters()
		self.classCoder._dumpCHeader(fh)

	def _dumpCSource(self,fh):
		if(not hasattr(self,"classCoder")):self._setClassCoder()
		if(not hasattr(self,"parameters")):self._setParameters()
		self.classCoder._dumpCSource(fh)

	def _dumpYacc(self,fh,isStart):
		if(not hasattr(self,"parameters")):self._setParameters()
		fh.write("{")
		fh.write("RULE_MARKER(%30s);"%("\""+self.className+"\""))
		fh.write("$<_t_%s>$=new CAst::%s"%(self.baseClassName,self.className)+"(\"%s\","%repr(self.originalPattern))
		fh.write(", ".join([ "%s"%(v if v!="NULL" else "NULL") for t,n,p,v,i,v1 in self.parameters]))
		fh.write(");")
		if(isStart):fh.write("root=$<_t_%s>$;"%self.className)
		#fh.write(";".join([ "delete %s;%s=0;"%(v1,v1) for t,n,p,v,i,v1 in self.parameters if t =='Token' and p.typeName=='tok' and v!='NULL']))
		fh.write("}")

		
	def _setClassCoder(self):
		self.classCoder=ConstructorClassCoder(self)

	def _setParameters(self):
		from Rule import Rule
		from Token import Token
		self.parameters=[]
		counts={}
		n=1
		for i,p in enumerate(self.pattern):
			if(i in self.includedParameterIndices):
				t=Token if isinstance(p,Token) else p
				if(t in counts):	counts[t]+=1
				else:			counts[t]=0
				if(isinstance(p,Rule)):
					typName=repr(p)
					varName="_p_"+repr(p)+("%d"%counts[t] if counts[t] else "" )
				else:
					typName="Token"
					varName="_p_token%d"%(counts[t]+1)

				if(i in self.nullParameterIndices):
					val="NULL"
					val1="NULL"
				else:
					val="CAst::GetToken(%s,$<_t_str>%d)"%((p.tokName if p.typeName=='tok' else "\'%s\'"%p.tokName),n) if typName=="Token" else "$<_t_%s>%d"%(typName,n) 
					val1="$<_t_str>%d"%n
					n+=1
				self.parameters.append((typName,varName,p,val,i,val1))
			else:
				if(i not in self.nullParameterIndices):
					n+=1




def Simple(rule,patterns):
	for p in patterns:
		if(p.constructor is None):
			p.setConstructor(_Constructor_(p))
			p.constructor.originalPattern=p
	
		



import itertools
import difflib

	
def Subset(rule,patterns):
	for p1,p2 in itertools.combinations(patterns,2):#sees if p2 is an ordered subset of p1
		if(p2.constructor is None):
			ops=[o for o in difflib.SequenceMatcher(None,p1,p2).get_opcodes() if o[0]!='equal']
			f,ab=p1.isSubset(p2)
			if(f):
				if(not p1.constructor):
					p1.setConstructor(_Constructor_(p1))
					p1.constructor.originalPattern=p1
				c=p1.constructor.copy()
				for i in ab:
					c.nullParameterIndices.add(i)
					c.includedParameterIndices.add(i)
				p2.setConstructor(c)
				c.originalPattern=p2



def DifferingTokens(rule,patterns):
	from Token import Token
	for p1,p2 in itertools.combinations(patterns,2):#sees if p2 is an ordered subset of p1
		if(p2.constructor is None and ((p1.constructor is None) or (p1.constructor.parent is None))):
			f,repList=p1.isTokenReplaced(p2)
			if(f):
				if(not p1.constructor):
					p1.setConstructor(_Constructor_(p1))
					p1.constructor.originalPattern=p1
				c=p1.constructor.copy()
				for r in repList:
					c.includedParameterIndices.add(r)
				p2.setConstructor(c)
				c.originalPattern=p2
						
			
class __ListAccumulateConstructor(_Constructor_):
	NAME="ListAccumulator"
	def __init__(self,pattern,selfIndex):
		_Constructor_.__init__(self,pattern)
		self.selfIndex=selfIndex
		self.includedParameterIndices.remove(selfIndex)
		self.initializers=[]

	def __repr__(self):
		from Rule import Rule
		from Token import Token
		for i,p in enumerate(self.pattern):
			if(i==self.selfIndex):
				st="("+self.className+"*)($%d)->append"%(i+1)
				break
		st+="\033[0m("
		tokN=1
		n=1
		for i,p in enumerate(self.pattern):
			if(i==self.selfIndex):
				n+=1
				continue
			if i in self.includedParameterIndices:
				if isinstance(p,Rule):
					r=str(p.ruleName)
				else:
					r="token%d"%(tokN)
					tokN+=1

				if(i in self.nullParameterIndices):
					st+="\033[38;5;235m"+r+"=NULL\033[0m "
				else:
					st+="\033[38;5;250m"+r+"=$%d  \033[0m "%n
					n+=1
			else:
				if(i not in self.nullParameterIndices):
					n+=1
		st+=")"
		return st

	def _dumpYacc(self,fh,isStart):
		if(not hasattr(self,"parameters")):self._setParameters()
		fh.write("{")
		fh.write("RULE_MARKER(%30s);"%("\""+self.className+"\""))
		fh.write("CAST_PTR(%s,$<_t_%s>%d)->append(\"%s\", "%(self.className,self.baseClassName,self.selfIndex+1,repr(self.originalPattern)))
		print self.className,self.parameters
		fh.write(", ".join([ "%s"%(v if v!="NULL" else "NULL") for t,n,p,v,i,v1 in self.parameters]))
		fh.write(");$<_t_%s>$=$<_t_%s>%d;"%(self.baseClassName,self.baseClassName,self.selfIndex+1))
		fh.write("}")

		
	def _setClassCoder(self):
		self.classCoder=ListAccumulatorClassCoder(self)

	def _setParameters(self):
		_Constructor_._setParameters(self)
		self.init_includedParameterIndices=set()
		for i in self.initializers:
			self.init_includedParameterIndices=i.includedParameterIndices.union(self.init_includedParameterIndices)


class __ListInitializeConstructor(_Constructor_):
	NAME="ListInitializer"
	def __init__(self,pattern,listConstructor):
		_Constructor_.__init__(self,listConstructor.pattern)
		self.listConstructor=listConstructor
		self.parent=listConstructor
		listConstructor.initializers.append(self)

	def _setParameters(self):
		if(not hasattr(self.parent,"parameters")):self.parent._setParameters()
		
		from Rule import Rule
		from Token import Token
		self.parameters=[]
		counts={}
		n=1
		for i,p in enumerate(self.pattern):
			if(i in self.parent.init_includedParameterIndices):
				t=Token if isinstance(p,Token) else p
				if(t in counts):	counts[t]+=1
				else:			counts[t]=0
				if(isinstance(p,Rule)):
					typName=repr(p)
					varName="_p_"+repr(p)+("%d"%counts[t] if counts[t] else "" )
				else:
					typName="Token"
					varName="_p_token%d"%(counts[t]+1)
				if(p in self.originalPattern):
					val="CAst::GetToken(%s,$<_t_str>%d)"%((p.tokName if p.typeName=='tok' else "\'%s\'"%p.tokName),self.originalPattern.index(p)+1) if typName=="Token" else "$<_t_%s>%d"%(typName,self.originalPattern.index(p)+1) 
					val1="$<_t_%s>%d"%(typName,self.originalPattern.index(p)+1)
				else:
					val="NULL"
					val1="NULL"
					n+=1
				self.parameters.append((typName,varName,p,val,i,val1))
			else:
				if(i not in self.nullParameterIndices):
					n+=1
		


def List(rule,patterns):
	from Token import Token
	from Rule  import Rule
	for p1 in patterns:
		if(rule in p1):
			if(p1.constructor is None):
				p1.setConstructor(__ListAccumulateConstructor(p1,p1.index(rule)))
				p1.constructor.originalPattern=p1
				for p2 in patterns:
					if (p1!=p2):
						f,ab=p1.isSubset(p2)
						if(f):
							if rule in p2:
								c=p1.constructor.copy()
								c.selfIndex=p2.index(rule)
								for i in ab:
									c.nullParameterIndices.add(i)
									c.includedParameterIndices.add(i)
								p2.setConstructor(c)
								c.originalPattern=p2
								continue
							else:
								c=__ListInitializeConstructor(p2,p1.constructor)
								c.includedParameterIndices=set([])
								for i,p in enumerate(p1):
									if i in p1.constructor.includedParameterIndices:
										if p in p2:
											c.includedParameterIndices.add(p1.index(p))	
								print c.includedParameterIndices
								#for i in ab:
								#	c.nullParameterIndices.add(i)
								#	if(isinstance(p1[i],Rule)):
								#		c.includedParameterIndices.add(i)
								#c.includedParameterIndices.remove(p1.constructor.selfIndex)
								p2.setConstructor(c)
								c.originalPattern=p2
						f,ab=p1.isTokenReplaced(p2)
						if(f):
							if(rule in p2):
								c=p1.constructor.copy()
								for i in ab:
									c.includedParameterIndices.add(i)
								p2.setConstructor(c)
								c.originalPattern=p2
								
	#if any parameter is not set, then complete revert to None Parameters
	for p in patterns:
		if(p.constructor is None):
			for p1 in patterns:
				p1.constructor=None
			break
