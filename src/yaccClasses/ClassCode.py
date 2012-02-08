from Token import Token
from string import Template
from Cheetah.Template import Template as CheetahTemplate
import os

cheetahTemplatesDir=os.path.dirname(os.path.abspath(__file__))+"/cheetahTemplates/"

class ConstructorClassCoder(object):
	def __init__(self,constructor):
		self.constructor=constructor
		self.className=self.constructor.className
		self.baseClassFlag=False
		if(self.constructor._index==0):
			self.inheritancePublic=["CAst"]
		else:
			if(self.constructor._index==1):
				self.baseClassFlag=True
			else:
				self.baseClassFlag=False

			self.inheritancePublic=[self.constructor._name]
		self.pattern=repr(self.constructor.pattern)
		self.parameters=self.constructor.parameters


	def _dumpPython(self,fh):
		if(self.baseClassFlag):
			pass

		table="";
		functionText="";
		for t,n,p,v,i,v1 in self.parameters:
			functionText="PyObject* PyCAst_getter_%(className)s_%(varName)s(PyObject* attr)\n{\n\treturn PyString_FromString(\"test\");\n}\n"%{"className":self.className,"varName":n.replace("_p_","")};
			table+="""{(char*)"%(varName)s", (getter)PyCAst_getter_%(className)s_%(varName)s,NULL,(char*)"%(varName)s", NULL},"""%{"className":self.className,"varName":n.replace("_p_","")}

			
		template=Template("""
\n\n\n\n
/*==============================================================*\\
DEFINITION OF $className

\\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::$className *_p_cast_object;
}PyCAst_object_$className;



static PyMethodDef PyCAst_methods_$className [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_$className [] = {
    {NULL}
};
static int PyCAst_init_$className(PyCAst_object_$className *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::$className\\n\\n");
    return 0;
}
static PyObject *PyCAst_getter_${className}_ast(PyObject *_self)
{
	PyCAst_object_$className *self=(PyCAst_object_$className*)(_self);
	if(self->_p_cast_object->isList())
		return PyString_FromString
		(
			self->_p_cast_object->getPropertiesList().str().c_str()
		);
	else 
		return PyString_FromString
		(
			self->_p_cast_object->getProperties().str().c_str()
		);


}

${functionText}

static PyGetSetDef PyCAst_getsetter_$className[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_${className}_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_$className(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::$className\\n\\n");
    PyCAst_object_$className *self;
    self = (PyCAst_object_$className*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_$className = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.$className",
    sizeof(PyCAst_object_$className),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    Py_TPFLAGS_DEFAULT,
    "Object representing the $className for pattern $pattern",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_$className,
    PyCAst_members_$className,
    PyCAst_getsetter_$className,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_${className},
    0,
    PyCAst_new_$className,



};


""")
		fh.write(template.substitute(functionText=functionText,className=self.className,table=table,pattern=str(self.pattern)))
		return [self.className]
		



class ListAccumulatorClassCoder(ConstructorClassCoder):
	pass
