
import Token
import Rule


def Pattern(pat,ruleBook):
	def getPatternElement(el):
		if(el in ruleBook):
			return ruleBook[el]
		else:
			tok=Token.tokenFactory[el]
			return tok
	
	return _Pattern([getPatternElement(p) for p in pat])



import difflib

class _Pattern(tuple):
	def __init__(self,itr):
		tuple.__init__(self,itr)
		self.handler=None

	def __str__(self):
		_st=",".join([repr(i) for i in self])
		_st=_st+(" "*(80-len(_st)))+self.handler.strOut(self)
		return _st

	def isSubset(self,other):
		ops=[o for o in difflib.SequenceMatcher(None,other,self).get_opcodes() if o[0]!='equal']
		if set([ o[0] for o in ops]) == set(['delete']):
			absentees=set()
			for o,i1,i2,j1,j2 in ops:
				for i in range(i1,i2):
					absentees.add(i)
			return True,absentees
		else:
			return False,None

		
	def isTokenReplaced(self,other):
		ops=[o for o in difflib.SequenceMatcher(None,other,self).get_opcodes() if o[0]!='equal']
		if set([ o[0] for o in ops]) == set(['replace']):
			repList=[]
			for o,i1,i2,j1,j2 in ops:
				if(i2-i1 != j2-j1):
					return False,None
				for i,j in zip(range(i1,i2),range(j1,j2)):
					if (not isinstance(self[i],Token.Token)) or (not isinstance(other[j],Token.Token)):
						return False,None
					assert i==j
					repList.append(i)
			return True,repList
		return False,None
	






