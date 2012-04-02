import argparse
import sys


import argparse
parser=argparse.ArgumentParser()


parser.add_argument("-i",'--input',dest="inp",type=str,help="Input Yacc file",required=True)
parser.add_argument("-t",'--tokMap',dest="tokMap",type=str,help="Token Map",required=True)
parser.add_argument("-o",'--output',dest="out",type=str,help="Output Yacc file",required=True)
parser.add_argument("-c",'--cppFile',dest="cFile",type=str,help="CPP file name Without extension, .h and .cpp will be generated",required=True)
parser.add_argument("-py",'--python',dest="pyFile",type=str,help="Python file name Without extension, .py will be added",required=False)


args=parser.parse_args()
inputYaccFile=args.inp

with open(args.tokMap) as fh:
	tokMap=eval(fh.read())

import YaccFile
yaccFile=YaccFile.YaccFile(args.inp)
cFile=args.cFile
