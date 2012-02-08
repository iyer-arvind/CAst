
#include <Python.h>
#include <structmember.h>







/*==============================================================*\
DEFINITION OF storage_class_specifier

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::storage_class_specifier *_p_cast_object;
}PyCAst_object_storage_class_specifier;



static PyMethodDef PyCAst_methods_storage_class_specifier [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_storage_class_specifier [] = {
    {NULL}
};
static int PyCAst_init_storage_class_specifier(PyCAst_object_storage_class_specifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::storage_class_specifier\n\n");
    return 0;
}
static PyObject *PyCAst_getter_storage_class_specifier_ast(PyObject *_self)
{
	PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)(_self);
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

PyObject* PyCAst_getter_storage_class_specifier_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_storage_class_specifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_storage_class_specifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_storage_class_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::storage_class_specifier\n\n");
    PyCAst_object_storage_class_specifier *self;
    self = (PyCAst_object_storage_class_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_storage_class_specifier = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.storage_class_specifier",
    sizeof(PyCAst_object_storage_class_specifier),
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
    "Object representing the storage_class_specifier for pattern [TYPEDEF]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_storage_class_specifier,
    PyCAst_members_storage_class_specifier,
    PyCAst_getsetter_storage_class_specifier,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_storage_class_specifier,
    0,
    PyCAst_new_storage_class_specifier,



};








/*==============================================================*\
DEFINITION OF expression_statement

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::expression_statement *_p_cast_object;
}PyCAst_object_expression_statement;



static PyMethodDef PyCAst_methods_expression_statement [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_expression_statement [] = {
    {NULL}
};
static int PyCAst_init_expression_statement(PyCAst_object_expression_statement *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::expression_statement\n\n");
    return 0;
}
static PyObject *PyCAst_getter_expression_statement_ast(PyObject *_self)
{
	PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)(_self);
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

PyObject* PyCAst_getter_expression_statement_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_expression_statement[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_expression_statement_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_expression_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::expression_statement\n\n");
    PyCAst_object_expression_statement *self;
    self = (PyCAst_object_expression_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_expression_statement = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.expression_statement",
    sizeof(PyCAst_object_expression_statement),
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
    "Object representing the expression_statement for pattern [expression,';']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_expression_statement,
    PyCAst_members_expression_statement,
    PyCAst_getsetter_expression_statement,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_expression_statement,
    0,
    PyCAst_new_expression_statement,



};








/*==============================================================*\
DEFINITION OF type_name

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::type_name *_p_cast_object;
}PyCAst_object_type_name;



static PyMethodDef PyCAst_methods_type_name [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_type_name [] = {
    {NULL}
};
static int PyCAst_init_type_name(PyCAst_object_type_name *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_name\n\n");
    return 0;
}
static PyObject *PyCAst_getter_type_name_ast(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
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

PyObject* PyCAst_getter_type_name_abstract_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_type_name[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_name_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_type_name(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::type_name\n\n");
    PyCAst_object_type_name *self;
    self = (PyCAst_object_type_name*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_type_name = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.type_name",
    sizeof(PyCAst_object_type_name),
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
    "Object representing the type_name for pattern [specifier_qualifier_list,abstract_declarator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_type_name,
    PyCAst_members_type_name,
    PyCAst_getsetter_type_name,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_type_name,
    0,
    PyCAst_new_type_name,



};








/*==============================================================*\
DEFINITION OF unary_expression1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::unary_expression1 *_p_cast_object;
}PyCAst_object_unary_expression1;



static PyMethodDef PyCAst_methods_unary_expression1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_unary_expression1 [] = {
    {NULL}
};
static int PyCAst_init_unary_expression1(PyCAst_object_unary_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_unary_expression1_ast(PyObject *_self)
{
	PyCAst_object_unary_expression1 *self=(PyCAst_object_unary_expression1*)(_self);
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

PyObject* PyCAst_getter_unary_expression1_type_name(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_unary_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_unary_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::unary_expression1\n\n");
    PyCAst_object_unary_expression1 *self;
    self = (PyCAst_object_unary_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_unary_expression1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.unary_expression1",
    sizeof(PyCAst_object_unary_expression1),
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
    "Object representing the unary_expression1 for pattern [SIZEOF,'(',type_name,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_unary_expression1,
    PyCAst_members_unary_expression1,
    PyCAst_getsetter_unary_expression1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_unary_expression1,
    0,
    PyCAst_new_unary_expression1,



};








/*==============================================================*\
DEFINITION OF unary_expression2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::unary_expression2 *_p_cast_object;
}PyCAst_object_unary_expression2;



static PyMethodDef PyCAst_methods_unary_expression2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_unary_expression2 [] = {
    {NULL}
};
static int PyCAst_init_unary_expression2(PyCAst_object_unary_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_unary_expression2_ast(PyObject *_self)
{
	PyCAst_object_unary_expression2 *self=(PyCAst_object_unary_expression2*)(_self);
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

PyObject* PyCAst_getter_unary_expression2_unary_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_unary_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_unary_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::unary_expression2\n\n");
    PyCAst_object_unary_expression2 *self;
    self = (PyCAst_object_unary_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_unary_expression2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.unary_expression2",
    sizeof(PyCAst_object_unary_expression2),
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
    "Object representing the unary_expression2 for pattern [INC_OP,unary_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_unary_expression2,
    PyCAst_members_unary_expression2,
    PyCAst_getsetter_unary_expression2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_unary_expression2,
    0,
    PyCAst_new_unary_expression2,



};








/*==============================================================*\
DEFINITION OF unary_expression3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::unary_expression3 *_p_cast_object;
}PyCAst_object_unary_expression3;



static PyMethodDef PyCAst_methods_unary_expression3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_unary_expression3 [] = {
    {NULL}
};
static int PyCAst_init_unary_expression3(PyCAst_object_unary_expression3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_unary_expression3_ast(PyObject *_self)
{
	PyCAst_object_unary_expression3 *self=(PyCAst_object_unary_expression3*)(_self);
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

PyObject* PyCAst_getter_unary_expression3_cast_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_unary_expression3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_unary_expression3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::unary_expression3\n\n");
    PyCAst_object_unary_expression3 *self;
    self = (PyCAst_object_unary_expression3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_unary_expression3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.unary_expression3",
    sizeof(PyCAst_object_unary_expression3),
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
    "Object representing the unary_expression3 for pattern [unary_operator,cast_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_unary_expression3,
    PyCAst_members_unary_expression3,
    PyCAst_getsetter_unary_expression3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_unary_expression3,
    0,
    PyCAst_new_unary_expression3,



};








/*==============================================================*\
DEFINITION OF unary_expression4

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::unary_expression4 *_p_cast_object;
}PyCAst_object_unary_expression4;



static PyMethodDef PyCAst_methods_unary_expression4 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_unary_expression4 [] = {
    {NULL}
};
static int PyCAst_init_unary_expression4(PyCAst_object_unary_expression4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression4\n\n");
    return 0;
}
static PyObject *PyCAst_getter_unary_expression4_ast(PyObject *_self)
{
	PyCAst_object_unary_expression4 *self=(PyCAst_object_unary_expression4*)(_self);
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

PyObject* PyCAst_getter_unary_expression4_postfix_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_unary_expression4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_unary_expression4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::unary_expression4\n\n");
    PyCAst_object_unary_expression4 *self;
    self = (PyCAst_object_unary_expression4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_unary_expression4 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.unary_expression4",
    sizeof(PyCAst_object_unary_expression4),
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
    "Object representing the unary_expression4 for pattern [postfix_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_unary_expression4,
    PyCAst_members_unary_expression4,
    PyCAst_getsetter_unary_expression4,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_unary_expression4,
    0,
    PyCAst_new_unary_expression4,



};








/*==============================================================*\
DEFINITION OF conditional_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::conditional_expression *_p_cast_object;
}PyCAst_object_conditional_expression;



static PyMethodDef PyCAst_methods_conditional_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_conditional_expression [] = {
    {NULL}
};
static int PyCAst_init_conditional_expression(PyCAst_object_conditional_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::conditional_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_conditional_expression_ast(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);
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

PyObject* PyCAst_getter_conditional_expression_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_conditional_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_conditional_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_conditional_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::conditional_expression\n\n");
    PyCAst_object_conditional_expression *self;
    self = (PyCAst_object_conditional_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_conditional_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.conditional_expression",
    sizeof(PyCAst_object_conditional_expression),
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
    "Object representing the conditional_expression for pattern [logical_or_expression,'?',expression,':',conditional_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_conditional_expression,
    PyCAst_members_conditional_expression,
    PyCAst_getsetter_conditional_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_conditional_expression,
    0,
    PyCAst_new_conditional_expression,



};








/*==============================================================*\
DEFINITION OF struct_or_union_specifier

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::struct_or_union_specifier *_p_cast_object;
}PyCAst_object_struct_or_union_specifier;



static PyMethodDef PyCAst_methods_struct_or_union_specifier [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_struct_or_union_specifier [] = {
    {NULL}
};
static int PyCAst_init_struct_or_union_specifier(PyCAst_object_struct_or_union_specifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_or_union_specifier\n\n");
    return 0;
}
static PyObject *PyCAst_getter_struct_or_union_specifier_ast(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
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

PyObject* PyCAst_getter_struct_or_union_specifier_token3(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_struct_or_union_specifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_or_union_specifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_struct_or_union_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::struct_or_union_specifier\n\n");
    PyCAst_object_struct_or_union_specifier *self;
    self = (PyCAst_object_struct_or_union_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_struct_or_union_specifier = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.struct_or_union_specifier",
    sizeof(PyCAst_object_struct_or_union_specifier),
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
    "Object representing the struct_or_union_specifier for pattern [struct_or_union,IDENTIFIER,'{',struct_declaration_list,'}']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_struct_or_union_specifier,
    PyCAst_members_struct_or_union_specifier,
    PyCAst_getsetter_struct_or_union_specifier,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_struct_or_union_specifier,
    0,
    PyCAst_new_struct_or_union_specifier,



};








/*==============================================================*\
DEFINITION OF exclusive_or_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::exclusive_or_expression *_p_cast_object;
}PyCAst_object_exclusive_or_expression;



static PyMethodDef PyCAst_methods_exclusive_or_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_exclusive_or_expression [] = {
    {NULL}
};
static int PyCAst_init_exclusive_or_expression(PyCAst_object_exclusive_or_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::exclusive_or_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_exclusive_or_expression_ast(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);
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

PyObject* PyCAst_getter_exclusive_or_expression_and_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_exclusive_or_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_exclusive_or_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_exclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::exclusive_or_expression\n\n");
    PyCAst_object_exclusive_or_expression *self;
    self = (PyCAst_object_exclusive_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_exclusive_or_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.exclusive_or_expression",
    sizeof(PyCAst_object_exclusive_or_expression),
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
    "Object representing the exclusive_or_expression for pattern [exclusive_or_expression,'^',and_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_exclusive_or_expression,
    PyCAst_members_exclusive_or_expression,
    PyCAst_getsetter_exclusive_or_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_exclusive_or_expression,
    0,
    PyCAst_new_exclusive_or_expression,



};








/*==============================================================*\
DEFINITION OF initializer1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::initializer1 *_p_cast_object;
}PyCAst_object_initializer1;



static PyMethodDef PyCAst_methods_initializer1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_initializer1 [] = {
    {NULL}
};
static int PyCAst_init_initializer1(PyCAst_object_initializer1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::initializer1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_initializer1_ast(PyObject *_self)
{
	PyCAst_object_initializer1 *self=(PyCAst_object_initializer1*)(_self);
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

PyObject* PyCAst_getter_initializer1_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_initializer1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_initializer1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_initializer1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::initializer1\n\n");
    PyCAst_object_initializer1 *self;
    self = (PyCAst_object_initializer1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_initializer1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.initializer1",
    sizeof(PyCAst_object_initializer1),
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
    "Object representing the initializer1 for pattern ['{',initializer_list,',','}']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_initializer1,
    PyCAst_members_initializer1,
    PyCAst_getsetter_initializer1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_initializer1,
    0,
    PyCAst_new_initializer1,



};








/*==============================================================*\
DEFINITION OF initializer2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::initializer2 *_p_cast_object;
}PyCAst_object_initializer2;



static PyMethodDef PyCAst_methods_initializer2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_initializer2 [] = {
    {NULL}
};
static int PyCAst_init_initializer2(PyCAst_object_initializer2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::initializer2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_initializer2_ast(PyObject *_self)
{
	PyCAst_object_initializer2 *self=(PyCAst_object_initializer2*)(_self);
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

PyObject* PyCAst_getter_initializer2_assignment_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_initializer2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_initializer2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_initializer2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::initializer2\n\n");
    PyCAst_object_initializer2 *self;
    self = (PyCAst_object_initializer2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_initializer2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.initializer2",
    sizeof(PyCAst_object_initializer2),
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
    "Object representing the initializer2 for pattern [assignment_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_initializer2,
    PyCAst_members_initializer2,
    PyCAst_getsetter_initializer2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_initializer2,
    0,
    PyCAst_new_initializer2,



};








/*==============================================================*\
DEFINITION OF struct_declaration_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::struct_declaration_list *_p_cast_object;
}PyCAst_object_struct_declaration_list;



static PyMethodDef PyCAst_methods_struct_declaration_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_struct_declaration_list [] = {
    {NULL}
};
static int PyCAst_init_struct_declaration_list(PyCAst_object_struct_declaration_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declaration_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_struct_declaration_list_ast(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);
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

PyObject* PyCAst_getter_struct_declaration_list_struct_declaration(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_struct_declaration_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declaration_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_struct_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::struct_declaration_list\n\n");
    PyCAst_object_struct_declaration_list *self;
    self = (PyCAst_object_struct_declaration_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_struct_declaration_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.struct_declaration_list",
    sizeof(PyCAst_object_struct_declaration_list),
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
    "Object representing the struct_declaration_list for pattern [struct_declaration_list,struct_declaration]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_struct_declaration_list,
    PyCAst_members_struct_declaration_list,
    PyCAst_getsetter_struct_declaration_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_struct_declaration_list,
    0,
    PyCAst_new_struct_declaration_list,



};








/*==============================================================*\
DEFINITION OF assignment_operator

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::assignment_operator *_p_cast_object;
}PyCAst_object_assignment_operator;



static PyMethodDef PyCAst_methods_assignment_operator [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_assignment_operator [] = {
    {NULL}
};
static int PyCAst_init_assignment_operator(PyCAst_object_assignment_operator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::assignment_operator\n\n");
    return 0;
}
static PyObject *PyCAst_getter_assignment_operator_ast(PyObject *_self)
{
	PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)(_self);
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

PyObject* PyCAst_getter_assignment_operator_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_assignment_operator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_assignment_operator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_assignment_operator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::assignment_operator\n\n");
    PyCAst_object_assignment_operator *self;
    self = (PyCAst_object_assignment_operator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_assignment_operator = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.assignment_operator",
    sizeof(PyCAst_object_assignment_operator),
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
    "Object representing the assignment_operator for pattern ['=']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_assignment_operator,
    PyCAst_members_assignment_operator,
    PyCAst_getsetter_assignment_operator,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_assignment_operator,
    0,
    PyCAst_new_assignment_operator,



};








/*==============================================================*\
DEFINITION OF struct_declaration

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::struct_declaration *_p_cast_object;
}PyCAst_object_struct_declaration;



static PyMethodDef PyCAst_methods_struct_declaration [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_struct_declaration [] = {
    {NULL}
};
static int PyCAst_init_struct_declaration(PyCAst_object_struct_declaration *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declaration\n\n");
    return 0;
}
static PyObject *PyCAst_getter_struct_declaration_ast(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
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

PyObject* PyCAst_getter_struct_declaration_struct_declarator_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_struct_declaration[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declaration_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_struct_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::struct_declaration\n\n");
    PyCAst_object_struct_declaration *self;
    self = (PyCAst_object_struct_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_struct_declaration = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.struct_declaration",
    sizeof(PyCAst_object_struct_declaration),
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
    "Object representing the struct_declaration for pattern [specifier_qualifier_list,struct_declarator_list,';']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_struct_declaration,
    PyCAst_members_struct_declaration,
    PyCAst_getsetter_struct_declaration,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_struct_declaration,
    0,
    PyCAst_new_struct_declaration,



};








/*==============================================================*\
DEFINITION OF abstract_declarator

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::abstract_declarator *_p_cast_object;
}PyCAst_object_abstract_declarator;



static PyMethodDef PyCAst_methods_abstract_declarator [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_abstract_declarator [] = {
    {NULL}
};
static int PyCAst_init_abstract_declarator(PyCAst_object_abstract_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::abstract_declarator\n\n");
    return 0;
}
static PyObject *PyCAst_getter_abstract_declarator_ast(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
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

PyObject* PyCAst_getter_abstract_declarator_direct_abstract_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_abstract_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_abstract_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_abstract_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::abstract_declarator\n\n");
    PyCAst_object_abstract_declarator *self;
    self = (PyCAst_object_abstract_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_abstract_declarator = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.abstract_declarator",
    sizeof(PyCAst_object_abstract_declarator),
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
    "Object representing the abstract_declarator for pattern [pointer,direct_abstract_declarator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_abstract_declarator,
    PyCAst_members_abstract_declarator,
    PyCAst_getsetter_abstract_declarator,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_abstract_declarator,
    0,
    PyCAst_new_abstract_declarator,



};








/*==============================================================*\
DEFINITION OF iteration_statement1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::iteration_statement1 *_p_cast_object;
}PyCAst_object_iteration_statement1;



static PyMethodDef PyCAst_methods_iteration_statement1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_iteration_statement1 [] = {
    {NULL}
};
static int PyCAst_init_iteration_statement1(PyCAst_object_iteration_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::iteration_statement1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_iteration_statement1_ast(PyObject *_self)
{
	PyCAst_object_iteration_statement1 *self=(PyCAst_object_iteration_statement1*)(_self);
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

PyObject* PyCAst_getter_iteration_statement1_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_iteration_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_iteration_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_iteration_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::iteration_statement1\n\n");
    PyCAst_object_iteration_statement1 *self;
    self = (PyCAst_object_iteration_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_iteration_statement1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.iteration_statement1",
    sizeof(PyCAst_object_iteration_statement1),
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
    "Object representing the iteration_statement1 for pattern [DO,statement,WHILE,'(',expression,')',';']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_iteration_statement1,
    PyCAst_members_iteration_statement1,
    PyCAst_getsetter_iteration_statement1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_iteration_statement1,
    0,
    PyCAst_new_iteration_statement1,



};








/*==============================================================*\
DEFINITION OF iteration_statement2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::iteration_statement2 *_p_cast_object;
}PyCAst_object_iteration_statement2;



static PyMethodDef PyCAst_methods_iteration_statement2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_iteration_statement2 [] = {
    {NULL}
};
static int PyCAst_init_iteration_statement2(PyCAst_object_iteration_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::iteration_statement2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_iteration_statement2_ast(PyObject *_self)
{
	PyCAst_object_iteration_statement2 *self=(PyCAst_object_iteration_statement2*)(_self);
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

PyObject* PyCAst_getter_iteration_statement2_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_iteration_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_iteration_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_iteration_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::iteration_statement2\n\n");
    PyCAst_object_iteration_statement2 *self;
    self = (PyCAst_object_iteration_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_iteration_statement2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.iteration_statement2",
    sizeof(PyCAst_object_iteration_statement2),
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
    "Object representing the iteration_statement2 for pattern [FOR,'(',expression_statement,expression_statement,expression,')',statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_iteration_statement2,
    PyCAst_members_iteration_statement2,
    PyCAst_getsetter_iteration_statement2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_iteration_statement2,
    0,
    PyCAst_new_iteration_statement2,



};








/*==============================================================*\
DEFINITION OF iteration_statement3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::iteration_statement3 *_p_cast_object;
}PyCAst_object_iteration_statement3;



static PyMethodDef PyCAst_methods_iteration_statement3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_iteration_statement3 [] = {
    {NULL}
};
static int PyCAst_init_iteration_statement3(PyCAst_object_iteration_statement3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::iteration_statement3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_iteration_statement3_ast(PyObject *_self)
{
	PyCAst_object_iteration_statement3 *self=(PyCAst_object_iteration_statement3*)(_self);
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

PyObject* PyCAst_getter_iteration_statement3_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_iteration_statement3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_iteration_statement3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_iteration_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::iteration_statement3\n\n");
    PyCAst_object_iteration_statement3 *self;
    self = (PyCAst_object_iteration_statement3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_iteration_statement3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.iteration_statement3",
    sizeof(PyCAst_object_iteration_statement3),
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
    "Object representing the iteration_statement3 for pattern [WHILE,'(',expression,')',statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_iteration_statement3,
    PyCAst_members_iteration_statement3,
    PyCAst_getsetter_iteration_statement3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_iteration_statement3,
    0,
    PyCAst_new_iteration_statement3,



};








/*==============================================================*\
DEFINITION OF additive_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::additive_expression *_p_cast_object;
}PyCAst_object_additive_expression;



static PyMethodDef PyCAst_methods_additive_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_additive_expression [] = {
    {NULL}
};
static int PyCAst_init_additive_expression(PyCAst_object_additive_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::additive_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_additive_expression_ast(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);
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

PyObject* PyCAst_getter_additive_expression_multiplicative_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_additive_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_additive_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_additive_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::additive_expression\n\n");
    PyCAst_object_additive_expression *self;
    self = (PyCAst_object_additive_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_additive_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.additive_expression",
    sizeof(PyCAst_object_additive_expression),
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
    "Object representing the additive_expression for pattern [additive_expression,'+',multiplicative_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_additive_expression,
    PyCAst_members_additive_expression,
    PyCAst_getsetter_additive_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_additive_expression,
    0,
    PyCAst_new_additive_expression,



};








/*==============================================================*\
DEFINITION OF external_declaration1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::external_declaration1 *_p_cast_object;
}PyCAst_object_external_declaration1;



static PyMethodDef PyCAst_methods_external_declaration1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_external_declaration1 [] = {
    {NULL}
};
static int PyCAst_init_external_declaration1(PyCAst_object_external_declaration1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::external_declaration1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_external_declaration1_ast(PyObject *_self)
{
	PyCAst_object_external_declaration1 *self=(PyCAst_object_external_declaration1*)(_self);
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

PyObject* PyCAst_getter_external_declaration1_function_definition(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_external_declaration1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_external_declaration1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_external_declaration1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::external_declaration1\n\n");
    PyCAst_object_external_declaration1 *self;
    self = (PyCAst_object_external_declaration1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_external_declaration1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.external_declaration1",
    sizeof(PyCAst_object_external_declaration1),
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
    "Object representing the external_declaration1 for pattern [function_definition]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_external_declaration1,
    PyCAst_members_external_declaration1,
    PyCAst_getsetter_external_declaration1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_external_declaration1,
    0,
    PyCAst_new_external_declaration1,



};








/*==============================================================*\
DEFINITION OF external_declaration2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::external_declaration2 *_p_cast_object;
}PyCAst_object_external_declaration2;



static PyMethodDef PyCAst_methods_external_declaration2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_external_declaration2 [] = {
    {NULL}
};
static int PyCAst_init_external_declaration2(PyCAst_object_external_declaration2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::external_declaration2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_external_declaration2_ast(PyObject *_self)
{
	PyCAst_object_external_declaration2 *self=(PyCAst_object_external_declaration2*)(_self);
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

PyObject* PyCAst_getter_external_declaration2_declaration(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_external_declaration2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_external_declaration2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_external_declaration2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::external_declaration2\n\n");
    PyCAst_object_external_declaration2 *self;
    self = (PyCAst_object_external_declaration2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_external_declaration2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.external_declaration2",
    sizeof(PyCAst_object_external_declaration2),
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
    "Object representing the external_declaration2 for pattern [declaration]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_external_declaration2,
    PyCAst_members_external_declaration2,
    PyCAst_getsetter_external_declaration2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_external_declaration2,
    0,
    PyCAst_new_external_declaration2,



};








/*==============================================================*\
DEFINITION OF type_specifier1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::type_specifier1 *_p_cast_object;
}PyCAst_object_type_specifier1;



static PyMethodDef PyCAst_methods_type_specifier1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_type_specifier1 [] = {
    {NULL}
};
static int PyCAst_init_type_specifier1(PyCAst_object_type_specifier1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_specifier1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_type_specifier1_ast(PyObject *_self)
{
	PyCAst_object_type_specifier1 *self=(PyCAst_object_type_specifier1*)(_self);
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

PyObject* PyCAst_getter_type_specifier1_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_type_specifier1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_specifier1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_type_specifier1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::type_specifier1\n\n");
    PyCAst_object_type_specifier1 *self;
    self = (PyCAst_object_type_specifier1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_type_specifier1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.type_specifier1",
    sizeof(PyCAst_object_type_specifier1),
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
    "Object representing the type_specifier1 for pattern [VOID]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_type_specifier1,
    PyCAst_members_type_specifier1,
    PyCAst_getsetter_type_specifier1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_type_specifier1,
    0,
    PyCAst_new_type_specifier1,



};








/*==============================================================*\
DEFINITION OF type_specifier2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::type_specifier2 *_p_cast_object;
}PyCAst_object_type_specifier2;



static PyMethodDef PyCAst_methods_type_specifier2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_type_specifier2 [] = {
    {NULL}
};
static int PyCAst_init_type_specifier2(PyCAst_object_type_specifier2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_specifier2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_type_specifier2_ast(PyObject *_self)
{
	PyCAst_object_type_specifier2 *self=(PyCAst_object_type_specifier2*)(_self);
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

PyObject* PyCAst_getter_type_specifier2_struct_or_union_specifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_type_specifier2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_specifier2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_type_specifier2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::type_specifier2\n\n");
    PyCAst_object_type_specifier2 *self;
    self = (PyCAst_object_type_specifier2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_type_specifier2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.type_specifier2",
    sizeof(PyCAst_object_type_specifier2),
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
    "Object representing the type_specifier2 for pattern [struct_or_union_specifier]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_type_specifier2,
    PyCAst_members_type_specifier2,
    PyCAst_getsetter_type_specifier2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_type_specifier2,
    0,
    PyCAst_new_type_specifier2,



};








/*==============================================================*\
DEFINITION OF type_specifier3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::type_specifier3 *_p_cast_object;
}PyCAst_object_type_specifier3;



static PyMethodDef PyCAst_methods_type_specifier3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_type_specifier3 [] = {
    {NULL}
};
static int PyCAst_init_type_specifier3(PyCAst_object_type_specifier3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_specifier3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_type_specifier3_ast(PyObject *_self)
{
	PyCAst_object_type_specifier3 *self=(PyCAst_object_type_specifier3*)(_self);
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

PyObject* PyCAst_getter_type_specifier3_enum_specifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_type_specifier3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_specifier3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_type_specifier3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::type_specifier3\n\n");
    PyCAst_object_type_specifier3 *self;
    self = (PyCAst_object_type_specifier3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_type_specifier3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.type_specifier3",
    sizeof(PyCAst_object_type_specifier3),
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
    "Object representing the type_specifier3 for pattern [enum_specifier]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_type_specifier3,
    PyCAst_members_type_specifier3,
    PyCAst_getsetter_type_specifier3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_type_specifier3,
    0,
    PyCAst_new_type_specifier3,



};








/*==============================================================*\
DEFINITION OF compound_statement

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::compound_statement *_p_cast_object;
}PyCAst_object_compound_statement;



static PyMethodDef PyCAst_methods_compound_statement [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_compound_statement [] = {
    {NULL}
};
static int PyCAst_init_compound_statement(PyCAst_object_compound_statement *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::compound_statement\n\n");
    return 0;
}
static PyObject *PyCAst_getter_compound_statement_ast(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
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

PyObject* PyCAst_getter_compound_statement_statement_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_compound_statement[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_compound_statement_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_compound_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::compound_statement\n\n");
    PyCAst_object_compound_statement *self;
    self = (PyCAst_object_compound_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_compound_statement = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.compound_statement",
    sizeof(PyCAst_object_compound_statement),
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
    "Object representing the compound_statement for pattern ['{',declaration_list,statement_list,'}']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_compound_statement,
    PyCAst_members_compound_statement,
    PyCAst_getsetter_compound_statement,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_compound_statement,
    0,
    PyCAst_new_compound_statement,



};








/*==============================================================*\
DEFINITION OF inclusive_or_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::inclusive_or_expression *_p_cast_object;
}PyCAst_object_inclusive_or_expression;



static PyMethodDef PyCAst_methods_inclusive_or_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_inclusive_or_expression [] = {
    {NULL}
};
static int PyCAst_init_inclusive_or_expression(PyCAst_object_inclusive_or_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::inclusive_or_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_inclusive_or_expression_ast(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);
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

PyObject* PyCAst_getter_inclusive_or_expression_exclusive_or_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_inclusive_or_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_inclusive_or_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_inclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::inclusive_or_expression\n\n");
    PyCAst_object_inclusive_or_expression *self;
    self = (PyCAst_object_inclusive_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_inclusive_or_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.inclusive_or_expression",
    sizeof(PyCAst_object_inclusive_or_expression),
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
    "Object representing the inclusive_or_expression for pattern [inclusive_or_expression,'|',exclusive_or_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_inclusive_or_expression,
    PyCAst_members_inclusive_or_expression,
    PyCAst_getsetter_inclusive_or_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_inclusive_or_expression,
    0,
    PyCAst_new_inclusive_or_expression,



};








/*==============================================================*\
DEFINITION OF pointer

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::pointer *_p_cast_object;
}PyCAst_object_pointer;



static PyMethodDef PyCAst_methods_pointer [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_pointer [] = {
    {NULL}
};
static int PyCAst_init_pointer(PyCAst_object_pointer *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::pointer\n\n");
    return 0;
}
static PyObject *PyCAst_getter_pointer_ast(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);
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

PyObject* PyCAst_getter_pointer_type_qualifier_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_pointer[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_pointer_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_pointer(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::pointer\n\n");
    PyCAst_object_pointer *self;
    self = (PyCAst_object_pointer*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_pointer = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.pointer",
    sizeof(PyCAst_object_pointer),
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
    "Object representing the pointer for pattern ['*',type_qualifier_list,pointer]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_pointer,
    PyCAst_members_pointer,
    PyCAst_getsetter_pointer,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_pointer,
    0,
    PyCAst_new_pointer,



};








/*==============================================================*\
DEFINITION OF selection_statement1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::selection_statement1 *_p_cast_object;
}PyCAst_object_selection_statement1;



static PyMethodDef PyCAst_methods_selection_statement1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_selection_statement1 [] = {
    {NULL}
};
static int PyCAst_init_selection_statement1(PyCAst_object_selection_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::selection_statement1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_selection_statement1_ast(PyObject *_self)
{
	PyCAst_object_selection_statement1 *self=(PyCAst_object_selection_statement1*)(_self);
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

PyObject* PyCAst_getter_selection_statement1_statement1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_selection_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_selection_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_selection_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::selection_statement1\n\n");
    PyCAst_object_selection_statement1 *self;
    self = (PyCAst_object_selection_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_selection_statement1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.selection_statement1",
    sizeof(PyCAst_object_selection_statement1),
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
    "Object representing the selection_statement1 for pattern [IF,'(',expression,')',statement,ELSE,statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_selection_statement1,
    PyCAst_members_selection_statement1,
    PyCAst_getsetter_selection_statement1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_selection_statement1,
    0,
    PyCAst_new_selection_statement1,



};








/*==============================================================*\
DEFINITION OF selection_statement2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::selection_statement2 *_p_cast_object;
}PyCAst_object_selection_statement2;



static PyMethodDef PyCAst_methods_selection_statement2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_selection_statement2 [] = {
    {NULL}
};
static int PyCAst_init_selection_statement2(PyCAst_object_selection_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::selection_statement2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_selection_statement2_ast(PyObject *_self)
{
	PyCAst_object_selection_statement2 *self=(PyCAst_object_selection_statement2*)(_self);
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

PyObject* PyCAst_getter_selection_statement2_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_selection_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_selection_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_selection_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::selection_statement2\n\n");
    PyCAst_object_selection_statement2 *self;
    self = (PyCAst_object_selection_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_selection_statement2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.selection_statement2",
    sizeof(PyCAst_object_selection_statement2),
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
    "Object representing the selection_statement2 for pattern [SWITCH,'(',expression,')',statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_selection_statement2,
    PyCAst_members_selection_statement2,
    PyCAst_getsetter_selection_statement2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_selection_statement2,
    0,
    PyCAst_new_selection_statement2,



};








/*==============================================================*\
DEFINITION OF postfix_expression1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression1 *_p_cast_object;
}PyCAst_object_postfix_expression1;



static PyMethodDef PyCAst_methods_postfix_expression1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_postfix_expression1 [] = {
    {NULL}
};
static int PyCAst_init_postfix_expression1(PyCAst_object_postfix_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_postfix_expression1_ast(PyObject *_self)
{
	PyCAst_object_postfix_expression1 *self=(PyCAst_object_postfix_expression1*)(_self);
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

PyObject* PyCAst_getter_postfix_expression1_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_postfix_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_postfix_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::postfix_expression1\n\n");
    PyCAst_object_postfix_expression1 *self;
    self = (PyCAst_object_postfix_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_postfix_expression1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.postfix_expression1",
    sizeof(PyCAst_object_postfix_expression1),
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
    "Object representing the postfix_expression1 for pattern [postfix_expression,'[',expression,']']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_postfix_expression1,
    PyCAst_members_postfix_expression1,
    PyCAst_getsetter_postfix_expression1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_postfix_expression1,
    0,
    PyCAst_new_postfix_expression1,



};








/*==============================================================*\
DEFINITION OF postfix_expression2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression2 *_p_cast_object;
}PyCAst_object_postfix_expression2;



static PyMethodDef PyCAst_methods_postfix_expression2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_postfix_expression2 [] = {
    {NULL}
};
static int PyCAst_init_postfix_expression2(PyCAst_object_postfix_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_postfix_expression2_ast(PyObject *_self)
{
	PyCAst_object_postfix_expression2 *self=(PyCAst_object_postfix_expression2*)(_self);
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

PyObject* PyCAst_getter_postfix_expression2_argument_expression_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_postfix_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_postfix_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::postfix_expression2\n\n");
    PyCAst_object_postfix_expression2 *self;
    self = (PyCAst_object_postfix_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_postfix_expression2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.postfix_expression2",
    sizeof(PyCAst_object_postfix_expression2),
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
    "Object representing the postfix_expression2 for pattern [postfix_expression,'(',argument_expression_list,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_postfix_expression2,
    PyCAst_members_postfix_expression2,
    PyCAst_getsetter_postfix_expression2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_postfix_expression2,
    0,
    PyCAst_new_postfix_expression2,



};








/*==============================================================*\
DEFINITION OF postfix_expression3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression3 *_p_cast_object;
}PyCAst_object_postfix_expression3;



static PyMethodDef PyCAst_methods_postfix_expression3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_postfix_expression3 [] = {
    {NULL}
};
static int PyCAst_init_postfix_expression3(PyCAst_object_postfix_expression3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_postfix_expression3_ast(PyObject *_self)
{
	PyCAst_object_postfix_expression3 *self=(PyCAst_object_postfix_expression3*)(_self);
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

PyObject* PyCAst_getter_postfix_expression3_token2(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_postfix_expression3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_postfix_expression3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::postfix_expression3\n\n");
    PyCAst_object_postfix_expression3 *self;
    self = (PyCAst_object_postfix_expression3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_postfix_expression3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.postfix_expression3",
    sizeof(PyCAst_object_postfix_expression3),
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
    "Object representing the postfix_expression3 for pattern [postfix_expression,'.',IDENTIFIER]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_postfix_expression3,
    PyCAst_members_postfix_expression3,
    PyCAst_getsetter_postfix_expression3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_postfix_expression3,
    0,
    PyCAst_new_postfix_expression3,



};








/*==============================================================*\
DEFINITION OF postfix_expression4

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression4 *_p_cast_object;
}PyCAst_object_postfix_expression4;



static PyMethodDef PyCAst_methods_postfix_expression4 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_postfix_expression4 [] = {
    {NULL}
};
static int PyCAst_init_postfix_expression4(PyCAst_object_postfix_expression4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression4\n\n");
    return 0;
}
static PyObject *PyCAst_getter_postfix_expression4_ast(PyObject *_self)
{
	PyCAst_object_postfix_expression4 *self=(PyCAst_object_postfix_expression4*)(_self);
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

PyObject* PyCAst_getter_postfix_expression4_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_postfix_expression4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_postfix_expression4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::postfix_expression4\n\n");
    PyCAst_object_postfix_expression4 *self;
    self = (PyCAst_object_postfix_expression4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_postfix_expression4 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.postfix_expression4",
    sizeof(PyCAst_object_postfix_expression4),
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
    "Object representing the postfix_expression4 for pattern [postfix_expression,INC_OP]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_postfix_expression4,
    PyCAst_members_postfix_expression4,
    PyCAst_getsetter_postfix_expression4,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_postfix_expression4,
    0,
    PyCAst_new_postfix_expression4,



};








/*==============================================================*\
DEFINITION OF postfix_expression5

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression5 *_p_cast_object;
}PyCAst_object_postfix_expression5;



static PyMethodDef PyCAst_methods_postfix_expression5 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_postfix_expression5 [] = {
    {NULL}
};
static int PyCAst_init_postfix_expression5(PyCAst_object_postfix_expression5 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression5\n\n");
    return 0;
}
static PyObject *PyCAst_getter_postfix_expression5_ast(PyObject *_self)
{
	PyCAst_object_postfix_expression5 *self=(PyCAst_object_postfix_expression5*)(_self);
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

PyObject* PyCAst_getter_postfix_expression5_primary_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_postfix_expression5[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression5_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_postfix_expression5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::postfix_expression5\n\n");
    PyCAst_object_postfix_expression5 *self;
    self = (PyCAst_object_postfix_expression5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_postfix_expression5 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.postfix_expression5",
    sizeof(PyCAst_object_postfix_expression5),
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
    "Object representing the postfix_expression5 for pattern [primary_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_postfix_expression5,
    PyCAst_members_postfix_expression5,
    PyCAst_getsetter_postfix_expression5,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_postfix_expression5,
    0,
    PyCAst_new_postfix_expression5,



};








/*==============================================================*\
DEFINITION OF and_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::and_expression *_p_cast_object;
}PyCAst_object_and_expression;



static PyMethodDef PyCAst_methods_and_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_and_expression [] = {
    {NULL}
};
static int PyCAst_init_and_expression(PyCAst_object_and_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::and_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_and_expression_ast(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);
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

PyObject* PyCAst_getter_and_expression_equality_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_and_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_and_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::and_expression\n\n");
    PyCAst_object_and_expression *self;
    self = (PyCAst_object_and_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_and_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.and_expression",
    sizeof(PyCAst_object_and_expression),
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
    "Object representing the and_expression for pattern [and_expression,'&',equality_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_and_expression,
    PyCAst_members_and_expression,
    PyCAst_getsetter_and_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_and_expression,
    0,
    PyCAst_new_and_expression,



};








/*==============================================================*\
DEFINITION OF statement1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::statement1 *_p_cast_object;
}PyCAst_object_statement1;



static PyMethodDef PyCAst_methods_statement1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_statement1 [] = {
    {NULL}
};
static int PyCAst_init_statement1(PyCAst_object_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_statement1_ast(PyObject *_self)
{
	PyCAst_object_statement1 *self=(PyCAst_object_statement1*)(_self);
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

PyObject* PyCAst_getter_statement1_labeled_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::statement1\n\n");
    PyCAst_object_statement1 *self;
    self = (PyCAst_object_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_statement1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.statement1",
    sizeof(PyCAst_object_statement1),
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
    "Object representing the statement1 for pattern [labeled_statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_statement1,
    PyCAst_members_statement1,
    PyCAst_getsetter_statement1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_statement1,
    0,
    PyCAst_new_statement1,



};








/*==============================================================*\
DEFINITION OF statement2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::statement2 *_p_cast_object;
}PyCAst_object_statement2;



static PyMethodDef PyCAst_methods_statement2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_statement2 [] = {
    {NULL}
};
static int PyCAst_init_statement2(PyCAst_object_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_statement2_ast(PyObject *_self)
{
	PyCAst_object_statement2 *self=(PyCAst_object_statement2*)(_self);
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

PyObject* PyCAst_getter_statement2_compound_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::statement2\n\n");
    PyCAst_object_statement2 *self;
    self = (PyCAst_object_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_statement2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.statement2",
    sizeof(PyCAst_object_statement2),
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
    "Object representing the statement2 for pattern [compound_statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_statement2,
    PyCAst_members_statement2,
    PyCAst_getsetter_statement2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_statement2,
    0,
    PyCAst_new_statement2,



};








/*==============================================================*\
DEFINITION OF statement3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::statement3 *_p_cast_object;
}PyCAst_object_statement3;



static PyMethodDef PyCAst_methods_statement3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_statement3 [] = {
    {NULL}
};
static int PyCAst_init_statement3(PyCAst_object_statement3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_statement3_ast(PyObject *_self)
{
	PyCAst_object_statement3 *self=(PyCAst_object_statement3*)(_self);
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

PyObject* PyCAst_getter_statement3_expression_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_statement3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::statement3\n\n");
    PyCAst_object_statement3 *self;
    self = (PyCAst_object_statement3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_statement3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.statement3",
    sizeof(PyCAst_object_statement3),
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
    "Object representing the statement3 for pattern [expression_statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_statement3,
    PyCAst_members_statement3,
    PyCAst_getsetter_statement3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_statement3,
    0,
    PyCAst_new_statement3,



};








/*==============================================================*\
DEFINITION OF statement4

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::statement4 *_p_cast_object;
}PyCAst_object_statement4;



static PyMethodDef PyCAst_methods_statement4 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_statement4 [] = {
    {NULL}
};
static int PyCAst_init_statement4(PyCAst_object_statement4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement4\n\n");
    return 0;
}
static PyObject *PyCAst_getter_statement4_ast(PyObject *_self)
{
	PyCAst_object_statement4 *self=(PyCAst_object_statement4*)(_self);
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

PyObject* PyCAst_getter_statement4_selection_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_statement4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_statement4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::statement4\n\n");
    PyCAst_object_statement4 *self;
    self = (PyCAst_object_statement4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_statement4 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.statement4",
    sizeof(PyCAst_object_statement4),
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
    "Object representing the statement4 for pattern [selection_statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_statement4,
    PyCAst_members_statement4,
    PyCAst_getsetter_statement4,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_statement4,
    0,
    PyCAst_new_statement4,



};








/*==============================================================*\
DEFINITION OF statement5

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::statement5 *_p_cast_object;
}PyCAst_object_statement5;



static PyMethodDef PyCAst_methods_statement5 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_statement5 [] = {
    {NULL}
};
static int PyCAst_init_statement5(PyCAst_object_statement5 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement5\n\n");
    return 0;
}
static PyObject *PyCAst_getter_statement5_ast(PyObject *_self)
{
	PyCAst_object_statement5 *self=(PyCAst_object_statement5*)(_self);
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

PyObject* PyCAst_getter_statement5_iteration_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_statement5[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement5_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_statement5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::statement5\n\n");
    PyCAst_object_statement5 *self;
    self = (PyCAst_object_statement5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_statement5 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.statement5",
    sizeof(PyCAst_object_statement5),
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
    "Object representing the statement5 for pattern [iteration_statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_statement5,
    PyCAst_members_statement5,
    PyCAst_getsetter_statement5,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_statement5,
    0,
    PyCAst_new_statement5,



};








/*==============================================================*\
DEFINITION OF statement6

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::statement6 *_p_cast_object;
}PyCAst_object_statement6;



static PyMethodDef PyCAst_methods_statement6 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_statement6 [] = {
    {NULL}
};
static int PyCAst_init_statement6(PyCAst_object_statement6 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement6\n\n");
    return 0;
}
static PyObject *PyCAst_getter_statement6_ast(PyObject *_self)
{
	PyCAst_object_statement6 *self=(PyCAst_object_statement6*)(_self);
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

PyObject* PyCAst_getter_statement6_jump_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_statement6[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement6_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_statement6(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::statement6\n\n");
    PyCAst_object_statement6 *self;
    self = (PyCAst_object_statement6*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_statement6 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.statement6",
    sizeof(PyCAst_object_statement6),
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
    "Object representing the statement6 for pattern [jump_statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_statement6,
    PyCAst_members_statement6,
    PyCAst_getsetter_statement6,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_statement6,
    0,
    PyCAst_new_statement6,



};








/*==============================================================*\
DEFINITION OF cast_expression1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::cast_expression1 *_p_cast_object;
}PyCAst_object_cast_expression1;



static PyMethodDef PyCAst_methods_cast_expression1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_cast_expression1 [] = {
    {NULL}
};
static int PyCAst_init_cast_expression1(PyCAst_object_cast_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::cast_expression1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_cast_expression1_ast(PyObject *_self)
{
	PyCAst_object_cast_expression1 *self=(PyCAst_object_cast_expression1*)(_self);
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

PyObject* PyCAst_getter_cast_expression1_cast_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_cast_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_cast_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_cast_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::cast_expression1\n\n");
    PyCAst_object_cast_expression1 *self;
    self = (PyCAst_object_cast_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_cast_expression1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.cast_expression1",
    sizeof(PyCAst_object_cast_expression1),
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
    "Object representing the cast_expression1 for pattern ['(',type_name,')',cast_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_cast_expression1,
    PyCAst_members_cast_expression1,
    PyCAst_getsetter_cast_expression1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_cast_expression1,
    0,
    PyCAst_new_cast_expression1,



};








/*==============================================================*\
DEFINITION OF cast_expression2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::cast_expression2 *_p_cast_object;
}PyCAst_object_cast_expression2;



static PyMethodDef PyCAst_methods_cast_expression2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_cast_expression2 [] = {
    {NULL}
};
static int PyCAst_init_cast_expression2(PyCAst_object_cast_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::cast_expression2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_cast_expression2_ast(PyObject *_self)
{
	PyCAst_object_cast_expression2 *self=(PyCAst_object_cast_expression2*)(_self);
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

PyObject* PyCAst_getter_cast_expression2_unary_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_cast_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_cast_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_cast_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::cast_expression2\n\n");
    PyCAst_object_cast_expression2 *self;
    self = (PyCAst_object_cast_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_cast_expression2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.cast_expression2",
    sizeof(PyCAst_object_cast_expression2),
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
    "Object representing the cast_expression2 for pattern [unary_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_cast_expression2,
    PyCAst_members_cast_expression2,
    PyCAst_getsetter_cast_expression2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_cast_expression2,
    0,
    PyCAst_new_cast_expression2,



};








/*==============================================================*\
DEFINITION OF init_declarator

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::init_declarator *_p_cast_object;
}PyCAst_object_init_declarator;



static PyMethodDef PyCAst_methods_init_declarator [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_init_declarator [] = {
    {NULL}
};
static int PyCAst_init_init_declarator(PyCAst_object_init_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::init_declarator\n\n");
    return 0;
}
static PyObject *PyCAst_getter_init_declarator_ast(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
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

PyObject* PyCAst_getter_init_declarator_initializer(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_init_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_init_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_init_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::init_declarator\n\n");
    PyCAst_object_init_declarator *self;
    self = (PyCAst_object_init_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_init_declarator = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.init_declarator",
    sizeof(PyCAst_object_init_declarator),
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
    "Object representing the init_declarator for pattern [declarator,'=',initializer]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_init_declarator,
    PyCAst_members_init_declarator,
    PyCAst_getsetter_init_declarator,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_init_declarator,
    0,
    PyCAst_new_init_declarator,



};








/*==============================================================*\
DEFINITION OF struct_declarator_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::struct_declarator_list *_p_cast_object;
}PyCAst_object_struct_declarator_list;



static PyMethodDef PyCAst_methods_struct_declarator_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_struct_declarator_list [] = {
    {NULL}
};
static int PyCAst_init_struct_declarator_list(PyCAst_object_struct_declarator_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declarator_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_struct_declarator_list_ast(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);
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

PyObject* PyCAst_getter_struct_declarator_list_struct_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_struct_declarator_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declarator_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_struct_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::struct_declarator_list\n\n");
    PyCAst_object_struct_declarator_list *self;
    self = (PyCAst_object_struct_declarator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_struct_declarator_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.struct_declarator_list",
    sizeof(PyCAst_object_struct_declarator_list),
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
    "Object representing the struct_declarator_list for pattern [struct_declarator_list,',',struct_declarator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_struct_declarator_list,
    PyCAst_members_struct_declarator_list,
    PyCAst_getsetter_struct_declarator_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_struct_declarator_list,
    0,
    PyCAst_new_struct_declarator_list,



};








/*==============================================================*\
DEFINITION OF logical_or_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::logical_or_expression *_p_cast_object;
}PyCAst_object_logical_or_expression;



static PyMethodDef PyCAst_methods_logical_or_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_logical_or_expression [] = {
    {NULL}
};
static int PyCAst_init_logical_or_expression(PyCAst_object_logical_or_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::logical_or_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_logical_or_expression_ast(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);
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

PyObject* PyCAst_getter_logical_or_expression_logical_and_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_logical_or_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_logical_or_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_logical_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::logical_or_expression\n\n");
    PyCAst_object_logical_or_expression *self;
    self = (PyCAst_object_logical_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_logical_or_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.logical_or_expression",
    sizeof(PyCAst_object_logical_or_expression),
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
    "Object representing the logical_or_expression for pattern [logical_or_expression,OR_OP,logical_and_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_logical_or_expression,
    PyCAst_members_logical_or_expression,
    PyCAst_getsetter_logical_or_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_logical_or_expression,
    0,
    PyCAst_new_logical_or_expression,



};








/*==============================================================*\
DEFINITION OF unary_operator

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::unary_operator *_p_cast_object;
}PyCAst_object_unary_operator;



static PyMethodDef PyCAst_methods_unary_operator [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_unary_operator [] = {
    {NULL}
};
static int PyCAst_init_unary_operator(PyCAst_object_unary_operator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_operator\n\n");
    return 0;
}
static PyObject *PyCAst_getter_unary_operator_ast(PyObject *_self)
{
	PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)(_self);
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

PyObject* PyCAst_getter_unary_operator_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_unary_operator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_operator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_unary_operator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::unary_operator\n\n");
    PyCAst_object_unary_operator *self;
    self = (PyCAst_object_unary_operator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_unary_operator = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.unary_operator",
    sizeof(PyCAst_object_unary_operator),
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
    "Object representing the unary_operator for pattern ['&']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_unary_operator,
    PyCAst_members_unary_operator,
    PyCAst_getsetter_unary_operator,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_unary_operator,
    0,
    PyCAst_new_unary_operator,



};








/*==============================================================*\
DEFINITION OF relational_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::relational_expression *_p_cast_object;
}PyCAst_object_relational_expression;



static PyMethodDef PyCAst_methods_relational_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_relational_expression [] = {
    {NULL}
};
static int PyCAst_init_relational_expression(PyCAst_object_relational_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::relational_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_relational_expression_ast(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);
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

PyObject* PyCAst_getter_relational_expression_shift_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_relational_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_relational_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_relational_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::relational_expression\n\n");
    PyCAst_object_relational_expression *self;
    self = (PyCAst_object_relational_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_relational_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.relational_expression",
    sizeof(PyCAst_object_relational_expression),
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
    "Object representing the relational_expression for pattern [relational_expression,'<',shift_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_relational_expression,
    PyCAst_members_relational_expression,
    PyCAst_getsetter_relational_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_relational_expression,
    0,
    PyCAst_new_relational_expression,



};








/*==============================================================*\
DEFINITION OF struct_or_union

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::struct_or_union *_p_cast_object;
}PyCAst_object_struct_or_union;



static PyMethodDef PyCAst_methods_struct_or_union [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_struct_or_union [] = {
    {NULL}
};
static int PyCAst_init_struct_or_union(PyCAst_object_struct_or_union *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_or_union\n\n");
    return 0;
}
static PyObject *PyCAst_getter_struct_or_union_ast(PyObject *_self)
{
	PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)(_self);
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

PyObject* PyCAst_getter_struct_or_union_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_struct_or_union[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_or_union_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_struct_or_union(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::struct_or_union\n\n");
    PyCAst_object_struct_or_union *self;
    self = (PyCAst_object_struct_or_union*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_struct_or_union = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.struct_or_union",
    sizeof(PyCAst_object_struct_or_union),
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
    "Object representing the struct_or_union for pattern [STRUCT]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_struct_or_union,
    PyCAst_members_struct_or_union,
    PyCAst_getsetter_struct_or_union,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_struct_or_union,
    0,
    PyCAst_new_struct_or_union,



};








/*==============================================================*\
DEFINITION OF enumerator

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::enumerator *_p_cast_object;
}PyCAst_object_enumerator;



static PyMethodDef PyCAst_methods_enumerator [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_enumerator [] = {
    {NULL}
};
static int PyCAst_init_enumerator(PyCAst_object_enumerator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::enumerator\n\n");
    return 0;
}
static PyObject *PyCAst_getter_enumerator_ast(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
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

PyObject* PyCAst_getter_enumerator_constant_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_enumerator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_enumerator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_enumerator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::enumerator\n\n");
    PyCAst_object_enumerator *self;
    self = (PyCAst_object_enumerator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_enumerator = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.enumerator",
    sizeof(PyCAst_object_enumerator),
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
    "Object representing the enumerator for pattern [IDENTIFIER,'=',constant_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_enumerator,
    PyCAst_members_enumerator,
    PyCAst_getsetter_enumerator,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_enumerator,
    0,
    PyCAst_new_enumerator,



};








/*==============================================================*\
DEFINITION OF assignment_expression1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::assignment_expression1 *_p_cast_object;
}PyCAst_object_assignment_expression1;



static PyMethodDef PyCAst_methods_assignment_expression1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_assignment_expression1 [] = {
    {NULL}
};
static int PyCAst_init_assignment_expression1(PyCAst_object_assignment_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::assignment_expression1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_assignment_expression1_ast(PyObject *_self)
{
	PyCAst_object_assignment_expression1 *self=(PyCAst_object_assignment_expression1*)(_self);
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

PyObject* PyCAst_getter_assignment_expression1_assignment_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_assignment_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_assignment_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_assignment_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::assignment_expression1\n\n");
    PyCAst_object_assignment_expression1 *self;
    self = (PyCAst_object_assignment_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_assignment_expression1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.assignment_expression1",
    sizeof(PyCAst_object_assignment_expression1),
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
    "Object representing the assignment_expression1 for pattern [unary_expression,assignment_operator,assignment_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_assignment_expression1,
    PyCAst_members_assignment_expression1,
    PyCAst_getsetter_assignment_expression1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_assignment_expression1,
    0,
    PyCAst_new_assignment_expression1,



};








/*==============================================================*\
DEFINITION OF assignment_expression2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::assignment_expression2 *_p_cast_object;
}PyCAst_object_assignment_expression2;



static PyMethodDef PyCAst_methods_assignment_expression2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_assignment_expression2 [] = {
    {NULL}
};
static int PyCAst_init_assignment_expression2(PyCAst_object_assignment_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::assignment_expression2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_assignment_expression2_ast(PyObject *_self)
{
	PyCAst_object_assignment_expression2 *self=(PyCAst_object_assignment_expression2*)(_self);
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

PyObject* PyCAst_getter_assignment_expression2_conditional_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_assignment_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_assignment_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_assignment_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::assignment_expression2\n\n");
    PyCAst_object_assignment_expression2 *self;
    self = (PyCAst_object_assignment_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_assignment_expression2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.assignment_expression2",
    sizeof(PyCAst_object_assignment_expression2),
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
    "Object representing the assignment_expression2 for pattern [conditional_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_assignment_expression2,
    PyCAst_members_assignment_expression2,
    PyCAst_getsetter_assignment_expression2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_assignment_expression2,
    0,
    PyCAst_new_assignment_expression2,



};








/*==============================================================*\
DEFINITION OF parameter_type_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::parameter_type_list *_p_cast_object;
}PyCAst_object_parameter_type_list;



static PyMethodDef PyCAst_methods_parameter_type_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_parameter_type_list [] = {
    {NULL}
};
static int PyCAst_init_parameter_type_list(PyCAst_object_parameter_type_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_type_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_parameter_type_list_ast(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
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

PyObject* PyCAst_getter_parameter_type_list_token2(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_parameter_type_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_type_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_parameter_type_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::parameter_type_list\n\n");
    PyCAst_object_parameter_type_list *self;
    self = (PyCAst_object_parameter_type_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_parameter_type_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.parameter_type_list",
    sizeof(PyCAst_object_parameter_type_list),
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
    "Object representing the parameter_type_list for pattern [parameter_list,',',ELLIPSIS]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_parameter_type_list,
    PyCAst_members_parameter_type_list,
    PyCAst_getsetter_parameter_type_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_parameter_type_list,
    0,
    PyCAst_new_parameter_type_list,



};








/*==============================================================*\
DEFINITION OF parameter_declaration1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::parameter_declaration1 *_p_cast_object;
}PyCAst_object_parameter_declaration1;



static PyMethodDef PyCAst_methods_parameter_declaration1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_parameter_declaration1 [] = {
    {NULL}
};
static int PyCAst_init_parameter_declaration1(PyCAst_object_parameter_declaration1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_declaration1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_parameter_declaration1_ast(PyObject *_self)
{
	PyCAst_object_parameter_declaration1 *self=(PyCAst_object_parameter_declaration1*)(_self);
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

PyObject* PyCAst_getter_parameter_declaration1_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_parameter_declaration1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_declaration1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_parameter_declaration1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::parameter_declaration1\n\n");
    PyCAst_object_parameter_declaration1 *self;
    self = (PyCAst_object_parameter_declaration1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_parameter_declaration1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.parameter_declaration1",
    sizeof(PyCAst_object_parameter_declaration1),
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
    "Object representing the parameter_declaration1 for pattern [declaration_specifiers,declarator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_parameter_declaration1,
    PyCAst_members_parameter_declaration1,
    PyCAst_getsetter_parameter_declaration1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_parameter_declaration1,
    0,
    PyCAst_new_parameter_declaration1,



};








/*==============================================================*\
DEFINITION OF parameter_declaration2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::parameter_declaration2 *_p_cast_object;
}PyCAst_object_parameter_declaration2;



static PyMethodDef PyCAst_methods_parameter_declaration2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_parameter_declaration2 [] = {
    {NULL}
};
static int PyCAst_init_parameter_declaration2(PyCAst_object_parameter_declaration2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_declaration2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_parameter_declaration2_ast(PyObject *_self)
{
	PyCAst_object_parameter_declaration2 *self=(PyCAst_object_parameter_declaration2*)(_self);
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

PyObject* PyCAst_getter_parameter_declaration2_abstract_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_parameter_declaration2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_declaration2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_parameter_declaration2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::parameter_declaration2\n\n");
    PyCAst_object_parameter_declaration2 *self;
    self = (PyCAst_object_parameter_declaration2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_parameter_declaration2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.parameter_declaration2",
    sizeof(PyCAst_object_parameter_declaration2),
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
    "Object representing the parameter_declaration2 for pattern [declaration_specifiers,abstract_declarator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_parameter_declaration2,
    PyCAst_members_parameter_declaration2,
    PyCAst_getsetter_parameter_declaration2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_parameter_declaration2,
    0,
    PyCAst_new_parameter_declaration2,



};








/*==============================================================*\
DEFINITION OF multiplicative_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::multiplicative_expression *_p_cast_object;
}PyCAst_object_multiplicative_expression;



static PyMethodDef PyCAst_methods_multiplicative_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_multiplicative_expression [] = {
    {NULL}
};
static int PyCAst_init_multiplicative_expression(PyCAst_object_multiplicative_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::multiplicative_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_multiplicative_expression_ast(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);
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

PyObject* PyCAst_getter_multiplicative_expression_cast_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_multiplicative_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_multiplicative_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_multiplicative_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::multiplicative_expression\n\n");
    PyCAst_object_multiplicative_expression *self;
    self = (PyCAst_object_multiplicative_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_multiplicative_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.multiplicative_expression",
    sizeof(PyCAst_object_multiplicative_expression),
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
    "Object representing the multiplicative_expression for pattern [multiplicative_expression,'*',cast_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_multiplicative_expression,
    PyCAst_members_multiplicative_expression,
    PyCAst_getsetter_multiplicative_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_multiplicative_expression,
    0,
    PyCAst_new_multiplicative_expression,



};








/*==============================================================*\
DEFINITION OF type_qualifier_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::type_qualifier_list *_p_cast_object;
}PyCAst_object_type_qualifier_list;



static PyMethodDef PyCAst_methods_type_qualifier_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_type_qualifier_list [] = {
    {NULL}
};
static int PyCAst_init_type_qualifier_list(PyCAst_object_type_qualifier_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_qualifier_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_type_qualifier_list_ast(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);
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

PyObject* PyCAst_getter_type_qualifier_list_type_qualifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_type_qualifier_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_qualifier_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_type_qualifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::type_qualifier_list\n\n");
    PyCAst_object_type_qualifier_list *self;
    self = (PyCAst_object_type_qualifier_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_type_qualifier_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.type_qualifier_list",
    sizeof(PyCAst_object_type_qualifier_list),
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
    "Object representing the type_qualifier_list for pattern [type_qualifier_list,type_qualifier]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_type_qualifier_list,
    PyCAst_members_type_qualifier_list,
    PyCAst_getsetter_type_qualifier_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_type_qualifier_list,
    0,
    PyCAst_new_type_qualifier_list,



};








/*==============================================================*\
DEFINITION OF argument_expression_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::argument_expression_list *_p_cast_object;
}PyCAst_object_argument_expression_list;



static PyMethodDef PyCAst_methods_argument_expression_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_argument_expression_list [] = {
    {NULL}
};
static int PyCAst_init_argument_expression_list(PyCAst_object_argument_expression_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::argument_expression_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_argument_expression_list_ast(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);
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

PyObject* PyCAst_getter_argument_expression_list_assignment_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_argument_expression_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_argument_expression_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_argument_expression_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::argument_expression_list\n\n");
    PyCAst_object_argument_expression_list *self;
    self = (PyCAst_object_argument_expression_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_argument_expression_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.argument_expression_list",
    sizeof(PyCAst_object_argument_expression_list),
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
    "Object representing the argument_expression_list for pattern [argument_expression_list,',',assignment_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_argument_expression_list,
    PyCAst_members_argument_expression_list,
    PyCAst_getsetter_argument_expression_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_argument_expression_list,
    0,
    PyCAst_new_argument_expression_list,



};








/*==============================================================*\
DEFINITION OF direct_abstract_declarator1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_abstract_declarator1 *_p_cast_object;
}PyCAst_object_direct_abstract_declarator1;



static PyMethodDef PyCAst_methods_direct_abstract_declarator1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_abstract_declarator1 [] = {
    {NULL}
};
static int PyCAst_init_direct_abstract_declarator1(PyCAst_object_direct_abstract_declarator1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_abstract_declarator1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_abstract_declarator1_ast(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator1 *self=(PyCAst_object_direct_abstract_declarator1*)(_self);
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

PyObject* PyCAst_getter_direct_abstract_declarator1_constant_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_abstract_declarator1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_abstract_declarator1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_abstract_declarator1\n\n");
    PyCAst_object_direct_abstract_declarator1 *self;
    self = (PyCAst_object_direct_abstract_declarator1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_abstract_declarator1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_abstract_declarator1",
    sizeof(PyCAst_object_direct_abstract_declarator1),
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
    "Object representing the direct_abstract_declarator1 for pattern [direct_abstract_declarator,'[',constant_expression,']']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_abstract_declarator1,
    PyCAst_members_direct_abstract_declarator1,
    PyCAst_getsetter_direct_abstract_declarator1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_abstract_declarator1,
    0,
    PyCAst_new_direct_abstract_declarator1,



};








/*==============================================================*\
DEFINITION OF direct_abstract_declarator2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_abstract_declarator2 *_p_cast_object;
}PyCAst_object_direct_abstract_declarator2;



static PyMethodDef PyCAst_methods_direct_abstract_declarator2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_abstract_declarator2 [] = {
    {NULL}
};
static int PyCAst_init_direct_abstract_declarator2(PyCAst_object_direct_abstract_declarator2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_abstract_declarator2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_abstract_declarator2_ast(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator2 *self=(PyCAst_object_direct_abstract_declarator2*)(_self);
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

PyObject* PyCAst_getter_direct_abstract_declarator2_parameter_type_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_abstract_declarator2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_abstract_declarator2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_abstract_declarator2\n\n");
    PyCAst_object_direct_abstract_declarator2 *self;
    self = (PyCAst_object_direct_abstract_declarator2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_abstract_declarator2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_abstract_declarator2",
    sizeof(PyCAst_object_direct_abstract_declarator2),
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
    "Object representing the direct_abstract_declarator2 for pattern [direct_abstract_declarator,'(',parameter_type_list,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_abstract_declarator2,
    PyCAst_members_direct_abstract_declarator2,
    PyCAst_getsetter_direct_abstract_declarator2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_abstract_declarator2,
    0,
    PyCAst_new_direct_abstract_declarator2,



};








/*==============================================================*\
DEFINITION OF direct_abstract_declarator3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_abstract_declarator3 *_p_cast_object;
}PyCAst_object_direct_abstract_declarator3;



static PyMethodDef PyCAst_methods_direct_abstract_declarator3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_abstract_declarator3 [] = {
    {NULL}
};
static int PyCAst_init_direct_abstract_declarator3(PyCAst_object_direct_abstract_declarator3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_abstract_declarator3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_abstract_declarator3_ast(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator3 *self=(PyCAst_object_direct_abstract_declarator3*)(_self);
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

PyObject* PyCAst_getter_direct_abstract_declarator3_abstract_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_abstract_declarator3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_abstract_declarator3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_abstract_declarator3\n\n");
    PyCAst_object_direct_abstract_declarator3 *self;
    self = (PyCAst_object_direct_abstract_declarator3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_abstract_declarator3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_abstract_declarator3",
    sizeof(PyCAst_object_direct_abstract_declarator3),
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
    "Object representing the direct_abstract_declarator3 for pattern ['(',abstract_declarator,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_abstract_declarator3,
    PyCAst_members_direct_abstract_declarator3,
    PyCAst_getsetter_direct_abstract_declarator3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_abstract_declarator3,
    0,
    PyCAst_new_direct_abstract_declarator3,



};








/*==============================================================*\
DEFINITION OF equality_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::equality_expression *_p_cast_object;
}PyCAst_object_equality_expression;



static PyMethodDef PyCAst_methods_equality_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_equality_expression [] = {
    {NULL}
};
static int PyCAst_init_equality_expression(PyCAst_object_equality_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::equality_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_equality_expression_ast(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);
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

PyObject* PyCAst_getter_equality_expression_relational_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_equality_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_equality_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_equality_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::equality_expression\n\n");
    PyCAst_object_equality_expression *self;
    self = (PyCAst_object_equality_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_equality_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.equality_expression",
    sizeof(PyCAst_object_equality_expression),
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
    "Object representing the equality_expression for pattern [equality_expression,EQ_OP,relational_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_equality_expression,
    PyCAst_members_equality_expression,
    PyCAst_getsetter_equality_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_equality_expression,
    0,
    PyCAst_new_equality_expression,



};








/*==============================================================*\
DEFINITION OF primary_expression1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::primary_expression1 *_p_cast_object;
}PyCAst_object_primary_expression1;



static PyMethodDef PyCAst_methods_primary_expression1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_primary_expression1 [] = {
    {NULL}
};
static int PyCAst_init_primary_expression1(PyCAst_object_primary_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::primary_expression1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_primary_expression1_ast(PyObject *_self)
{
	PyCAst_object_primary_expression1 *self=(PyCAst_object_primary_expression1*)(_self);
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

PyObject* PyCAst_getter_primary_expression1_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_primary_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_primary_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_primary_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::primary_expression1\n\n");
    PyCAst_object_primary_expression1 *self;
    self = (PyCAst_object_primary_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_primary_expression1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.primary_expression1",
    sizeof(PyCAst_object_primary_expression1),
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
    "Object representing the primary_expression1 for pattern ['(',expression,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_primary_expression1,
    PyCAst_members_primary_expression1,
    PyCAst_getsetter_primary_expression1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_primary_expression1,
    0,
    PyCAst_new_primary_expression1,



};








/*==============================================================*\
DEFINITION OF primary_expression2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::primary_expression2 *_p_cast_object;
}PyCAst_object_primary_expression2;



static PyMethodDef PyCAst_methods_primary_expression2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_primary_expression2 [] = {
    {NULL}
};
static int PyCAst_init_primary_expression2(PyCAst_object_primary_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::primary_expression2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_primary_expression2_ast(PyObject *_self)
{
	PyCAst_object_primary_expression2 *self=(PyCAst_object_primary_expression2*)(_self);
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

PyObject* PyCAst_getter_primary_expression2_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_primary_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_primary_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_primary_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::primary_expression2\n\n");
    PyCAst_object_primary_expression2 *self;
    self = (PyCAst_object_primary_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_primary_expression2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.primary_expression2",
    sizeof(PyCAst_object_primary_expression2),
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
    "Object representing the primary_expression2 for pattern [IDENTIFIER]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_primary_expression2,
    PyCAst_members_primary_expression2,
    PyCAst_getsetter_primary_expression2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_primary_expression2,
    0,
    PyCAst_new_primary_expression2,



};








/*==============================================================*\
DEFINITION OF declaration_specifiers1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers1 *_p_cast_object;
}PyCAst_object_declaration_specifiers1;



static PyMethodDef PyCAst_methods_declaration_specifiers1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_declaration_specifiers1 [] = {
    {NULL}
};
static int PyCAst_init_declaration_specifiers1(PyCAst_object_declaration_specifiers1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_specifiers1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_declaration_specifiers1_ast(PyObject *_self)
{
	PyCAst_object_declaration_specifiers1 *self=(PyCAst_object_declaration_specifiers1*)(_self);
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

PyObject* PyCAst_getter_declaration_specifiers1_storage_class_specifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_declaration_specifiers1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_declaration_specifiers1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::declaration_specifiers1\n\n");
    PyCAst_object_declaration_specifiers1 *self;
    self = (PyCAst_object_declaration_specifiers1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_declaration_specifiers1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.declaration_specifiers1",
    sizeof(PyCAst_object_declaration_specifiers1),
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
    "Object representing the declaration_specifiers1 for pattern [storage_class_specifier,declaration_specifiers]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_declaration_specifiers1,
    PyCAst_members_declaration_specifiers1,
    PyCAst_getsetter_declaration_specifiers1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_declaration_specifiers1,
    0,
    PyCAst_new_declaration_specifiers1,



};








/*==============================================================*\
DEFINITION OF declaration_specifiers2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers2 *_p_cast_object;
}PyCAst_object_declaration_specifiers2;



static PyMethodDef PyCAst_methods_declaration_specifiers2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_declaration_specifiers2 [] = {
    {NULL}
};
static int PyCAst_init_declaration_specifiers2(PyCAst_object_declaration_specifiers2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_specifiers2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_declaration_specifiers2_ast(PyObject *_self)
{
	PyCAst_object_declaration_specifiers2 *self=(PyCAst_object_declaration_specifiers2*)(_self);
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

PyObject* PyCAst_getter_declaration_specifiers2_type_specifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_declaration_specifiers2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_declaration_specifiers2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::declaration_specifiers2\n\n");
    PyCAst_object_declaration_specifiers2 *self;
    self = (PyCAst_object_declaration_specifiers2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_declaration_specifiers2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.declaration_specifiers2",
    sizeof(PyCAst_object_declaration_specifiers2),
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
    "Object representing the declaration_specifiers2 for pattern [type_specifier,declaration_specifiers]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_declaration_specifiers2,
    PyCAst_members_declaration_specifiers2,
    PyCAst_getsetter_declaration_specifiers2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_declaration_specifiers2,
    0,
    PyCAst_new_declaration_specifiers2,



};








/*==============================================================*\
DEFINITION OF declaration_specifiers3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers3 *_p_cast_object;
}PyCAst_object_declaration_specifiers3;



static PyMethodDef PyCAst_methods_declaration_specifiers3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_declaration_specifiers3 [] = {
    {NULL}
};
static int PyCAst_init_declaration_specifiers3(PyCAst_object_declaration_specifiers3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_specifiers3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_declaration_specifiers3_ast(PyObject *_self)
{
	PyCAst_object_declaration_specifiers3 *self=(PyCAst_object_declaration_specifiers3*)(_self);
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

PyObject* PyCAst_getter_declaration_specifiers3_type_qualifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_declaration_specifiers3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_declaration_specifiers3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::declaration_specifiers3\n\n");
    PyCAst_object_declaration_specifiers3 *self;
    self = (PyCAst_object_declaration_specifiers3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_declaration_specifiers3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.declaration_specifiers3",
    sizeof(PyCAst_object_declaration_specifiers3),
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
    "Object representing the declaration_specifiers3 for pattern [type_qualifier,declaration_specifiers]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_declaration_specifiers3,
    PyCAst_members_declaration_specifiers3,
    PyCAst_getsetter_declaration_specifiers3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_declaration_specifiers3,
    0,
    PyCAst_new_declaration_specifiers3,



};








/*==============================================================*\
DEFINITION OF declaration

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::declaration *_p_cast_object;
}PyCAst_object_declaration;



static PyMethodDef PyCAst_methods_declaration [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_declaration [] = {
    {NULL}
};
static int PyCAst_init_declaration(PyCAst_object_declaration *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration\n\n");
    return 0;
}
static PyObject *PyCAst_getter_declaration_ast(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
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

PyObject* PyCAst_getter_declaration_init_declarator_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_declaration[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::declaration\n\n");
    PyCAst_object_declaration *self;
    self = (PyCAst_object_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_declaration = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.declaration",
    sizeof(PyCAst_object_declaration),
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
    "Object representing the declaration for pattern [declaration_specifiers,init_declarator_list,';']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_declaration,
    PyCAst_members_declaration,
    PyCAst_getsetter_declaration,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_declaration,
    0,
    PyCAst_new_declaration,



};








/*==============================================================*\
DEFINITION OF direct_declarator1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator1 *_p_cast_object;
}PyCAst_object_direct_declarator1;



static PyMethodDef PyCAst_methods_direct_declarator1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_declarator1 [] = {
    {NULL}
};
static int PyCAst_init_direct_declarator1(PyCAst_object_direct_declarator1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_declarator1_ast(PyObject *_self)
{
	PyCAst_object_direct_declarator1 *self=(PyCAst_object_direct_declarator1*)(_self);
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

PyObject* PyCAst_getter_direct_declarator1_constant_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_declarator1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_declarator1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_declarator1\n\n");
    PyCAst_object_direct_declarator1 *self;
    self = (PyCAst_object_direct_declarator1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_declarator1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_declarator1",
    sizeof(PyCAst_object_direct_declarator1),
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
    "Object representing the direct_declarator1 for pattern [direct_declarator,'[',constant_expression,']']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_declarator1,
    PyCAst_members_direct_declarator1,
    PyCAst_getsetter_direct_declarator1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_declarator1,
    0,
    PyCAst_new_direct_declarator1,



};








/*==============================================================*\
DEFINITION OF direct_declarator2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator2 *_p_cast_object;
}PyCAst_object_direct_declarator2;



static PyMethodDef PyCAst_methods_direct_declarator2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_declarator2 [] = {
    {NULL}
};
static int PyCAst_init_direct_declarator2(PyCAst_object_direct_declarator2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_declarator2_ast(PyObject *_self)
{
	PyCAst_object_direct_declarator2 *self=(PyCAst_object_direct_declarator2*)(_self);
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

PyObject* PyCAst_getter_direct_declarator2_parameter_type_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_declarator2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_declarator2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_declarator2\n\n");
    PyCAst_object_direct_declarator2 *self;
    self = (PyCAst_object_direct_declarator2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_declarator2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_declarator2",
    sizeof(PyCAst_object_direct_declarator2),
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
    "Object representing the direct_declarator2 for pattern [direct_declarator,'(',parameter_type_list,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_declarator2,
    PyCAst_members_direct_declarator2,
    PyCAst_getsetter_direct_declarator2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_declarator2,
    0,
    PyCAst_new_direct_declarator2,



};








/*==============================================================*\
DEFINITION OF direct_declarator3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator3 *_p_cast_object;
}PyCAst_object_direct_declarator3;



static PyMethodDef PyCAst_methods_direct_declarator3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_declarator3 [] = {
    {NULL}
};
static int PyCAst_init_direct_declarator3(PyCAst_object_direct_declarator3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_declarator3_ast(PyObject *_self)
{
	PyCAst_object_direct_declarator3 *self=(PyCAst_object_direct_declarator3*)(_self);
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

PyObject* PyCAst_getter_direct_declarator3_identifier_list(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_declarator3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_declarator3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_declarator3\n\n");
    PyCAst_object_direct_declarator3 *self;
    self = (PyCAst_object_direct_declarator3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_declarator3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_declarator3",
    sizeof(PyCAst_object_direct_declarator3),
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
    "Object representing the direct_declarator3 for pattern [direct_declarator,'(',identifier_list,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_declarator3,
    PyCAst_members_direct_declarator3,
    PyCAst_getsetter_direct_declarator3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_declarator3,
    0,
    PyCAst_new_direct_declarator3,



};








/*==============================================================*\
DEFINITION OF direct_declarator4

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator4 *_p_cast_object;
}PyCAst_object_direct_declarator4;



static PyMethodDef PyCAst_methods_direct_declarator4 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_declarator4 [] = {
    {NULL}
};
static int PyCAst_init_direct_declarator4(PyCAst_object_direct_declarator4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator4\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_declarator4_ast(PyObject *_self)
{
	PyCAst_object_direct_declarator4 *self=(PyCAst_object_direct_declarator4*)(_self);
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

PyObject* PyCAst_getter_direct_declarator4_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_declarator4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_declarator4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_declarator4\n\n");
    PyCAst_object_direct_declarator4 *self;
    self = (PyCAst_object_direct_declarator4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_declarator4 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_declarator4",
    sizeof(PyCAst_object_direct_declarator4),
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
    "Object representing the direct_declarator4 for pattern ['(',declarator,')']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_declarator4,
    PyCAst_members_direct_declarator4,
    PyCAst_getsetter_direct_declarator4,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_declarator4,
    0,
    PyCAst_new_direct_declarator4,



};








/*==============================================================*\
DEFINITION OF direct_declarator5

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator5 *_p_cast_object;
}PyCAst_object_direct_declarator5;



static PyMethodDef PyCAst_methods_direct_declarator5 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_direct_declarator5 [] = {
    {NULL}
};
static int PyCAst_init_direct_declarator5(PyCAst_object_direct_declarator5 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator5\n\n");
    return 0;
}
static PyObject *PyCAst_getter_direct_declarator5_ast(PyObject *_self)
{
	PyCAst_object_direct_declarator5 *self=(PyCAst_object_direct_declarator5*)(_self);
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

PyObject* PyCAst_getter_direct_declarator5_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_direct_declarator5[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator5_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_direct_declarator5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::direct_declarator5\n\n");
    PyCAst_object_direct_declarator5 *self;
    self = (PyCAst_object_direct_declarator5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_direct_declarator5 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.direct_declarator5",
    sizeof(PyCAst_object_direct_declarator5),
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
    "Object representing the direct_declarator5 for pattern [IDENTIFIER]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_direct_declarator5,
    PyCAst_members_direct_declarator5,
    PyCAst_getsetter_direct_declarator5,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_direct_declarator5,
    0,
    PyCAst_new_direct_declarator5,



};








/*==============================================================*\
DEFINITION OF logical_and_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::logical_and_expression *_p_cast_object;
}PyCAst_object_logical_and_expression;



static PyMethodDef PyCAst_methods_logical_and_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_logical_and_expression [] = {
    {NULL}
};
static int PyCAst_init_logical_and_expression(PyCAst_object_logical_and_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::logical_and_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_logical_and_expression_ast(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);
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

PyObject* PyCAst_getter_logical_and_expression_inclusive_or_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_logical_and_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_logical_and_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_logical_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::logical_and_expression\n\n");
    PyCAst_object_logical_and_expression *self;
    self = (PyCAst_object_logical_and_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_logical_and_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.logical_and_expression",
    sizeof(PyCAst_object_logical_and_expression),
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
    "Object representing the logical_and_expression for pattern [logical_and_expression,AND_OP,inclusive_or_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_logical_and_expression,
    PyCAst_members_logical_and_expression,
    PyCAst_getsetter_logical_and_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_logical_and_expression,
    0,
    PyCAst_new_logical_and_expression,



};








/*==============================================================*\
DEFINITION OF init_declarator_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::init_declarator_list *_p_cast_object;
}PyCAst_object_init_declarator_list;



static PyMethodDef PyCAst_methods_init_declarator_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_init_declarator_list [] = {
    {NULL}
};
static int PyCAst_init_init_declarator_list(PyCAst_object_init_declarator_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::init_declarator_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_init_declarator_list_ast(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);
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

PyObject* PyCAst_getter_init_declarator_list_init_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_init_declarator_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_init_declarator_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_init_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::init_declarator_list\n\n");
    PyCAst_object_init_declarator_list *self;
    self = (PyCAst_object_init_declarator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_init_declarator_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.init_declarator_list",
    sizeof(PyCAst_object_init_declarator_list),
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
    "Object representing the init_declarator_list for pattern [init_declarator_list,',',init_declarator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_init_declarator_list,
    PyCAst_members_init_declarator_list,
    PyCAst_getsetter_init_declarator_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_init_declarator_list,
    0,
    PyCAst_new_init_declarator_list,



};








/*==============================================================*\
DEFINITION OF shift_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::shift_expression *_p_cast_object;
}PyCAst_object_shift_expression;



static PyMethodDef PyCAst_methods_shift_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_shift_expression [] = {
    {NULL}
};
static int PyCAst_init_shift_expression(PyCAst_object_shift_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::shift_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_shift_expression_ast(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);
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

PyObject* PyCAst_getter_shift_expression_additive_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_shift_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_shift_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_shift_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::shift_expression\n\n");
    PyCAst_object_shift_expression *self;
    self = (PyCAst_object_shift_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_shift_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.shift_expression",
    sizeof(PyCAst_object_shift_expression),
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
    "Object representing the shift_expression for pattern [shift_expression,LEFT_OP,additive_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_shift_expression,
    PyCAst_members_shift_expression,
    PyCAst_getsetter_shift_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_shift_expression,
    0,
    PyCAst_new_shift_expression,



};








/*==============================================================*\
DEFINITION OF identifier_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::identifier_list *_p_cast_object;
}PyCAst_object_identifier_list;



static PyMethodDef PyCAst_methods_identifier_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_identifier_list [] = {
    {NULL}
};
static int PyCAst_init_identifier_list(PyCAst_object_identifier_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::identifier_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_identifier_list_ast(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);
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

PyObject* PyCAst_getter_identifier_list_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_identifier_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_identifier_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_identifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::identifier_list\n\n");
    PyCAst_object_identifier_list *self;
    self = (PyCAst_object_identifier_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_identifier_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.identifier_list",
    sizeof(PyCAst_object_identifier_list),
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
    "Object representing the identifier_list for pattern [identifier_list,',',IDENTIFIER]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_identifier_list,
    PyCAst_members_identifier_list,
    PyCAst_getsetter_identifier_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_identifier_list,
    0,
    PyCAst_new_identifier_list,



};








/*==============================================================*\
DEFINITION OF jump_statement1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::jump_statement1 *_p_cast_object;
}PyCAst_object_jump_statement1;



static PyMethodDef PyCAst_methods_jump_statement1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_jump_statement1 [] = {
    {NULL}
};
static int PyCAst_init_jump_statement1(PyCAst_object_jump_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::jump_statement1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_jump_statement1_ast(PyObject *_self)
{
	PyCAst_object_jump_statement1 *self=(PyCAst_object_jump_statement1*)(_self);
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

PyObject* PyCAst_getter_jump_statement1_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_jump_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_jump_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_jump_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::jump_statement1\n\n");
    PyCAst_object_jump_statement1 *self;
    self = (PyCAst_object_jump_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_jump_statement1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.jump_statement1",
    sizeof(PyCAst_object_jump_statement1),
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
    "Object representing the jump_statement1 for pattern [GOTO,IDENTIFIER,';']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_jump_statement1,
    PyCAst_members_jump_statement1,
    PyCAst_getsetter_jump_statement1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_jump_statement1,
    0,
    PyCAst_new_jump_statement1,



};








/*==============================================================*\
DEFINITION OF jump_statement2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::jump_statement2 *_p_cast_object;
}PyCAst_object_jump_statement2;



static PyMethodDef PyCAst_methods_jump_statement2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_jump_statement2 [] = {
    {NULL}
};
static int PyCAst_init_jump_statement2(PyCAst_object_jump_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::jump_statement2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_jump_statement2_ast(PyObject *_self)
{
	PyCAst_object_jump_statement2 *self=(PyCAst_object_jump_statement2*)(_self);
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

PyObject* PyCAst_getter_jump_statement2_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_jump_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_jump_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_jump_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::jump_statement2\n\n");
    PyCAst_object_jump_statement2 *self;
    self = (PyCAst_object_jump_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_jump_statement2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.jump_statement2",
    sizeof(PyCAst_object_jump_statement2),
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
    "Object representing the jump_statement2 for pattern [RETURN,expression,';']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_jump_statement2,
    PyCAst_members_jump_statement2,
    PyCAst_getsetter_jump_statement2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_jump_statement2,
    0,
    PyCAst_new_jump_statement2,



};








/*==============================================================*\
DEFINITION OF jump_statement3

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::jump_statement3 *_p_cast_object;
}PyCAst_object_jump_statement3;



static PyMethodDef PyCAst_methods_jump_statement3 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_jump_statement3 [] = {
    {NULL}
};
static int PyCAst_init_jump_statement3(PyCAst_object_jump_statement3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::jump_statement3\n\n");
    return 0;
}
static PyObject *PyCAst_getter_jump_statement3_ast(PyObject *_self)
{
	PyCAst_object_jump_statement3 *self=(PyCAst_object_jump_statement3*)(_self);
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

PyObject* PyCAst_getter_jump_statement3_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_jump_statement3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_jump_statement3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_jump_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::jump_statement3\n\n");
    PyCAst_object_jump_statement3 *self;
    self = (PyCAst_object_jump_statement3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_jump_statement3 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.jump_statement3",
    sizeof(PyCAst_object_jump_statement3),
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
    "Object representing the jump_statement3 for pattern [CONTINUE,';']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_jump_statement3,
    PyCAst_members_jump_statement3,
    PyCAst_getsetter_jump_statement3,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_jump_statement3,
    0,
    PyCAst_new_jump_statement3,



};








/*==============================================================*\
DEFINITION OF struct_declarator

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::struct_declarator *_p_cast_object;
}PyCAst_object_struct_declarator;



static PyMethodDef PyCAst_methods_struct_declarator [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_struct_declarator [] = {
    {NULL}
};
static int PyCAst_init_struct_declarator(PyCAst_object_struct_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declarator\n\n");
    return 0;
}
static PyObject *PyCAst_getter_struct_declarator_ast(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
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

PyObject* PyCAst_getter_struct_declarator_constant_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_struct_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_struct_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::struct_declarator\n\n");
    PyCAst_object_struct_declarator *self;
    self = (PyCAst_object_struct_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_struct_declarator = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.struct_declarator",
    sizeof(PyCAst_object_struct_declarator),
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
    "Object representing the struct_declarator for pattern [declarator,':',constant_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_struct_declarator,
    PyCAst_members_struct_declarator,
    PyCAst_getsetter_struct_declarator,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_struct_declarator,
    0,
    PyCAst_new_struct_declarator,



};








/*==============================================================*\
DEFINITION OF function_definition

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::function_definition *_p_cast_object;
}PyCAst_object_function_definition;



static PyMethodDef PyCAst_methods_function_definition [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_function_definition [] = {
    {NULL}
};
static int PyCAst_init_function_definition(PyCAst_object_function_definition *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::function_definition\n\n");
    return 0;
}
static PyObject *PyCAst_getter_function_definition_ast(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
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

PyObject* PyCAst_getter_function_definition_compound_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_function_definition[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_function_definition_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_function_definition(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::function_definition\n\n");
    PyCAst_object_function_definition *self;
    self = (PyCAst_object_function_definition*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_function_definition = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.function_definition",
    sizeof(PyCAst_object_function_definition),
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
    "Object representing the function_definition for pattern [declaration_specifiers,declarator,declaration_list,compound_statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_function_definition,
    PyCAst_members_function_definition,
    PyCAst_getsetter_function_definition,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_function_definition,
    0,
    PyCAst_new_function_definition,



};








/*==============================================================*\
DEFINITION OF parameter_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::parameter_list *_p_cast_object;
}PyCAst_object_parameter_list;



static PyMethodDef PyCAst_methods_parameter_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_parameter_list [] = {
    {NULL}
};
static int PyCAst_init_parameter_list(PyCAst_object_parameter_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_parameter_list_ast(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);
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

PyObject* PyCAst_getter_parameter_list_parameter_declaration(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_parameter_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_parameter_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::parameter_list\n\n");
    PyCAst_object_parameter_list *self;
    self = (PyCAst_object_parameter_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_parameter_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.parameter_list",
    sizeof(PyCAst_object_parameter_list),
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
    "Object representing the parameter_list for pattern [parameter_list,',',parameter_declaration]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_parameter_list,
    PyCAst_members_parameter_list,
    PyCAst_getsetter_parameter_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_parameter_list,
    0,
    PyCAst_new_parameter_list,



};








/*==============================================================*\
DEFINITION OF enum_specifier

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::enum_specifier *_p_cast_object;
}PyCAst_object_enum_specifier;



static PyMethodDef PyCAst_methods_enum_specifier [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_enum_specifier [] = {
    {NULL}
};
static int PyCAst_init_enum_specifier(PyCAst_object_enum_specifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::enum_specifier\n\n");
    return 0;
}
static PyObject *PyCAst_getter_enum_specifier_ast(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
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

PyObject* PyCAst_getter_enum_specifier_token3(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_enum_specifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_enum_specifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_enum_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::enum_specifier\n\n");
    PyCAst_object_enum_specifier *self;
    self = (PyCAst_object_enum_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_enum_specifier = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.enum_specifier",
    sizeof(PyCAst_object_enum_specifier),
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
    "Object representing the enum_specifier for pattern [ENUM,IDENTIFIER,'{',enumerator_list,'}']",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_enum_specifier,
    PyCAst_members_enum_specifier,
    PyCAst_getsetter_enum_specifier,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_enum_specifier,
    0,
    PyCAst_new_enum_specifier,



};








/*==============================================================*\
DEFINITION OF type_qualifier

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::type_qualifier *_p_cast_object;
}PyCAst_object_type_qualifier;



static PyMethodDef PyCAst_methods_type_qualifier [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_type_qualifier [] = {
    {NULL}
};
static int PyCAst_init_type_qualifier(PyCAst_object_type_qualifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_qualifier\n\n");
    return 0;
}
static PyObject *PyCAst_getter_type_qualifier_ast(PyObject *_self)
{
	PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)(_self);
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

PyObject* PyCAst_getter_type_qualifier_token1(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_type_qualifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_qualifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_type_qualifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::type_qualifier\n\n");
    PyCAst_object_type_qualifier *self;
    self = (PyCAst_object_type_qualifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_type_qualifier = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.type_qualifier",
    sizeof(PyCAst_object_type_qualifier),
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
    "Object representing the type_qualifier for pattern [CONST]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_type_qualifier,
    PyCAst_members_type_qualifier,
    PyCAst_getsetter_type_qualifier,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_type_qualifier,
    0,
    PyCAst_new_type_qualifier,



};








/*==============================================================*\
DEFINITION OF enumerator_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::enumerator_list *_p_cast_object;
}PyCAst_object_enumerator_list;



static PyMethodDef PyCAst_methods_enumerator_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_enumerator_list [] = {
    {NULL}
};
static int PyCAst_init_enumerator_list(PyCAst_object_enumerator_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::enumerator_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_enumerator_list_ast(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);
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

PyObject* PyCAst_getter_enumerator_list_enumerator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_enumerator_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_enumerator_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_enumerator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::enumerator_list\n\n");
    PyCAst_object_enumerator_list *self;
    self = (PyCAst_object_enumerator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_enumerator_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.enumerator_list",
    sizeof(PyCAst_object_enumerator_list),
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
    "Object representing the enumerator_list for pattern [enumerator_list,',',enumerator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_enumerator_list,
    PyCAst_members_enumerator_list,
    PyCAst_getsetter_enumerator_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_enumerator_list,
    0,
    PyCAst_new_enumerator_list,



};








/*==============================================================*\
DEFINITION OF labeled_statement1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::labeled_statement1 *_p_cast_object;
}PyCAst_object_labeled_statement1;



static PyMethodDef PyCAst_methods_labeled_statement1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_labeled_statement1 [] = {
    {NULL}
};
static int PyCAst_init_labeled_statement1(PyCAst_object_labeled_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::labeled_statement1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_labeled_statement1_ast(PyObject *_self)
{
	PyCAst_object_labeled_statement1 *self=(PyCAst_object_labeled_statement1*)(_self);
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

PyObject* PyCAst_getter_labeled_statement1_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_labeled_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_labeled_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_labeled_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::labeled_statement1\n\n");
    PyCAst_object_labeled_statement1 *self;
    self = (PyCAst_object_labeled_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_labeled_statement1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.labeled_statement1",
    sizeof(PyCAst_object_labeled_statement1),
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
    "Object representing the labeled_statement1 for pattern [CASE,constant_expression,':',statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_labeled_statement1,
    PyCAst_members_labeled_statement1,
    PyCAst_getsetter_labeled_statement1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_labeled_statement1,
    0,
    PyCAst_new_labeled_statement1,



};








/*==============================================================*\
DEFINITION OF labeled_statement2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::labeled_statement2 *_p_cast_object;
}PyCAst_object_labeled_statement2;



static PyMethodDef PyCAst_methods_labeled_statement2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_labeled_statement2 [] = {
    {NULL}
};
static int PyCAst_init_labeled_statement2(PyCAst_object_labeled_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::labeled_statement2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_labeled_statement2_ast(PyObject *_self)
{
	PyCAst_object_labeled_statement2 *self=(PyCAst_object_labeled_statement2*)(_self);
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

PyObject* PyCAst_getter_labeled_statement2_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_labeled_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_labeled_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_labeled_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::labeled_statement2\n\n");
    PyCAst_object_labeled_statement2 *self;
    self = (PyCAst_object_labeled_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_labeled_statement2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.labeled_statement2",
    sizeof(PyCAst_object_labeled_statement2),
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
    "Object representing the labeled_statement2 for pattern [IDENTIFIER,':',statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_labeled_statement2,
    PyCAst_members_labeled_statement2,
    PyCAst_getsetter_labeled_statement2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_labeled_statement2,
    0,
    PyCAst_new_labeled_statement2,



};








/*==============================================================*\
DEFINITION OF declaration_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::declaration_list *_p_cast_object;
}PyCAst_object_declaration_list;



static PyMethodDef PyCAst_methods_declaration_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_declaration_list [] = {
    {NULL}
};
static int PyCAst_init_declaration_list(PyCAst_object_declaration_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_declaration_list_ast(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);
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

PyObject* PyCAst_getter_declaration_list_declaration(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_declaration_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::declaration_list\n\n");
    PyCAst_object_declaration_list *self;
    self = (PyCAst_object_declaration_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_declaration_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.declaration_list",
    sizeof(PyCAst_object_declaration_list),
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
    "Object representing the declaration_list for pattern [declaration_list,declaration]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_declaration_list,
    PyCAst_members_declaration_list,
    PyCAst_getsetter_declaration_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_declaration_list,
    0,
    PyCAst_new_declaration_list,



};








/*==============================================================*\
DEFINITION OF specifier_qualifier_list1

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list1 *_p_cast_object;
}PyCAst_object_specifier_qualifier_list1;



static PyMethodDef PyCAst_methods_specifier_qualifier_list1 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_specifier_qualifier_list1 [] = {
    {NULL}
};
static int PyCAst_init_specifier_qualifier_list1(PyCAst_object_specifier_qualifier_list1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::specifier_qualifier_list1\n\n");
    return 0;
}
static PyObject *PyCAst_getter_specifier_qualifier_list1_ast(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list1 *self=(PyCAst_object_specifier_qualifier_list1*)(_self);
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

PyObject* PyCAst_getter_specifier_qualifier_list1_type_specifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_specifier_qualifier_list1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_specifier_qualifier_list1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::specifier_qualifier_list1\n\n");
    PyCAst_object_specifier_qualifier_list1 *self;
    self = (PyCAst_object_specifier_qualifier_list1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_specifier_qualifier_list1 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.specifier_qualifier_list1",
    sizeof(PyCAst_object_specifier_qualifier_list1),
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
    "Object representing the specifier_qualifier_list1 for pattern [type_specifier,specifier_qualifier_list]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_specifier_qualifier_list1,
    PyCAst_members_specifier_qualifier_list1,
    PyCAst_getsetter_specifier_qualifier_list1,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_specifier_qualifier_list1,
    0,
    PyCAst_new_specifier_qualifier_list1,



};








/*==============================================================*\
DEFINITION OF specifier_qualifier_list2

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list2 *_p_cast_object;
}PyCAst_object_specifier_qualifier_list2;



static PyMethodDef PyCAst_methods_specifier_qualifier_list2 [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_specifier_qualifier_list2 [] = {
    {NULL}
};
static int PyCAst_init_specifier_qualifier_list2(PyCAst_object_specifier_qualifier_list2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::specifier_qualifier_list2\n\n");
    return 0;
}
static PyObject *PyCAst_getter_specifier_qualifier_list2_ast(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list2 *self=(PyCAst_object_specifier_qualifier_list2*)(_self);
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

PyObject* PyCAst_getter_specifier_qualifier_list2_type_qualifier(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_specifier_qualifier_list2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_specifier_qualifier_list2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::specifier_qualifier_list2\n\n");
    PyCAst_object_specifier_qualifier_list2 *self;
    self = (PyCAst_object_specifier_qualifier_list2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_specifier_qualifier_list2 = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.specifier_qualifier_list2",
    sizeof(PyCAst_object_specifier_qualifier_list2),
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
    "Object representing the specifier_qualifier_list2 for pattern [type_qualifier,specifier_qualifier_list]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_specifier_qualifier_list2,
    PyCAst_members_specifier_qualifier_list2,
    PyCAst_getsetter_specifier_qualifier_list2,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_specifier_qualifier_list2,
    0,
    PyCAst_new_specifier_qualifier_list2,



};








/*==============================================================*\
DEFINITION OF translation_unit

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::translation_unit *_p_cast_object;
}PyCAst_object_translation_unit;



static PyMethodDef PyCAst_methods_translation_unit [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_translation_unit [] = {
    {NULL}
};
static int PyCAst_init_translation_unit(PyCAst_object_translation_unit *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::translation_unit\n\n");
    return 0;
}
static PyObject *PyCAst_getter_translation_unit_ast(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);
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

PyObject* PyCAst_getter_translation_unit_external_declaration(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_translation_unit[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_translation_unit_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_translation_unit(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::translation_unit\n\n");
    PyCAst_object_translation_unit *self;
    self = (PyCAst_object_translation_unit*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_translation_unit = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.translation_unit",
    sizeof(PyCAst_object_translation_unit),
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
    "Object representing the translation_unit for pattern [translation_unit,external_declaration]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_translation_unit,
    PyCAst_members_translation_unit,
    PyCAst_getsetter_translation_unit,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_translation_unit,
    0,
    PyCAst_new_translation_unit,



};








/*==============================================================*\
DEFINITION OF constant_expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::constant_expression *_p_cast_object;
}PyCAst_object_constant_expression;



static PyMethodDef PyCAst_methods_constant_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_constant_expression [] = {
    {NULL}
};
static int PyCAst_init_constant_expression(PyCAst_object_constant_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::constant_expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_constant_expression_ast(PyObject *_self)
{
	PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)(_self);
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

PyObject* PyCAst_getter_constant_expression_conditional_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_constant_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_constant_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_constant_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::constant_expression\n\n");
    PyCAst_object_constant_expression *self;
    self = (PyCAst_object_constant_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_constant_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.constant_expression",
    sizeof(PyCAst_object_constant_expression),
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
    "Object representing the constant_expression for pattern [conditional_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_constant_expression,
    PyCAst_members_constant_expression,
    PyCAst_getsetter_constant_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_constant_expression,
    0,
    PyCAst_new_constant_expression,



};








/*==============================================================*\
DEFINITION OF initializer_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::initializer_list *_p_cast_object;
}PyCAst_object_initializer_list;



static PyMethodDef PyCAst_methods_initializer_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_initializer_list [] = {
    {NULL}
};
static int PyCAst_init_initializer_list(PyCAst_object_initializer_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::initializer_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_initializer_list_ast(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);
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

PyObject* PyCAst_getter_initializer_list_initializer(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_initializer_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_initializer_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_initializer_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::initializer_list\n\n");
    PyCAst_object_initializer_list *self;
    self = (PyCAst_object_initializer_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_initializer_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.initializer_list",
    sizeof(PyCAst_object_initializer_list),
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
    "Object representing the initializer_list for pattern [initializer_list,',',initializer]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_initializer_list,
    PyCAst_members_initializer_list,
    PyCAst_getsetter_initializer_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_initializer_list,
    0,
    PyCAst_new_initializer_list,



};








/*==============================================================*\
DEFINITION OF statement_list

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::statement_list *_p_cast_object;
}PyCAst_object_statement_list;



static PyMethodDef PyCAst_methods_statement_list [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_statement_list [] = {
    {NULL}
};
static int PyCAst_init_statement_list(PyCAst_object_statement_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement_list\n\n");
    return 0;
}
static PyObject *PyCAst_getter_statement_list_ast(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);
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

PyObject* PyCAst_getter_statement_list_statement(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_statement_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_statement_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::statement_list\n\n");
    PyCAst_object_statement_list *self;
    self = (PyCAst_object_statement_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_statement_list = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.statement_list",
    sizeof(PyCAst_object_statement_list),
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
    "Object representing the statement_list for pattern [statement_list,statement]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_statement_list,
    PyCAst_members_statement_list,
    PyCAst_getsetter_statement_list,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_statement_list,
    0,
    PyCAst_new_statement_list,



};








/*==============================================================*\
DEFINITION OF expression

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::expression *_p_cast_object;
}PyCAst_object_expression;



static PyMethodDef PyCAst_methods_expression [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_expression [] = {
    {NULL}
};
static int PyCAst_init_expression(PyCAst_object_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::expression\n\n");
    return 0;
}
static PyObject *PyCAst_getter_expression_ast(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);
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

PyObject* PyCAst_getter_expression_assignment_expression(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::expression\n\n");
    PyCAst_object_expression *self;
    self = (PyCAst_object_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_expression = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.expression",
    sizeof(PyCAst_object_expression),
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
    "Object representing the expression for pattern [expression,',',assignment_expression]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_expression,
    PyCAst_members_expression,
    PyCAst_getsetter_expression,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_expression,
    0,
    PyCAst_new_expression,



};








/*==============================================================*\
DEFINITION OF declarator

\*==============================================================*/
typedef struct
{
	PyObject_HEAD
	CAst::declarator *_p_cast_object;
}PyCAst_object_declarator;



