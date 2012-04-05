

import Arguments
import Token

		

class YaccFile(object):
	def __init__(self,fileName):
		self.fileName=fileName
		self.__parse()
	

	def __parse(self):
		mode=0
		tokens=[]
		codeLines=[]
		rules={}
		with open(self.fileName) as fh:
			for l in fh:
				l=l.strip('\n')
				if(len(l)==0):
					continue
				if(l.strip()=='%%'):
					mode+=1
					continue
				if(mode==0):
					lspl=l.split()
					if(lspl[0]=="%token"):
						tokens.extend(lspl[1:])
					elif(lspl[0]=="%start"):
						start=lspl[1]
				if(mode==1):
					Token.tokenFactory.setTokenList(tokens)
					tf=Token.tokenFactory
					tokens=dict([(i,tf[i]) for i in tokens])
					if(l[0] not in [' ','\t']):
						l=l.strip()
						rules[l]=[]
						currentRule=l
					else:
						l=l.strip()
						if(l==';'):
							continue
						
						rules[currentRule].append(tuple(l.split()[1:]))
				if(mode>1):
					codeLines.append(l)

				
		
		self.rules=rules
		self.tokens=tokens
		self.codeLines=codeLines
		self.start=start
		#ruleMap=dict([(i,Rule(i)) for i in rules.keys()])
		#
		#for r in rules:
		#	rr=ruleMap[r]
		#	for rTokens in rules[r]:
		#		ruleMap[r].append([])
		#		for ra in rTokens:
		#			if(ra in ruleMap):
		#				ruleMap[r][-1].append(ruleMap[ra])
		#			elif(ra in tokens):
		#				ruleMap[r][-1].append(tokens[ra])
		#			else:
		#				tokens[ra]=Token(ra,chrType=True)
		#				ruleMap[r][-1].append(tokens[ra])
		#self.tokens=tokens
		#self.codeLines=codeLines
		#self.ruleMap=ruleMap
		#self.start=start
		#self.ruleMap[self.start].isStart=True
		

