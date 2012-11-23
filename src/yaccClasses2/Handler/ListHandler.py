from .. import Token
from .. import Rule
import difflib
from Parameter import Parameter,ParameterList
from ..Pattern import _Pattern
from ..Template import TemplateFill

import copy

from ..Arguments import yaccFile

class ListHandlerGroup(object):
	def __init__(self,handlers,rule):
		self.rule=rule
		self.handlers=handlers
		self.ruleName=self.rule.ruleName
		if len(self.handlers)>1 :
			for i,h in enumerate(self.handlers):
				if tuple(h.masterPattern) in self.rule.ruleBook.aliases:
					h.className=self.rule.ruleBook.aliases[tuple(h.masterPattern)]+"_item"
				else:	
					h.className=self.ruleName+"_item"+str(i+1)
				h.parameters.finalize()
				h.parentClassName=self.ruleName
		else:
			for i,h in enumerate(self.handlers):
				if tuple(h.masterPattern) in self.rule.ruleBook.aliases:
					h.className=self.rule.ruleBook.aliases[tuple(h.masterPattern)]+"_item"
				else:	
					h.className=self.ruleName+"_item"
				h.parameters.finalize()
				h.parentClassName=self.ruleName


	def dump(self,s):
		if(len(self.handlers)==1):
			return TemplateFill(self,"RuleBook","Rule","Handler","ListHandlerGroup","Single",s)
		else:
			return TemplateFill(self,"RuleBook","Rule","Handler","ListHandlerGroup","Multiple",s)


class ListHandler(object):
	def __init__(self,rule,pattern):
		#a=list(pattern)
		#a.pop(a.index(rule))
		self.masterPattern=copy.copy(pattern)#_Pattern(a)
		self.selfRule=rule
		self.parameters=ParameterList([Parameter(i,p,pattern) for i,p in enumerate(self.masterPattern)])
		self.initializer=None
		self.selfIndex=pattern.index(rule)
		self.parameters[self.selfIndex].isIncluded=False
		self.className="<noname>"


	def strOut(self,pattern):
		if self.selfRule not in pattern:
			#initializer
			params,si=self.getParameterMap(pattern)
			st="\033[35m"+self.className+"\033[0m("
			#st=st+", ".join([ str(p)+( "=\033[1;38;5;240mNull\033[0m" if j is None else "=$"+str(j) ) for i,j,p in params if i!=self.selfIndex])
			st=st+", ".join([ str(p)+( "=\033[1;38;5;240mNull\033[0m" if j is None else "=$"+str(j) ) for i,j,p in params if i!=self.selfIndex])
			st=st+")"
		else:
			params,si=self.getParameterMap(pattern)
			st="\033[35m$"+str(si)+"->append\033[0m("
			st=st+", ".join([ str(p)+( "=\033[1;38;5;240mNull\033[0m" if j is None else "=$"+str(j) ) for i,j,p in params if i!=self.selfIndex])
			st=st+")"
			
		return st

	def includeParameter(self,i):
		self.parameters[i].isIncluded=True

	def addInitializer(self,init):
		if(self.initializer is not None):
			iss,ab=init.isSubset(self.initializer)
			if(iss):
				pass
			else:
				raise ValueError
		
		self.initializer=init#[Parameter(i,p,init) for i,p in enumerate(init)]

	def getParameterMap(self,pattern):
		mp=pattern
		ops=[o for o in difflib.SequenceMatcher(None,self.masterPattern,mp).get_opcodes()]
		#print id(self),repr(self.masterPattern),repr(pattern),ops
		paramMap=[]
		for o,i1,i2,j1,j2 in ops:
			if o=='equal':
				for i,j in zip(range(i1,i2),range(j1,j2)):
					arg=self.parameters[i]
					if(arg.isIncluded):
						paramMap.append((i,j,arg))
					arg.possibleValues.add(mp[j])
			elif o=='delete':
				for i in range(i1,i2):
					arg=self.parameters[i]
					if(arg.isIncluded):
						arg.nullable=True
						paramMap.append((i,None,arg))
					arg.possibleValues.add(None)
			elif o=="replace":
				for i,j in zip(range(i1,i2),range(j1,j2)):
					arg=self.parameters[i]
					assert(arg.isIncluded)
					assert(isinstance(mp[j],Token.Token))
					paramMap.append((i,j,arg))
					arg.possibleValues.add(mp[j])
			else:
				raise ValueError,"Not a valid pattern:",ops
		return paramMap,pattern.index(self.selfRule) if self.selfRule in pattern else None
	
		

def Check(rule):
	#print "\n\n\n",repr(rule)
	patterns=sorted(rule.patterns,key=lambda x:-len(x))
	flag=True
	accumulators=[]
	for p in patterns:
		if rule in p:
			for pp in accumulators:
				itr,indices=p.isTokenReplaced(pp)
				if itr:
					#print "A token replaced:",indices
					for i in indices:
						pp.handler.includeParameter(i)
					p.handler=pp.handler
					break
			else:
				accumulators.append(p)
			
				p.handler=ListHandler(rule,p)
		else:
			for pp in accumulators:
				iss,absent=p.isSubset(pp)
				if iss:
					#print "A subset"
					p.handler=pp.handler
					for i in absent:
						if pp[i]!=rule:
							pp.handler.includeParameter(i)
					pp.handler.addInitializer(p)
					break	
			else:
				flag=False
				break




	if(flag):
		#print "\033[41;37;mListHandler Suitable for "+repr(rule)+"\033[0m"
		return ListHandlerGroup(set([p.handler for p in patterns]),rule)
	else:
		for p in patterns:
			p.handler=None
		return None
		
