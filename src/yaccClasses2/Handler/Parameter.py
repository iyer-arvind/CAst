
from .. import Token
from .. import Rule

class Parameter(object):
	def __init__(self,index,parameter,pattern):
		self.parameter=parameter
		self.index=index
		if(pattern.count(parameter)==1):
			suffix=""
		else:
			s=1
			for i in range(0,index):
				if pattern[i]==parameter:
					s+=1
			suffix="_"+str(s)
		self.argName="_arg_"+parameter.name+suffix
		self.memName="_p_"+parameter.name+suffix
		if(type(parameter) is Token.ValuedToken):
			self.isIncluded=True
		elif(type(parameter) is Rule.Rule):
			self.isIncluded=True
		else:
			self.isIncluded=False
		self.possibleValues=set()

	def __str__(self):
		return self.argName
