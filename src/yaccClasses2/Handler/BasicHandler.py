from .. import Token
from .. import Rule
import difflib
from Parameter import Parameter

class BasicHandlerGroup(object):
	def __init__(self,handlers,ruleName):
		self.handlers=handlers
		self.ruleName=ruleName
		if len(self.handlers)>1 :
			for i,h in enumerate(self.handlers):
				h.className=self.ruleName+"_"+str(i)
		else:
			for i,h in enumerate(self.handlers):
				h.className=self.ruleName

		
		
	
class BasicHandler(object):
	def __init__(self,pattern):
		self.masterPattern=pattern
		self.parameters=[Parameter(i,p,pattern) for i,p in enumerate(pattern)]
		self.className="<noname>"

	def strOut(self,pattern):
		st="\033[36m"+self.className+"\033[0m("
		params=self.getParameterMap(pattern)
		st=st+", ".join([ str(p)+( "=\033[1;38;5;240mNull\033[0m" if j is None else "=$"+str(j) ) for i,j,p in params])
		st=st+")"
		return st
		
	def includeParameter(self,i):
		self.parameters[i].isIncluded=True

	
	def getParameterMap(self,pattern):
		ops=[o for o in difflib.SequenceMatcher(None,self.masterPattern,pattern).get_opcodes()]
		paramMap=[]
		for o,i1,i2,j1,j2 in ops:
			if o=='equal':
				for i,j in zip(range(i1,i2),range(j1,j2)):
					arg=self.parameters[i]
					if(arg.isIncluded):
						paramMap.append((i,j,arg))
					arg.possibleValues.add(pattern[j])
			if o=='delete':
				for i in range(i1,i2):
					arg=self.parameters[i]
					if(arg.isIncluded):
						arg.nullable=True
						paramMap.append((i,None,arg))
					arg.possibleValues.add(None)
			if o=="replace":
				for i,j in zip(range(i1,i2),range(j1,j2)):
					arg=self.parameters[i]
					assert(arg.isIncluded)
					assert(isinstance(pattern[j],Token.Token))
					paramMap.append((i,j,arg))
					arg.possibleValues.add(pattern[j])
		
		return paramMap


def Check(rule):
	patterns=sorted(rule.patterns,key=lambda x:-len(x))
	for i1,p1 in enumerate(patterns):
		for p2 in patterns[i1+1:]:
			if p2.handler is not None:
				continue
			if p1.handler is None: p1.handler=BasicHandler(p1)
			iss,absent=p2.isSubset(p1)
			if iss:
				p2.handler=p1.handler
				for a in absent:
					p1.handler.includeParameter(a)
			itr,indices=p2.isTokenReplaced(p1)
			if itr:
				for i in indices:
					p1.handler.includeParameter(i)
				p2.handler=p1.handler

	for p in patterns:
		if p.handler is None:
			p.handler=BasicHandler(p)

	return BasicHandlerGroup(set([p.handler for p in patterns]),rule.ruleName)
