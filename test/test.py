import PyCAst
a=PyCAst.token("20")
try:
	PyCAst.jump_statement_1()
except Exception as e:
	print str(e)

try:
	PyCAst.jump_statement_1(None)
except Exception as e:
	print str(e)

b=PyCAst.jump_statement_1(a)
print a.code
print b.code
print a.refCount
print b.refCount
del b
print a.refCount
del a