static PyMethodDef PyCAst_methods_declarator [] = {
    {NULL}
};
static PyMemberDef PyCAst_members_declarator [] = {
    {NULL}
};
static int PyCAst_init_declarator(PyCAst_object_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declarator\n\n");
    return 0;
}
static PyObject *PyCAst_getter_declarator_ast(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
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

PyObject* PyCAst_getter_declarator_direct_declarator(PyObject* attr)
{
	return PyString_FromString("test");
}


static PyGetSetDef PyCAst_getsetter_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	NULL
};


static PyObject * PyCAst_new_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("new PyCAst::declarator\n\n");
    PyCAst_object_declarator *self;
    self = (PyCAst_object_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static PyTypeObject  PyCAst_type_declarator = {
    PyObject_HEAD_INIT(NULL)
    0,
    "CAst.declarator",
    sizeof(PyCAst_object_declarator),
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
    "Object representing the declarator for pattern [pointer,direct_declarator]",
    0,
    0,
    0,
    0,
    0,
    0,
    PyCAst_methods_declarator,
    PyCAst_members_declarator,
    PyCAst_getsetter_declarator,
    0,
    0,
    0,
    0,
    0,
    (initproc)PyCAst_init_declarator,
    0,
    PyCAst_new_declarator,



};




static PyObject* parseFile(PyObject *args,PyObject *kwargs)
{
	CAst::translation_unit *tu=CAst::parseFile("test.c");
	PyCAst_object_translation_unit *pyTu=(PyCAst_object_translation_unit*)PyCAst_type_translation_unit.tp_new(&PyCAst_type_translation_unit,NULL,NULL);
	pyTu->_p_cast_object=tu;
	return (PyObject*)pyTu;
}

static PyMethodDef module_methods[] = {
	{ "parseFile",(PyCFunction)parseFile,METH_KEYWORDS,"parses a file"},
	NULL
};


#ifndef PyMODINIT_FUNC
#define PyMODINIT_FUNC void
#endif
PyMODINIT_FUNC
initPyCAst(void) 
{
    PyObject* m;
	if (PyType_Ready(&PyCAst_type_storage_class_specifier) < 0) {printf("Initialization of PyCAst_type_storage_class_specifier FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_expression_statement) < 0) {printf("Initialization of PyCAst_type_expression_statement FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_type_name) < 0) {printf("Initialization of PyCAst_type_type_name FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression1) < 0) {printf("Initialization of PyCAst_type_unary_expression1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression2) < 0) {printf("Initialization of PyCAst_type_unary_expression2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression3) < 0) {printf("Initialization of PyCAst_type_unary_expression3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression4) < 0) {printf("Initialization of PyCAst_type_unary_expression4 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_conditional_expression) < 0) {printf("Initialization of PyCAst_type_conditional_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_struct_or_union_specifier) < 0) {printf("Initialization of PyCAst_type_struct_or_union_specifier FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_exclusive_or_expression) < 0) {printf("Initialization of PyCAst_type_exclusive_or_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_initializer1) < 0) {printf("Initialization of PyCAst_type_initializer1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_initializer2) < 0) {printf("Initialization of PyCAst_type_initializer2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration_list) < 0) {printf("Initialization of PyCAst_type_struct_declaration_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_assignment_operator) < 0) {printf("Initialization of PyCAst_type_assignment_operator FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration) < 0) {printf("Initialization of PyCAst_type_struct_declaration FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_abstract_declarator) < 0) {printf("Initialization of PyCAst_type_abstract_declarator FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement1) < 0) {printf("Initialization of PyCAst_type_iteration_statement1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement2) < 0) {printf("Initialization of PyCAst_type_iteration_statement2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement3) < 0) {printf("Initialization of PyCAst_type_iteration_statement3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_additive_expression) < 0) {printf("Initialization of PyCAst_type_additive_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_external_declaration1) < 0) {printf("Initialization of PyCAst_type_external_declaration1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_external_declaration2) < 0) {printf("Initialization of PyCAst_type_external_declaration2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier1) < 0) {printf("Initialization of PyCAst_type_type_specifier1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier2) < 0) {printf("Initialization of PyCAst_type_type_specifier2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier3) < 0) {printf("Initialization of PyCAst_type_type_specifier3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_compound_statement) < 0) {printf("Initialization of PyCAst_type_compound_statement FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_inclusive_or_expression) < 0) {printf("Initialization of PyCAst_type_inclusive_or_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_pointer) < 0) {printf("Initialization of PyCAst_type_pointer FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_selection_statement1) < 0) {printf("Initialization of PyCAst_type_selection_statement1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_selection_statement2) < 0) {printf("Initialization of PyCAst_type_selection_statement2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression1) < 0) {printf("Initialization of PyCAst_type_postfix_expression1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression2) < 0) {printf("Initialization of PyCAst_type_postfix_expression2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression3) < 0) {printf("Initialization of PyCAst_type_postfix_expression3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression4) < 0) {printf("Initialization of PyCAst_type_postfix_expression4 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression5) < 0) {printf("Initialization of PyCAst_type_postfix_expression5 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_and_expression) < 0) {printf("Initialization of PyCAst_type_and_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_statement1) < 0) {printf("Initialization of PyCAst_type_statement1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_statement2) < 0) {printf("Initialization of PyCAst_type_statement2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_statement3) < 0) {printf("Initialization of PyCAst_type_statement3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_statement4) < 0) {printf("Initialization of PyCAst_type_statement4 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_statement5) < 0) {printf("Initialization of PyCAst_type_statement5 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_statement6) < 0) {printf("Initialization of PyCAst_type_statement6 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_cast_expression1) < 0) {printf("Initialization of PyCAst_type_cast_expression1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_cast_expression2) < 0) {printf("Initialization of PyCAst_type_cast_expression2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator) < 0) {printf("Initialization of PyCAst_type_init_declarator FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator_list) < 0) {printf("Initialization of PyCAst_type_struct_declarator_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_logical_or_expression) < 0) {printf("Initialization of PyCAst_type_logical_or_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_unary_operator) < 0) {printf("Initialization of PyCAst_type_unary_operator FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_relational_expression) < 0) {printf("Initialization of PyCAst_type_relational_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_struct_or_union) < 0) {printf("Initialization of PyCAst_type_struct_or_union FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_enumerator) < 0) {printf("Initialization of PyCAst_type_enumerator FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_assignment_expression1) < 0) {printf("Initialization of PyCAst_type_assignment_expression1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_assignment_expression2) < 0) {printf("Initialization of PyCAst_type_assignment_expression2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_parameter_type_list) < 0) {printf("Initialization of PyCAst_type_parameter_type_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_parameter_declaration1) < 0) {printf("Initialization of PyCAst_type_parameter_declaration1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_parameter_declaration2) < 0) {printf("Initialization of PyCAst_type_parameter_declaration2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_multiplicative_expression) < 0) {printf("Initialization of PyCAst_type_multiplicative_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier_list) < 0) {printf("Initialization of PyCAst_type_type_qualifier_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_argument_expression_list) < 0) {printf("Initialization of PyCAst_type_argument_expression_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator1) < 0) {printf("Initialization of PyCAst_type_direct_abstract_declarator1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator2) < 0) {printf("Initialization of PyCAst_type_direct_abstract_declarator2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator3) < 0) {printf("Initialization of PyCAst_type_direct_abstract_declarator3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_equality_expression) < 0) {printf("Initialization of PyCAst_type_equality_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_primary_expression1) < 0) {printf("Initialization of PyCAst_type_primary_expression1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_primary_expression2) < 0) {printf("Initialization of PyCAst_type_primary_expression2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers1) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers2) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers3) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_declaration) < 0) {printf("Initialization of PyCAst_type_declaration FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator1) < 0) {printf("Initialization of PyCAst_type_direct_declarator1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator2) < 0) {printf("Initialization of PyCAst_type_direct_declarator2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator3) < 0) {printf("Initialization of PyCAst_type_direct_declarator3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator4) < 0) {printf("Initialization of PyCAst_type_direct_declarator4 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator5) < 0) {printf("Initialization of PyCAst_type_direct_declarator5 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_logical_and_expression) < 0) {printf("Initialization of PyCAst_type_logical_and_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator_list) < 0) {printf("Initialization of PyCAst_type_init_declarator_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_shift_expression) < 0) {printf("Initialization of PyCAst_type_shift_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_identifier_list) < 0) {printf("Initialization of PyCAst_type_identifier_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement1) < 0) {printf("Initialization of PyCAst_type_jump_statement1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement2) < 0) {printf("Initialization of PyCAst_type_jump_statement2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement3) < 0) {printf("Initialization of PyCAst_type_jump_statement3 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator) < 0) {printf("Initialization of PyCAst_type_struct_declarator FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_function_definition) < 0) {printf("Initialization of PyCAst_type_function_definition FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_parameter_list) < 0) {printf("Initialization of PyCAst_type_parameter_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_enum_specifier) < 0) {printf("Initialization of PyCAst_type_enum_specifier FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier) < 0) {printf("Initialization of PyCAst_type_type_qualifier FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_enumerator_list) < 0) {printf("Initialization of PyCAst_type_enumerator_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_labeled_statement1) < 0) {printf("Initialization of PyCAst_type_labeled_statement1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_labeled_statement2) < 0) {printf("Initialization of PyCAst_type_labeled_statement2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_declaration_list) < 0) {printf("Initialization of PyCAst_type_declaration_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list1) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list1 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list2) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list2 FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_translation_unit) < 0) {printf("Initialization of PyCAst_type_translation_unit FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_constant_expression) < 0) {printf("Initialization of PyCAst_type_constant_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_initializer_list) < 0) {printf("Initialization of PyCAst_type_initializer_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_statement_list) < 0) {printf("Initialization of PyCAst_type_statement_list FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_expression) < 0) {printf("Initialization of PyCAst_type_expression FAILED\n\n");return;}
	if (PyType_Ready(&PyCAst_type_declarator) < 0) {printf("Initialization of PyCAst_type_declarator FAILED\n\n");return;}

    m = Py_InitModule3("PyCAst", module_methods,"The PyCAst Module");

    if (m == NULL) return;

	Py_INCREF(&PyCAst_type_storage_class_specifier);
	PyModule_AddObject(m,"storage_class_specifier", (PyObject *)&PyCAst_type_storage_class_specifier);

	Py_INCREF(&PyCAst_type_expression_statement);
	PyModule_AddObject(m,"expression_statement", (PyObject *)&PyCAst_type_expression_statement);

	Py_INCREF(&PyCAst_type_type_name);
	PyModule_AddObject(m,"type_name", (PyObject *)&PyCAst_type_type_name);

	Py_INCREF(&PyCAst_type_unary_expression1);
	PyModule_AddObject(m,"unary_expression1", (PyObject *)&PyCAst_type_unary_expression1);

	Py_INCREF(&PyCAst_type_unary_expression2);
	PyModule_AddObject(m,"unary_expression2", (PyObject *)&PyCAst_type_unary_expression2);

	Py_INCREF(&PyCAst_type_unary_expression3);
	PyModule_AddObject(m,"unary_expression3", (PyObject *)&PyCAst_type_unary_expression3);

	Py_INCREF(&PyCAst_type_unary_expression4);
	PyModule_AddObject(m,"unary_expression4", (PyObject *)&PyCAst_type_unary_expression4);

	Py_INCREF(&PyCAst_type_conditional_expression);
	PyModule_AddObject(m,"conditional_expression", (PyObject *)&PyCAst_type_conditional_expression);

	Py_INCREF(&PyCAst_type_struct_or_union_specifier);
	PyModule_AddObject(m,"struct_or_union_specifier", (PyObject *)&PyCAst_type_struct_or_union_specifier);

	Py_INCREF(&PyCAst_type_exclusive_or_expression);
	PyModule_AddObject(m,"exclusive_or_expression", (PyObject *)&PyCAst_type_exclusive_or_expression);

	Py_INCREF(&PyCAst_type_initializer1);
	PyModule_AddObject(m,"initializer1", (PyObject *)&PyCAst_type_initializer1);

	Py_INCREF(&PyCAst_type_initializer2);
	PyModule_AddObject(m,"initializer2", (PyObject *)&PyCAst_type_initializer2);

	Py_INCREF(&PyCAst_type_struct_declaration_list);
	PyModule_AddObject(m,"struct_declaration_list", (PyObject *)&PyCAst_type_struct_declaration_list);

	Py_INCREF(&PyCAst_type_assignment_operator);
	PyModule_AddObject(m,"assignment_operator", (PyObject *)&PyCAst_type_assignment_operator);

	Py_INCREF(&PyCAst_type_struct_declaration);
	PyModule_AddObject(m,"struct_declaration", (PyObject *)&PyCAst_type_struct_declaration);

	Py_INCREF(&PyCAst_type_abstract_declarator);
	PyModule_AddObject(m,"abstract_declarator", (PyObject *)&PyCAst_type_abstract_declarator);

	Py_INCREF(&PyCAst_type_iteration_statement1);
	PyModule_AddObject(m,"iteration_statement1", (PyObject *)&PyCAst_type_iteration_statement1);

	Py_INCREF(&PyCAst_type_iteration_statement2);
	PyModule_AddObject(m,"iteration_statement2", (PyObject *)&PyCAst_type_iteration_statement2);

	Py_INCREF(&PyCAst_type_iteration_statement3);
	PyModule_AddObject(m,"iteration_statement3", (PyObject *)&PyCAst_type_iteration_statement3);

	Py_INCREF(&PyCAst_type_additive_expression);
	PyModule_AddObject(m,"additive_expression", (PyObject *)&PyCAst_type_additive_expression);

	Py_INCREF(&PyCAst_type_external_declaration1);
	PyModule_AddObject(m,"external_declaration1", (PyObject *)&PyCAst_type_external_declaration1);

	Py_INCREF(&PyCAst_type_external_declaration2);
	PyModule_AddObject(m,"external_declaration2", (PyObject *)&PyCAst_type_external_declaration2);

	Py_INCREF(&PyCAst_type_type_specifier1);
	PyModule_AddObject(m,"type_specifier1", (PyObject *)&PyCAst_type_type_specifier1);

	Py_INCREF(&PyCAst_type_type_specifier2);
	PyModule_AddObject(m,"type_specifier2", (PyObject *)&PyCAst_type_type_specifier2);

	Py_INCREF(&PyCAst_type_type_specifier3);
	PyModule_AddObject(m,"type_specifier3", (PyObject *)&PyCAst_type_type_specifier3);

	Py_INCREF(&PyCAst_type_compound_statement);
	PyModule_AddObject(m,"compound_statement", (PyObject *)&PyCAst_type_compound_statement);

	Py_INCREF(&PyCAst_type_inclusive_or_expression);
	PyModule_AddObject(m,"inclusive_or_expression", (PyObject *)&PyCAst_type_inclusive_or_expression);

	Py_INCREF(&PyCAst_type_pointer);
	PyModule_AddObject(m,"pointer", (PyObject *)&PyCAst_type_pointer);

	Py_INCREF(&PyCAst_type_selection_statement1);
	PyModule_AddObject(m,"selection_statement1", (PyObject *)&PyCAst_type_selection_statement1);

	Py_INCREF(&PyCAst_type_selection_statement2);
	PyModule_AddObject(m,"selection_statement2", (PyObject *)&PyCAst_type_selection_statement2);

	Py_INCREF(&PyCAst_type_postfix_expression1);
	PyModule_AddObject(m,"postfix_expression1", (PyObject *)&PyCAst_type_postfix_expression1);

	Py_INCREF(&PyCAst_type_postfix_expression2);
	PyModule_AddObject(m,"postfix_expression2", (PyObject *)&PyCAst_type_postfix_expression2);

	Py_INCREF(&PyCAst_type_postfix_expression3);
	PyModule_AddObject(m,"postfix_expression3", (PyObject *)&PyCAst_type_postfix_expression3);

	Py_INCREF(&PyCAst_type_postfix_expression4);
	PyModule_AddObject(m,"postfix_expression4", (PyObject *)&PyCAst_type_postfix_expression4);

	Py_INCREF(&PyCAst_type_postfix_expression5);
	PyModule_AddObject(m,"postfix_expression5", (PyObject *)&PyCAst_type_postfix_expression5);

	Py_INCREF(&PyCAst_type_and_expression);
	PyModule_AddObject(m,"and_expression", (PyObject *)&PyCAst_type_and_expression);

	Py_INCREF(&PyCAst_type_statement1);
	PyModule_AddObject(m,"statement1", (PyObject *)&PyCAst_type_statement1);

	Py_INCREF(&PyCAst_type_statement2);
	PyModule_AddObject(m,"statement2", (PyObject *)&PyCAst_type_statement2);

	Py_INCREF(&PyCAst_type_statement3);
	PyModule_AddObject(m,"statement3", (PyObject *)&PyCAst_type_statement3);

	Py_INCREF(&PyCAst_type_statement4);
	PyModule_AddObject(m,"statement4", (PyObject *)&PyCAst_type_statement4);

	Py_INCREF(&PyCAst_type_statement5);
	PyModule_AddObject(m,"statement5", (PyObject *)&PyCAst_type_statement5);

	Py_INCREF(&PyCAst_type_statement6);
	PyModule_AddObject(m,"statement6", (PyObject *)&PyCAst_type_statement6);

	Py_INCREF(&PyCAst_type_cast_expression1);
	PyModule_AddObject(m,"cast_expression1", (PyObject *)&PyCAst_type_cast_expression1);

	Py_INCREF(&PyCAst_type_cast_expression2);
	PyModule_AddObject(m,"cast_expression2", (PyObject *)&PyCAst_type_cast_expression2);

	Py_INCREF(&PyCAst_type_init_declarator);
	PyModule_AddObject(m,"init_declarator", (PyObject *)&PyCAst_type_init_declarator);

	Py_INCREF(&PyCAst_type_struct_declarator_list);
	PyModule_AddObject(m,"struct_declarator_list", (PyObject *)&PyCAst_type_struct_declarator_list);

	Py_INCREF(&PyCAst_type_logical_or_expression);
	PyModule_AddObject(m,"logical_or_expression", (PyObject *)&PyCAst_type_logical_or_expression);

	Py_INCREF(&PyCAst_type_unary_operator);
	PyModule_AddObject(m,"unary_operator", (PyObject *)&PyCAst_type_unary_operator);

	Py_INCREF(&PyCAst_type_relational_expression);
	PyModule_AddObject(m,"relational_expression", (PyObject *)&PyCAst_type_relational_expression);

	Py_INCREF(&PyCAst_type_struct_or_union);
	PyModule_AddObject(m,"struct_or_union", (PyObject *)&PyCAst_type_struct_or_union);

	Py_INCREF(&PyCAst_type_enumerator);
	PyModule_AddObject(m,"enumerator", (PyObject *)&PyCAst_type_enumerator);

	Py_INCREF(&PyCAst_type_assignment_expression1);
	PyModule_AddObject(m,"assignment_expression1", (PyObject *)&PyCAst_type_assignment_expression1);

	Py_INCREF(&PyCAst_type_assignment_expression2);
	PyModule_AddObject(m,"assignment_expression2", (PyObject *)&PyCAst_type_assignment_expression2);

	Py_INCREF(&PyCAst_type_parameter_type_list);
	PyModule_AddObject(m,"parameter_type_list", (PyObject *)&PyCAst_type_parameter_type_list);

	Py_INCREF(&PyCAst_type_parameter_declaration1);
	PyModule_AddObject(m,"parameter_declaration1", (PyObject *)&PyCAst_type_parameter_declaration1);

	Py_INCREF(&PyCAst_type_parameter_declaration2);
	PyModule_AddObject(m,"parameter_declaration2", (PyObject *)&PyCAst_type_parameter_declaration2);

	Py_INCREF(&PyCAst_type_multiplicative_expression);
	PyModule_AddObject(m,"multiplicative_expression", (PyObject *)&PyCAst_type_multiplicative_expression);

	Py_INCREF(&PyCAst_type_type_qualifier_list);
	PyModule_AddObject(m,"type_qualifier_list", (PyObject *)&PyCAst_type_type_qualifier_list);

	Py_INCREF(&PyCAst_type_argument_expression_list);
	PyModule_AddObject(m,"argument_expression_list", (PyObject *)&PyCAst_type_argument_expression_list);

	Py_INCREF(&PyCAst_type_direct_abstract_declarator1);
	PyModule_AddObject(m,"direct_abstract_declarator1", (PyObject *)&PyCAst_type_direct_abstract_declarator1);

	Py_INCREF(&PyCAst_type_direct_abstract_declarator2);
	PyModule_AddObject(m,"direct_abstract_declarator2", (PyObject *)&PyCAst_type_direct_abstract_declarator2);

	Py_INCREF(&PyCAst_type_direct_abstract_declarator3);
	PyModule_AddObject(m,"direct_abstract_declarator3", (PyObject *)&PyCAst_type_direct_abstract_declarator3);

	Py_INCREF(&PyCAst_type_equality_expression);
	PyModule_AddObject(m,"equality_expression", (PyObject *)&PyCAst_type_equality_expression);

	Py_INCREF(&PyCAst_type_primary_expression1);
	PyModule_AddObject(m,"primary_expression1", (PyObject *)&PyCAst_type_primary_expression1);

	Py_INCREF(&PyCAst_type_primary_expression2);
	PyModule_AddObject(m,"primary_expression2", (PyObject *)&PyCAst_type_primary_expression2);

	Py_INCREF(&PyCAst_type_declaration_specifiers1);
	PyModule_AddObject(m,"declaration_specifiers1", (PyObject *)&PyCAst_type_declaration_specifiers1);

	Py_INCREF(&PyCAst_type_declaration_specifiers2);
	PyModule_AddObject(m,"declaration_specifiers2", (PyObject *)&PyCAst_type_declaration_specifiers2);

	Py_INCREF(&PyCAst_type_declaration_specifiers3);
	PyModule_AddObject(m,"declaration_specifiers3", (PyObject *)&PyCAst_type_declaration_specifiers3);

	Py_INCREF(&PyCAst_type_declaration);
	PyModule_AddObject(m,"declaration", (PyObject *)&PyCAst_type_declaration);

	Py_INCREF(&PyCAst_type_direct_declarator1);
	PyModule_AddObject(m,"direct_declarator1", (PyObject *)&PyCAst_type_direct_declarator1);

	Py_INCREF(&PyCAst_type_direct_declarator2);
	PyModule_AddObject(m,"direct_declarator2", (PyObject *)&PyCAst_type_direct_declarator2);

	Py_INCREF(&PyCAst_type_direct_declarator3);
	PyModule_AddObject(m,"direct_declarator3", (PyObject *)&PyCAst_type_direct_declarator3);

	Py_INCREF(&PyCAst_type_direct_declarator4);
	PyModule_AddObject(m,"direct_declarator4", (PyObject *)&PyCAst_type_direct_declarator4);

	Py_INCREF(&PyCAst_type_direct_declarator5);
	PyModule_AddObject(m,"direct_declarator5", (PyObject *)&PyCAst_type_direct_declarator5);

	Py_INCREF(&PyCAst_type_logical_and_expression);
	PyModule_AddObject(m,"logical_and_expression", (PyObject *)&PyCAst_type_logical_and_expression);

	Py_INCREF(&PyCAst_type_init_declarator_list);
	PyModule_AddObject(m,"init_declarator_list", (PyObject *)&PyCAst_type_init_declarator_list);

	Py_INCREF(&PyCAst_type_shift_expression);
	PyModule_AddObject(m,"shift_expression", (PyObject *)&PyCAst_type_shift_expression);

	Py_INCREF(&PyCAst_type_identifier_list);
	PyModule_AddObject(m,"identifier_list", (PyObject *)&PyCAst_type_identifier_list);

	Py_INCREF(&PyCAst_type_jump_statement1);
	PyModule_AddObject(m,"jump_statement1", (PyObject *)&PyCAst_type_jump_statement1);

	Py_INCREF(&PyCAst_type_jump_statement2);
	PyModule_AddObject(m,"jump_statement2", (PyObject *)&PyCAst_type_jump_statement2);

	Py_INCREF(&PyCAst_type_jump_statement3);
	PyModule_AddObject(m,"jump_statement3", (PyObject *)&PyCAst_type_jump_statement3);

	Py_INCREF(&PyCAst_type_struct_declarator);
	PyModule_AddObject(m,"struct_declarator", (PyObject *)&PyCAst_type_struct_declarator);

	Py_INCREF(&PyCAst_type_function_definition);
	PyModule_AddObject(m,"function_definition", (PyObject *)&PyCAst_type_function_definition);

	Py_INCREF(&PyCAst_type_parameter_list);
	PyModule_AddObject(m,"parameter_list", (PyObject *)&PyCAst_type_parameter_list);

	Py_INCREF(&PyCAst_type_enum_specifier);
	PyModule_AddObject(m,"enum_specifier", (PyObject *)&PyCAst_type_enum_specifier);

	Py_INCREF(&PyCAst_type_type_qualifier);
	PyModule_AddObject(m,"type_qualifier", (PyObject *)&PyCAst_type_type_qualifier);

	Py_INCREF(&PyCAst_type_enumerator_list);
	PyModule_AddObject(m,"enumerator_list", (PyObject *)&PyCAst_type_enumerator_list);

	Py_INCREF(&PyCAst_type_labeled_statement1);
	PyModule_AddObject(m,"labeled_statement1", (PyObject *)&PyCAst_type_labeled_statement1);

	Py_INCREF(&PyCAst_type_labeled_statement2);
	PyModule_AddObject(m,"labeled_statement2", (PyObject *)&PyCAst_type_labeled_statement2);

	Py_INCREF(&PyCAst_type_declaration_list);
	PyModule_AddObject(m,"declaration_list", (PyObject *)&PyCAst_type_declaration_list);

	Py_INCREF(&PyCAst_type_specifier_qualifier_list1);
	PyModule_AddObject(m,"specifier_qualifier_list1", (PyObject *)&PyCAst_type_specifier_qualifier_list1);

	Py_INCREF(&PyCAst_type_specifier_qualifier_list2);
	PyModule_AddObject(m,"specifier_qualifier_list2", (PyObject *)&PyCAst_type_specifier_qualifier_list2);

	Py_INCREF(&PyCAst_type_translation_unit);
	PyModule_AddObject(m,"translation_unit", (PyObject *)&PyCAst_type_translation_unit);

	Py_INCREF(&PyCAst_type_constant_expression);
	PyModule_AddObject(m,"constant_expression", (PyObject *)&PyCAst_type_constant_expression);

	Py_INCREF(&PyCAst_type_initializer_list);
	PyModule_AddObject(m,"initializer_list", (PyObject *)&PyCAst_type_initializer_list);

	Py_INCREF(&PyCAst_type_statement_list);
	PyModule_AddObject(m,"statement_list", (PyObject *)&PyCAst_type_statement_list);

	Py_INCREF(&PyCAst_type_expression);
	PyModule_AddObject(m,"expression", (PyObject *)&PyCAst_type_expression);

	Py_INCREF(&PyCAst_type_declarator);
	PyModule_AddObject(m,"declarator", (PyObject *)&PyCAst_type_declarator);
}