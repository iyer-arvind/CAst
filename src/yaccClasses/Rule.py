

import itertools

from Pattern import Pattern

from ClassCode import *
from Constructors import *
#this is a yacc rule having a set of patterns
class Rule(object):

	constructors=[List,Subset,DifferingTokens,Simple]

	def __init__(self,ruleName):
		self.ruleName=ruleName
		self.patterns=[]

	def append(self,pattern):
		val=Pattern(pattern)
		self.patterns.append(val)

	def __getitem__(self,index):
		return self.patterns[index]

	def __getslice__(self,slc):
		return self.patterns[slc]

	def __setitem__(self,index,value):
		self.patterns[index]=Pattern(value)

	def __str__(self):
		return "\033[32m"+self.ruleName+"\033[0m"

	def resolve(self):
		print "="*200
		print "\n\033[48;5;240m\033[1;37m"+self.ruleName+"\033[0m"
		self.patterns.sort(key=lambda i:-len(i))
		for constructorClasses in self.constructors:
			constructorClasses(self,self.patterns)

		constructors=[ p.constructor for p in self.patterns if p.constructor.parent is None ]
		if(len(constructors)>1):
			for i,c in enumerate(constructors):
				c.setName(self.ruleName,i+1)
		else:
			c=constructors[0]
			c.setName(self.ruleName,0)
			
		print "-"*150
		for p in self.patterns:
			print p
		print "="*200

	def __repr__(self):
		return self.ruleName

	def _dumpYacc(self,fh):
		#fh.write("/*test comment*/\n")
		fh.write(self.ruleName+"\n")
		for i,p in enumerate(self.patterns):
			rule="\t"+("|" if i else ":")+", ".join([ repr(t) for t in p ])
			fh.write(rule+" "*(85-len(rule)))
			p.constructor._setParameters()
			p.constructor._dumpYacc(fh)
			fh.write("\n")
		fh.write("\t;\n\n\n")

	def _dumpCHeader(self,fh):
		fh.write("/*"+"-"*100+"*\\\n")
		fh.write(" "*20+self.ruleName+"\n")
		fh.write("\*"+"-"*100+"*/\n")
		
		constructors=[ p.constructor for p in self.patterns if p.constructor.parent is None ]

		for c in constructors:
			c._dumpCHeader(fh)
			
		
		fh.write("\n"*4)

	def _dumpCSource(self,fh):
		fh.write("/*"+"-"*100+"*\\\n")
		fh.write(" "*20+self.ruleName+"\n")
		fh.write("\*"+"-"*100+"*/\n")
		
		constructors=[ p.constructor for p in self.patterns if p.constructor.parent is None ]

		for c in constructors:
			c._dumpCSource(fh)
			
		
		fh.write("\n"*4)

	def _setBaseConstructorCoder(self):
		self.baseConstructorCoder=ConstructorClassCoder(self.ruleName,["CAst"])

