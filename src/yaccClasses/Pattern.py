
import difflib



#from Constructor import Constructor
from Token import Token
import difflib
#a sequence of tokens or other Patterns
class Pattern(list):
	def __init__(self,*args,**kwargs):
		list.__init__(*args,**kwargs)
		self.constructor=None

	def setConstructor(self,constructor):
		self.constructor=constructor
	
	def isSubset(self,other):
		ops=[o for o in difflib.SequenceMatcher(None,self,other).get_opcodes() if o[0]!='equal']
		if set([ o[0] for o in ops]) == set(['delete']):
			absentees=set()
			for o,i1,i2,j1,j2 in ops:
				for i in range(i1,i2):
					absentees.add(i)
			return True,absentees
		else:
			return False,None

	def isTokenReplaced(self,other):
		ops=[o for o in difflib.SequenceMatcher(None,self,other).get_opcodes() if o[0]!='equal']
		if set([ o[0] for o in ops]) == set(['replace']):
			repList=[]
			for o,i1,i2,j1,j2 in ops:
				if(i2-i1 != j2-j1):
					return False,None
				for i,j in zip(range(i1,i2),range(j1,j2)):
					if (not isinstance(self[i],Token)) or (not isinstance(other[j],Token)):
						return False,None
					assert i==j
					repList.append(i)
			return True,repList
		return False,None
				
		
	def __repr__(self):
		return "["+",".join([repr(i) for i in self])+"]"

	def __str__(self):
		return "["+",".join([str(i) for i in self])+"]\033[80G: "+str(self.constructor)
	
