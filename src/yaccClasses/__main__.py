
import sys
from YaccFile import YaccFile


import argparse
parser=argparse.ArgumentParser()


parser.add_argument("-i",'--input',dest="inp",type=str,help="Input Yacc file",required=True)
parser.add_argument("-o",'--output',dest="out",type=str,help="Output Yacc file",required=True)
parser.add_argument("-c",'--cppFile',dest="cFile",type=str,help="CPP file name Without extension, .h and .cpp will be generated",required=True)
parser.add_argument("-py",'--python',dest="pyFile",type=str,help="Python file name Without extension, .py will be added",required=True)

args=parser.parse_args()
y=YaccFile(args.inp)

with open(args.out,"w") as fhy:
	with open(args.cFile+".h","w")as fhh:
		with open(args.cFile+".cpp","w") as fhc:
			with open(args.pyFile+".py.cpp","w") as phc:
				y.dump(yaccFileHandle=fhy,cHeaderFileHandle=fhh,cSourceFileHandle=fhc,pythonFileHandle=phc)
#y.dumpClasses(sys.argv[3])
#with open(sys.argv[2],"w") as fh:
#	y.dumpFile(fh)
#
