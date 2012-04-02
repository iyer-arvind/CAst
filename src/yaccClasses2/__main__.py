import Arguments
import Token
import Rule


ruleBook=Rule.RuleBook(Arguments.yaccFile)
#ruleBook.graph("test.png")

import Resolve
for r in ruleBook:
	rule=ruleBook[r]
	Resolve.resolve(rule)
print ruleBook
with open(Arguments.cFile+".h","w") as chFile:
	chFile.write(ruleBook.dump("cHeader"))

with open(Arguments.cFile+".cpp","w") as chFile:
	chFile.write(ruleBook.dump("cSource"))
