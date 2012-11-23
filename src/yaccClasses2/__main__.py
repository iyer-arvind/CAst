import Arguments
import Token
import Rule


ruleBook=Rule.RuleBook(Arguments.yaccFile)

#ruleBook.graph("test.png")
import Resolve
for r in ruleBook:
	rule=ruleBook[r]
	Resolve.resolve(rule)

for r in ruleBook:
	for p in ruleBook[r].patterns:
		p.handler.getParameterMap(p)

	
#print ruleBook
if(Arguments.cFile is not None):
	with open(Arguments.cFile+".h","w") as chFile:
		chFile.write(ruleBook.dump("cHeader"))
	
	with open(Arguments.cFile+".cpp","w") as chFile:
		chFile.write(ruleBook.dump("cSource"))

if(Arguments.out is not None):
	with open(Arguments.out+".y","w") as chFile:
		chFile.write(ruleBook.dump("yacc"))

if(Arguments.pyFile is not None):
	with open(Arguments.pyFile+".py.h","w") as chFile:
		chFile.write(ruleBook.dump("pyHeader"))
	
	with open(Arguments.pyFile+".py.cpp","w") as chFile:
		chFile.write(ruleBook.dump("pySource"))
