
import sys
from YaccFile import YaccFile


import argparse
parser=argparse.ArgumentParser()


parser.add_argument("-i",'--input',dest="inp",type=str,help="Input Yacc file",required=True)
parser.add_argument("-t",'--tokMap',dest="tokMap",type=str,help="Token Map",required=True)
parser.add_argument("-o",'--output',dest="out",type=str,help="Output Yacc file",required=True)
parser.add_argument("-c",'--cppFile',dest="cFile",type=str,help="CPP file name Without extension, .h and .cpp will be generated",required=True)
parser.add_argument("-py",'--python',dest="pyFile",type=str,help="Python file name Without extension, .py will be added",required=False)

args=parser.parse_args()
with open(args.tokMap,"r") as fh:
	tokMap=eval(fh.read())

y=YaccFile(args.inp,tokMap)


with open(args.out,"w") as fhy:
	with open(args.cFile+".h","w")as fhh:
		with open(args.cFile+".cpp","w") as fhc:
			y.dump(yaccFileHandle=fhy,cHeaderFileHandle=fhh,cSourceFileHandle=fhc)

if(args.pyFile):
	with open(args.pyFile+".py.h","w") as phc:
		y.writeTemplate("pyHeader",phc)
	
	with open(args.pyFile+".py.cpp","w") as psc:
		y.writeTemplate("pySource",psc)
			
#y.dumpClasses(sys.argv[3])
#with open(sys.argv[2],"w") as fh:
#	y.dumpFile(fh)
#
