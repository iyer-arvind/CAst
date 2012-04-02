
from .. import Token
from .. import Rule

class Parameter(object):
	def __init__(self,index,parameterType,pattern):
		self.parameterType=parameterType
		self.index=index

		if(type(parameterType) is Token.ValuedToken):
			self.isIncluded=True
		elif(type(parameterType) is Rule.Rule):
			self.isIncluded=True
		else:
			self.isIncluded=False
		self.possibleValues=set()
		self.index=0
		self.argName="_arg_"+parameterType.name
		self.memName="_p_"+parameterType.name

	def setIndex(self,suffix):
		self.argName=self.argName+str(suffix)
		self.memName=self.memName+str(suffix)
		self.index=suffix
	def __str__(self):
		return self.argName

class ParameterList(list):
	def finalize(self):
		included=[p for p in self if p.isIncluded]
		types=[p.parameterType.name for p in included]
		print types
		for i in included:
			if(i.index>0):continue
			if types.count(i.parameterType.name)>1:
				n=1
				for j in included:
					if (j.parameterType.name==i.parameterType.name):
						j.setIndex(n)
						n=n+1
