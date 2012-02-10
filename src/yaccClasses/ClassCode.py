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

class ListAccumulatorClassCoder(ConstructorClassCoder):
	pass
