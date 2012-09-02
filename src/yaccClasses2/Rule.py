
from Pattern import Pattern
from Template import TemplateFill
import Token
import pydot


class Rule(object):
	def __init__(self,ruleName):
		self.ruleName=ruleName
		self.name=ruleName
		self.patterns=[]
	def __str__(self):
		_st="\033[32m"+self.ruleName+" "*(80-len(self.ruleName))+"\033[0m\033[48;5;215;30;2m"+self.handler.__class__.__name__+"\033[0m\n     "+"\n     ".join([str(p) for p in self.patterns])
		return _st

	def dump(self,s):
		return TemplateFill(self,"RuleBook","Rule",s)

	def __repr__(self):
		return self.ruleName

class RuleBook(dict):
	def __init__(self,yaccFile):
		self.yaccFile=yaccFile
		self.__createRules()

	def __createRules(self):
		for i,r in enumerate(self.yaccFile.rules):
			self[r]=Rule(r)
			self[r].classId=(i<<4)+16
		for r in self.yaccFile.rules:
			patterns=[Pattern(p,self) for p in self.yaccFile.rules[r]]
			self[r].patterns=patterns
			self[r].isStart=False
		self[self.yaccFile.start].isStart=True
			

	def graph(self,fn):
		graph = pydot.Dot(graph_type='digraph')
		ruleTokenNodes={}
		for r in self:
			ruleTokenNodes["rule:"+r] = pydot.Node(self[r].ruleName, style="filled", fillcolor="red")
			graph.add_node(ruleTokenNodes["rule:"+r])
		for r in self:
			rule=self[r]
			for pat in rule.patterns:
				for p in pat:
					if isinstance(p,Token.Token):
						if "token:"+p.name not in ruleTokenNodes:
							ruleTokenNodes["token:"+p.name]=pydot.Node(self[r].ruleName, style="filled", fillcolor="green")
						target=ruleTokenNodes["token:"+p.name]
					else:
						target=ruleTokenNodes["rule:"+p.name]
					graph.add_edge(pydot.Edge(ruleTokenNodes["rule:"+r],target))
		graph.write_png('graph.png')

	def __str__(self):
		return "\n\n".join([str(self[i]) for i in self])

	def dump(self,s):
		return TemplateFill(self,"RuleBook",s)
