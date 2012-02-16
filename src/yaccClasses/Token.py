


#elements of pattern
class Token(object):
	def __init__(self,tokName,chrType=False):
		if(chrType):
			self.tokName=tokName[1]
			self.typeName="chr"
			self.code=tokName
		else:
			self.tokName=tokName
			self.typeName="tok"
		self.isValued=False

	def __str__(self):
		return "\033[33m"+self.tokName+"\033[0m"

	def __repr__(self):
		return self.tokName if self.typeName=="tok" else "'"+self.tokName+"'"
	
