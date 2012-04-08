import os

from Cheetah.Template import Template as CheetahTemplate

templateRoot=os.path.dirname(os.path.abspath(__file__))+"/cheetahTemplates/"

simpleClassCreator=CheetahTemplate(file=templateRoot+"/RuleBook/Rule/Handler/Include/Class.tmplc")
listClassCreator=CheetahTemplate(file=templateRoot+"/RuleBook/Rule/Handler/Include/ListClass.tmplc")
pyClassCreator=CheetahTemplate(file=templateRoot+"/RuleBook/Rule/Handler/Include/PyClass.tmplc")
simpleClassCreator.compile()
def TemplateFill(searchList,*path):
	template=templateRoot+("/".join(path))+".tmplc"
	if(os.path.exists(template)):
		template=CheetahTemplate(file=template,searchList={"object":searchList,"utils":{"simpleClassCreator":simpleClassCreator,"listClassCreator":listClassCreator,"pyClassCreator":pyClassCreator}})
		return str(template)
	else:
		return ""
