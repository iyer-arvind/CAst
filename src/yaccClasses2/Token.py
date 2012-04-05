


class Token(object):
	name="token"
	def code(self):
		return self.code
	def __str__(self):
		return '\033[31m'+str(self.__class__.__name__)+"\033[0m"

	def __repr__(self):
		return self.code

class TextToken(Token):
	def __init__(self,name,text):
		self.tokenName=name
		self.code=text
		
	def __repr__(self):
		return self.tokenName
	
class ValuedToken(Token):
	def __init__(self,name):
		self.tokenName=name
		self.code=self.tokenName

class TokenFactory(object):
	__tokCache__=dict()
	__tokens__=set()
	@classmethod
	def setTokenList(cls,tokList):
		for t in tokList:
			cls.__tokens__.add(t)
	
	def __getitem__(self,name):
		if name not in self.__tokCache__ :
			self.__tokCache__[name]=self.__getToken(name)
		return self.__tokCache__[name]

	def __getToken(self,name):
		from Arguments import tokMap
		if name in tokMap:

			if(type(tokMap[name]) is tuple):
				typ,code=tokMap[name]
				if(typ=='txt'):
					if(name in self.__tokens__):
						typ,code=tokMap[name]
						return TextToken(name,code)
					else:
						return TextToken(name,name[1:-1])
				else:
					if(name in self.__tokens__):
						return ValuedToken(name)
					else:
						return TextToken(name,name[1:-1])
			else:
				return ValuedToken(name)
		else:
			return TextToken(name,name[1:-1])


tokenFactory=TokenFactory()
