#include "Python.h"
#include <structmember.h>



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::token> _p_cast_object;
}PyCAst_object_token;


static PyObject * PyCAst_new_token(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_token(PyObject *_self);


static int PyCAst_init_token(PyCAst_object_token *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_token_code(PyObject *_self);


static PyObject *PyCAst_getter_token_isNull(PyObject *_self);


static PyObject *PyCAst_getter_token_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_token [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_token_refCount,NULL,(char*)"token_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_token_isNull,NULL,(char*)"token_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_token_code,NULL,(char*)"token_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_token [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_token [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_token = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.token",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_token),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_token,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the token",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_token,
	/* tp_members-----------*/      PyCAst_members_token,
	/* tp_getset------------*/      PyCAst_getsetter_token,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_token,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_token,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::storage_class_specifier> _p_cast_object;
}PyCAst_object_storage_class_specifier;


static PyObject * PyCAst_new_storage_class_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_storage_class_specifier(PyObject *_self);


static int PyCAst_init_storage_class_specifier(PyCAst_object_storage_class_specifier *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_storage_class_specifier_code(PyObject *_self);


static PyObject *PyCAst_getter_storage_class_specifier_isNull(PyObject *_self);


static PyObject *PyCAst_getter_storage_class_specifier_refCount(PyObject *_self);


static PyObject *PyCAst_getter_storage_class_specifier_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_storage_class_specifier [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_storage_class_specifier_code,NULL,(char*)"storage_class_specifier_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_storage_class_specifier_refCount,NULL,(char*)"storage_class_specifier_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_storage_class_specifier_isNull,NULL,(char*)"storage_class_specifier_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_storage_class_specifier_token,NULL,(char*)"storage_class_specifier_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_storage_class_specifier [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_storage_class_specifier [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_storage_class_specifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.storage_class_specifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_storage_class_specifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_storage_class_specifier,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the storage_class_specifier",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_storage_class_specifier,
	/* tp_members-----------*/      PyCAst_members_storage_class_specifier,
	/* tp_getset------------*/      PyCAst_getsetter_storage_class_specifier,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_storage_class_specifier,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_storage_class_specifier,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::expression_statement> _p_cast_object;
}PyCAst_object_expression_statement;


static PyObject * PyCAst_new_expression_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_expression_statement(PyObject *_self);


static int PyCAst_init_expression_statement(PyCAst_object_expression_statement *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_expression_statement_code(PyObject *_self);


static PyObject *PyCAst_getter_expression_statement_isNull(PyObject *_self);


static PyObject *PyCAst_getter_expression_statement_refCount(PyObject *_self);


static PyObject *PyCAst_getter_expression_statement_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_expression_statement [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_expression_statement_refCount,NULL,(char*)"expression_statement_refCount", NULL},
	{(char*)"expression", (getter)PyCAst_getter_expression_statement_expression,NULL,(char*)"expression_statement_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_expression_statement_isNull,NULL,(char*)"expression_statement_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_expression_statement_code,NULL,(char*)"expression_statement_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_expression_statement [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_expression_statement [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_expression_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.expression_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_expression_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_expression_statement,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the expression_statement",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_expression_statement,
	/* tp_members-----------*/      PyCAst_members_expression_statement,
	/* tp_getset------------*/      PyCAst_getsetter_expression_statement,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_expression_statement,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_expression_statement,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_name> _p_cast_object;
}PyCAst_object_type_name;


static PyObject * PyCAst_new_type_name(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_name(PyObject *_self);


static int PyCAst_init_type_name(PyCAst_object_type_name *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_type_name_code(PyObject *_self);


static PyObject *PyCAst_getter_type_name_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_name_refCount(PyObject *_self);


static PyObject *PyCAst_getter_type_name_specifier_qualifier_list(PyObject *_self);


static PyObject *PyCAst_getter_type_name_abstract_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_name [] = 
	{
	{(char*)"abstract_declarator", (getter)PyCAst_getter_type_name_abstract_declarator,NULL,(char*)"type_name_abstract_declarator", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_type_name_isNull,NULL,(char*)"type_name_isNull", NULL},
	{(char*)"specifier_qualifier_list", (getter)PyCAst_getter_type_name_specifier_qualifier_list,NULL,(char*)"type_name_specifier_qualifier_list", NULL},
	{(char*)"code", (getter)PyCAst_getter_type_name_code,NULL,(char*)"type_name_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_type_name_refCount,NULL,(char*)"type_name_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_name [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_name [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_type_name = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_name",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_name),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_name,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_name",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_name,
	/* tp_members-----------*/      PyCAst_members_type_name,
	/* tp_getset------------*/      PyCAst_getsetter_type_name,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_name,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_name,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::unary_expression> _p_cast_object;
}PyCAst_object_unary_expression;


static PyObject * PyCAst_new_unary_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_unary_expression(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_unary_expression [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_unary_expression_refCount,NULL,(char*)"unary_expression_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_unary_expression_isNull,NULL,(char*)"unary_expression_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_unary_expression_code,NULL,(char*)"unary_expression_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_unary_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_unary_expression [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_unary_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_unary_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the unary_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression,
	/* tp_members-----------*/      PyCAst_members_unary_expression,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::unary_expression_1> _p_cast_object;
}PyCAst_object_unary_expression_1;


static PyObject * PyCAst_new_unary_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_unary_expression_1(PyObject *_self);


static int PyCAst_init_unary_expression_1(PyCAst_object_unary_expression_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_unary_expression_1_code(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_1_token(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_1_unary_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_unary_expression_1 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_unary_expression_1_refCount,NULL,(char*)"unary_expression_1_refCount", NULL},
	{(char*)"unary_expression", (getter)PyCAst_getter_unary_expression_1_unary_expression,NULL,(char*)"unary_expression_1_unary_expression", NULL},
	{(char*)"code", (getter)PyCAst_getter_unary_expression_1_code,NULL,(char*)"unary_expression_1_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_unary_expression_1_isNull,NULL,(char*)"unary_expression_1_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_unary_expression_1_token,NULL,(char*)"unary_expression_1_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_unary_expression_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_unary_expression_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_unary_expression_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_unary_expression_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the unary_expression_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression_1,
	/* tp_members-----------*/      PyCAst_members_unary_expression_1,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::unary_expression_2> _p_cast_object;
}PyCAst_object_unary_expression_2;


static PyObject * PyCAst_new_unary_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_unary_expression_2(PyObject *_self);


static int PyCAst_init_unary_expression_2(PyCAst_object_unary_expression_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_unary_expression_2_code(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_2_postfix_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_unary_expression_2 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_unary_expression_2_code,NULL,(char*)"unary_expression_2_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_unary_expression_2_refCount,NULL,(char*)"unary_expression_2_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_unary_expression_2_isNull,NULL,(char*)"unary_expression_2_isNull", NULL},
	{(char*)"postfix_expression", (getter)PyCAst_getter_unary_expression_2_postfix_expression,NULL,(char*)"unary_expression_2_postfix_expression", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_unary_expression_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_unary_expression_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_unary_expression_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_unary_expression_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the unary_expression_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression_2,
	/* tp_members-----------*/      PyCAst_members_unary_expression_2,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::unary_expression_3> _p_cast_object;
}PyCAst_object_unary_expression_3;


static PyObject * PyCAst_new_unary_expression_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_unary_expression_3(PyObject *_self);


static int PyCAst_init_unary_expression_3(PyCAst_object_unary_expression_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_unary_expression_3_code(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_3_unary_operator(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_3_cast_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_unary_expression_3 [] = 
	{
	{(char*)"cast_expression", (getter)PyCAst_getter_unary_expression_3_cast_expression,NULL,(char*)"unary_expression_3_cast_expression", NULL},
	{(char*)"unary_operator", (getter)PyCAst_getter_unary_expression_3_unary_operator,NULL,(char*)"unary_expression_3_unary_operator", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_unary_expression_3_isNull,NULL,(char*)"unary_expression_3_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_unary_expression_3_code,NULL,(char*)"unary_expression_3_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_unary_expression_3_refCount,NULL,(char*)"unary_expression_3_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_unary_expression_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_unary_expression_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_unary_expression_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_unary_expression_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the unary_expression_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression_3,
	/* tp_members-----------*/      PyCAst_members_unary_expression_3,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression_3,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::unary_expression_4> _p_cast_object;
}PyCAst_object_unary_expression_4;


static PyObject * PyCAst_new_unary_expression_4(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_unary_expression_4(PyObject *_self);


static int PyCAst_init_unary_expression_4(PyCAst_object_unary_expression_4 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_unary_expression_4_code(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_4_isNull(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_4_refCount(PyObject *_self);


static PyObject *PyCAst_getter_unary_expression_4_type_name(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_unary_expression_4 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_unary_expression_4_isNull,NULL,(char*)"unary_expression_4_isNull", NULL},
	{(char*)"type_name", (getter)PyCAst_getter_unary_expression_4_type_name,NULL,(char*)"unary_expression_4_type_name", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_unary_expression_4_refCount,NULL,(char*)"unary_expression_4_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_unary_expression_4_code,NULL,(char*)"unary_expression_4_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_unary_expression_4 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_unary_expression_4 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_unary_expression_4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression_4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression_4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_unary_expression_4,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the unary_expression_4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression_4,
	/* tp_members-----------*/      PyCAst_members_unary_expression_4,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression_4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression_4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression_4,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::conditional_expression_item> _p_cast_object;
}PyCAst_object_conditional_expression_item;


static PyObject * PyCAst_new_conditional_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_conditional_expression_item(PyObject *_self);


static int PyCAst_init_conditional_expression_item(PyCAst_object_conditional_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_conditional_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_item_logical_or_expression(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_item_token1(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_item_expression(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_item_token2(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_conditional_expression_item [] = 
	{
	{(char*)"token2", (getter)PyCAst_getter_conditional_expression_item_token2,NULL,(char*)"conditional_expression_item_token2", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_conditional_expression_item_isNull,NULL,(char*)"conditional_expression_item_isNull", NULL},
	{(char*)"token1", (getter)PyCAst_getter_conditional_expression_item_token1,NULL,(char*)"conditional_expression_item_token1", NULL},
	{(char*)"code", (getter)PyCAst_getter_conditional_expression_item_code,NULL,(char*)"conditional_expression_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_conditional_expression_item_refCount,NULL,(char*)"conditional_expression_item_refCount", NULL},
	{(char*)"logical_or_expression", (getter)PyCAst_getter_conditional_expression_item_logical_or_expression,NULL,(char*)"conditional_expression_item_logical_or_expression", NULL},
	{(char*)"expression", (getter)PyCAst_getter_conditional_expression_item_expression,NULL,(char*)"conditional_expression_item_expression", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_conditional_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_conditional_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_conditional_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.conditional_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_conditional_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_conditional_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the conditional_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_conditional_expression_item,
	/* tp_members-----------*/      PyCAst_members_conditional_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_conditional_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_conditional_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_conditional_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::conditional_expression> _p_cast_object;
}PyCAst_object_conditional_expression;


static PyObject * PyCAst_new_conditional_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_conditional_expression(PyObject *_self);


static int PyCAst_init_conditional_expression(PyCAst_object_conditional_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_conditional_expression(PyObject *_self);


static PyObject* PyCAst_list_item_conditional_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_conditional_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_conditional_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_conditional_expression [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_conditional_expression_isNull,NULL,(char*)"conditional_expression_isNull", NULL},
	{(char*)"size", (getter)PyCAst_getter_conditional_expression_size,NULL,(char*)"conditional_expression_size", NULL},
	{(char*)"code", (getter)PyCAst_getter_conditional_expression_code,NULL,(char*)"conditional_expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_conditional_expression_refCount,NULL,(char*)"conditional_expression_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_conditional_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_conditional_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_conditional_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_conditional_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_conditional_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_conditional_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.conditional_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_conditional_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_conditional_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_conditional_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the conditional_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_conditional_expression,
	/* tp_members-----------*/      PyCAst_members_conditional_expression,
	/* tp_getset------------*/      PyCAst_getsetter_conditional_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_conditional_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_conditional_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_or_union_specifier> _p_cast_object;
}PyCAst_object_struct_or_union_specifier;


static PyObject * PyCAst_new_struct_or_union_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_or_union_specifier(PyObject *_self);


static int PyCAst_init_struct_or_union_specifier(PyCAst_object_struct_or_union_specifier *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_struct_or_union_specifier_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_specifier_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_specifier_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_specifier_struct_or_union(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_specifier_token1(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_specifier_token2(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_specifier_struct_declaration_list(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_specifier_token3(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_or_union_specifier [] = 
	{
	{(char*)"struct_declaration_list", (getter)PyCAst_getter_struct_or_union_specifier_struct_declaration_list,NULL,(char*)"struct_or_union_specifier_struct_declaration_list", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_struct_or_union_specifier_isNull,NULL,(char*)"struct_or_union_specifier_isNull", NULL},
	{(char*)"struct_or_union", (getter)PyCAst_getter_struct_or_union_specifier_struct_or_union,NULL,(char*)"struct_or_union_specifier_struct_or_union", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_or_union_specifier_code,NULL,(char*)"struct_or_union_specifier_code", NULL},
	{(char*)"token2", (getter)PyCAst_getter_struct_or_union_specifier_token2,NULL,(char*)"struct_or_union_specifier_token2", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_struct_or_union_specifier_refCount,NULL,(char*)"struct_or_union_specifier_refCount", NULL},
	{(char*)"token1", (getter)PyCAst_getter_struct_or_union_specifier_token1,NULL,(char*)"struct_or_union_specifier_token1", NULL},
	{(char*)"token3", (getter)PyCAst_getter_struct_or_union_specifier_token3,NULL,(char*)"struct_or_union_specifier_token3", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_or_union_specifier [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_or_union_specifier [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_struct_or_union_specifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_or_union_specifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_or_union_specifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_or_union_specifier,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_or_union_specifier",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_or_union_specifier,
	/* tp_members-----------*/      PyCAst_members_struct_or_union_specifier,
	/* tp_getset------------*/      PyCAst_getsetter_struct_or_union_specifier,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_or_union_specifier,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_or_union_specifier,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::exclusive_or_expression_item> _p_cast_object;
}PyCAst_object_exclusive_or_expression_item;


static PyObject * PyCAst_new_exclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_exclusive_or_expression_item(PyObject *_self);


static int PyCAst_init_exclusive_or_expression_item(PyCAst_object_exclusive_or_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_exclusive_or_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_exclusive_or_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_exclusive_or_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_exclusive_or_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_exclusive_or_expression_item_and_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_exclusive_or_expression_item [] = 
	{
	{(char*)"and_expression", (getter)PyCAst_getter_exclusive_or_expression_item_and_expression,NULL,(char*)"exclusive_or_expression_item_and_expression", NULL},
	{(char*)"token", (getter)PyCAst_getter_exclusive_or_expression_item_token,NULL,(char*)"exclusive_or_expression_item_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_exclusive_or_expression_item_code,NULL,(char*)"exclusive_or_expression_item_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_exclusive_or_expression_item_isNull,NULL,(char*)"exclusive_or_expression_item_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_exclusive_or_expression_item_refCount,NULL,(char*)"exclusive_or_expression_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_exclusive_or_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_exclusive_or_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_exclusive_or_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.exclusive_or_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_exclusive_or_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_exclusive_or_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the exclusive_or_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_exclusive_or_expression_item,
	/* tp_members-----------*/      PyCAst_members_exclusive_or_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_exclusive_or_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_exclusive_or_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_exclusive_or_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::exclusive_or_expression> _p_cast_object;
}PyCAst_object_exclusive_or_expression;


static PyObject * PyCAst_new_exclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_exclusive_or_expression(PyObject *_self);


static int PyCAst_init_exclusive_or_expression(PyCAst_object_exclusive_or_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_exclusive_or_expression(PyObject *_self);


static PyObject* PyCAst_list_item_exclusive_or_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_exclusive_or_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_exclusive_or_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_exclusive_or_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_exclusive_or_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_exclusive_or_expression [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_exclusive_or_expression_refCount,NULL,(char*)"exclusive_or_expression_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_exclusive_or_expression_code,NULL,(char*)"exclusive_or_expression_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_exclusive_or_expression_isNull,NULL,(char*)"exclusive_or_expression_isNull", NULL},
	{(char*)"size", (getter)PyCAst_getter_exclusive_or_expression_size,NULL,(char*)"exclusive_or_expression_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_exclusive_or_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_exclusive_or_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_exclusive_or_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_exclusive_or_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_exclusive_or_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_exclusive_or_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.exclusive_or_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_exclusive_or_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_exclusive_or_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_exclusive_or_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the exclusive_or_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_exclusive_or_expression,
	/* tp_members-----------*/      PyCAst_members_exclusive_or_expression,
	/* tp_getset------------*/      PyCAst_getsetter_exclusive_or_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_exclusive_or_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_exclusive_or_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::initializer> _p_cast_object;
}PyCAst_object_initializer;


static PyObject * PyCAst_new_initializer(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_initializer(PyObject *_self);


static PyObject *PyCAst_getter_initializer_code(PyObject *_self);


static PyObject *PyCAst_getter_initializer_isNull(PyObject *_self);


static PyObject *PyCAst_getter_initializer_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_initializer [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_initializer_isNull,NULL,(char*)"initializer_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_initializer_code,NULL,(char*)"initializer_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_initializer_refCount,NULL,(char*)"initializer_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_initializer [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_initializer [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_initializer = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_initializer,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the initializer",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_initializer,
	/* tp_members-----------*/      PyCAst_members_initializer,
	/* tp_getset------------*/      PyCAst_getsetter_initializer,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::initializer_1> _p_cast_object;
}PyCAst_object_initializer_1;


static PyObject * PyCAst_new_initializer_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_initializer_1(PyObject *_self);


static int PyCAst_init_initializer_1(PyCAst_object_initializer_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_initializer_1_code(PyObject *_self);


static PyObject *PyCAst_getter_initializer_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_initializer_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_initializer_1_initializer_list(PyObject *_self);


static PyObject *PyCAst_getter_initializer_1_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_initializer_1 [] = 
	{
	{(char*)"initializer_list", (getter)PyCAst_getter_initializer_1_initializer_list,NULL,(char*)"initializer_1_initializer_list", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_initializer_1_isNull,NULL,(char*)"initializer_1_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_initializer_1_code,NULL,(char*)"initializer_1_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_initializer_1_refCount,NULL,(char*)"initializer_1_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_initializer_1_token,NULL,(char*)"initializer_1_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_initializer_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_initializer_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_initializer_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_initializer_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the initializer_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_initializer_1,
	/* tp_members-----------*/      PyCAst_members_initializer_1,
	/* tp_getset------------*/      PyCAst_getsetter_initializer_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_initializer_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::initializer_2> _p_cast_object;
}PyCAst_object_initializer_2;


static PyObject * PyCAst_new_initializer_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_initializer_2(PyObject *_self);


static int PyCAst_init_initializer_2(PyCAst_object_initializer_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_initializer_2_code(PyObject *_self);


static PyObject *PyCAst_getter_initializer_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_initializer_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_initializer_2_assignment_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_initializer_2 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_initializer_2_code,NULL,(char*)"initializer_2_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_initializer_2_isNull,NULL,(char*)"initializer_2_isNull", NULL},
	{(char*)"assignment_expression", (getter)PyCAst_getter_initializer_2_assignment_expression,NULL,(char*)"initializer_2_assignment_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_initializer_2_refCount,NULL,(char*)"initializer_2_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_initializer_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_initializer_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_initializer_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_initializer_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the initializer_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_initializer_2,
	/* tp_members-----------*/      PyCAst_members_initializer_2,
	/* tp_getset------------*/      PyCAst_getsetter_initializer_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_initializer_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_declaration_list_item> _p_cast_object;
}PyCAst_object_struct_declaration_list_item;


static PyObject * PyCAst_new_struct_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_declaration_list_item(PyObject *_self);


static int PyCAst_init_struct_declaration_list_item(PyCAst_object_struct_declaration_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_struct_declaration_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_list_item_struct_declaration(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_declaration_list_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_struct_declaration_list_item_isNull,NULL,(char*)"struct_declaration_list_item_isNull", NULL},
	{(char*)"struct_declaration", (getter)PyCAst_getter_struct_declaration_list_item_struct_declaration,NULL,(char*)"struct_declaration_list_item_struct_declaration", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_declaration_list_item_code,NULL,(char*)"struct_declaration_list_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_struct_declaration_list_item_refCount,NULL,(char*)"struct_declaration_list_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_declaration_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_declaration_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_struct_declaration_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declaration_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declaration_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_declaration_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_declaration_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_declaration_list_item,
	/* tp_members-----------*/      PyCAst_members_struct_declaration_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declaration_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_declaration_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declaration_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_declaration_list> _p_cast_object;
}PyCAst_object_struct_declaration_list;


static PyObject * PyCAst_new_struct_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_declaration_list(PyObject *_self);


static int PyCAst_init_struct_declaration_list(PyCAst_object_struct_declaration_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_struct_declaration_list(PyObject *_self);


static PyObject* PyCAst_list_item_struct_declaration_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_struct_declaration_list_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_declaration_list [] = 
	{
	{(char*)"size", (getter)PyCAst_getter_struct_declaration_list_size,NULL,(char*)"struct_declaration_list_size", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_struct_declaration_list_refCount,NULL,(char*)"struct_declaration_list_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_struct_declaration_list_isNull,NULL,(char*)"struct_declaration_list_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_declaration_list_code,NULL,(char*)"struct_declaration_list_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_declaration_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_declaration_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_struct_declaration_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_struct_declaration_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_struct_declaration_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_struct_declaration_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declaration_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declaration_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_declaration_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_struct_declaration_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_declaration_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_declaration_list,
	/* tp_members-----------*/      PyCAst_members_struct_declaration_list,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declaration_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_declaration_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declaration_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::assignment_operator> _p_cast_object;
}PyCAst_object_assignment_operator;


static PyObject * PyCAst_new_assignment_operator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_assignment_operator(PyObject *_self);


static int PyCAst_init_assignment_operator(PyCAst_object_assignment_operator *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_assignment_operator_code(PyObject *_self);


static PyObject *PyCAst_getter_assignment_operator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_assignment_operator_refCount(PyObject *_self);


static PyObject *PyCAst_getter_assignment_operator_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_assignment_operator [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_assignment_operator_isNull,NULL,(char*)"assignment_operator_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_assignment_operator_token,NULL,(char*)"assignment_operator_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_assignment_operator_code,NULL,(char*)"assignment_operator_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_assignment_operator_refCount,NULL,(char*)"assignment_operator_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_assignment_operator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_assignment_operator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_assignment_operator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.assignment_operator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_assignment_operator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_assignment_operator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the assignment_operator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_assignment_operator,
	/* tp_members-----------*/      PyCAst_members_assignment_operator,
	/* tp_getset------------*/      PyCAst_getsetter_assignment_operator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_assignment_operator,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_assignment_operator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_declaration> _p_cast_object;
}PyCAst_object_struct_declaration;


static PyObject * PyCAst_new_struct_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_declaration(PyObject *_self);


static int PyCAst_init_struct_declaration(PyCAst_object_struct_declaration *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_struct_declaration_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_specifier_qualifier_list(PyObject *_self);


static PyObject *PyCAst_getter_struct_declaration_struct_declarator_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_declaration [] = 
	{
	{(char*)"specifier_qualifier_list", (getter)PyCAst_getter_struct_declaration_specifier_qualifier_list,NULL,(char*)"struct_declaration_specifier_qualifier_list", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_declaration_code,NULL,(char*)"struct_declaration_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_struct_declaration_isNull,NULL,(char*)"struct_declaration_isNull", NULL},
	{(char*)"struct_declarator_list", (getter)PyCAst_getter_struct_declaration_struct_declarator_list,NULL,(char*)"struct_declaration_struct_declarator_list", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_struct_declaration_refCount,NULL,(char*)"struct_declaration_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_declaration [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_declaration [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_struct_declaration = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declaration",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declaration),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_declaration,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_declaration",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_declaration,
	/* tp_members-----------*/      PyCAst_members_struct_declaration,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declaration,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_declaration,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declaration,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::abstract_declarator> _p_cast_object;
}PyCAst_object_abstract_declarator;


static PyObject * PyCAst_new_abstract_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_abstract_declarator(PyObject *_self);


static int PyCAst_init_abstract_declarator(PyCAst_object_abstract_declarator *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_abstract_declarator_code(PyObject *_self);


static PyObject *PyCAst_getter_abstract_declarator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_abstract_declarator_refCount(PyObject *_self);


static PyObject *PyCAst_getter_abstract_declarator_pointer(PyObject *_self);


static PyObject *PyCAst_getter_abstract_declarator_direct_abstract_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_abstract_declarator [] = 
	{
	{(char*)"pointer", (getter)PyCAst_getter_abstract_declarator_pointer,NULL,(char*)"abstract_declarator_pointer", NULL},
	{(char*)"direct_abstract_declarator", (getter)PyCAst_getter_abstract_declarator_direct_abstract_declarator,NULL,(char*)"abstract_declarator_direct_abstract_declarator", NULL},
	{(char*)"code", (getter)PyCAst_getter_abstract_declarator_code,NULL,(char*)"abstract_declarator_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_abstract_declarator_isNull,NULL,(char*)"abstract_declarator_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_abstract_declarator_refCount,NULL,(char*)"abstract_declarator_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_abstract_declarator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_abstract_declarator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_abstract_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.abstract_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_abstract_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_abstract_declarator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the abstract_declarator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_abstract_declarator,
	/* tp_members-----------*/      PyCAst_members_abstract_declarator,
	/* tp_getset------------*/      PyCAst_getsetter_abstract_declarator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_abstract_declarator,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_abstract_declarator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::iteration_statement> _p_cast_object;
}PyCAst_object_iteration_statement;


static PyObject * PyCAst_new_iteration_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_iteration_statement(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_code(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_isNull(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_iteration_statement [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_iteration_statement_isNull,NULL,(char*)"iteration_statement_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_iteration_statement_code,NULL,(char*)"iteration_statement_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_iteration_statement_refCount,NULL,(char*)"iteration_statement_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_iteration_statement [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_iteration_statement [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_iteration_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.iteration_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_iteration_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_iteration_statement,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the iteration_statement",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_iteration_statement,
	/* tp_members-----------*/      PyCAst_members_iteration_statement,
	/* tp_getset------------*/      PyCAst_getsetter_iteration_statement,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_iteration_statement,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::iteration_statement_1> _p_cast_object;
}PyCAst_object_iteration_statement_1;


static PyObject * PyCAst_new_iteration_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_iteration_statement_1(PyObject *_self);


static int PyCAst_init_iteration_statement_1(PyCAst_object_iteration_statement_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_iteration_statement_1_code(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_1_expression_statement1(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_1_expression_statement2(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_1_expression(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_1_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_iteration_statement_1 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_iteration_statement_1_refCount,NULL,(char*)"iteration_statement_1_refCount", NULL},
	{(char*)"expression_statement2", (getter)PyCAst_getter_iteration_statement_1_expression_statement2,NULL,(char*)"iteration_statement_1_expression_statement2", NULL},
	{(char*)"code", (getter)PyCAst_getter_iteration_statement_1_code,NULL,(char*)"iteration_statement_1_code", NULL},
	{(char*)"expression", (getter)PyCAst_getter_iteration_statement_1_expression,NULL,(char*)"iteration_statement_1_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_iteration_statement_1_isNull,NULL,(char*)"iteration_statement_1_isNull", NULL},
	{(char*)"statement", (getter)PyCAst_getter_iteration_statement_1_statement,NULL,(char*)"iteration_statement_1_statement", NULL},
	{(char*)"expression_statement1", (getter)PyCAst_getter_iteration_statement_1_expression_statement1,NULL,(char*)"iteration_statement_1_expression_statement1", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_iteration_statement_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_iteration_statement_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_iteration_statement_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.iteration_statement_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_iteration_statement_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_iteration_statement_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the iteration_statement_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_iteration_statement_1,
	/* tp_members-----------*/      PyCAst_members_iteration_statement_1,
	/* tp_getset------------*/      PyCAst_getsetter_iteration_statement_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_iteration_statement_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_iteration_statement_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::iteration_statement_2> _p_cast_object;
}PyCAst_object_iteration_statement_2;


static PyObject * PyCAst_new_iteration_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_iteration_statement_2(PyObject *_self);


static int PyCAst_init_iteration_statement_2(PyCAst_object_iteration_statement_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_iteration_statement_2_code(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_2_expression(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_2_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_iteration_statement_2 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_iteration_statement_2_isNull,NULL,(char*)"iteration_statement_2_isNull", NULL},
	{(char*)"statement", (getter)PyCAst_getter_iteration_statement_2_statement,NULL,(char*)"iteration_statement_2_statement", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_iteration_statement_2_refCount,NULL,(char*)"iteration_statement_2_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_iteration_statement_2_code,NULL,(char*)"iteration_statement_2_code", NULL},
	{(char*)"expression", (getter)PyCAst_getter_iteration_statement_2_expression,NULL,(char*)"iteration_statement_2_expression", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_iteration_statement_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_iteration_statement_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_iteration_statement_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.iteration_statement_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_iteration_statement_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_iteration_statement_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the iteration_statement_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_iteration_statement_2,
	/* tp_members-----------*/      PyCAst_members_iteration_statement_2,
	/* tp_getset------------*/      PyCAst_getsetter_iteration_statement_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_iteration_statement_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_iteration_statement_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::iteration_statement_3> _p_cast_object;
}PyCAst_object_iteration_statement_3;


static PyObject * PyCAst_new_iteration_statement_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_iteration_statement_3(PyObject *_self);


static int PyCAst_init_iteration_statement_3(PyCAst_object_iteration_statement_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_iteration_statement_3_code(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_3_statement(PyObject *_self);


static PyObject *PyCAst_getter_iteration_statement_3_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_iteration_statement_3 [] = 
	{
	{(char*)"expression", (getter)PyCAst_getter_iteration_statement_3_expression,NULL,(char*)"iteration_statement_3_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_iteration_statement_3_refCount,NULL,(char*)"iteration_statement_3_refCount", NULL},
	{(char*)"statement", (getter)PyCAst_getter_iteration_statement_3_statement,NULL,(char*)"iteration_statement_3_statement", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_iteration_statement_3_isNull,NULL,(char*)"iteration_statement_3_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_iteration_statement_3_code,NULL,(char*)"iteration_statement_3_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_iteration_statement_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_iteration_statement_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_iteration_statement_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.iteration_statement_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_iteration_statement_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_iteration_statement_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the iteration_statement_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_iteration_statement_3,
	/* tp_members-----------*/      PyCAst_members_iteration_statement_3,
	/* tp_getset------------*/      PyCAst_getsetter_iteration_statement_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_iteration_statement_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_iteration_statement_3,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::additive_expression_item> _p_cast_object;
}PyCAst_object_additive_expression_item;


static PyObject * PyCAst_new_additive_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_additive_expression_item(PyObject *_self);


static int PyCAst_init_additive_expression_item(PyCAst_object_additive_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_additive_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_additive_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_additive_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_additive_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_additive_expression_item_multiplicative_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_additive_expression_item [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_additive_expression_item_code,NULL,(char*)"additive_expression_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_additive_expression_item_refCount,NULL,(char*)"additive_expression_item_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_additive_expression_item_isNull,NULL,(char*)"additive_expression_item_isNull", NULL},
	{(char*)"multiplicative_expression", (getter)PyCAst_getter_additive_expression_item_multiplicative_expression,NULL,(char*)"additive_expression_item_multiplicative_expression", NULL},
	{(char*)"token", (getter)PyCAst_getter_additive_expression_item_token,NULL,(char*)"additive_expression_item_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_additive_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_additive_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_additive_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.additive_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_additive_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_additive_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the additive_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_additive_expression_item,
	/* tp_members-----------*/      PyCAst_members_additive_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_additive_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_additive_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_additive_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::additive_expression> _p_cast_object;
}PyCAst_object_additive_expression;


static PyObject * PyCAst_new_additive_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_additive_expression(PyObject *_self);


static int PyCAst_init_additive_expression(PyCAst_object_additive_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_additive_expression(PyObject *_self);


static PyObject* PyCAst_list_item_additive_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_additive_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_additive_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_additive_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_additive_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_additive_expression [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_additive_expression_isNull,NULL,(char*)"additive_expression_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_additive_expression_refCount,NULL,(char*)"additive_expression_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_additive_expression_code,NULL,(char*)"additive_expression_code", NULL},
	{(char*)"size", (getter)PyCAst_getter_additive_expression_size,NULL,(char*)"additive_expression_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_additive_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_additive_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_additive_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_additive_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_additive_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_additive_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.additive_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_additive_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_additive_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_additive_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the additive_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_additive_expression,
	/* tp_members-----------*/      PyCAst_members_additive_expression,
	/* tp_getset------------*/      PyCAst_getsetter_additive_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_additive_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_additive_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::external_declaration> _p_cast_object;
}PyCAst_object_external_declaration;


static PyObject * PyCAst_new_external_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_external_declaration(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_code(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_isNull(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_external_declaration [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_external_declaration_isNull,NULL,(char*)"external_declaration_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_external_declaration_code,NULL,(char*)"external_declaration_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_external_declaration_refCount,NULL,(char*)"external_declaration_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_external_declaration [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_external_declaration [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_external_declaration = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.external_declaration",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_external_declaration),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_external_declaration,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the external_declaration",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_external_declaration,
	/* tp_members-----------*/      PyCAst_members_external_declaration,
	/* tp_getset------------*/      PyCAst_getsetter_external_declaration,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_external_declaration,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::external_declaration_1> _p_cast_object;
}PyCAst_object_external_declaration_1;


static PyObject * PyCAst_new_external_declaration_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_external_declaration_1(PyObject *_self);


static int PyCAst_init_external_declaration_1(PyCAst_object_external_declaration_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_external_declaration_1_code(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_1_declaration(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_external_declaration_1 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_external_declaration_1_isNull,NULL,(char*)"external_declaration_1_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_external_declaration_1_code,NULL,(char*)"external_declaration_1_code", NULL},
	{(char*)"declaration", (getter)PyCAst_getter_external_declaration_1_declaration,NULL,(char*)"external_declaration_1_declaration", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_external_declaration_1_refCount,NULL,(char*)"external_declaration_1_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_external_declaration_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_external_declaration_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_external_declaration_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.external_declaration_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_external_declaration_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_external_declaration_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the external_declaration_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_external_declaration_1,
	/* tp_members-----------*/      PyCAst_members_external_declaration_1,
	/* tp_getset------------*/      PyCAst_getsetter_external_declaration_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_external_declaration_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_external_declaration_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::external_declaration_2> _p_cast_object;
}PyCAst_object_external_declaration_2;


static PyObject * PyCAst_new_external_declaration_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_external_declaration_2(PyObject *_self);


static int PyCAst_init_external_declaration_2(PyCAst_object_external_declaration_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_external_declaration_2_code(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_external_declaration_2_function_definition(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_external_declaration_2 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_external_declaration_2_refCount,NULL,(char*)"external_declaration_2_refCount", NULL},
	{(char*)"function_definition", (getter)PyCAst_getter_external_declaration_2_function_definition,NULL,(char*)"external_declaration_2_function_definition", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_external_declaration_2_isNull,NULL,(char*)"external_declaration_2_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_external_declaration_2_code,NULL,(char*)"external_declaration_2_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_external_declaration_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_external_declaration_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_external_declaration_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.external_declaration_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_external_declaration_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_external_declaration_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the external_declaration_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_external_declaration_2,
	/* tp_members-----------*/      PyCAst_members_external_declaration_2,
	/* tp_getset------------*/      PyCAst_getsetter_external_declaration_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_external_declaration_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_external_declaration_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_specifier> _p_cast_object;
}PyCAst_object_type_specifier;


static PyObject * PyCAst_new_type_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_specifier(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_code(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_specifier [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_type_specifier_isNull,NULL,(char*)"type_specifier_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_type_specifier_code,NULL,(char*)"type_specifier_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_type_specifier_refCount,NULL,(char*)"type_specifier_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_specifier [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_specifier [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_type_specifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_specifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_specifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_specifier,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_specifier",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_specifier,
	/* tp_members-----------*/      PyCAst_members_type_specifier,
	/* tp_getset------------*/      PyCAst_getsetter_type_specifier,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_specifier,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_specifier_1> _p_cast_object;
}PyCAst_object_type_specifier_1;


static PyObject * PyCAst_new_type_specifier_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_specifier_1(PyObject *_self);


static int PyCAst_init_type_specifier_1(PyCAst_object_type_specifier_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_type_specifier_1_code(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_1_enum_specifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_specifier_1 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_type_specifier_1_code,NULL,(char*)"type_specifier_1_code", NULL},
	{(char*)"enum_specifier", (getter)PyCAst_getter_type_specifier_1_enum_specifier,NULL,(char*)"type_specifier_1_enum_specifier", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_type_specifier_1_isNull,NULL,(char*)"type_specifier_1_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_type_specifier_1_refCount,NULL,(char*)"type_specifier_1_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_specifier_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_specifier_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_type_specifier_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_specifier_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_specifier_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_specifier_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_specifier_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_specifier_1,
	/* tp_members-----------*/      PyCAst_members_type_specifier_1,
	/* tp_getset------------*/      PyCAst_getsetter_type_specifier_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_specifier_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_specifier_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_specifier_2> _p_cast_object;
}PyCAst_object_type_specifier_2;


static PyObject * PyCAst_new_type_specifier_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_specifier_2(PyObject *_self);


static int PyCAst_init_type_specifier_2(PyCAst_object_type_specifier_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_type_specifier_2_code(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_2_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_specifier_2 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_type_specifier_2_isNull,NULL,(char*)"type_specifier_2_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_type_specifier_2_refCount,NULL,(char*)"type_specifier_2_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_type_specifier_2_token,NULL,(char*)"type_specifier_2_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_type_specifier_2_code,NULL,(char*)"type_specifier_2_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_specifier_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_specifier_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_type_specifier_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_specifier_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_specifier_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_specifier_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_specifier_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_specifier_2,
	/* tp_members-----------*/      PyCAst_members_type_specifier_2,
	/* tp_getset------------*/      PyCAst_getsetter_type_specifier_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_specifier_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_specifier_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_specifier_3> _p_cast_object;
}PyCAst_object_type_specifier_3;


static PyObject * PyCAst_new_type_specifier_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_specifier_3(PyObject *_self);


static int PyCAst_init_type_specifier_3(PyCAst_object_type_specifier_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_type_specifier_3_code(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_type_specifier_3_struct_or_union_specifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_specifier_3 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_type_specifier_3_isNull,NULL,(char*)"type_specifier_3_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_type_specifier_3_refCount,NULL,(char*)"type_specifier_3_refCount", NULL},
	{(char*)"struct_or_union_specifier", (getter)PyCAst_getter_type_specifier_3_struct_or_union_specifier,NULL,(char*)"type_specifier_3_struct_or_union_specifier", NULL},
	{(char*)"code", (getter)PyCAst_getter_type_specifier_3_code,NULL,(char*)"type_specifier_3_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_specifier_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_specifier_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_type_specifier_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_specifier_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_specifier_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_specifier_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_specifier_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_specifier_3,
	/* tp_members-----------*/      PyCAst_members_type_specifier_3,
	/* tp_getset------------*/      PyCAst_getsetter_type_specifier_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_specifier_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_specifier_3,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::compound_statement> _p_cast_object;
}PyCAst_object_compound_statement;


static PyObject * PyCAst_new_compound_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_compound_statement(PyObject *_self);


static int PyCAst_init_compound_statement(PyCAst_object_compound_statement *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_compound_statement_code(PyObject *_self);


static PyObject *PyCAst_getter_compound_statement_isNull(PyObject *_self);


static PyObject *PyCAst_getter_compound_statement_refCount(PyObject *_self);


static PyObject *PyCAst_getter_compound_statement_declaration_list(PyObject *_self);


static PyObject *PyCAst_getter_compound_statement_statement_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_compound_statement [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_compound_statement_refCount,NULL,(char*)"compound_statement_refCount", NULL},
	{(char*)"declaration_list", (getter)PyCAst_getter_compound_statement_declaration_list,NULL,(char*)"compound_statement_declaration_list", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_compound_statement_isNull,NULL,(char*)"compound_statement_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_compound_statement_code,NULL,(char*)"compound_statement_code", NULL},
	{(char*)"statement_list", (getter)PyCAst_getter_compound_statement_statement_list,NULL,(char*)"compound_statement_statement_list", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_compound_statement [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_compound_statement [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_compound_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.compound_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_compound_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_compound_statement,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the compound_statement",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_compound_statement,
	/* tp_members-----------*/      PyCAst_members_compound_statement,
	/* tp_getset------------*/      PyCAst_getsetter_compound_statement,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_compound_statement,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_compound_statement,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::inclusive_or_expression_item> _p_cast_object;
}PyCAst_object_inclusive_or_expression_item;


static PyObject * PyCAst_new_inclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_inclusive_or_expression_item(PyObject *_self);


static int PyCAst_init_inclusive_or_expression_item(PyCAst_object_inclusive_or_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_inclusive_or_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_inclusive_or_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_inclusive_or_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_inclusive_or_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_inclusive_or_expression_item_exclusive_or_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_inclusive_or_expression_item [] = 
	{
	{(char*)"exclusive_or_expression", (getter)PyCAst_getter_inclusive_or_expression_item_exclusive_or_expression,NULL,(char*)"inclusive_or_expression_item_exclusive_or_expression", NULL},
	{(char*)"token", (getter)PyCAst_getter_inclusive_or_expression_item_token,NULL,(char*)"inclusive_or_expression_item_token", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_inclusive_or_expression_item_isNull,NULL,(char*)"inclusive_or_expression_item_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_inclusive_or_expression_item_code,NULL,(char*)"inclusive_or_expression_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_inclusive_or_expression_item_refCount,NULL,(char*)"inclusive_or_expression_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_inclusive_or_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_inclusive_or_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_inclusive_or_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.inclusive_or_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_inclusive_or_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_inclusive_or_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the inclusive_or_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_inclusive_or_expression_item,
	/* tp_members-----------*/      PyCAst_members_inclusive_or_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_inclusive_or_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_inclusive_or_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_inclusive_or_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::inclusive_or_expression> _p_cast_object;
}PyCAst_object_inclusive_or_expression;


static PyObject * PyCAst_new_inclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_inclusive_or_expression(PyObject *_self);


static int PyCAst_init_inclusive_or_expression(PyCAst_object_inclusive_or_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_inclusive_or_expression(PyObject *_self);


static PyObject* PyCAst_list_item_inclusive_or_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_inclusive_or_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_inclusive_or_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_inclusive_or_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_inclusive_or_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_inclusive_or_expression [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_inclusive_or_expression_code,NULL,(char*)"inclusive_or_expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_inclusive_or_expression_refCount,NULL,(char*)"inclusive_or_expression_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_inclusive_or_expression_size,NULL,(char*)"inclusive_or_expression_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_inclusive_or_expression_isNull,NULL,(char*)"inclusive_or_expression_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_inclusive_or_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_inclusive_or_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_inclusive_or_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_inclusive_or_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_inclusive_or_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_inclusive_or_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.inclusive_or_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_inclusive_or_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_inclusive_or_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_inclusive_or_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the inclusive_or_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_inclusive_or_expression,
	/* tp_members-----------*/      PyCAst_members_inclusive_or_expression,
	/* tp_getset------------*/      PyCAst_getsetter_inclusive_or_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_inclusive_or_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_inclusive_or_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::pointer_item_1> _p_cast_object;
}PyCAst_object_pointer_item_1;


static PyObject * PyCAst_new_pointer_item_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_pointer_item_1(PyObject *_self);


static int PyCAst_init_pointer_item_1(PyCAst_object_pointer_item_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_pointer_item_1_code(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_1_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_pointer_item_1 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_pointer_item_1_isNull,NULL,(char*)"pointer_item_1_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_pointer_item_1_code,NULL,(char*)"pointer_item_1_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_pointer_item_1_refCount,NULL,(char*)"pointer_item_1_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_pointer_item_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_pointer_item_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_pointer_item_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.pointer_item_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_pointer_item_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_pointer_item_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the pointer_item_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_pointer_item_1,
	/* tp_members-----------*/      PyCAst_members_pointer_item_1,
	/* tp_getset------------*/      PyCAst_getsetter_pointer_item_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_pointer_item_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_pointer_item_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::pointer_item_2> _p_cast_object;
}PyCAst_object_pointer_item_2;


static PyObject * PyCAst_new_pointer_item_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_pointer_item_2(PyObject *_self);


static int PyCAst_init_pointer_item_2(PyCAst_object_pointer_item_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_pointer_item_2_code(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_2_type_qualifier_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_pointer_item_2 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_pointer_item_2_refCount,NULL,(char*)"pointer_item_2_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_pointer_item_2_code,NULL,(char*)"pointer_item_2_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_pointer_item_2_isNull,NULL,(char*)"pointer_item_2_isNull", NULL},
	{(char*)"type_qualifier_list", (getter)PyCAst_getter_pointer_item_2_type_qualifier_list,NULL,(char*)"pointer_item_2_type_qualifier_list", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_pointer_item_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_pointer_item_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_pointer_item_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.pointer_item_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_pointer_item_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_pointer_item_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the pointer_item_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_pointer_item_2,
	/* tp_members-----------*/      PyCAst_members_pointer_item_2,
	/* tp_getset------------*/      PyCAst_getsetter_pointer_item_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_pointer_item_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_pointer_item_2,
	
};




typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::pointer> _p_cast_object;
}PyCAst_object_pointer;


static PyObject * PyCAst_new_pointer(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_pointer(PyObject *_self);


static int PyCAst_init_pointer(PyCAst_object_pointer *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_pointer(PyObject *_self);


static PyObject* PyCAst_list_item_pointer(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_pointer_code(PyObject *_self);


static PyObject *PyCAst_getter_pointer_isNull(PyObject *_self);


static PyObject *PyCAst_getter_pointer_refCount(PyObject *_self);


static PyObject *PyCAst_getter_pointer_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_pointer [] = 
	{
	{(char*)"size", (getter)PyCAst_getter_pointer_size,NULL,(char*)"pointer_size", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_pointer_refCount,NULL,(char*)"pointer_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_pointer_isNull,NULL,(char*)"pointer_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_pointer_code,NULL,(char*)"pointer_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_pointer [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_pointer [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_pointer =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_pointer,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_pointer,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_pointer = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.pointer",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_pointer),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_pointer,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_pointer,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the pointer",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_pointer,
	/* tp_members-----------*/      PyCAst_members_pointer,
	/* tp_getset------------*/      PyCAst_getsetter_pointer,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_pointer,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_pointer,
	
};




typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::pointer_item> _p_cast_object;
}PyCAst_object_pointer_item;


static PyObject * PyCAst_new_pointer_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_pointer_item(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_code(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_pointer_item_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_pointer_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_pointer_item_isNull,NULL,(char*)"pointer_item_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_pointer_item_refCount,NULL,(char*)"pointer_item_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_pointer_item_code,NULL,(char*)"pointer_item_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_pointer_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_pointer_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_pointer_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.pointer_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_pointer_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_pointer_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the pointer_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_pointer_item,
	/* tp_members-----------*/      PyCAst_members_pointer_item,
	/* tp_getset------------*/      PyCAst_getsetter_pointer_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_pointer_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::selection_statement> _p_cast_object;
}PyCAst_object_selection_statement;


static PyObject * PyCAst_new_selection_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_selection_statement(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_code(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_isNull(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_selection_statement [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_selection_statement_isNull,NULL,(char*)"selection_statement_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_selection_statement_code,NULL,(char*)"selection_statement_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_selection_statement_refCount,NULL,(char*)"selection_statement_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_selection_statement [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_selection_statement [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_selection_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.selection_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_selection_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_selection_statement,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the selection_statement",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_selection_statement,
	/* tp_members-----------*/      PyCAst_members_selection_statement,
	/* tp_getset------------*/      PyCAst_getsetter_selection_statement,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_selection_statement,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::selection_statement_1> _p_cast_object;
}PyCAst_object_selection_statement_1;


static PyObject * PyCAst_new_selection_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_selection_statement_1(PyObject *_self);


static int PyCAst_init_selection_statement_1(PyCAst_object_selection_statement_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_selection_statement_1_code(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_1_expression(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_1_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_selection_statement_1 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_selection_statement_1_code,NULL,(char*)"selection_statement_1_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_selection_statement_1_isNull,NULL,(char*)"selection_statement_1_isNull", NULL},
	{(char*)"expression", (getter)PyCAst_getter_selection_statement_1_expression,NULL,(char*)"selection_statement_1_expression", NULL},
	{(char*)"statement", (getter)PyCAst_getter_selection_statement_1_statement,NULL,(char*)"selection_statement_1_statement", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_selection_statement_1_refCount,NULL,(char*)"selection_statement_1_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_selection_statement_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_selection_statement_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_selection_statement_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.selection_statement_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_selection_statement_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_selection_statement_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the selection_statement_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_selection_statement_1,
	/* tp_members-----------*/      PyCAst_members_selection_statement_1,
	/* tp_getset------------*/      PyCAst_getsetter_selection_statement_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_selection_statement_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_selection_statement_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::selection_statement_2> _p_cast_object;
}PyCAst_object_selection_statement_2;


static PyObject * PyCAst_new_selection_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_selection_statement_2(PyObject *_self);


static int PyCAst_init_selection_statement_2(PyCAst_object_selection_statement_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_selection_statement_2_code(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_2_expression(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_2_statement1(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_2_token(PyObject *_self);


static PyObject *PyCAst_getter_selection_statement_2_statement2(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_selection_statement_2 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_selection_statement_2_isNull,NULL,(char*)"selection_statement_2_isNull", NULL},
	{(char*)"statement1", (getter)PyCAst_getter_selection_statement_2_statement1,NULL,(char*)"selection_statement_2_statement1", NULL},
	{(char*)"statement2", (getter)PyCAst_getter_selection_statement_2_statement2,NULL,(char*)"selection_statement_2_statement2", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_selection_statement_2_refCount,NULL,(char*)"selection_statement_2_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_selection_statement_2_token,NULL,(char*)"selection_statement_2_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_selection_statement_2_code,NULL,(char*)"selection_statement_2_code", NULL},
	{(char*)"expression", (getter)PyCAst_getter_selection_statement_2_expression,NULL,(char*)"selection_statement_2_expression", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_selection_statement_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_selection_statement_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_selection_statement_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.selection_statement_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_selection_statement_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_selection_statement_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the selection_statement_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_selection_statement_2,
	/* tp_members-----------*/      PyCAst_members_selection_statement_2,
	/* tp_getset------------*/      PyCAst_getsetter_selection_statement_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_selection_statement_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_selection_statement_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::postfix_expression> _p_cast_object;
}PyCAst_object_postfix_expression;


static PyObject * PyCAst_new_postfix_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_postfix_expression(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_postfix_expression [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_postfix_expression_isNull,NULL,(char*)"postfix_expression_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_postfix_expression_code,NULL,(char*)"postfix_expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_postfix_expression_refCount,NULL,(char*)"postfix_expression_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_postfix_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_postfix_expression [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_postfix_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_postfix_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the postfix_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression,
	/* tp_members-----------*/      PyCAst_members_postfix_expression,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_1> _p_cast_object;
}PyCAst_object_postfix_expression_1;


static PyObject * PyCAst_new_postfix_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_postfix_expression_1(PyObject *_self);


static int PyCAst_init_postfix_expression_1(PyCAst_object_postfix_expression_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_postfix_expression_1_code(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_1_postfix_expression(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_1_argument_expression_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_postfix_expression_1 [] = 
	{
	{(char*)"argument_expression_list", (getter)PyCAst_getter_postfix_expression_1_argument_expression_list,NULL,(char*)"postfix_expression_1_argument_expression_list", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_postfix_expression_1_isNull,NULL,(char*)"postfix_expression_1_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_postfix_expression_1_code,NULL,(char*)"postfix_expression_1_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_postfix_expression_1_refCount,NULL,(char*)"postfix_expression_1_refCount", NULL},
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression_1_postfix_expression,NULL,(char*)"postfix_expression_1_postfix_expression", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_postfix_expression_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_postfix_expression_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_postfix_expression_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_postfix_expression_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the postfix_expression_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression_1,
	/* tp_members-----------*/      PyCAst_members_postfix_expression_1,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_2> _p_cast_object;
}PyCAst_object_postfix_expression_2;


static PyObject * PyCAst_new_postfix_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_postfix_expression_2(PyObject *_self);


static int PyCAst_init_postfix_expression_2(PyCAst_object_postfix_expression_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_postfix_expression_2_code(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_2_postfix_expression(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_2_token1(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_2_token2(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_postfix_expression_2 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_postfix_expression_2_refCount,NULL,(char*)"postfix_expression_2_refCount", NULL},
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression_2_postfix_expression,NULL,(char*)"postfix_expression_2_postfix_expression", NULL},
	{(char*)"token2", (getter)PyCAst_getter_postfix_expression_2_token2,NULL,(char*)"postfix_expression_2_token2", NULL},
	{(char*)"token1", (getter)PyCAst_getter_postfix_expression_2_token1,NULL,(char*)"postfix_expression_2_token1", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_postfix_expression_2_isNull,NULL,(char*)"postfix_expression_2_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_postfix_expression_2_code,NULL,(char*)"postfix_expression_2_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_postfix_expression_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_postfix_expression_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_postfix_expression_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_postfix_expression_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the postfix_expression_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression_2,
	/* tp_members-----------*/      PyCAst_members_postfix_expression_2,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_3> _p_cast_object;
}PyCAst_object_postfix_expression_3;


static PyObject * PyCAst_new_postfix_expression_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_postfix_expression_3(PyObject *_self);


static int PyCAst_init_postfix_expression_3(PyCAst_object_postfix_expression_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_postfix_expression_3_code(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_3_primary_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_postfix_expression_3 [] = 
	{
	{(char*)"primary_expression", (getter)PyCAst_getter_postfix_expression_3_primary_expression,NULL,(char*)"postfix_expression_3_primary_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_postfix_expression_3_refCount,NULL,(char*)"postfix_expression_3_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_postfix_expression_3_code,NULL,(char*)"postfix_expression_3_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_postfix_expression_3_isNull,NULL,(char*)"postfix_expression_3_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_postfix_expression_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_postfix_expression_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_postfix_expression_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_postfix_expression_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the postfix_expression_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression_3,
	/* tp_members-----------*/      PyCAst_members_postfix_expression_3,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression_3,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_4> _p_cast_object;
}PyCAst_object_postfix_expression_4;


static PyObject * PyCAst_new_postfix_expression_4(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_postfix_expression_4(PyObject *_self);


static int PyCAst_init_postfix_expression_4(PyCAst_object_postfix_expression_4 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_postfix_expression_4_code(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_4_isNull(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_4_refCount(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_4_postfix_expression(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_4_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_postfix_expression_4 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_postfix_expression_4_refCount,NULL,(char*)"postfix_expression_4_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_postfix_expression_4_token,NULL,(char*)"postfix_expression_4_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_postfix_expression_4_code,NULL,(char*)"postfix_expression_4_code", NULL},
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression_4_postfix_expression,NULL,(char*)"postfix_expression_4_postfix_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_postfix_expression_4_isNull,NULL,(char*)"postfix_expression_4_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_postfix_expression_4 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_postfix_expression_4 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_postfix_expression_4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression_4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression_4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_postfix_expression_4,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the postfix_expression_4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression_4,
	/* tp_members-----------*/      PyCAst_members_postfix_expression_4,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression_4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression_4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression_4,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_5> _p_cast_object;
}PyCAst_object_postfix_expression_5;


static PyObject * PyCAst_new_postfix_expression_5(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_postfix_expression_5(PyObject *_self);


static int PyCAst_init_postfix_expression_5(PyCAst_object_postfix_expression_5 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_postfix_expression_5_code(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_5_isNull(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_5_refCount(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_5_postfix_expression(PyObject *_self);


static PyObject *PyCAst_getter_postfix_expression_5_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_postfix_expression_5 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_postfix_expression_5_code,NULL,(char*)"postfix_expression_5_code", NULL},
	{(char*)"expression", (getter)PyCAst_getter_postfix_expression_5_expression,NULL,(char*)"postfix_expression_5_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_postfix_expression_5_refCount,NULL,(char*)"postfix_expression_5_refCount", NULL},
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression_5_postfix_expression,NULL,(char*)"postfix_expression_5_postfix_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_postfix_expression_5_isNull,NULL,(char*)"postfix_expression_5_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_postfix_expression_5 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_postfix_expression_5 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_postfix_expression_5 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression_5",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression_5),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_postfix_expression_5,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the postfix_expression_5",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression_5,
	/* tp_members-----------*/      PyCAst_members_postfix_expression_5,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression_5,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression_5,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression_5,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::and_expression_item> _p_cast_object;
}PyCAst_object_and_expression_item;


static PyObject * PyCAst_new_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_and_expression_item(PyObject *_self);


static int PyCAst_init_and_expression_item(PyCAst_object_and_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_and_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_and_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_and_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_and_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_and_expression_item_equality_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_and_expression_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_and_expression_item_isNull,NULL,(char*)"and_expression_item_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_and_expression_item_token,NULL,(char*)"and_expression_item_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_and_expression_item_code,NULL,(char*)"and_expression_item_code", NULL},
	{(char*)"equality_expression", (getter)PyCAst_getter_and_expression_item_equality_expression,NULL,(char*)"and_expression_item_equality_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_and_expression_item_refCount,NULL,(char*)"and_expression_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_and_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_and_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_and_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.and_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_and_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_and_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the and_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_and_expression_item,
	/* tp_members-----------*/      PyCAst_members_and_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_and_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_and_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_and_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::and_expression> _p_cast_object;
}PyCAst_object_and_expression;


static PyObject * PyCAst_new_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_and_expression(PyObject *_self);


static int PyCAst_init_and_expression(PyCAst_object_and_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_and_expression(PyObject *_self);


static PyObject* PyCAst_list_item_and_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_and_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_and_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_and_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_and_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_and_expression [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_and_expression_refCount,NULL,(char*)"and_expression_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_and_expression_size,NULL,(char*)"and_expression_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_and_expression_isNull,NULL,(char*)"and_expression_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_and_expression_code,NULL,(char*)"and_expression_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_and_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_and_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_and_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_and_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_and_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_and_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.and_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_and_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_and_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_and_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the and_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_and_expression,
	/* tp_members-----------*/      PyCAst_members_and_expression,
	/* tp_getset------------*/      PyCAst_getsetter_and_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_and_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_and_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement> _p_cast_object;
}PyCAst_object_statement;


static PyObject * PyCAst_new_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement(PyObject *_self);


static PyObject *PyCAst_getter_statement_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_statement_code,NULL,(char*)"statement_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_statement_refCount,NULL,(char*)"statement_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_isNull,NULL,(char*)"statement_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement,
	/* tp_members-----------*/      PyCAst_members_statement,
	/* tp_getset------------*/      PyCAst_getsetter_statement,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_1> _p_cast_object;
}PyCAst_object_statement_1;


static PyObject * PyCAst_new_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_1(PyObject *_self);


static int PyCAst_init_statement_1(PyCAst_object_statement_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_statement_1_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_1_jump_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_1 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_statement_1_refCount,NULL,(char*)"statement_1_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_statement_1_code,NULL,(char*)"statement_1_code", NULL},
	{(char*)"jump_statement", (getter)PyCAst_getter_statement_1_jump_statement,NULL,(char*)"statement_1_jump_statement", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_1_isNull,NULL,(char*)"statement_1_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_1,
	/* tp_members-----------*/      PyCAst_members_statement_1,
	/* tp_getset------------*/      PyCAst_getsetter_statement_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_2> _p_cast_object;
}PyCAst_object_statement_2;


static PyObject * PyCAst_new_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_2(PyObject *_self);


static int PyCAst_init_statement_2(PyCAst_object_statement_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_statement_2_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_2_labeled_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_2 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_statement_2_refCount,NULL,(char*)"statement_2_refCount", NULL},
	{(char*)"labeled_statement", (getter)PyCAst_getter_statement_2_labeled_statement,NULL,(char*)"statement_2_labeled_statement", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_2_isNull,NULL,(char*)"statement_2_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_statement_2_code,NULL,(char*)"statement_2_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_2,
	/* tp_members-----------*/      PyCAst_members_statement_2,
	/* tp_getset------------*/      PyCAst_getsetter_statement_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_3> _p_cast_object;
}PyCAst_object_statement_3;


static PyObject * PyCAst_new_statement_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_3(PyObject *_self);


static int PyCAst_init_statement_3(PyCAst_object_statement_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_statement_3_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_3_compound_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_3 [] = 
	{
	{(char*)"compound_statement", (getter)PyCAst_getter_statement_3_compound_statement,NULL,(char*)"statement_3_compound_statement", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_statement_3_refCount,NULL,(char*)"statement_3_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_3_isNull,NULL,(char*)"statement_3_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_statement_3_code,NULL,(char*)"statement_3_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_3,
	/* tp_members-----------*/      PyCAst_members_statement_3,
	/* tp_getset------------*/      PyCAst_getsetter_statement_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_3,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_4> _p_cast_object;
}PyCAst_object_statement_4;


static PyObject * PyCAst_new_statement_4(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_4(PyObject *_self);


static int PyCAst_init_statement_4(PyCAst_object_statement_4 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_statement_4_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_4_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_4_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_4_expression_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_4 [] = 
	{
	{(char*)"expression_statement", (getter)PyCAst_getter_statement_4_expression_statement,NULL,(char*)"statement_4_expression_statement", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_4_isNull,NULL,(char*)"statement_4_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_statement_4_refCount,NULL,(char*)"statement_4_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_statement_4_code,NULL,(char*)"statement_4_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_4 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_4 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement_4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_4,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_4,
	/* tp_members-----------*/      PyCAst_members_statement_4,
	/* tp_getset------------*/      PyCAst_getsetter_statement_4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_4,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_5> _p_cast_object;
}PyCAst_object_statement_5;


static PyObject * PyCAst_new_statement_5(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_5(PyObject *_self);


static int PyCAst_init_statement_5(PyCAst_object_statement_5 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_statement_5_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_5_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_5_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_5_selection_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_5 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_statement_5_refCount,NULL,(char*)"statement_5_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_statement_5_code,NULL,(char*)"statement_5_code", NULL},
	{(char*)"selection_statement", (getter)PyCAst_getter_statement_5_selection_statement,NULL,(char*)"statement_5_selection_statement", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_5_isNull,NULL,(char*)"statement_5_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_5 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_5 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement_5 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_5",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_5),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_5,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_5",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_5,
	/* tp_members-----------*/      PyCAst_members_statement_5,
	/* tp_getset------------*/      PyCAst_getsetter_statement_5,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_5,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_5,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_6> _p_cast_object;
}PyCAst_object_statement_6;


static PyObject * PyCAst_new_statement_6(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_6(PyObject *_self);


static int PyCAst_init_statement_6(PyCAst_object_statement_6 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_statement_6_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_6_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_6_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_6_iteration_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_6 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_statement_6_isNull,NULL,(char*)"statement_6_isNull", NULL},
	{(char*)"iteration_statement", (getter)PyCAst_getter_statement_6_iteration_statement,NULL,(char*)"statement_6_iteration_statement", NULL},
	{(char*)"code", (getter)PyCAst_getter_statement_6_code,NULL,(char*)"statement_6_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_statement_6_refCount,NULL,(char*)"statement_6_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_6 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_6 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement_6 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_6",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_6),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_6,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_6",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_6,
	/* tp_members-----------*/      PyCAst_members_statement_6,
	/* tp_getset------------*/      PyCAst_getsetter_statement_6,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_6,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_6,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::cast_expression> _p_cast_object;
}PyCAst_object_cast_expression;


static PyObject * PyCAst_new_cast_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_cast_expression(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_cast_expression [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_cast_expression_isNull,NULL,(char*)"cast_expression_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_cast_expression_refCount,NULL,(char*)"cast_expression_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_cast_expression_code,NULL,(char*)"cast_expression_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_cast_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_cast_expression [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_cast_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.cast_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_cast_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_cast_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the cast_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_cast_expression,
	/* tp_members-----------*/      PyCAst_members_cast_expression,
	/* tp_getset------------*/      PyCAst_getsetter_cast_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_cast_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::cast_expression_1> _p_cast_object;
}PyCAst_object_cast_expression_1;


static PyObject * PyCAst_new_cast_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_cast_expression_1(PyObject *_self);


static int PyCAst_init_cast_expression_1(PyCAst_object_cast_expression_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_cast_expression_1_code(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_1_type_name(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_1_cast_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_cast_expression_1 [] = 
	{
	{(char*)"type_name", (getter)PyCAst_getter_cast_expression_1_type_name,NULL,(char*)"cast_expression_1_type_name", NULL},
	{(char*)"code", (getter)PyCAst_getter_cast_expression_1_code,NULL,(char*)"cast_expression_1_code", NULL},
	{(char*)"cast_expression", (getter)PyCAst_getter_cast_expression_1_cast_expression,NULL,(char*)"cast_expression_1_cast_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_cast_expression_1_refCount,NULL,(char*)"cast_expression_1_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_cast_expression_1_isNull,NULL,(char*)"cast_expression_1_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_cast_expression_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_cast_expression_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_cast_expression_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.cast_expression_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_cast_expression_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_cast_expression_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the cast_expression_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_cast_expression_1,
	/* tp_members-----------*/      PyCAst_members_cast_expression_1,
	/* tp_getset------------*/      PyCAst_getsetter_cast_expression_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_cast_expression_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_cast_expression_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::cast_expression_2> _p_cast_object;
}PyCAst_object_cast_expression_2;


static PyObject * PyCAst_new_cast_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_cast_expression_2(PyObject *_self);


static int PyCAst_init_cast_expression_2(PyCAst_object_cast_expression_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_cast_expression_2_code(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_cast_expression_2_unary_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_cast_expression_2 [] = 
	{
	{(char*)"unary_expression", (getter)PyCAst_getter_cast_expression_2_unary_expression,NULL,(char*)"cast_expression_2_unary_expression", NULL},
	{(char*)"code", (getter)PyCAst_getter_cast_expression_2_code,NULL,(char*)"cast_expression_2_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_cast_expression_2_isNull,NULL,(char*)"cast_expression_2_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_cast_expression_2_refCount,NULL,(char*)"cast_expression_2_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_cast_expression_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_cast_expression_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_cast_expression_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.cast_expression_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_cast_expression_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_cast_expression_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the cast_expression_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_cast_expression_2,
	/* tp_members-----------*/      PyCAst_members_cast_expression_2,
	/* tp_getset------------*/      PyCAst_getsetter_cast_expression_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_cast_expression_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_cast_expression_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::init_declarator> _p_cast_object;
}PyCAst_object_init_declarator;


static PyObject * PyCAst_new_init_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_init_declarator(PyObject *_self);


static int PyCAst_init_init_declarator(PyCAst_object_init_declarator *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_init_declarator_code(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_refCount(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_declarator(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_token(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_initializer(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_init_declarator [] = 
	{
	{(char*)"initializer", (getter)PyCAst_getter_init_declarator_initializer,NULL,(char*)"init_declarator_initializer", NULL},
	{(char*)"token", (getter)PyCAst_getter_init_declarator_token,NULL,(char*)"init_declarator_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_init_declarator_code,NULL,(char*)"init_declarator_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_init_declarator_refCount,NULL,(char*)"init_declarator_refCount", NULL},
	{(char*)"declarator", (getter)PyCAst_getter_init_declarator_declarator,NULL,(char*)"init_declarator_declarator", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_init_declarator_isNull,NULL,(char*)"init_declarator_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_init_declarator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_init_declarator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_init_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.init_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_init_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_init_declarator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the init_declarator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_init_declarator,
	/* tp_members-----------*/      PyCAst_members_init_declarator,
	/* tp_getset------------*/      PyCAst_getsetter_init_declarator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_init_declarator,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_init_declarator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_declarator_list_item> _p_cast_object;
}PyCAst_object_struct_declarator_list_item;


static PyObject * PyCAst_new_struct_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_declarator_list_item(PyObject *_self);


static int PyCAst_init_struct_declarator_list_item(PyCAst_object_struct_declarator_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_struct_declarator_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_list_item_token(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_list_item_struct_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_declarator_list_item [] = 
	{
	{(char*)"struct_declarator", (getter)PyCAst_getter_struct_declarator_list_item_struct_declarator,NULL,(char*)"struct_declarator_list_item_struct_declarator", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_struct_declarator_list_item_isNull,NULL,(char*)"struct_declarator_list_item_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_declarator_list_item_code,NULL,(char*)"struct_declarator_list_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_struct_declarator_list_item_refCount,NULL,(char*)"struct_declarator_list_item_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_struct_declarator_list_item_token,NULL,(char*)"struct_declarator_list_item_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_declarator_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_declarator_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_struct_declarator_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declarator_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declarator_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_declarator_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_declarator_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_declarator_list_item,
	/* tp_members-----------*/      PyCAst_members_struct_declarator_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declarator_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_declarator_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declarator_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_declarator_list> _p_cast_object;
}PyCAst_object_struct_declarator_list;


static PyObject * PyCAst_new_struct_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_declarator_list(PyObject *_self);


static int PyCAst_init_struct_declarator_list(PyCAst_object_struct_declarator_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_struct_declarator_list(PyObject *_self);


static PyObject* PyCAst_list_item_struct_declarator_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_struct_declarator_list_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_declarator_list [] = 
	{
	{(char*)"size", (getter)PyCAst_getter_struct_declarator_list_size,NULL,(char*)"struct_declarator_list_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_struct_declarator_list_isNull,NULL,(char*)"struct_declarator_list_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_declarator_list_code,NULL,(char*)"struct_declarator_list_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_struct_declarator_list_refCount,NULL,(char*)"struct_declarator_list_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_declarator_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_declarator_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_struct_declarator_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_struct_declarator_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_struct_declarator_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_struct_declarator_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declarator_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declarator_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_declarator_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_struct_declarator_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_declarator_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_declarator_list,
	/* tp_members-----------*/      PyCAst_members_struct_declarator_list,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declarator_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_declarator_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declarator_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::logical_or_expression_item> _p_cast_object;
}PyCAst_object_logical_or_expression_item;


static PyObject * PyCAst_new_logical_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_logical_or_expression_item(PyObject *_self);


static int PyCAst_init_logical_or_expression_item(PyCAst_object_logical_or_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_logical_or_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_logical_or_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_logical_or_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_logical_or_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_logical_or_expression_item_logical_and_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_logical_or_expression_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_logical_or_expression_item_isNull,NULL,(char*)"logical_or_expression_item_isNull", NULL},
	{(char*)"logical_and_expression", (getter)PyCAst_getter_logical_or_expression_item_logical_and_expression,NULL,(char*)"logical_or_expression_item_logical_and_expression", NULL},
	{(char*)"token", (getter)PyCAst_getter_logical_or_expression_item_token,NULL,(char*)"logical_or_expression_item_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_logical_or_expression_item_code,NULL,(char*)"logical_or_expression_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_logical_or_expression_item_refCount,NULL,(char*)"logical_or_expression_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_logical_or_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_logical_or_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_logical_or_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_or_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_or_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_logical_or_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the logical_or_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_logical_or_expression_item,
	/* tp_members-----------*/      PyCAst_members_logical_or_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_logical_or_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_logical_or_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_or_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::logical_or_expression> _p_cast_object;
}PyCAst_object_logical_or_expression;


static PyObject * PyCAst_new_logical_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_logical_or_expression(PyObject *_self);


static int PyCAst_init_logical_or_expression(PyCAst_object_logical_or_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_logical_or_expression(PyObject *_self);


static PyObject* PyCAst_list_item_logical_or_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_logical_or_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_logical_or_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_logical_or_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_logical_or_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_logical_or_expression [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_logical_or_expression_refCount,NULL,(char*)"logical_or_expression_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_logical_or_expression_code,NULL,(char*)"logical_or_expression_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_logical_or_expression_isNull,NULL,(char*)"logical_or_expression_isNull", NULL},
	{(char*)"size", (getter)PyCAst_getter_logical_or_expression_size,NULL,(char*)"logical_or_expression_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_logical_or_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_logical_or_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_logical_or_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_logical_or_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_logical_or_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_logical_or_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_or_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_or_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_logical_or_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_logical_or_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the logical_or_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_logical_or_expression,
	/* tp_members-----------*/      PyCAst_members_logical_or_expression,
	/* tp_getset------------*/      PyCAst_getsetter_logical_or_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_logical_or_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_or_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::unary_operator> _p_cast_object;
}PyCAst_object_unary_operator;


static PyObject * PyCAst_new_unary_operator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_unary_operator(PyObject *_self);


static int PyCAst_init_unary_operator(PyCAst_object_unary_operator *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_unary_operator_code(PyObject *_self);


static PyObject *PyCAst_getter_unary_operator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_unary_operator_refCount(PyObject *_self);


static PyObject *PyCAst_getter_unary_operator_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_unary_operator [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_unary_operator_refCount,NULL,(char*)"unary_operator_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_unary_operator_code,NULL,(char*)"unary_operator_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_unary_operator_isNull,NULL,(char*)"unary_operator_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_unary_operator_token,NULL,(char*)"unary_operator_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_unary_operator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_unary_operator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_unary_operator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_operator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_operator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_unary_operator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the unary_operator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_operator,
	/* tp_members-----------*/      PyCAst_members_unary_operator,
	/* tp_getset------------*/      PyCAst_getsetter_unary_operator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_operator,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_operator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::relational_expression_item> _p_cast_object;
}PyCAst_object_relational_expression_item;


static PyObject * PyCAst_new_relational_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_relational_expression_item(PyObject *_self);


static int PyCAst_init_relational_expression_item(PyCAst_object_relational_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_relational_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_relational_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_relational_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_relational_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_relational_expression_item_shift_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_relational_expression_item [] = 
	{
	{(char*)"shift_expression", (getter)PyCAst_getter_relational_expression_item_shift_expression,NULL,(char*)"relational_expression_item_shift_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_relational_expression_item_isNull,NULL,(char*)"relational_expression_item_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_relational_expression_item_token,NULL,(char*)"relational_expression_item_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_relational_expression_item_code,NULL,(char*)"relational_expression_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_relational_expression_item_refCount,NULL,(char*)"relational_expression_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_relational_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_relational_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_relational_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.relational_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_relational_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_relational_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the relational_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_relational_expression_item,
	/* tp_members-----------*/      PyCAst_members_relational_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_relational_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_relational_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_relational_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::relational_expression> _p_cast_object;
}PyCAst_object_relational_expression;


static PyObject * PyCAst_new_relational_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_relational_expression(PyObject *_self);


static int PyCAst_init_relational_expression(PyCAst_object_relational_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_relational_expression(PyObject *_self);


static PyObject* PyCAst_list_item_relational_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_relational_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_relational_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_relational_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_relational_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_relational_expression [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_relational_expression_refCount,NULL,(char*)"relational_expression_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_relational_expression_code,NULL,(char*)"relational_expression_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_relational_expression_isNull,NULL,(char*)"relational_expression_isNull", NULL},
	{(char*)"size", (getter)PyCAst_getter_relational_expression_size,NULL,(char*)"relational_expression_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_relational_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_relational_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_relational_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_relational_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_relational_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_relational_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.relational_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_relational_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_relational_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_relational_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the relational_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_relational_expression,
	/* tp_members-----------*/      PyCAst_members_relational_expression,
	/* tp_getset------------*/      PyCAst_getsetter_relational_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_relational_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_relational_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_or_union> _p_cast_object;
}PyCAst_object_struct_or_union;


static PyObject * PyCAst_new_struct_or_union(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_or_union(PyObject *_self);


static int PyCAst_init_struct_or_union(PyCAst_object_struct_or_union *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_struct_or_union_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_or_union_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_or_union [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_struct_or_union_refCount,NULL,(char*)"struct_or_union_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_struct_or_union_token,NULL,(char*)"struct_or_union_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_or_union_code,NULL,(char*)"struct_or_union_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_struct_or_union_isNull,NULL,(char*)"struct_or_union_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_or_union [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_or_union [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_struct_or_union = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_or_union",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_or_union),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_or_union,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_or_union",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_or_union,
	/* tp_members-----------*/      PyCAst_members_struct_or_union,
	/* tp_getset------------*/      PyCAst_getsetter_struct_or_union,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_or_union,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_or_union,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::enumerator> _p_cast_object;
}PyCAst_object_enumerator;


static PyObject * PyCAst_new_enumerator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_enumerator(PyObject *_self);


static int PyCAst_init_enumerator(PyCAst_object_enumerator *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_enumerator_code(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_refCount(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_token1(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_token2(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_constant_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_enumerator [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_enumerator_isNull,NULL,(char*)"enumerator_isNull", NULL},
	{(char*)"constant_expression", (getter)PyCAst_getter_enumerator_constant_expression,NULL,(char*)"enumerator_constant_expression", NULL},
	{(char*)"code", (getter)PyCAst_getter_enumerator_code,NULL,(char*)"enumerator_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_enumerator_refCount,NULL,(char*)"enumerator_refCount", NULL},
	{(char*)"token2", (getter)PyCAst_getter_enumerator_token2,NULL,(char*)"enumerator_token2", NULL},
	{(char*)"token1", (getter)PyCAst_getter_enumerator_token1,NULL,(char*)"enumerator_token1", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_enumerator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_enumerator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_enumerator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enumerator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enumerator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_enumerator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the enumerator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_enumerator,
	/* tp_members-----------*/      PyCAst_members_enumerator,
	/* tp_getset------------*/      PyCAst_getsetter_enumerator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_enumerator,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_enumerator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::assignment_expression> _p_cast_object;
}PyCAst_object_assignment_expression;


static PyObject * PyCAst_new_assignment_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_assignment_expression(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_assignment_expression [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_assignment_expression_refCount,NULL,(char*)"assignment_expression_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_assignment_expression_code,NULL,(char*)"assignment_expression_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_assignment_expression_isNull,NULL,(char*)"assignment_expression_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_assignment_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_assignment_expression [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_assignment_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.assignment_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_assignment_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_assignment_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the assignment_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_assignment_expression,
	/* tp_members-----------*/      PyCAst_members_assignment_expression,
	/* tp_getset------------*/      PyCAst_getsetter_assignment_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_assignment_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::assignment_expression_1> _p_cast_object;
}PyCAst_object_assignment_expression_1;


static PyObject * PyCAst_new_assignment_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_assignment_expression_1(PyObject *_self);


static int PyCAst_init_assignment_expression_1(PyCAst_object_assignment_expression_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_assignment_expression_1_code(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_1_conditional_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_assignment_expression_1 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_assignment_expression_1_refCount,NULL,(char*)"assignment_expression_1_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_assignment_expression_1_code,NULL,(char*)"assignment_expression_1_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_assignment_expression_1_isNull,NULL,(char*)"assignment_expression_1_isNull", NULL},
	{(char*)"conditional_expression", (getter)PyCAst_getter_assignment_expression_1_conditional_expression,NULL,(char*)"assignment_expression_1_conditional_expression", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_assignment_expression_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_assignment_expression_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_assignment_expression_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.assignment_expression_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_assignment_expression_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_assignment_expression_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the assignment_expression_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_assignment_expression_1,
	/* tp_members-----------*/      PyCAst_members_assignment_expression_1,
	/* tp_getset------------*/      PyCAst_getsetter_assignment_expression_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_assignment_expression_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_assignment_expression_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::assignment_expression_2> _p_cast_object;
}PyCAst_object_assignment_expression_2;


static PyObject * PyCAst_new_assignment_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_assignment_expression_2(PyObject *_self);


static int PyCAst_init_assignment_expression_2(PyCAst_object_assignment_expression_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_assignment_expression_2_code(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_2_unary_expression(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_2_assignment_operator(PyObject *_self);


static PyObject *PyCAst_getter_assignment_expression_2_assignment_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_assignment_expression_2 [] = 
	{
	{(char*)"assignment_operator", (getter)PyCAst_getter_assignment_expression_2_assignment_operator,NULL,(char*)"assignment_expression_2_assignment_operator", NULL},
	{(char*)"assignment_expression", (getter)PyCAst_getter_assignment_expression_2_assignment_expression,NULL,(char*)"assignment_expression_2_assignment_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_assignment_expression_2_refCount,NULL,(char*)"assignment_expression_2_refCount", NULL},
	{(char*)"unary_expression", (getter)PyCAst_getter_assignment_expression_2_unary_expression,NULL,(char*)"assignment_expression_2_unary_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_assignment_expression_2_isNull,NULL,(char*)"assignment_expression_2_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_assignment_expression_2_code,NULL,(char*)"assignment_expression_2_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_assignment_expression_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_assignment_expression_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_assignment_expression_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.assignment_expression_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_assignment_expression_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_assignment_expression_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the assignment_expression_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_assignment_expression_2,
	/* tp_members-----------*/      PyCAst_members_assignment_expression_2,
	/* tp_getset------------*/      PyCAst_getsetter_assignment_expression_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_assignment_expression_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_assignment_expression_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::parameter_type_list> _p_cast_object;
}PyCAst_object_parameter_type_list;


static PyObject * PyCAst_new_parameter_type_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_parameter_type_list(PyObject *_self);


static int PyCAst_init_parameter_type_list(PyCAst_object_parameter_type_list *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_parameter_type_list_code(PyObject *_self);


static PyObject *PyCAst_getter_parameter_type_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_parameter_type_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_parameter_type_list_parameter_list(PyObject *_self);


static PyObject *PyCAst_getter_parameter_type_list_token1(PyObject *_self);


static PyObject *PyCAst_getter_parameter_type_list_token2(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_parameter_type_list [] = 
	{
	{(char*)"parameter_list", (getter)PyCAst_getter_parameter_type_list_parameter_list,NULL,(char*)"parameter_type_list_parameter_list", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_parameter_type_list_refCount,NULL,(char*)"parameter_type_list_refCount", NULL},
	{(char*)"token2", (getter)PyCAst_getter_parameter_type_list_token2,NULL,(char*)"parameter_type_list_token2", NULL},
	{(char*)"token1", (getter)PyCAst_getter_parameter_type_list_token1,NULL,(char*)"parameter_type_list_token1", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_parameter_type_list_isNull,NULL,(char*)"parameter_type_list_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_parameter_type_list_code,NULL,(char*)"parameter_type_list_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_parameter_type_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_parameter_type_list [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_parameter_type_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_type_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_type_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_parameter_type_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the parameter_type_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_type_list,
	/* tp_members-----------*/      PyCAst_members_parameter_type_list,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_type_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_parameter_type_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_type_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::parameter_declaration> _p_cast_object;
}PyCAst_object_parameter_declaration;


static PyObject * PyCAst_new_parameter_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_parameter_declaration(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_code(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_isNull(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_parameter_declaration [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_parameter_declaration_code,NULL,(char*)"parameter_declaration_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_parameter_declaration_refCount,NULL,(char*)"parameter_declaration_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_parameter_declaration_isNull,NULL,(char*)"parameter_declaration_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_parameter_declaration [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_parameter_declaration [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_parameter_declaration = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_declaration",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_declaration),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_parameter_declaration,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the parameter_declaration",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_declaration,
	/* tp_members-----------*/      PyCAst_members_parameter_declaration,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_declaration,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_declaration,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::parameter_declaration_1> _p_cast_object;
}PyCAst_object_parameter_declaration_1;


static PyObject * PyCAst_new_parameter_declaration_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_parameter_declaration_1(PyObject *_self);


static int PyCAst_init_parameter_declaration_1(PyCAst_object_parameter_declaration_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_parameter_declaration_1_code(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_1_declaration_specifiers(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_1_abstract_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_parameter_declaration_1 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_parameter_declaration_1_isNull,NULL,(char*)"parameter_declaration_1_isNull", NULL},
	{(char*)"declaration_specifiers", (getter)PyCAst_getter_parameter_declaration_1_declaration_specifiers,NULL,(char*)"parameter_declaration_1_declaration_specifiers", NULL},
	{(char*)"code", (getter)PyCAst_getter_parameter_declaration_1_code,NULL,(char*)"parameter_declaration_1_code", NULL},
	{(char*)"abstract_declarator", (getter)PyCAst_getter_parameter_declaration_1_abstract_declarator,NULL,(char*)"parameter_declaration_1_abstract_declarator", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_parameter_declaration_1_refCount,NULL,(char*)"parameter_declaration_1_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_parameter_declaration_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_parameter_declaration_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_parameter_declaration_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_declaration_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_declaration_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_parameter_declaration_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the parameter_declaration_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_declaration_1,
	/* tp_members-----------*/      PyCAst_members_parameter_declaration_1,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_declaration_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_parameter_declaration_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_declaration_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::parameter_declaration_2> _p_cast_object;
}PyCAst_object_parameter_declaration_2;


static PyObject * PyCAst_new_parameter_declaration_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_parameter_declaration_2(PyObject *_self);


static int PyCAst_init_parameter_declaration_2(PyCAst_object_parameter_declaration_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_parameter_declaration_2_code(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_2_declaration_specifiers(PyObject *_self);


static PyObject *PyCAst_getter_parameter_declaration_2_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_parameter_declaration_2 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_parameter_declaration_2_code,NULL,(char*)"parameter_declaration_2_code", NULL},
	{(char*)"declarator", (getter)PyCAst_getter_parameter_declaration_2_declarator,NULL,(char*)"parameter_declaration_2_declarator", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_parameter_declaration_2_refCount,NULL,(char*)"parameter_declaration_2_refCount", NULL},
	{(char*)"declaration_specifiers", (getter)PyCAst_getter_parameter_declaration_2_declaration_specifiers,NULL,(char*)"parameter_declaration_2_declaration_specifiers", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_parameter_declaration_2_isNull,NULL,(char*)"parameter_declaration_2_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_parameter_declaration_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_parameter_declaration_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_parameter_declaration_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_declaration_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_declaration_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_parameter_declaration_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the parameter_declaration_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_declaration_2,
	/* tp_members-----------*/      PyCAst_members_parameter_declaration_2,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_declaration_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_parameter_declaration_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_declaration_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::multiplicative_expression_item> _p_cast_object;
}PyCAst_object_multiplicative_expression_item;


static PyObject * PyCAst_new_multiplicative_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_multiplicative_expression_item(PyObject *_self);


static int PyCAst_init_multiplicative_expression_item(PyCAst_object_multiplicative_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_multiplicative_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_multiplicative_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_multiplicative_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_multiplicative_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_multiplicative_expression_item_cast_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_multiplicative_expression_item [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_multiplicative_expression_item_refCount,NULL,(char*)"multiplicative_expression_item_refCount", NULL},
	{(char*)"cast_expression", (getter)PyCAst_getter_multiplicative_expression_item_cast_expression,NULL,(char*)"multiplicative_expression_item_cast_expression", NULL},
	{(char*)"code", (getter)PyCAst_getter_multiplicative_expression_item_code,NULL,(char*)"multiplicative_expression_item_code", NULL},
	{(char*)"token", (getter)PyCAst_getter_multiplicative_expression_item_token,NULL,(char*)"multiplicative_expression_item_token", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_multiplicative_expression_item_isNull,NULL,(char*)"multiplicative_expression_item_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_multiplicative_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_multiplicative_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_multiplicative_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.multiplicative_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_multiplicative_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_multiplicative_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the multiplicative_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_multiplicative_expression_item,
	/* tp_members-----------*/      PyCAst_members_multiplicative_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_multiplicative_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_multiplicative_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_multiplicative_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::multiplicative_expression> _p_cast_object;
}PyCAst_object_multiplicative_expression;


static PyObject * PyCAst_new_multiplicative_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_multiplicative_expression(PyObject *_self);


static int PyCAst_init_multiplicative_expression(PyCAst_object_multiplicative_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_multiplicative_expression(PyObject *_self);


static PyObject* PyCAst_list_item_multiplicative_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_multiplicative_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_multiplicative_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_multiplicative_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_multiplicative_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_multiplicative_expression [] = 
	{
	{(char*)"size", (getter)PyCAst_getter_multiplicative_expression_size,NULL,(char*)"multiplicative_expression_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_multiplicative_expression_isNull,NULL,(char*)"multiplicative_expression_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_multiplicative_expression_code,NULL,(char*)"multiplicative_expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_multiplicative_expression_refCount,NULL,(char*)"multiplicative_expression_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_multiplicative_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_multiplicative_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_multiplicative_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_multiplicative_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_multiplicative_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_multiplicative_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.multiplicative_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_multiplicative_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_multiplicative_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_multiplicative_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the multiplicative_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_multiplicative_expression,
	/* tp_members-----------*/      PyCAst_members_multiplicative_expression,
	/* tp_getset------------*/      PyCAst_getsetter_multiplicative_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_multiplicative_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_multiplicative_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_qualifier_list_item> _p_cast_object;
}PyCAst_object_type_qualifier_list_item;


static PyObject * PyCAst_new_type_qualifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_qualifier_list_item(PyObject *_self);


static int PyCAst_init_type_qualifier_list_item(PyCAst_object_type_qualifier_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_type_qualifier_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_list_item_type_qualifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_qualifier_list_item [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_type_qualifier_list_item_code,NULL,(char*)"type_qualifier_list_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_type_qualifier_list_item_refCount,NULL,(char*)"type_qualifier_list_item_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_type_qualifier_list_item_isNull,NULL,(char*)"type_qualifier_list_item_isNull", NULL},
	{(char*)"type_qualifier", (getter)PyCAst_getter_type_qualifier_list_item_type_qualifier,NULL,(char*)"type_qualifier_list_item_type_qualifier", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_qualifier_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_qualifier_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_type_qualifier_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_qualifier_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_qualifier_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_qualifier_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_qualifier_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_qualifier_list_item,
	/* tp_members-----------*/      PyCAst_members_type_qualifier_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_type_qualifier_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_qualifier_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_qualifier_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_qualifier_list> _p_cast_object;
}PyCAst_object_type_qualifier_list;


static PyObject * PyCAst_new_type_qualifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_qualifier_list(PyObject *_self);


static int PyCAst_init_type_qualifier_list(PyCAst_object_type_qualifier_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_type_qualifier_list(PyObject *_self);


static PyObject* PyCAst_list_item_type_qualifier_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_type_qualifier_list_code(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_qualifier_list [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_type_qualifier_list_refCount,NULL,(char*)"type_qualifier_list_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_type_qualifier_list_code,NULL,(char*)"type_qualifier_list_code", NULL},
	{(char*)"size", (getter)PyCAst_getter_type_qualifier_list_size,NULL,(char*)"type_qualifier_list_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_type_qualifier_list_isNull,NULL,(char*)"type_qualifier_list_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_qualifier_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_qualifier_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_type_qualifier_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_type_qualifier_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_type_qualifier_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_type_qualifier_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_qualifier_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_qualifier_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_qualifier_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_type_qualifier_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_qualifier_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_qualifier_list,
	/* tp_members-----------*/      PyCAst_members_type_qualifier_list,
	/* tp_getset------------*/      PyCAst_getsetter_type_qualifier_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_qualifier_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_qualifier_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::argument_expression_list_item> _p_cast_object;
}PyCAst_object_argument_expression_list_item;


static PyObject * PyCAst_new_argument_expression_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_argument_expression_list_item(PyObject *_self);


static int PyCAst_init_argument_expression_list_item(PyCAst_object_argument_expression_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_argument_expression_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_argument_expression_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_argument_expression_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_argument_expression_list_item_token(PyObject *_self);


static PyObject *PyCAst_getter_argument_expression_list_item_assignment_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_argument_expression_list_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_argument_expression_list_item_isNull,NULL,(char*)"argument_expression_list_item_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_argument_expression_list_item_code,NULL,(char*)"argument_expression_list_item_code", NULL},
	{(char*)"assignment_expression", (getter)PyCAst_getter_argument_expression_list_item_assignment_expression,NULL,(char*)"argument_expression_list_item_assignment_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_argument_expression_list_item_refCount,NULL,(char*)"argument_expression_list_item_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_argument_expression_list_item_token,NULL,(char*)"argument_expression_list_item_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_argument_expression_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_argument_expression_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_argument_expression_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.argument_expression_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_argument_expression_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_argument_expression_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the argument_expression_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_argument_expression_list_item,
	/* tp_members-----------*/      PyCAst_members_argument_expression_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_argument_expression_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_argument_expression_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_argument_expression_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::argument_expression_list> _p_cast_object;
}PyCAst_object_argument_expression_list;


static PyObject * PyCAst_new_argument_expression_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_argument_expression_list(PyObject *_self);


static int PyCAst_init_argument_expression_list(PyCAst_object_argument_expression_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_argument_expression_list(PyObject *_self);


static PyObject* PyCAst_list_item_argument_expression_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_argument_expression_list_code(PyObject *_self);


static PyObject *PyCAst_getter_argument_expression_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_argument_expression_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_argument_expression_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_argument_expression_list [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_argument_expression_list_code,NULL,(char*)"argument_expression_list_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_argument_expression_list_refCount,NULL,(char*)"argument_expression_list_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_argument_expression_list_size,NULL,(char*)"argument_expression_list_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_argument_expression_list_isNull,NULL,(char*)"argument_expression_list_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_argument_expression_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_argument_expression_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_argument_expression_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_argument_expression_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_argument_expression_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_argument_expression_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.argument_expression_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_argument_expression_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_argument_expression_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_argument_expression_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the argument_expression_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_argument_expression_list,
	/* tp_members-----------*/      PyCAst_members_argument_expression_list,
	/* tp_getset------------*/      PyCAst_getsetter_argument_expression_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_argument_expression_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_argument_expression_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_abstract_declarator> _p_cast_object;
}PyCAst_object_direct_abstract_declarator;


static PyObject * PyCAst_new_direct_abstract_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_abstract_declarator(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_direct_abstract_declarator_code,NULL,(char*)"direct_abstract_declarator_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_abstract_declarator_refCount,NULL,(char*)"direct_abstract_declarator_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_abstract_declarator_isNull,NULL,(char*)"direct_abstract_declarator_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_abstract_declarator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_abstract_declarator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_abstract_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_abstract_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_abstract_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_abstract_declarator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_abstract_declarator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_abstract_declarator,
	/* tp_members-----------*/      PyCAst_members_direct_abstract_declarator,
	/* tp_getset------------*/      PyCAst_getsetter_direct_abstract_declarator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_abstract_declarator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_abstract_declarator_1> _p_cast_object;
}PyCAst_object_direct_abstract_declarator_1;


static PyObject * PyCAst_new_direct_abstract_declarator_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_abstract_declarator_1(PyObject *_self);


static int PyCAst_init_direct_abstract_declarator_1(PyCAst_object_direct_abstract_declarator_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_abstract_declarator_1_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_1_abstract_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator_1 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_direct_abstract_declarator_1_refCount,NULL,(char*)"direct_abstract_declarator_1_refCount", NULL},
	{(char*)"abstract_declarator", (getter)PyCAst_getter_direct_abstract_declarator_1_abstract_declarator,NULL,(char*)"direct_abstract_declarator_1_abstract_declarator", NULL},
	{(char*)"code", (getter)PyCAst_getter_direct_abstract_declarator_1_code,NULL,(char*)"direct_abstract_declarator_1_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_abstract_declarator_1_isNull,NULL,(char*)"direct_abstract_declarator_1_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_abstract_declarator_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_abstract_declarator_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_abstract_declarator_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_abstract_declarator_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_abstract_declarator_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_abstract_declarator_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_abstract_declarator_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_abstract_declarator_1,
	/* tp_members-----------*/      PyCAst_members_direct_abstract_declarator_1,
	/* tp_getset------------*/      PyCAst_getsetter_direct_abstract_declarator_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_abstract_declarator_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_abstract_declarator_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_abstract_declarator_2> _p_cast_object;
}PyCAst_object_direct_abstract_declarator_2;


static PyObject * PyCAst_new_direct_abstract_declarator_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_abstract_declarator_2(PyObject *_self);


static int PyCAst_init_direct_abstract_declarator_2(PyCAst_object_direct_abstract_declarator_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_abstract_declarator_2_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_2_direct_abstract_declarator(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_2_parameter_type_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator_2 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_direct_abstract_declarator_2_code,NULL,(char*)"direct_abstract_declarator_2_code", NULL},
	{(char*)"direct_abstract_declarator", (getter)PyCAst_getter_direct_abstract_declarator_2_direct_abstract_declarator,NULL,(char*)"direct_abstract_declarator_2_direct_abstract_declarator", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_abstract_declarator_2_refCount,NULL,(char*)"direct_abstract_declarator_2_refCount", NULL},
	{(char*)"parameter_type_list", (getter)PyCAst_getter_direct_abstract_declarator_2_parameter_type_list,NULL,(char*)"direct_abstract_declarator_2_parameter_type_list", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_abstract_declarator_2_isNull,NULL,(char*)"direct_abstract_declarator_2_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_abstract_declarator_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_abstract_declarator_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_abstract_declarator_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_abstract_declarator_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_abstract_declarator_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_abstract_declarator_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_abstract_declarator_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_abstract_declarator_2,
	/* tp_members-----------*/      PyCAst_members_direct_abstract_declarator_2,
	/* tp_getset------------*/      PyCAst_getsetter_direct_abstract_declarator_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_abstract_declarator_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_abstract_declarator_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_abstract_declarator_3> _p_cast_object;
}PyCAst_object_direct_abstract_declarator_3;


static PyObject * PyCAst_new_direct_abstract_declarator_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_abstract_declarator_3(PyObject *_self);


static int PyCAst_init_direct_abstract_declarator_3(PyCAst_object_direct_abstract_declarator_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_abstract_declarator_3_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_3_direct_abstract_declarator(PyObject *_self);


static PyObject *PyCAst_getter_direct_abstract_declarator_3_constant_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator_3 [] = 
	{
	{(char*)"constant_expression", (getter)PyCAst_getter_direct_abstract_declarator_3_constant_expression,NULL,(char*)"direct_abstract_declarator_3_constant_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_abstract_declarator_3_isNull,NULL,(char*)"direct_abstract_declarator_3_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_direct_abstract_declarator_3_code,NULL,(char*)"direct_abstract_declarator_3_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_abstract_declarator_3_refCount,NULL,(char*)"direct_abstract_declarator_3_refCount", NULL},
	{(char*)"direct_abstract_declarator", (getter)PyCAst_getter_direct_abstract_declarator_3_direct_abstract_declarator,NULL,(char*)"direct_abstract_declarator_3_direct_abstract_declarator", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_abstract_declarator_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_abstract_declarator_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_abstract_declarator_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_abstract_declarator_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_abstract_declarator_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_abstract_declarator_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_abstract_declarator_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_abstract_declarator_3,
	/* tp_members-----------*/      PyCAst_members_direct_abstract_declarator_3,
	/* tp_getset------------*/      PyCAst_getsetter_direct_abstract_declarator_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_abstract_declarator_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_abstract_declarator_3,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::equality_expression_item> _p_cast_object;
}PyCAst_object_equality_expression_item;


static PyObject * PyCAst_new_equality_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_equality_expression_item(PyObject *_self);


static int PyCAst_init_equality_expression_item(PyCAst_object_equality_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_equality_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_equality_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_equality_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_equality_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_equality_expression_item_relational_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_equality_expression_item [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_equality_expression_item_code,NULL,(char*)"equality_expression_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_equality_expression_item_refCount,NULL,(char*)"equality_expression_item_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_equality_expression_item_isNull,NULL,(char*)"equality_expression_item_isNull", NULL},
	{(char*)"relational_expression", (getter)PyCAst_getter_equality_expression_item_relational_expression,NULL,(char*)"equality_expression_item_relational_expression", NULL},
	{(char*)"token", (getter)PyCAst_getter_equality_expression_item_token,NULL,(char*)"equality_expression_item_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_equality_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_equality_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_equality_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.equality_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_equality_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_equality_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the equality_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_equality_expression_item,
	/* tp_members-----------*/      PyCAst_members_equality_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_equality_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_equality_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_equality_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::equality_expression> _p_cast_object;
}PyCAst_object_equality_expression;


static PyObject * PyCAst_new_equality_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_equality_expression(PyObject *_self);


static int PyCAst_init_equality_expression(PyCAst_object_equality_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_equality_expression(PyObject *_self);


static PyObject* PyCAst_list_item_equality_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_equality_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_equality_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_equality_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_equality_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_equality_expression [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_equality_expression_isNull,NULL,(char*)"equality_expression_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_equality_expression_refCount,NULL,(char*)"equality_expression_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_equality_expression_code,NULL,(char*)"equality_expression_code", NULL},
	{(char*)"size", (getter)PyCAst_getter_equality_expression_size,NULL,(char*)"equality_expression_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_equality_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_equality_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_equality_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_equality_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_equality_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_equality_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.equality_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_equality_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_equality_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_equality_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the equality_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_equality_expression,
	/* tp_members-----------*/      PyCAst_members_equality_expression,
	/* tp_getset------------*/      PyCAst_getsetter_equality_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_equality_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_equality_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::primary_expression> _p_cast_object;
}PyCAst_object_primary_expression;


static PyObject * PyCAst_new_primary_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_primary_expression(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_primary_expression [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_primary_expression_isNull,NULL,(char*)"primary_expression_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_primary_expression_code,NULL,(char*)"primary_expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_primary_expression_refCount,NULL,(char*)"primary_expression_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_primary_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_primary_expression [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_primary_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.primary_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_primary_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_primary_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the primary_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_primary_expression,
	/* tp_members-----------*/      PyCAst_members_primary_expression,
	/* tp_getset------------*/      PyCAst_getsetter_primary_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_primary_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::primary_expression_1> _p_cast_object;
}PyCAst_object_primary_expression_1;


static PyObject * PyCAst_new_primary_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_primary_expression_1(PyObject *_self);


static int PyCAst_init_primary_expression_1(PyCAst_object_primary_expression_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_primary_expression_1_code(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_1_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_primary_expression_1 [] = 
	{
	{(char*)"token", (getter)PyCAst_getter_primary_expression_1_token,NULL,(char*)"primary_expression_1_token", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_primary_expression_1_isNull,NULL,(char*)"primary_expression_1_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_primary_expression_1_code,NULL,(char*)"primary_expression_1_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_primary_expression_1_refCount,NULL,(char*)"primary_expression_1_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_primary_expression_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_primary_expression_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_primary_expression_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.primary_expression_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_primary_expression_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_primary_expression_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the primary_expression_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_primary_expression_1,
	/* tp_members-----------*/      PyCAst_members_primary_expression_1,
	/* tp_getset------------*/      PyCAst_getsetter_primary_expression_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_primary_expression_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_primary_expression_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::primary_expression_2> _p_cast_object;
}PyCAst_object_primary_expression_2;


static PyObject * PyCAst_new_primary_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_primary_expression_2(PyObject *_self);


static int PyCAst_init_primary_expression_2(PyCAst_object_primary_expression_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_primary_expression_2_code(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_primary_expression_2_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_primary_expression_2 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_primary_expression_2_code,NULL,(char*)"primary_expression_2_code", NULL},
	{(char*)"expression", (getter)PyCAst_getter_primary_expression_2_expression,NULL,(char*)"primary_expression_2_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_primary_expression_2_refCount,NULL,(char*)"primary_expression_2_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_primary_expression_2_isNull,NULL,(char*)"primary_expression_2_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_primary_expression_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_primary_expression_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_primary_expression_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.primary_expression_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_primary_expression_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_primary_expression_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the primary_expression_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_primary_expression_2,
	/* tp_members-----------*/      PyCAst_members_primary_expression_2,
	/* tp_getset------------*/      PyCAst_getsetter_primary_expression_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_primary_expression_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_primary_expression_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item_1> _p_cast_object;
}PyCAst_object_declaration_specifiers_item_1;


static PyObject * PyCAst_new_declaration_specifiers_item_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration_specifiers_item_1(PyObject *_self);


static int PyCAst_init_declaration_specifiers_item_1(PyCAst_object_declaration_specifiers_item_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_declaration_specifiers_item_1_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_1_storage_class_specifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration_specifiers_item_1 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_declaration_specifiers_item_1_refCount,NULL,(char*)"declaration_specifiers_item_1_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_declaration_specifiers_item_1_isNull,NULL,(char*)"declaration_specifiers_item_1_isNull", NULL},
	{(char*)"storage_class_specifier", (getter)PyCAst_getter_declaration_specifiers_item_1_storage_class_specifier,NULL,(char*)"declaration_specifiers_item_1_storage_class_specifier", NULL},
	{(char*)"code", (getter)PyCAst_getter_declaration_specifiers_item_1_code,NULL,(char*)"declaration_specifiers_item_1_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration_specifiers_item_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration_specifiers_item_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_declaration_specifiers_item_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers_item_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers_item_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration_specifiers_item_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration_specifiers_item_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers_item_1,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers_item_1,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers_item_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_specifiers_item_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers_item_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item_2> _p_cast_object;
}PyCAst_object_declaration_specifiers_item_2;


static PyObject * PyCAst_new_declaration_specifiers_item_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration_specifiers_item_2(PyObject *_self);


static int PyCAst_init_declaration_specifiers_item_2(PyCAst_object_declaration_specifiers_item_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_declaration_specifiers_item_2_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_2_type_specifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration_specifiers_item_2 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_declaration_specifiers_item_2_isNull,NULL,(char*)"declaration_specifiers_item_2_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_declaration_specifiers_item_2_code,NULL,(char*)"declaration_specifiers_item_2_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_declaration_specifiers_item_2_refCount,NULL,(char*)"declaration_specifiers_item_2_refCount", NULL},
	{(char*)"type_specifier", (getter)PyCAst_getter_declaration_specifiers_item_2_type_specifier,NULL,(char*)"declaration_specifiers_item_2_type_specifier", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration_specifiers_item_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration_specifiers_item_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_declaration_specifiers_item_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers_item_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers_item_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration_specifiers_item_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration_specifiers_item_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers_item_2,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers_item_2,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers_item_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_specifiers_item_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers_item_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item_3> _p_cast_object;
}PyCAst_object_declaration_specifiers_item_3;


static PyObject * PyCAst_new_declaration_specifiers_item_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration_specifiers_item_3(PyObject *_self);


static int PyCAst_init_declaration_specifiers_item_3(PyCAst_object_declaration_specifiers_item_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_declaration_specifiers_item_3_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_3_type_qualifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration_specifiers_item_3 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_declaration_specifiers_item_3_code,NULL,(char*)"declaration_specifiers_item_3_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_declaration_specifiers_item_3_refCount,NULL,(char*)"declaration_specifiers_item_3_refCount", NULL},
	{(char*)"type_qualifier", (getter)PyCAst_getter_declaration_specifiers_item_3_type_qualifier,NULL,(char*)"declaration_specifiers_item_3_type_qualifier", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_declaration_specifiers_item_3_isNull,NULL,(char*)"declaration_specifiers_item_3_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration_specifiers_item_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration_specifiers_item_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_declaration_specifiers_item_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers_item_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers_item_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration_specifiers_item_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration_specifiers_item_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers_item_3,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers_item_3,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers_item_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_specifiers_item_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers_item_3,
	
};




typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers> _p_cast_object;
}PyCAst_object_declaration_specifiers;


static PyObject * PyCAst_new_declaration_specifiers(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration_specifiers(PyObject *_self);


static int PyCAst_init_declaration_specifiers(PyCAst_object_declaration_specifiers *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_declaration_specifiers(PyObject *_self);


static PyObject* PyCAst_list_item_declaration_specifiers(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_declaration_specifiers_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration_specifiers [] = 
	{
	{(char*)"size", (getter)PyCAst_getter_declaration_specifiers_size,NULL,(char*)"declaration_specifiers_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_declaration_specifiers_isNull,NULL,(char*)"declaration_specifiers_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_declaration_specifiers_code,NULL,(char*)"declaration_specifiers_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_declaration_specifiers_refCount,NULL,(char*)"declaration_specifiers_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration_specifiers [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration_specifiers [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_declaration_specifiers =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_declaration_specifiers,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_declaration_specifiers,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_declaration_specifiers = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration_specifiers,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_declaration_specifiers,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration_specifiers",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_specifiers,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers,
	
};




typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item> _p_cast_object;
}PyCAst_object_declaration_specifiers_item;


static PyObject * PyCAst_new_declaration_specifiers_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration_specifiers_item(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_specifiers_item_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration_specifiers_item [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_declaration_specifiers_item_refCount,NULL,(char*)"declaration_specifiers_item_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_declaration_specifiers_item_code,NULL,(char*)"declaration_specifiers_item_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_declaration_specifiers_item_isNull,NULL,(char*)"declaration_specifiers_item_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration_specifiers_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration_specifiers_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_declaration_specifiers_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration_specifiers_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration_specifiers_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers_item,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers_item,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration> _p_cast_object;
}PyCAst_object_declaration;


static PyObject * PyCAst_new_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration(PyObject *_self);


static int PyCAst_init_declaration(PyCAst_object_declaration *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_declaration_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declaration_declaration_specifiers(PyObject *_self);


static PyObject *PyCAst_getter_declaration_init_declarator_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_declaration_isNull,NULL,(char*)"declaration_isNull", NULL},
	{(char*)"init_declarator_list", (getter)PyCAst_getter_declaration_init_declarator_list,NULL,(char*)"declaration_init_declarator_list", NULL},
	{(char*)"code", (getter)PyCAst_getter_declaration_code,NULL,(char*)"declaration_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_declaration_refCount,NULL,(char*)"declaration_refCount", NULL},
	{(char*)"specifiers", (getter)PyCAst_getter_declaration_declaration_specifiers,NULL,(char*)"declaration_declaration_specifiers", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_declaration = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration,
	/* tp_members-----------*/      PyCAst_members_declaration,
	/* tp_getset------------*/      PyCAst_getsetter_declaration,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_declarator> _p_cast_object;
}PyCAst_object_direct_declarator;


static PyObject * PyCAst_new_direct_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_declarator(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_declarator [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_direct_declarator_code,NULL,(char*)"direct_declarator_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_declarator_isNull,NULL,(char*)"direct_declarator_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_declarator_refCount,NULL,(char*)"direct_declarator_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_declarator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_declarator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_declarator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_declarator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator,
	/* tp_members-----------*/      PyCAst_members_direct_declarator,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_1> _p_cast_object;
}PyCAst_object_direct_declarator_1;


static PyObject * PyCAst_new_direct_declarator_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_declarator_1(PyObject *_self);


static int PyCAst_init_direct_declarator_1(PyCAst_object_direct_declarator_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_declarator_1_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_1_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_declarator_1 [] = 
	{
	{(char*)"declarator", (getter)PyCAst_getter_direct_declarator_1_declarator,NULL,(char*)"direct_declarator_1_declarator", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_declarator_1_refCount,NULL,(char*)"direct_declarator_1_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_declarator_1_isNull,NULL,(char*)"direct_declarator_1_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_direct_declarator_1_code,NULL,(char*)"direct_declarator_1_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_declarator_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_declarator_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_declarator_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_declarator_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_declarator_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator_1,
	/* tp_members-----------*/      PyCAst_members_direct_declarator_1,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_2> _p_cast_object;
}PyCAst_object_direct_declarator_2;


static PyObject * PyCAst_new_direct_declarator_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_declarator_2(PyObject *_self);


static int PyCAst_init_direct_declarator_2(PyCAst_object_direct_declarator_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_declarator_2_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_2_direct_declarator(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_2_constant_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_declarator_2 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_direct_declarator_2_isNull,NULL,(char*)"direct_declarator_2_isNull", NULL},
	{(char*)"constant_expression", (getter)PyCAst_getter_direct_declarator_2_constant_expression,NULL,(char*)"direct_declarator_2_constant_expression", NULL},
	{(char*)"direct_declarator", (getter)PyCAst_getter_direct_declarator_2_direct_declarator,NULL,(char*)"direct_declarator_2_direct_declarator", NULL},
	{(char*)"code", (getter)PyCAst_getter_direct_declarator_2_code,NULL,(char*)"direct_declarator_2_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_declarator_2_refCount,NULL,(char*)"direct_declarator_2_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_declarator_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_declarator_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_declarator_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_declarator_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_declarator_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator_2,
	/* tp_members-----------*/      PyCAst_members_direct_declarator_2,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_3> _p_cast_object;
}PyCAst_object_direct_declarator_3;


static PyObject * PyCAst_new_direct_declarator_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_declarator_3(PyObject *_self);


static int PyCAst_init_direct_declarator_3(PyCAst_object_direct_declarator_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_declarator_3_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_3_direct_declarator(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_3_parameter_type_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_declarator_3 [] = 
	{
	{(char*)"direct_declarator", (getter)PyCAst_getter_direct_declarator_3_direct_declarator,NULL,(char*)"direct_declarator_3_direct_declarator", NULL},
	{(char*)"parameter_type_list", (getter)PyCAst_getter_direct_declarator_3_parameter_type_list,NULL,(char*)"direct_declarator_3_parameter_type_list", NULL},
	{(char*)"code", (getter)PyCAst_getter_direct_declarator_3_code,NULL,(char*)"direct_declarator_3_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_declarator_3_refCount,NULL,(char*)"direct_declarator_3_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_declarator_3_isNull,NULL,(char*)"direct_declarator_3_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_declarator_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_declarator_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_declarator_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_declarator_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_declarator_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator_3,
	/* tp_members-----------*/      PyCAst_members_direct_declarator_3,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator_3,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_4> _p_cast_object;
}PyCAst_object_direct_declarator_4;


static PyObject * PyCAst_new_direct_declarator_4(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_declarator_4(PyObject *_self);


static int PyCAst_init_direct_declarator_4(PyCAst_object_direct_declarator_4 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_declarator_4_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_4_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_4_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_4_direct_declarator(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_4_identifier_list(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_declarator_4 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_direct_declarator_4_isNull,NULL,(char*)"direct_declarator_4_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_direct_declarator_4_code,NULL,(char*)"direct_declarator_4_code", NULL},
	{(char*)"direct_declarator", (getter)PyCAst_getter_direct_declarator_4_direct_declarator,NULL,(char*)"direct_declarator_4_direct_declarator", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_declarator_4_refCount,NULL,(char*)"direct_declarator_4_refCount", NULL},
	{(char*)"identifier_list", (getter)PyCAst_getter_direct_declarator_4_identifier_list,NULL,(char*)"direct_declarator_4_identifier_list", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_declarator_4 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_declarator_4 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_declarator_4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator_4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator_4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_declarator_4,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_declarator_4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator_4,
	/* tp_members-----------*/      PyCAst_members_direct_declarator_4,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator_4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator_4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator_4,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_5> _p_cast_object;
}PyCAst_object_direct_declarator_5;


static PyObject * PyCAst_new_direct_declarator_5(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_direct_declarator_5(PyObject *_self);


static int PyCAst_init_direct_declarator_5(PyCAst_object_direct_declarator_5 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_direct_declarator_5_code(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_5_isNull(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_5_refCount(PyObject *_self);


static PyObject *PyCAst_getter_direct_declarator_5_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_direct_declarator_5 [] = 
	{
	{(char*)"token", (getter)PyCAst_getter_direct_declarator_5_token,NULL,(char*)"direct_declarator_5_token", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_direct_declarator_5_refCount,NULL,(char*)"direct_declarator_5_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_direct_declarator_5_isNull,NULL,(char*)"direct_declarator_5_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_direct_declarator_5_code,NULL,(char*)"direct_declarator_5_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_direct_declarator_5 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_direct_declarator_5 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_direct_declarator_5 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator_5",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator_5),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_direct_declarator_5,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the direct_declarator_5",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator_5,
	/* tp_members-----------*/      PyCAst_members_direct_declarator_5,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator_5,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator_5,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator_5,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::logical_and_expression_item> _p_cast_object;
}PyCAst_object_logical_and_expression_item;


static PyObject * PyCAst_new_logical_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_logical_and_expression_item(PyObject *_self);


static int PyCAst_init_logical_and_expression_item(PyCAst_object_logical_and_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_logical_and_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_logical_and_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_logical_and_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_logical_and_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_logical_and_expression_item_inclusive_or_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_logical_and_expression_item [] = 
	{
	{(char*)"inclusive_or_expression", (getter)PyCAst_getter_logical_and_expression_item_inclusive_or_expression,NULL,(char*)"logical_and_expression_item_inclusive_or_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_logical_and_expression_item_isNull,NULL,(char*)"logical_and_expression_item_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_logical_and_expression_item_token,NULL,(char*)"logical_and_expression_item_token", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_logical_and_expression_item_refCount,NULL,(char*)"logical_and_expression_item_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_logical_and_expression_item_code,NULL,(char*)"logical_and_expression_item_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_logical_and_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_logical_and_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_logical_and_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_and_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_and_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_logical_and_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the logical_and_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_logical_and_expression_item,
	/* tp_members-----------*/      PyCAst_members_logical_and_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_logical_and_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_logical_and_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_and_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::logical_and_expression> _p_cast_object;
}PyCAst_object_logical_and_expression;


static PyObject * PyCAst_new_logical_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_logical_and_expression(PyObject *_self);


static int PyCAst_init_logical_and_expression(PyCAst_object_logical_and_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_logical_and_expression(PyObject *_self);


static PyObject* PyCAst_list_item_logical_and_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_logical_and_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_logical_and_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_logical_and_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_logical_and_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_logical_and_expression [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_logical_and_expression_code,NULL,(char*)"logical_and_expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_logical_and_expression_refCount,NULL,(char*)"logical_and_expression_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_logical_and_expression_size,NULL,(char*)"logical_and_expression_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_logical_and_expression_isNull,NULL,(char*)"logical_and_expression_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_logical_and_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_logical_and_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_logical_and_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_logical_and_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_logical_and_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_logical_and_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_and_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_and_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_logical_and_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_logical_and_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the logical_and_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_logical_and_expression,
	/* tp_members-----------*/      PyCAst_members_logical_and_expression,
	/* tp_getset------------*/      PyCAst_getsetter_logical_and_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_logical_and_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_and_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::init_declarator_list_item> _p_cast_object;
}PyCAst_object_init_declarator_list_item;


static PyObject * PyCAst_new_init_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_init_declarator_list_item(PyObject *_self);


static int PyCAst_init_init_declarator_list_item(PyCAst_object_init_declarator_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_init_declarator_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_list_item_token(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_list_item_init_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_init_declarator_list_item [] = 
	{
	{(char*)"token", (getter)PyCAst_getter_init_declarator_list_item_token,NULL,(char*)"init_declarator_list_item_token", NULL},
	{(char*)"init_declarator", (getter)PyCAst_getter_init_declarator_list_item_init_declarator,NULL,(char*)"init_declarator_list_item_init_declarator", NULL},
	{(char*)"code", (getter)PyCAst_getter_init_declarator_list_item_code,NULL,(char*)"init_declarator_list_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_init_declarator_list_item_refCount,NULL,(char*)"init_declarator_list_item_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_init_declarator_list_item_isNull,NULL,(char*)"init_declarator_list_item_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_init_declarator_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_init_declarator_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_init_declarator_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.init_declarator_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_init_declarator_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_init_declarator_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the init_declarator_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_init_declarator_list_item,
	/* tp_members-----------*/      PyCAst_members_init_declarator_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_init_declarator_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_init_declarator_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_init_declarator_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::init_declarator_list> _p_cast_object;
}PyCAst_object_init_declarator_list;


static PyObject * PyCAst_new_init_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_init_declarator_list(PyObject *_self);


static int PyCAst_init_init_declarator_list(PyCAst_object_init_declarator_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_init_declarator_list(PyObject *_self);


static PyObject* PyCAst_list_item_init_declarator_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_init_declarator_list_code(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_init_declarator_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_init_declarator_list [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_init_declarator_list_refCount,NULL,(char*)"init_declarator_list_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_init_declarator_list_size,NULL,(char*)"init_declarator_list_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_init_declarator_list_isNull,NULL,(char*)"init_declarator_list_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_init_declarator_list_code,NULL,(char*)"init_declarator_list_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_init_declarator_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_init_declarator_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_init_declarator_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_init_declarator_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_init_declarator_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_init_declarator_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.init_declarator_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_init_declarator_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_init_declarator_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_init_declarator_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the init_declarator_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_init_declarator_list,
	/* tp_members-----------*/      PyCAst_members_init_declarator_list,
	/* tp_getset------------*/      PyCAst_getsetter_init_declarator_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_init_declarator_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_init_declarator_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::shift_expression_item> _p_cast_object;
}PyCAst_object_shift_expression_item;


static PyObject * PyCAst_new_shift_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_shift_expression_item(PyObject *_self);


static int PyCAst_init_shift_expression_item(PyCAst_object_shift_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_shift_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_shift_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_shift_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_shift_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_shift_expression_item_additive_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_shift_expression_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_shift_expression_item_isNull,NULL,(char*)"shift_expression_item_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_shift_expression_item_token,NULL,(char*)"shift_expression_item_token", NULL},
	{(char*)"additive_expression", (getter)PyCAst_getter_shift_expression_item_additive_expression,NULL,(char*)"shift_expression_item_additive_expression", NULL},
	{(char*)"code", (getter)PyCAst_getter_shift_expression_item_code,NULL,(char*)"shift_expression_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_shift_expression_item_refCount,NULL,(char*)"shift_expression_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_shift_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_shift_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_shift_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.shift_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_shift_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_shift_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the shift_expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_shift_expression_item,
	/* tp_members-----------*/      PyCAst_members_shift_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_shift_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_shift_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_shift_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::shift_expression> _p_cast_object;
}PyCAst_object_shift_expression;


static PyObject * PyCAst_new_shift_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_shift_expression(PyObject *_self);


static int PyCAst_init_shift_expression(PyCAst_object_shift_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_shift_expression(PyObject *_self);


static PyObject* PyCAst_list_item_shift_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_shift_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_shift_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_shift_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_shift_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_shift_expression [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_shift_expression_code,NULL,(char*)"shift_expression_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_shift_expression_isNull,NULL,(char*)"shift_expression_isNull", NULL},
	{(char*)"size", (getter)PyCAst_getter_shift_expression_size,NULL,(char*)"shift_expression_size", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_shift_expression_refCount,NULL,(char*)"shift_expression_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_shift_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_shift_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_shift_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_shift_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_shift_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_shift_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.shift_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_shift_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_shift_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_shift_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the shift_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_shift_expression,
	/* tp_members-----------*/      PyCAst_members_shift_expression,
	/* tp_getset------------*/      PyCAst_getsetter_shift_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_shift_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_shift_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::identifier_list_item> _p_cast_object;
}PyCAst_object_identifier_list_item;


static PyObject * PyCAst_new_identifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_identifier_list_item(PyObject *_self);


static int PyCAst_init_identifier_list_item(PyCAst_object_identifier_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_identifier_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_identifier_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_identifier_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_identifier_list_item_token1(PyObject *_self);


static PyObject *PyCAst_getter_identifier_list_item_token2(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_identifier_list_item [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_identifier_list_item_refCount,NULL,(char*)"identifier_list_item_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_identifier_list_item_code,NULL,(char*)"identifier_list_item_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_identifier_list_item_isNull,NULL,(char*)"identifier_list_item_isNull", NULL},
	{(char*)"token1", (getter)PyCAst_getter_identifier_list_item_token1,NULL,(char*)"identifier_list_item_token1", NULL},
	{(char*)"token2", (getter)PyCAst_getter_identifier_list_item_token2,NULL,(char*)"identifier_list_item_token2", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_identifier_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_identifier_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_identifier_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.identifier_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_identifier_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_identifier_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the identifier_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_identifier_list_item,
	/* tp_members-----------*/      PyCAst_members_identifier_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_identifier_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_identifier_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_identifier_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::identifier_list> _p_cast_object;
}PyCAst_object_identifier_list;


static PyObject * PyCAst_new_identifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_identifier_list(PyObject *_self);


static int PyCAst_init_identifier_list(PyCAst_object_identifier_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_identifier_list(PyObject *_self);


static PyObject* PyCAst_list_item_identifier_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_identifier_list_code(PyObject *_self);


static PyObject *PyCAst_getter_identifier_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_identifier_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_identifier_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_identifier_list [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_identifier_list_isNull,NULL,(char*)"identifier_list_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_identifier_list_refCount,NULL,(char*)"identifier_list_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_identifier_list_code,NULL,(char*)"identifier_list_code", NULL},
	{(char*)"size", (getter)PyCAst_getter_identifier_list_size,NULL,(char*)"identifier_list_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_identifier_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_identifier_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_identifier_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_identifier_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_identifier_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_identifier_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.identifier_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_identifier_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_identifier_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_identifier_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the identifier_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_identifier_list,
	/* tp_members-----------*/      PyCAst_members_identifier_list,
	/* tp_getset------------*/      PyCAst_getsetter_identifier_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_identifier_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_identifier_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::jump_statement> _p_cast_object;
}PyCAst_object_jump_statement;


static PyObject * PyCAst_new_jump_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_jump_statement(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_code(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_isNull(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_jump_statement [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_jump_statement_refCount,NULL,(char*)"jump_statement_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_jump_statement_code,NULL,(char*)"jump_statement_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_jump_statement_isNull,NULL,(char*)"jump_statement_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_jump_statement [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_jump_statement [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_jump_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.jump_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_jump_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_jump_statement,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the jump_statement",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_jump_statement,
	/* tp_members-----------*/      PyCAst_members_jump_statement,
	/* tp_getset------------*/      PyCAst_getsetter_jump_statement,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_jump_statement,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::jump_statement_1> _p_cast_object;
}PyCAst_object_jump_statement_1;


static PyObject * PyCAst_new_jump_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_jump_statement_1(PyObject *_self);


static int PyCAst_init_jump_statement_1(PyCAst_object_jump_statement_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_jump_statement_1_code(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_1_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_jump_statement_1 [] = 
	{
	{(char*)"expression", (getter)PyCAst_getter_jump_statement_1_expression,NULL,(char*)"jump_statement_1_expression", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_jump_statement_1_refCount,NULL,(char*)"jump_statement_1_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_jump_statement_1_code,NULL,(char*)"jump_statement_1_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_jump_statement_1_isNull,NULL,(char*)"jump_statement_1_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_jump_statement_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_jump_statement_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_jump_statement_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.jump_statement_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_jump_statement_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_jump_statement_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the jump_statement_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_jump_statement_1,
	/* tp_members-----------*/      PyCAst_members_jump_statement_1,
	/* tp_getset------------*/      PyCAst_getsetter_jump_statement_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_jump_statement_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_jump_statement_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::jump_statement_2> _p_cast_object;
}PyCAst_object_jump_statement_2;


static PyObject * PyCAst_new_jump_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_jump_statement_2(PyObject *_self);


static int PyCAst_init_jump_statement_2(PyCAst_object_jump_statement_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_jump_statement_2_code(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_2_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_jump_statement_2 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_jump_statement_2_isNull,NULL,(char*)"jump_statement_2_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_jump_statement_2_token,NULL,(char*)"jump_statement_2_token", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_jump_statement_2_refCount,NULL,(char*)"jump_statement_2_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_jump_statement_2_code,NULL,(char*)"jump_statement_2_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_jump_statement_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_jump_statement_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_jump_statement_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.jump_statement_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_jump_statement_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_jump_statement_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the jump_statement_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_jump_statement_2,
	/* tp_members-----------*/      PyCAst_members_jump_statement_2,
	/* tp_getset------------*/      PyCAst_getsetter_jump_statement_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_jump_statement_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_jump_statement_2,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::jump_statement_3> _p_cast_object;
}PyCAst_object_jump_statement_3;


static PyObject * PyCAst_new_jump_statement_3(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_jump_statement_3(PyObject *_self);


static int PyCAst_init_jump_statement_3(PyCAst_object_jump_statement_3 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_jump_statement_3_code(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_3_isNull(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_3_refCount(PyObject *_self);


static PyObject *PyCAst_getter_jump_statement_3_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_jump_statement_3 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_jump_statement_3_refCount,NULL,(char*)"jump_statement_3_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_jump_statement_3_isNull,NULL,(char*)"jump_statement_3_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_jump_statement_3_token,NULL,(char*)"jump_statement_3_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_jump_statement_3_code,NULL,(char*)"jump_statement_3_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_jump_statement_3 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_jump_statement_3 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_jump_statement_3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.jump_statement_3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_jump_statement_3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_jump_statement_3,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the jump_statement_3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_jump_statement_3,
	/* tp_members-----------*/      PyCAst_members_jump_statement_3,
	/* tp_getset------------*/      PyCAst_getsetter_jump_statement_3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_jump_statement_3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_jump_statement_3,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::struct_declarator> _p_cast_object;
}PyCAst_object_struct_declarator;


static PyObject * PyCAst_new_struct_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_struct_declarator(PyObject *_self);


static int PyCAst_init_struct_declarator(PyCAst_object_struct_declarator *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_struct_declarator_code(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_refCount(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_declarator(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_token(PyObject *_self);


static PyObject *PyCAst_getter_struct_declarator_constant_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_struct_declarator [] = 
	{
	{(char*)"token", (getter)PyCAst_getter_struct_declarator_token,NULL,(char*)"struct_declarator_token", NULL},
	{(char*)"declarator", (getter)PyCAst_getter_struct_declarator_declarator,NULL,(char*)"struct_declarator_declarator", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_struct_declarator_refCount,NULL,(char*)"struct_declarator_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_struct_declarator_isNull,NULL,(char*)"struct_declarator_isNull", NULL},
	{(char*)"constant_expression", (getter)PyCAst_getter_struct_declarator_constant_expression,NULL,(char*)"struct_declarator_constant_expression", NULL},
	{(char*)"code", (getter)PyCAst_getter_struct_declarator_code,NULL,(char*)"struct_declarator_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_struct_declarator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_struct_declarator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_struct_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_struct_declarator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the struct_declarator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_struct_declarator,
	/* tp_members-----------*/      PyCAst_members_struct_declarator,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declarator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_struct_declarator,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declarator,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::function_definition> _p_cast_object;
}PyCAst_object_function_definition;


static PyObject * PyCAst_new_function_definition(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_function_definition(PyObject *_self);


static int PyCAst_init_function_definition(PyCAst_object_function_definition *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_function_definition_code(PyObject *_self);


static PyObject *PyCAst_getter_function_definition_isNull(PyObject *_self);


static PyObject *PyCAst_getter_function_definition_refCount(PyObject *_self);


static PyObject *PyCAst_getter_function_definition_declaration_specifiers(PyObject *_self);


static PyObject *PyCAst_getter_function_definition_declarator(PyObject *_self);


static PyObject *PyCAst_getter_function_definition_declaration_list(PyObject *_self);


static PyObject *PyCAst_getter_function_definition_compound_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_function_definition [] = 
	{
	{(char*)"declarator", (getter)PyCAst_getter_function_definition_declarator,NULL,(char*)"function_definition_declarator", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_function_definition_isNull,NULL,(char*)"function_definition_isNull", NULL},
	{(char*)"declaration_specifiers", (getter)PyCAst_getter_function_definition_declaration_specifiers,NULL,(char*)"function_definition_declaration_specifiers", NULL},
	{(char*)"declaration_list", (getter)PyCAst_getter_function_definition_declaration_list,NULL,(char*)"function_definition_declaration_list", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_function_definition_refCount,NULL,(char*)"function_definition_refCount", NULL},
	{(char*)"compound_statement", (getter)PyCAst_getter_function_definition_compound_statement,NULL,(char*)"function_definition_compound_statement", NULL},
	{(char*)"code", (getter)PyCAst_getter_function_definition_code,NULL,(char*)"function_definition_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_function_definition [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_function_definition [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_function_definition = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.function_definition",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_function_definition),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_function_definition,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the function_definition",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_function_definition,
	/* tp_members-----------*/      PyCAst_members_function_definition,
	/* tp_getset------------*/      PyCAst_getsetter_function_definition,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_function_definition,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_function_definition,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::parameter_list_item> _p_cast_object;
}PyCAst_object_parameter_list_item;


static PyObject * PyCAst_new_parameter_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_parameter_list_item(PyObject *_self);


static int PyCAst_init_parameter_list_item(PyCAst_object_parameter_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_parameter_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_parameter_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_parameter_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_parameter_list_item_token(PyObject *_self);


static PyObject *PyCAst_getter_parameter_list_item_parameter_declaration(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_parameter_list_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_parameter_list_item_isNull,NULL,(char*)"parameter_list_item_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_parameter_list_item_token,NULL,(char*)"parameter_list_item_token", NULL},
	{(char*)"code", (getter)PyCAst_getter_parameter_list_item_code,NULL,(char*)"parameter_list_item_code", NULL},
	{(char*)"parameter_declaration", (getter)PyCAst_getter_parameter_list_item_parameter_declaration,NULL,(char*)"parameter_list_item_parameter_declaration", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_parameter_list_item_refCount,NULL,(char*)"parameter_list_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_parameter_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_parameter_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_parameter_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_parameter_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the parameter_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_list_item,
	/* tp_members-----------*/      PyCAst_members_parameter_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_parameter_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::parameter_list> _p_cast_object;
}PyCAst_object_parameter_list;


static PyObject * PyCAst_new_parameter_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_parameter_list(PyObject *_self);


static int PyCAst_init_parameter_list(PyCAst_object_parameter_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_parameter_list(PyObject *_self);


static PyObject* PyCAst_list_item_parameter_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_parameter_list_code(PyObject *_self);


static PyObject *PyCAst_getter_parameter_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_parameter_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_parameter_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_parameter_list [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_parameter_list_refCount,NULL,(char*)"parameter_list_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_parameter_list_size,NULL,(char*)"parameter_list_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_parameter_list_isNull,NULL,(char*)"parameter_list_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_parameter_list_code,NULL,(char*)"parameter_list_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_parameter_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_parameter_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_parameter_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_parameter_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_parameter_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_parameter_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_parameter_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_parameter_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the parameter_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_list,
	/* tp_members-----------*/      PyCAst_members_parameter_list,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_parameter_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::enum_specifier> _p_cast_object;
}PyCAst_object_enum_specifier;


static PyObject * PyCAst_new_enum_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_enum_specifier(PyObject *_self);


static int PyCAst_init_enum_specifier(PyCAst_object_enum_specifier *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_enum_specifier_code(PyObject *_self);


static PyObject *PyCAst_getter_enum_specifier_isNull(PyObject *_self);


static PyObject *PyCAst_getter_enum_specifier_refCount(PyObject *_self);


static PyObject *PyCAst_getter_enum_specifier_token1(PyObject *_self);


static PyObject *PyCAst_getter_enum_specifier_token2(PyObject *_self);


static PyObject *PyCAst_getter_enum_specifier_enumerator_list(PyObject *_self);


static PyObject *PyCAst_getter_enum_specifier_token3(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_enum_specifier [] = 
	{
	{(char*)"token3", (getter)PyCAst_getter_enum_specifier_token3,NULL,(char*)"enum_specifier_token3", NULL},
	{(char*)"token2", (getter)PyCAst_getter_enum_specifier_token2,NULL,(char*)"enum_specifier_token2", NULL},
	{(char*)"token1", (getter)PyCAst_getter_enum_specifier_token1,NULL,(char*)"enum_specifier_token1", NULL},
	{(char*)"code", (getter)PyCAst_getter_enum_specifier_code,NULL,(char*)"enum_specifier_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_enum_specifier_refCount,NULL,(char*)"enum_specifier_refCount", NULL},
	{(char*)"enumerator_list", (getter)PyCAst_getter_enum_specifier_enumerator_list,NULL,(char*)"enum_specifier_enumerator_list", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_enum_specifier_isNull,NULL,(char*)"enum_specifier_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_enum_specifier [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_enum_specifier [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_enum_specifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enum_specifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enum_specifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_enum_specifier,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the enum_specifier",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_enum_specifier,
	/* tp_members-----------*/      PyCAst_members_enum_specifier,
	/* tp_getset------------*/      PyCAst_getsetter_enum_specifier,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_enum_specifier,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_enum_specifier,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::type_qualifier> _p_cast_object;
}PyCAst_object_type_qualifier;


static PyObject * PyCAst_new_type_qualifier(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_type_qualifier(PyObject *_self);


static int PyCAst_init_type_qualifier(PyCAst_object_type_qualifier *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_type_qualifier_code(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_isNull(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_refCount(PyObject *_self);


static PyObject *PyCAst_getter_type_qualifier_token(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_type_qualifier [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_type_qualifier_isNull,NULL,(char*)"type_qualifier_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_type_qualifier_code,NULL,(char*)"type_qualifier_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_type_qualifier_refCount,NULL,(char*)"type_qualifier_refCount", NULL},
	{(char*)"token", (getter)PyCAst_getter_type_qualifier_token,NULL,(char*)"type_qualifier_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_type_qualifier [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_type_qualifier [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_type_qualifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_qualifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_qualifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_type_qualifier,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the type_qualifier",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_qualifier,
	/* tp_members-----------*/      PyCAst_members_type_qualifier,
	/* tp_getset------------*/      PyCAst_getsetter_type_qualifier,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_qualifier,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_qualifier,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::enumerator_list_item> _p_cast_object;
}PyCAst_object_enumerator_list_item;


static PyObject * PyCAst_new_enumerator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_enumerator_list_item(PyObject *_self);


static int PyCAst_init_enumerator_list_item(PyCAst_object_enumerator_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_enumerator_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_list_item_token(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_list_item_enumerator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_enumerator_list_item [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_enumerator_list_item_code,NULL,(char*)"enumerator_list_item_code", NULL},
	{(char*)"enumerator", (getter)PyCAst_getter_enumerator_list_item_enumerator,NULL,(char*)"enumerator_list_item_enumerator", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_enumerator_list_item_refCount,NULL,(char*)"enumerator_list_item_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_enumerator_list_item_isNull,NULL,(char*)"enumerator_list_item_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_enumerator_list_item_token,NULL,(char*)"enumerator_list_item_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_enumerator_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_enumerator_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_enumerator_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enumerator_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enumerator_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_enumerator_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the enumerator_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_enumerator_list_item,
	/* tp_members-----------*/      PyCAst_members_enumerator_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_enumerator_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_enumerator_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_enumerator_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::enumerator_list> _p_cast_object;
}PyCAst_object_enumerator_list;


static PyObject * PyCAst_new_enumerator_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_enumerator_list(PyObject *_self);


static int PyCAst_init_enumerator_list(PyCAst_object_enumerator_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_enumerator_list(PyObject *_self);


static PyObject* PyCAst_list_item_enumerator_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_enumerator_list_code(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_enumerator_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_enumerator_list [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_enumerator_list_refCount,NULL,(char*)"enumerator_list_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_enumerator_list_isNull,NULL,(char*)"enumerator_list_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_enumerator_list_code,NULL,(char*)"enumerator_list_code", NULL},
	{(char*)"size", (getter)PyCAst_getter_enumerator_list_size,NULL,(char*)"enumerator_list_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_enumerator_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_enumerator_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_enumerator_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_enumerator_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_enumerator_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_enumerator_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enumerator_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enumerator_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_enumerator_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_enumerator_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the enumerator_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_enumerator_list,
	/* tp_members-----------*/      PyCAst_members_enumerator_list,
	/* tp_getset------------*/      PyCAst_getsetter_enumerator_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_enumerator_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_enumerator_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::labeled_statement> _p_cast_object;
}PyCAst_object_labeled_statement;


static PyObject * PyCAst_new_labeled_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_labeled_statement(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_code(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_isNull(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_labeled_statement [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_labeled_statement_code,NULL,(char*)"labeled_statement_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_labeled_statement_refCount,NULL,(char*)"labeled_statement_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_labeled_statement_isNull,NULL,(char*)"labeled_statement_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_labeled_statement [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_labeled_statement [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_labeled_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.labeled_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_labeled_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_labeled_statement,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the labeled_statement",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_labeled_statement,
	/* tp_members-----------*/      PyCAst_members_labeled_statement,
	/* tp_getset------------*/      PyCAst_getsetter_labeled_statement,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_labeled_statement,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::labeled_statement_1> _p_cast_object;
}PyCAst_object_labeled_statement_1;


static PyObject * PyCAst_new_labeled_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_labeled_statement_1(PyObject *_self);


static int PyCAst_init_labeled_statement_1(PyCAst_object_labeled_statement_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_labeled_statement_1_code(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_1_constant_expression(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_1_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_labeled_statement_1 [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_labeled_statement_1_refCount,NULL,(char*)"labeled_statement_1_refCount", NULL},
	{(char*)"constant_expression", (getter)PyCAst_getter_labeled_statement_1_constant_expression,NULL,(char*)"labeled_statement_1_constant_expression", NULL},
	{(char*)"statement", (getter)PyCAst_getter_labeled_statement_1_statement,NULL,(char*)"labeled_statement_1_statement", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_labeled_statement_1_isNull,NULL,(char*)"labeled_statement_1_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_labeled_statement_1_code,NULL,(char*)"labeled_statement_1_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_labeled_statement_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_labeled_statement_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_labeled_statement_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.labeled_statement_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_labeled_statement_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_labeled_statement_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the labeled_statement_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_labeled_statement_1,
	/* tp_members-----------*/      PyCAst_members_labeled_statement_1,
	/* tp_getset------------*/      PyCAst_getsetter_labeled_statement_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_labeled_statement_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_labeled_statement_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::labeled_statement_2> _p_cast_object;
}PyCAst_object_labeled_statement_2;


static PyObject * PyCAst_new_labeled_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_labeled_statement_2(PyObject *_self);


static int PyCAst_init_labeled_statement_2(PyCAst_object_labeled_statement_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_labeled_statement_2_code(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_2_token(PyObject *_self);


static PyObject *PyCAst_getter_labeled_statement_2_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_labeled_statement_2 [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_labeled_statement_2_code,NULL,(char*)"labeled_statement_2_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_labeled_statement_2_isNull,NULL,(char*)"labeled_statement_2_isNull", NULL},
	{(char*)"statement", (getter)PyCAst_getter_labeled_statement_2_statement,NULL,(char*)"labeled_statement_2_statement", NULL},
	{(char*)"token", (getter)PyCAst_getter_labeled_statement_2_token,NULL,(char*)"labeled_statement_2_token", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_labeled_statement_2_refCount,NULL,(char*)"labeled_statement_2_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_labeled_statement_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_labeled_statement_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_labeled_statement_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.labeled_statement_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_labeled_statement_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_labeled_statement_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the labeled_statement_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_labeled_statement_2,
	/* tp_members-----------*/      PyCAst_members_labeled_statement_2,
	/* tp_getset------------*/      PyCAst_getsetter_labeled_statement_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_labeled_statement_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_labeled_statement_2,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration_list_item> _p_cast_object;
}PyCAst_object_declaration_list_item;


static PyObject * PyCAst_new_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration_list_item(PyObject *_self);


static int PyCAst_init_declaration_list_item(PyCAst_object_declaration_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_declaration_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declaration_list_item_declaration(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration_list_item [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_declaration_list_item_refCount,NULL,(char*)"declaration_list_item_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_declaration_list_item_code,NULL,(char*)"declaration_list_item_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_declaration_list_item_isNull,NULL,(char*)"declaration_list_item_isNull", NULL},
	{(char*)"declaration", (getter)PyCAst_getter_declaration_list_item_declaration,NULL,(char*)"declaration_list_item_declaration", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_declaration_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_list_item,
	/* tp_members-----------*/      PyCAst_members_declaration_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declaration_list> _p_cast_object;
}PyCAst_object_declaration_list;


static PyObject * PyCAst_new_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declaration_list(PyObject *_self);


static int PyCAst_init_declaration_list(PyCAst_object_declaration_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_declaration_list(PyObject *_self);


static PyObject* PyCAst_list_item_declaration_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_declaration_list_code(PyObject *_self);


static PyObject *PyCAst_getter_declaration_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declaration_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declaration_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declaration_list [] = 
	{
	{(char*)"size", (getter)PyCAst_getter_declaration_list_size,NULL,(char*)"declaration_list_size", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_declaration_list_refCount,NULL,(char*)"declaration_list_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_declaration_list_code,NULL,(char*)"declaration_list_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_declaration_list_isNull,NULL,(char*)"declaration_list_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declaration_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declaration_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_declaration_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_declaration_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_declaration_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_declaration_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declaration_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_declaration_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declaration_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_list,
	/* tp_members-----------*/      PyCAst_members_declaration_list,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list_item_1> _p_cast_object;
}PyCAst_object_specifier_qualifier_list_item_1;


static PyObject * PyCAst_new_specifier_qualifier_list_item_1(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_specifier_qualifier_list_item_1(PyObject *_self);


static int PyCAst_init_specifier_qualifier_list_item_1(PyCAst_object_specifier_qualifier_list_item_1 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_code(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_isNull(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_refCount(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_type_qualifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list_item_1 [] = 
	{
	{(char*)"type_qualifier", (getter)PyCAst_getter_specifier_qualifier_list_item_1_type_qualifier,NULL,(char*)"specifier_qualifier_list_item_1_type_qualifier", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_specifier_qualifier_list_item_1_isNull,NULL,(char*)"specifier_qualifier_list_item_1_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_specifier_qualifier_list_item_1_refCount,NULL,(char*)"specifier_qualifier_list_item_1_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_specifier_qualifier_list_item_1_code,NULL,(char*)"specifier_qualifier_list_item_1_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_specifier_qualifier_list_item_1 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_specifier_qualifier_list_item_1 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_specifier_qualifier_list_item_1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list_item_1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list_item_1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_specifier_qualifier_list_item_1,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list_item_1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list_item_1,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list_item_1,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list_item_1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_specifier_qualifier_list_item_1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list_item_1,
	
};



typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list_item_2> _p_cast_object;
}PyCAst_object_specifier_qualifier_list_item_2;


static PyObject * PyCAst_new_specifier_qualifier_list_item_2(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_specifier_qualifier_list_item_2(PyObject *_self);


static int PyCAst_init_specifier_qualifier_list_item_2(PyCAst_object_specifier_qualifier_list_item_2 *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_code(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_isNull(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_refCount(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_type_specifier(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list_item_2 [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_specifier_qualifier_list_item_2_isNull,NULL,(char*)"specifier_qualifier_list_item_2_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_specifier_qualifier_list_item_2_code,NULL,(char*)"specifier_qualifier_list_item_2_code", NULL},
	{(char*)"type_specifier", (getter)PyCAst_getter_specifier_qualifier_list_item_2_type_specifier,NULL,(char*)"specifier_qualifier_list_item_2_type_specifier", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_specifier_qualifier_list_item_2_refCount,NULL,(char*)"specifier_qualifier_list_item_2_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_specifier_qualifier_list_item_2 [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_specifier_qualifier_list_item_2 [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_specifier_qualifier_list_item_2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list_item_2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list_item_2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_specifier_qualifier_list_item_2,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list_item_2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list_item_2,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list_item_2,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list_item_2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_specifier_qualifier_list_item_2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list_item_2,
	
};




typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list> _p_cast_object;
}PyCAst_object_specifier_qualifier_list;


static PyObject * PyCAst_new_specifier_qualifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_specifier_qualifier_list(PyObject *_self);


static int PyCAst_init_specifier_qualifier_list(PyCAst_object_specifier_qualifier_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_specifier_qualifier_list(PyObject *_self);


static PyObject* PyCAst_list_item_specifier_qualifier_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_specifier_qualifier_list_code(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_specifier_qualifier_list_code,NULL,(char*)"specifier_qualifier_list_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_specifier_qualifier_list_isNull,NULL,(char*)"specifier_qualifier_list_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_specifier_qualifier_list_refCount,NULL,(char*)"specifier_qualifier_list_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_specifier_qualifier_list_size,NULL,(char*)"specifier_qualifier_list_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_specifier_qualifier_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_specifier_qualifier_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_specifier_qualifier_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_specifier_qualifier_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_specifier_qualifier_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_specifier_qualifier_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_specifier_qualifier_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_specifier_qualifier_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_specifier_qualifier_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list,
	
};




typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list_item> _p_cast_object;
}PyCAst_object_specifier_qualifier_list_item;


static PyObject * PyCAst_new_specifier_qualifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_specifier_qualifier_list_item(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_specifier_qualifier_list_item_refCount(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list_item [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_specifier_qualifier_list_item_isNull,NULL,(char*)"specifier_qualifier_list_item_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_specifier_qualifier_list_item_code,NULL,(char*)"specifier_qualifier_list_item_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_specifier_qualifier_list_item_refCount,NULL,(char*)"specifier_qualifier_list_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_specifier_qualifier_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_specifier_qualifier_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_specifier_qualifier_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_specifier_qualifier_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list_item,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::translation_unit_item> _p_cast_object;
}PyCAst_object_translation_unit_item;


static PyObject * PyCAst_new_translation_unit_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_translation_unit_item(PyObject *_self);


static int PyCAst_init_translation_unit_item(PyCAst_object_translation_unit_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_translation_unit_item_code(PyObject *_self);


static PyObject *PyCAst_getter_translation_unit_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_translation_unit_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_translation_unit_item_external_declaration(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_translation_unit_item [] = 
	{
	{(char*)"external_declaration", (getter)PyCAst_getter_translation_unit_item_external_declaration,NULL,(char*)"translation_unit_item_external_declaration", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_translation_unit_item_refCount,NULL,(char*)"translation_unit_item_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_translation_unit_item_code,NULL,(char*)"translation_unit_item_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_translation_unit_item_isNull,NULL,(char*)"translation_unit_item_isNull", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_translation_unit_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_translation_unit_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_translation_unit_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.translation_unit_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_translation_unit_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_translation_unit_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the translation_unit_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_translation_unit_item,
	/* tp_members-----------*/      PyCAst_members_translation_unit_item,
	/* tp_getset------------*/      PyCAst_getsetter_translation_unit_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_translation_unit_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_translation_unit_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::translation_unit> _p_cast_object;
}PyCAst_object_translation_unit;


static PyObject * PyCAst_new_translation_unit(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_translation_unit(PyObject *_self);


static int PyCAst_init_translation_unit(PyCAst_object_translation_unit *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_translation_unit(PyObject *_self);


static PyObject* PyCAst_list_item_translation_unit(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_translation_unit_code(PyObject *_self);


static PyObject *PyCAst_getter_translation_unit_isNull(PyObject *_self);


static PyObject *PyCAst_getter_translation_unit_refCount(PyObject *_self);


static PyObject *PyCAst_getter_translation_unit_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_translation_unit [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_translation_unit_refCount,NULL,(char*)"translation_unit_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_translation_unit_size,NULL,(char*)"translation_unit_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_translation_unit_isNull,NULL,(char*)"translation_unit_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_translation_unit_code,NULL,(char*)"translation_unit_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_translation_unit [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_translation_unit [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_translation_unit =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_translation_unit,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_translation_unit,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_translation_unit = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.translation_unit",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_translation_unit),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_translation_unit,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_translation_unit,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the translation_unit",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_translation_unit,
	/* tp_members-----------*/      PyCAst_members_translation_unit,
	/* tp_getset------------*/      PyCAst_getsetter_translation_unit,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_translation_unit,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_translation_unit,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::constant_expression> _p_cast_object;
}PyCAst_object_constant_expression;


static PyObject * PyCAst_new_constant_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_constant_expression(PyObject *_self);


static int PyCAst_init_constant_expression(PyCAst_object_constant_expression *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_constant_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_constant_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_constant_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_constant_expression_conditional_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_constant_expression [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_constant_expression_code,NULL,(char*)"constant_expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_constant_expression_refCount,NULL,(char*)"constant_expression_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_constant_expression_isNull,NULL,(char*)"constant_expression_isNull", NULL},
	{(char*)"conditional_expression", (getter)PyCAst_getter_constant_expression_conditional_expression,NULL,(char*)"constant_expression_conditional_expression", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_constant_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_constant_expression [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_constant_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.constant_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_constant_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_constant_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the constant_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_constant_expression,
	/* tp_members-----------*/      PyCAst_members_constant_expression,
	/* tp_getset------------*/      PyCAst_getsetter_constant_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_constant_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_constant_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::initializer_list_item> _p_cast_object;
}PyCAst_object_initializer_list_item;


static PyObject * PyCAst_new_initializer_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_initializer_list_item(PyObject *_self);


static int PyCAst_init_initializer_list_item(PyCAst_object_initializer_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_initializer_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_initializer_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_initializer_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_initializer_list_item_token(PyObject *_self);


static PyObject *PyCAst_getter_initializer_list_item_initializer(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_initializer_list_item [] = 
	{
	{(char*)"initializer", (getter)PyCAst_getter_initializer_list_item_initializer,NULL,(char*)"initializer_list_item_initializer", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_initializer_list_item_isNull,NULL,(char*)"initializer_list_item_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_initializer_list_item_code,NULL,(char*)"initializer_list_item_code", NULL},
	{(char*)"token", (getter)PyCAst_getter_initializer_list_item_token,NULL,(char*)"initializer_list_item_token", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_initializer_list_item_refCount,NULL,(char*)"initializer_list_item_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_initializer_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_initializer_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_initializer_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_initializer_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the initializer_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_initializer_list_item,
	/* tp_members-----------*/      PyCAst_members_initializer_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_initializer_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_initializer_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::initializer_list> _p_cast_object;
}PyCAst_object_initializer_list;


static PyObject * PyCAst_new_initializer_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_initializer_list(PyObject *_self);


static int PyCAst_init_initializer_list(PyCAst_object_initializer_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_initializer_list(PyObject *_self);


static PyObject* PyCAst_list_item_initializer_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_initializer_list_code(PyObject *_self);


static PyObject *PyCAst_getter_initializer_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_initializer_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_initializer_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_initializer_list [] = 
	{
	{(char*)"size", (getter)PyCAst_getter_initializer_list_size,NULL,(char*)"initializer_list_size", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_initializer_list_isNull,NULL,(char*)"initializer_list_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_initializer_list_code,NULL,(char*)"initializer_list_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_initializer_list_refCount,NULL,(char*)"initializer_list_refCount", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_initializer_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_initializer_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_initializer_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_initializer_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_initializer_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_initializer_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_initializer_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_initializer_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the initializer_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_initializer_list,
	/* tp_members-----------*/      PyCAst_members_initializer_list,
	/* tp_getset------------*/      PyCAst_getsetter_initializer_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_initializer_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_list_item> _p_cast_object;
}PyCAst_object_statement_list_item;


static PyObject * PyCAst_new_statement_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_list_item(PyObject *_self);


static int PyCAst_init_statement_list_item(PyCAst_object_statement_list_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_statement_list_item_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_list_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_list_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_list_item_statement(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_list_item [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_statement_list_item_code,NULL,(char*)"statement_list_item_code", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_list_item_isNull,NULL,(char*)"statement_list_item_isNull", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_statement_list_item_refCount,NULL,(char*)"statement_list_item_refCount", NULL},
	{(char*)"statement", (getter)PyCAst_getter_statement_list_item_statement,NULL,(char*)"statement_list_item_statement", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_list_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_list_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_statement_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_list_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_list_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_list_item,
	/* tp_members-----------*/      PyCAst_members_statement_list_item,
	/* tp_getset------------*/      PyCAst_getsetter_statement_list_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_list_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_list_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::statement_list> _p_cast_object;
}PyCAst_object_statement_list;


static PyObject * PyCAst_new_statement_list(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_statement_list(PyObject *_self);


static int PyCAst_init_statement_list(PyCAst_object_statement_list *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_statement_list(PyObject *_self);


static PyObject* PyCAst_list_item_statement_list(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_statement_list_code(PyObject *_self);


static PyObject *PyCAst_getter_statement_list_isNull(PyObject *_self);


static PyObject *PyCAst_getter_statement_list_refCount(PyObject *_self);


static PyObject *PyCAst_getter_statement_list_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_statement_list [] = 
	{
	{(char*)"code", (getter)PyCAst_getter_statement_list_code,NULL,(char*)"statement_list_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_statement_list_refCount,NULL,(char*)"statement_list_refCount", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_statement_list_isNull,NULL,(char*)"statement_list_isNull", NULL},
	{(char*)"size", (getter)PyCAst_getter_statement_list_size,NULL,(char*)"statement_list_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_statement_list [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_statement_list [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_statement_list =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_statement_list,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_statement_list,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_statement_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_statement_list,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_statement_list,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the statement_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement_list,
	/* tp_members-----------*/      PyCAst_members_statement_list,
	/* tp_getset------------*/      PyCAst_getsetter_statement_list,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement_list,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_list,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::expression_item> _p_cast_object;
}PyCAst_object_expression_item;


static PyObject * PyCAst_new_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_expression_item(PyObject *_self);


static int PyCAst_init_expression_item(PyCAst_object_expression_item *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_expression_item_code(PyObject *_self);


static PyObject *PyCAst_getter_expression_item_isNull(PyObject *_self);


static PyObject *PyCAst_getter_expression_item_refCount(PyObject *_self);


static PyObject *PyCAst_getter_expression_item_token(PyObject *_self);


static PyObject *PyCAst_getter_expression_item_assignment_expression(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_expression_item [] = 
	{
	{(char*)"refCount", (getter)PyCAst_getter_expression_item_refCount,NULL,(char*)"expression_item_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_expression_item_code,NULL,(char*)"expression_item_code", NULL},
	{(char*)"assignment_expression", (getter)PyCAst_getter_expression_item_assignment_expression,NULL,(char*)"expression_item_assignment_expression", NULL},
	{(char*)"isNull", (getter)PyCAst_getter_expression_item_isNull,NULL,(char*)"expression_item_isNull", NULL},
	{(char*)"token", (getter)PyCAst_getter_expression_item_token,NULL,(char*)"expression_item_token", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_expression_item [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_expression_item [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_expression_item,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the expression_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_expression_item,
	/* tp_members-----------*/      PyCAst_members_expression_item,
	/* tp_getset------------*/      PyCAst_getsetter_expression_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_expression_item,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_expression_item,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::expression> _p_cast_object;
}PyCAst_object_expression;


static PyObject * PyCAst_new_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_expression(PyObject *_self);


static int PyCAst_init_expression(PyCAst_object_expression *self, PyObject *args, PyObject *kwds);


static Py_ssize_t PyCAst_list_length_expression(PyObject *_self);


static PyObject* PyCAst_list_item_expression(PyObject *_self,Py_ssize_t index);


static PyObject *PyCAst_getter_expression_code(PyObject *_self);


static PyObject *PyCAst_getter_expression_isNull(PyObject *_self);


static PyObject *PyCAst_getter_expression_refCount(PyObject *_self);


static PyObject *PyCAst_getter_expression_size(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_expression [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_expression_isNull,NULL,(char*)"expression_isNull", NULL},
	{(char*)"code", (getter)PyCAst_getter_expression_code,NULL,(char*)"expression_code", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_expression_refCount,NULL,(char*)"expression_refCount", NULL},
	{(char*)"size", (getter)PyCAst_getter_expression_size,NULL,(char*)"expression_size", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_expression [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_expression [] = 
	{
		{NULL}
	};

static PySequenceMethods PyCAst_list_expression =
{
        /* sq_length        */ (lenfunc) PyCAst_list_length_expression,
        /* sq_concat        */ 0,
        /* sq_repeat        */ 0,
        /* sq_item          */ (ssizeargfunc) PyCAst_list_item_expression,
        /* sq_slice         */ 0,
        /* sq_ass_item      */ 0,
        /* sq_ass_slice     */ 0,
        /* sq_contains      */ 0,
        /* sq_inplace_concat*/ 0,
        /* sq_inplace_repeat*/ 0
} ;



static PyTypeObject  PyCAst_type_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_expression,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      &PyCAst_list_expression,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_expression,
	/* tp_members-----------*/      PyCAst_members_expression,
	/* tp_getset------------*/      PyCAst_getsetter_expression,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_expression,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_expression,
	
};





typedef struct
{
	PyObject_HEAD
	CAst::ReferenceCountedAutoPointer<CAst::declarator> _p_cast_object;
}PyCAst_object_declarator;


static PyObject * PyCAst_new_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);


static void PyCAst_dealloc_declarator(PyObject *_self);


static int PyCAst_init_declarator(PyCAst_object_declarator *self, PyObject *args, PyObject *kwds);


static PyObject *PyCAst_getter_declarator_code(PyObject *_self);


static PyObject *PyCAst_getter_declarator_isNull(PyObject *_self);


static PyObject *PyCAst_getter_declarator_refCount(PyObject *_self);


static PyObject *PyCAst_getter_declarator_pointer(PyObject *_self);


static PyObject *PyCAst_getter_declarator_direct_declarator(PyObject *_self);



static PyGetSetDef PyCAst_getsetter_declarator [] = 
	{
	{(char*)"isNull", (getter)PyCAst_getter_declarator_isNull,NULL,(char*)"declarator_isNull", NULL},
	{(char*)"direct_declarator", (getter)PyCAst_getter_declarator_direct_declarator,NULL,(char*)"declarator_direct_declarator", NULL},
	{(char*)"pointer", (getter)PyCAst_getter_declarator_pointer,NULL,(char*)"declarator_pointer", NULL},
	{(char*)"refCount", (getter)PyCAst_getter_declarator_refCount,NULL,(char*)"declarator_refCount", NULL},
	{(char*)"code", (getter)PyCAst_getter_declarator_code,NULL,(char*)"declarator_code", NULL},
		NULL 
	};
static PyMethodDef PyCAst_methods_declarator [] = 
	{
		{NULL}
	};
static PyMemberDef PyCAst_members_declarator [] = 
	{
		{NULL}
	};


static PyTypeObject  PyCAst_type_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      (destructor)PyCAst_dealloc_declarator,
	/* tp_print-------------*/      0,
	/* tp_getattr-----------*/      0,
	/* tp_setattr-----------*/      0,
	/* tp_compare-----------*/      0,
	/* tp_repr--------------*/      0,
	/* tp_as_number---------*/      0,
	/* tp_as_sequence-------*/      0,
	/* tp_as_mapping--------*/      0,
	/* tp_hash--------------*/      0,
	/* tp_call--------------*/      0,
	/* tp_str---------------*/      0,
	/* tp_getattro----------*/      0,
	/* tp_setattro----------*/      0,
	/* tp_as_buffer---------*/      0,
	/* tp_flags-------------*/      Py_TPFLAGS_DEFAULT,
	/* tp_doc---------------*/      "Object representing the declarator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declarator,
	/* tp_members-----------*/      PyCAst_members_declarator,
	/* tp_getset------------*/      PyCAst_getsetter_declarator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declarator,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declarator,
	
};









PyObject * CAstToPyCAst(CAst::ReferenceCountedAutoPointer<CAst::CAst> pointer)
{
	if(pointer.isNull())Py_RETURN_NONE;
	int id=pointer->classId();
	LOG("Received object with id"<<id)
	switch(id)
	{
		case 1:
		{
			LOG(COL_FG_GREEN<<" Casting token with id 1 to PyCAst_object_token")
			PyCAst_object_token *pyObj=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 16:
		{
			LOG(COL_FG_GREEN<<" Casting storage_class_specifier with id 16 to PyCAst_object_storage_class_specifier")
			PyCAst_object_storage_class_specifier *pyObj=(PyCAst_object_storage_class_specifier*)PyCAst_new_storage_class_specifier(&PyCAst_type_storage_class_specifier,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 32:
		{
			LOG(COL_FG_GREEN<<" Casting expression_statement with id 32 to PyCAst_object_expression_statement")
			PyCAst_object_expression_statement *pyObj=(PyCAst_object_expression_statement*)PyCAst_new_expression_statement(&PyCAst_type_expression_statement,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 320:
		{
			LOG(COL_FG_GREEN<<" Casting type_name with id 320 to PyCAst_object_type_name")
			PyCAst_object_type_name *pyObj=(PyCAst_object_type_name*)PyCAst_new_type_name(&PyCAst_type_type_name,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 64:
		{
			LOG(COL_FG_GREEN<<" Casting unary_expression with id 64 to PyCAst_object_unary_expression")
			PyCAst_object_unary_expression *pyObj=(PyCAst_object_unary_expression*)PyCAst_new_unary_expression(&PyCAst_type_unary_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 65:
		{
			LOG(COL_FG_GREEN<<" Casting unary_expression_1 with id 65 to PyCAst_object_unary_expression_1")
			PyCAst_object_unary_expression_1 *pyObj=(PyCAst_object_unary_expression_1*)PyCAst_new_unary_expression_1(&PyCAst_type_unary_expression_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 66:
		{
			LOG(COL_FG_GREEN<<" Casting unary_expression_2 with id 66 to PyCAst_object_unary_expression_2")
			PyCAst_object_unary_expression_2 *pyObj=(PyCAst_object_unary_expression_2*)PyCAst_new_unary_expression_2(&PyCAst_type_unary_expression_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 67:
		{
			LOG(COL_FG_GREEN<<" Casting unary_expression_3 with id 67 to PyCAst_object_unary_expression_3")
			PyCAst_object_unary_expression_3 *pyObj=(PyCAst_object_unary_expression_3*)PyCAst_new_unary_expression_3(&PyCAst_type_unary_expression_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 68:
		{
			LOG(COL_FG_GREEN<<" Casting unary_expression_4 with id 68 to PyCAst_object_unary_expression_4")
			PyCAst_object_unary_expression_4 *pyObj=(PyCAst_object_unary_expression_4*)PyCAst_new_unary_expression_4(&PyCAst_type_unary_expression_4,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 976:
		{
			LOG(COL_FG_GREEN<<" Casting conditional_expression with id 976 to PyCAst_object_conditional_expression")
			PyCAst_object_conditional_expression *pyObj=(PyCAst_object_conditional_expression*)PyCAst_new_conditional_expression(&PyCAst_type_conditional_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 977:
		{
			LOG(COL_FG_GREEN<<" Casting conditional_expression_item with id 977 to PyCAst_object_conditional_expression_item")
			PyCAst_object_conditional_expression_item *pyObj=(PyCAst_object_conditional_expression_item*)PyCAst_new_conditional_expression_item(&PyCAst_type_conditional_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 96:
		{
			LOG(COL_FG_GREEN<<" Casting struct_or_union_specifier with id 96 to PyCAst_object_struct_or_union_specifier")
			PyCAst_object_struct_or_union_specifier *pyObj=(PyCAst_object_struct_or_union_specifier*)PyCAst_new_struct_or_union_specifier(&PyCAst_type_struct_or_union_specifier,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 112:
		{
			LOG(COL_FG_GREEN<<" Casting exclusive_or_expression with id 112 to PyCAst_object_exclusive_or_expression")
			PyCAst_object_exclusive_or_expression *pyObj=(PyCAst_object_exclusive_or_expression*)PyCAst_new_exclusive_or_expression(&PyCAst_type_exclusive_or_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 113:
		{
			LOG(COL_FG_GREEN<<" Casting exclusive_or_expression_item with id 113 to PyCAst_object_exclusive_or_expression_item")
			PyCAst_object_exclusive_or_expression_item *pyObj=(PyCAst_object_exclusive_or_expression_item*)PyCAst_new_exclusive_or_expression_item(&PyCAst_type_exclusive_or_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 80:
		{
			LOG(COL_FG_GREEN<<" Casting initializer with id 80 to PyCAst_object_initializer")
			PyCAst_object_initializer *pyObj=(PyCAst_object_initializer*)PyCAst_new_initializer(&PyCAst_type_initializer,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 81:
		{
			LOG(COL_FG_GREEN<<" Casting initializer_1 with id 81 to PyCAst_object_initializer_1")
			PyCAst_object_initializer_1 *pyObj=(PyCAst_object_initializer_1*)PyCAst_new_initializer_1(&PyCAst_type_initializer_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 82:
		{
			LOG(COL_FG_GREEN<<" Casting initializer_2 with id 82 to PyCAst_object_initializer_2")
			PyCAst_object_initializer_2 *pyObj=(PyCAst_object_initializer_2*)PyCAst_new_initializer_2(&PyCAst_type_initializer_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 160:
		{
			LOG(COL_FG_GREEN<<" Casting struct_declaration_list with id 160 to PyCAst_object_struct_declaration_list")
			PyCAst_object_struct_declaration_list *pyObj=(PyCAst_object_struct_declaration_list*)PyCAst_new_struct_declaration_list(&PyCAst_type_struct_declaration_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 161:
		{
			LOG(COL_FG_GREEN<<" Casting struct_declaration_list_item with id 161 to PyCAst_object_struct_declaration_list_item")
			PyCAst_object_struct_declaration_list_item *pyObj=(PyCAst_object_struct_declaration_list_item*)PyCAst_new_struct_declaration_list_item(&PyCAst_type_struct_declaration_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 960:
		{
			LOG(COL_FG_GREEN<<" Casting assignment_operator with id 960 to PyCAst_object_assignment_operator")
			PyCAst_object_assignment_operator *pyObj=(PyCAst_object_assignment_operator*)PyCAst_new_assignment_operator(&PyCAst_type_assignment_operator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 528:
		{
			LOG(COL_FG_GREEN<<" Casting struct_declaration with id 528 to PyCAst_object_struct_declaration")
			PyCAst_object_struct_declaration *pyObj=(PyCAst_object_struct_declaration*)PyCAst_new_struct_declaration(&PyCAst_type_struct_declaration,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 912:
		{
			LOG(COL_FG_GREEN<<" Casting abstract_declarator with id 912 to PyCAst_object_abstract_declarator")
			PyCAst_object_abstract_declarator *pyObj=(PyCAst_object_abstract_declarator*)PyCAst_new_abstract_declarator(&PyCAst_type_abstract_declarator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 304:
		{
			LOG(COL_FG_GREEN<<" Casting iteration_statement with id 304 to PyCAst_object_iteration_statement")
			PyCAst_object_iteration_statement *pyObj=(PyCAst_object_iteration_statement*)PyCAst_new_iteration_statement(&PyCAst_type_iteration_statement,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 305:
		{
			LOG(COL_FG_GREEN<<" Casting iteration_statement_1 with id 305 to PyCAst_object_iteration_statement_1")
			PyCAst_object_iteration_statement_1 *pyObj=(PyCAst_object_iteration_statement_1*)PyCAst_new_iteration_statement_1(&PyCAst_type_iteration_statement_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 306:
		{
			LOG(COL_FG_GREEN<<" Casting iteration_statement_2 with id 306 to PyCAst_object_iteration_statement_2")
			PyCAst_object_iteration_statement_2 *pyObj=(PyCAst_object_iteration_statement_2*)PyCAst_new_iteration_statement_2(&PyCAst_type_iteration_statement_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 307:
		{
			LOG(COL_FG_GREEN<<" Casting iteration_statement_3 with id 307 to PyCAst_object_iteration_statement_3")
			PyCAst_object_iteration_statement_3 *pyObj=(PyCAst_object_iteration_statement_3*)PyCAst_new_iteration_statement_3(&PyCAst_type_iteration_statement_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 352:
		{
			LOG(COL_FG_GREEN<<" Casting additive_expression with id 352 to PyCAst_object_additive_expression")
			PyCAst_object_additive_expression *pyObj=(PyCAst_object_additive_expression*)PyCAst_new_additive_expression(&PyCAst_type_additive_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 353:
		{
			LOG(COL_FG_GREEN<<" Casting additive_expression_item with id 353 to PyCAst_object_additive_expression_item")
			PyCAst_object_additive_expression_item *pyObj=(PyCAst_object_additive_expression_item*)PyCAst_new_additive_expression_item(&PyCAst_type_additive_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 240:
		{
			LOG(COL_FG_GREEN<<" Casting external_declaration with id 240 to PyCAst_object_external_declaration")
			PyCAst_object_external_declaration *pyObj=(PyCAst_object_external_declaration*)PyCAst_new_external_declaration(&PyCAst_type_external_declaration,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 241:
		{
			LOG(COL_FG_GREEN<<" Casting external_declaration_1 with id 241 to PyCAst_object_external_declaration_1")
			PyCAst_object_external_declaration_1 *pyObj=(PyCAst_object_external_declaration_1*)PyCAst_new_external_declaration_1(&PyCAst_type_external_declaration_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 242:
		{
			LOG(COL_FG_GREEN<<" Casting external_declaration_2 with id 242 to PyCAst_object_external_declaration_2")
			PyCAst_object_external_declaration_2 *pyObj=(PyCAst_object_external_declaration_2*)PyCAst_new_external_declaration_2(&PyCAst_type_external_declaration_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 256:
		{
			LOG(COL_FG_GREEN<<" Casting type_specifier with id 256 to PyCAst_object_type_specifier")
			PyCAst_object_type_specifier *pyObj=(PyCAst_object_type_specifier*)PyCAst_new_type_specifier(&PyCAst_type_type_specifier,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 257:
		{
			LOG(COL_FG_GREEN<<" Casting type_specifier_1 with id 257 to PyCAst_object_type_specifier_1")
			PyCAst_object_type_specifier_1 *pyObj=(PyCAst_object_type_specifier_1*)PyCAst_new_type_specifier_1(&PyCAst_type_type_specifier_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 258:
		{
			LOG(COL_FG_GREEN<<" Casting type_specifier_2 with id 258 to PyCAst_object_type_specifier_2")
			PyCAst_object_type_specifier_2 *pyObj=(PyCAst_object_type_specifier_2*)PyCAst_new_type_specifier_2(&PyCAst_type_type_specifier_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 259:
		{
			LOG(COL_FG_GREEN<<" Casting type_specifier_3 with id 259 to PyCAst_object_type_specifier_3")
			PyCAst_object_type_specifier_3 *pyObj=(PyCAst_object_type_specifier_3*)PyCAst_new_type_specifier_3(&PyCAst_type_type_specifier_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 272:
		{
			LOG(COL_FG_GREEN<<" Casting compound_statement with id 272 to PyCAst_object_compound_statement")
			PyCAst_object_compound_statement *pyObj=(PyCAst_object_compound_statement*)PyCAst_new_compound_statement(&PyCAst_type_compound_statement,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 288:
		{
			LOG(COL_FG_GREEN<<" Casting inclusive_or_expression with id 288 to PyCAst_object_inclusive_or_expression")
			PyCAst_object_inclusive_or_expression *pyObj=(PyCAst_object_inclusive_or_expression*)PyCAst_new_inclusive_or_expression(&PyCAst_type_inclusive_or_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 289:
		{
			LOG(COL_FG_GREEN<<" Casting inclusive_or_expression_item with id 289 to PyCAst_object_inclusive_or_expression_item")
			PyCAst_object_inclusive_or_expression_item *pyObj=(PyCAst_object_inclusive_or_expression_item*)PyCAst_new_inclusive_or_expression_item(&PyCAst_type_inclusive_or_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 208:
		{
			LOG(COL_FG_GREEN<<" Casting pointer with id 208 to PyCAst_object_pointer")
			PyCAst_object_pointer *pyObj=(PyCAst_object_pointer*)PyCAst_new_pointer(&PyCAst_type_pointer,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 209:
		{
			LOG(COL_FG_GREEN<<" Casting pointer_item with id 209 to PyCAst_object_pointer_item")
			PyCAst_object_pointer_item *pyObj=(PyCAst_object_pointer_item*)PyCAst_new_pointer_item(&PyCAst_type_pointer_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 210:
		{
			LOG(COL_FG_GREEN<<" Casting pointer_item_1 with id 210 to PyCAst_object_pointer_item_1")
			PyCAst_object_pointer_item_1 *pyObj=(PyCAst_object_pointer_item_1*)PyCAst_new_pointer_item_1(&PyCAst_type_pointer_item_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 211:
		{
			LOG(COL_FG_GREEN<<" Casting pointer_item_2 with id 211 to PyCAst_object_pointer_item_2")
			PyCAst_object_pointer_item_2 *pyObj=(PyCAst_object_pointer_item_2*)PyCAst_new_pointer_item_2(&PyCAst_type_pointer_item_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 48:
		{
			LOG(COL_FG_GREEN<<" Casting selection_statement with id 48 to PyCAst_object_selection_statement")
			PyCAst_object_selection_statement *pyObj=(PyCAst_object_selection_statement*)PyCAst_new_selection_statement(&PyCAst_type_selection_statement,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 49:
		{
			LOG(COL_FG_GREEN<<" Casting selection_statement_1 with id 49 to PyCAst_object_selection_statement_1")
			PyCAst_object_selection_statement_1 *pyObj=(PyCAst_object_selection_statement_1*)PyCAst_new_selection_statement_1(&PyCAst_type_selection_statement_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 50:
		{
			LOG(COL_FG_GREEN<<" Casting selection_statement_2 with id 50 to PyCAst_object_selection_statement_2")
			PyCAst_object_selection_statement_2 *pyObj=(PyCAst_object_selection_statement_2*)PyCAst_new_selection_statement_2(&PyCAst_type_selection_statement_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 336:
		{
			LOG(COL_FG_GREEN<<" Casting postfix_expression with id 336 to PyCAst_object_postfix_expression")
			PyCAst_object_postfix_expression *pyObj=(PyCAst_object_postfix_expression*)PyCAst_new_postfix_expression(&PyCAst_type_postfix_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 337:
		{
			LOG(COL_FG_GREEN<<" Casting postfix_expression_1 with id 337 to PyCAst_object_postfix_expression_1")
			PyCAst_object_postfix_expression_1 *pyObj=(PyCAst_object_postfix_expression_1*)PyCAst_new_postfix_expression_1(&PyCAst_type_postfix_expression_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 338:
		{
			LOG(COL_FG_GREEN<<" Casting postfix_expression_2 with id 338 to PyCAst_object_postfix_expression_2")
			PyCAst_object_postfix_expression_2 *pyObj=(PyCAst_object_postfix_expression_2*)PyCAst_new_postfix_expression_2(&PyCAst_type_postfix_expression_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 339:
		{
			LOG(COL_FG_GREEN<<" Casting postfix_expression_3 with id 339 to PyCAst_object_postfix_expression_3")
			PyCAst_object_postfix_expression_3 *pyObj=(PyCAst_object_postfix_expression_3*)PyCAst_new_postfix_expression_3(&PyCAst_type_postfix_expression_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 340:
		{
			LOG(COL_FG_GREEN<<" Casting postfix_expression_4 with id 340 to PyCAst_object_postfix_expression_4")
			PyCAst_object_postfix_expression_4 *pyObj=(PyCAst_object_postfix_expression_4*)PyCAst_new_postfix_expression_4(&PyCAst_type_postfix_expression_4,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 341:
		{
			LOG(COL_FG_GREEN<<" Casting postfix_expression_5 with id 341 to PyCAst_object_postfix_expression_5")
			PyCAst_object_postfix_expression_5 *pyObj=(PyCAst_object_postfix_expression_5*)PyCAst_new_postfix_expression_5(&PyCAst_type_postfix_expression_5,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 224:
		{
			LOG(COL_FG_GREEN<<" Casting and_expression with id 224 to PyCAst_object_and_expression")
			PyCAst_object_and_expression *pyObj=(PyCAst_object_and_expression*)PyCAst_new_and_expression(&PyCAst_type_and_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 225:
		{
			LOG(COL_FG_GREEN<<" Casting and_expression_item with id 225 to PyCAst_object_and_expression_item")
			PyCAst_object_and_expression_item *pyObj=(PyCAst_object_and_expression_item*)PyCAst_new_and_expression_item(&PyCAst_type_and_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 368:
		{
			LOG(COL_FG_GREEN<<" Casting statement with id 368 to PyCAst_object_statement")
			PyCAst_object_statement *pyObj=(PyCAst_object_statement*)PyCAst_new_statement(&PyCAst_type_statement,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 369:
		{
			LOG(COL_FG_GREEN<<" Casting statement_1 with id 369 to PyCAst_object_statement_1")
			PyCAst_object_statement_1 *pyObj=(PyCAst_object_statement_1*)PyCAst_new_statement_1(&PyCAst_type_statement_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 370:
		{
			LOG(COL_FG_GREEN<<" Casting statement_2 with id 370 to PyCAst_object_statement_2")
			PyCAst_object_statement_2 *pyObj=(PyCAst_object_statement_2*)PyCAst_new_statement_2(&PyCAst_type_statement_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 371:
		{
			LOG(COL_FG_GREEN<<" Casting statement_3 with id 371 to PyCAst_object_statement_3")
			PyCAst_object_statement_3 *pyObj=(PyCAst_object_statement_3*)PyCAst_new_statement_3(&PyCAst_type_statement_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 372:
		{
			LOG(COL_FG_GREEN<<" Casting statement_4 with id 372 to PyCAst_object_statement_4")
			PyCAst_object_statement_4 *pyObj=(PyCAst_object_statement_4*)PyCAst_new_statement_4(&PyCAst_type_statement_4,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 373:
		{
			LOG(COL_FG_GREEN<<" Casting statement_5 with id 373 to PyCAst_object_statement_5")
			PyCAst_object_statement_5 *pyObj=(PyCAst_object_statement_5*)PyCAst_new_statement_5(&PyCAst_type_statement_5,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 374:
		{
			LOG(COL_FG_GREEN<<" Casting statement_6 with id 374 to PyCAst_object_statement_6")
			PyCAst_object_statement_6 *pyObj=(PyCAst_object_statement_6*)PyCAst_new_statement_6(&PyCAst_type_statement_6,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 400:
		{
			LOG(COL_FG_GREEN<<" Casting cast_expression with id 400 to PyCAst_object_cast_expression")
			PyCAst_object_cast_expression *pyObj=(PyCAst_object_cast_expression*)PyCAst_new_cast_expression(&PyCAst_type_cast_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 401:
		{
			LOG(COL_FG_GREEN<<" Casting cast_expression_1 with id 401 to PyCAst_object_cast_expression_1")
			PyCAst_object_cast_expression_1 *pyObj=(PyCAst_object_cast_expression_1*)PyCAst_new_cast_expression_1(&PyCAst_type_cast_expression_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 402:
		{
			LOG(COL_FG_GREEN<<" Casting cast_expression_2 with id 402 to PyCAst_object_cast_expression_2")
			PyCAst_object_cast_expression_2 *pyObj=(PyCAst_object_cast_expression_2*)PyCAst_new_cast_expression_2(&PyCAst_type_cast_expression_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 608:
		{
			LOG(COL_FG_GREEN<<" Casting init_declarator with id 608 to PyCAst_object_init_declarator")
			PyCAst_object_init_declarator *pyObj=(PyCAst_object_init_declarator*)PyCAst_new_init_declarator(&PyCAst_type_init_declarator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 432:
		{
			LOG(COL_FG_GREEN<<" Casting struct_declarator_list with id 432 to PyCAst_object_struct_declarator_list")
			PyCAst_object_struct_declarator_list *pyObj=(PyCAst_object_struct_declarator_list*)PyCAst_new_struct_declarator_list(&PyCAst_type_struct_declarator_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 433:
		{
			LOG(COL_FG_GREEN<<" Casting struct_declarator_list_item with id 433 to PyCAst_object_struct_declarator_list_item")
			PyCAst_object_struct_declarator_list_item *pyObj=(PyCAst_object_struct_declarator_list_item*)PyCAst_new_struct_declarator_list_item(&PyCAst_type_struct_declarator_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 448:
		{
			LOG(COL_FG_GREEN<<" Casting logical_or_expression with id 448 to PyCAst_object_logical_or_expression")
			PyCAst_object_logical_or_expression *pyObj=(PyCAst_object_logical_or_expression*)PyCAst_new_logical_or_expression(&PyCAst_type_logical_or_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 449:
		{
			LOG(COL_FG_GREEN<<" Casting logical_or_expression_item with id 449 to PyCAst_object_logical_or_expression_item")
			PyCAst_object_logical_or_expression_item *pyObj=(PyCAst_object_logical_or_expression_item*)PyCAst_new_logical_or_expression_item(&PyCAst_type_logical_or_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 384:
		{
			LOG(COL_FG_GREEN<<" Casting unary_operator with id 384 to PyCAst_object_unary_operator")
			PyCAst_object_unary_operator *pyObj=(PyCAst_object_unary_operator*)PyCAst_new_unary_operator(&PyCAst_type_unary_operator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 480:
		{
			LOG(COL_FG_GREEN<<" Casting relational_expression with id 480 to PyCAst_object_relational_expression")
			PyCAst_object_relational_expression *pyObj=(PyCAst_object_relational_expression*)PyCAst_new_relational_expression(&PyCAst_type_relational_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 481:
		{
			LOG(COL_FG_GREEN<<" Casting relational_expression_item with id 481 to PyCAst_object_relational_expression_item")
			PyCAst_object_relational_expression_item *pyObj=(PyCAst_object_relational_expression_item*)PyCAst_new_relational_expression_item(&PyCAst_type_relational_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 496:
		{
			LOG(COL_FG_GREEN<<" Casting struct_or_union with id 496 to PyCAst_object_struct_or_union")
			PyCAst_object_struct_or_union *pyObj=(PyCAst_object_struct_or_union*)PyCAst_new_struct_or_union(&PyCAst_type_struct_or_union,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 176:
		{
			LOG(COL_FG_GREEN<<" Casting enumerator with id 176 to PyCAst_object_enumerator")
			PyCAst_object_enumerator *pyObj=(PyCAst_object_enumerator*)PyCAst_new_enumerator(&PyCAst_type_enumerator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 544:
		{
			LOG(COL_FG_GREEN<<" Casting assignment_expression with id 544 to PyCAst_object_assignment_expression")
			PyCAst_object_assignment_expression *pyObj=(PyCAst_object_assignment_expression*)PyCAst_new_assignment_expression(&PyCAst_type_assignment_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 545:
		{
			LOG(COL_FG_GREEN<<" Casting assignment_expression_1 with id 545 to PyCAst_object_assignment_expression_1")
			PyCAst_object_assignment_expression_1 *pyObj=(PyCAst_object_assignment_expression_1*)PyCAst_new_assignment_expression_1(&PyCAst_type_assignment_expression_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 546:
		{
			LOG(COL_FG_GREEN<<" Casting assignment_expression_2 with id 546 to PyCAst_object_assignment_expression_2")
			PyCAst_object_assignment_expression_2 *pyObj=(PyCAst_object_assignment_expression_2*)PyCAst_new_assignment_expression_2(&PyCAst_type_assignment_expression_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 560:
		{
			LOG(COL_FG_GREEN<<" Casting parameter_type_list with id 560 to PyCAst_object_parameter_type_list")
			PyCAst_object_parameter_type_list *pyObj=(PyCAst_object_parameter_type_list*)PyCAst_new_parameter_type_list(&PyCAst_type_parameter_type_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 576:
		{
			LOG(COL_FG_GREEN<<" Casting parameter_declaration with id 576 to PyCAst_object_parameter_declaration")
			PyCAst_object_parameter_declaration *pyObj=(PyCAst_object_parameter_declaration*)PyCAst_new_parameter_declaration(&PyCAst_type_parameter_declaration,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 577:
		{
			LOG(COL_FG_GREEN<<" Casting parameter_declaration_1 with id 577 to PyCAst_object_parameter_declaration_1")
			PyCAst_object_parameter_declaration_1 *pyObj=(PyCAst_object_parameter_declaration_1*)PyCAst_new_parameter_declaration_1(&PyCAst_type_parameter_declaration_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 578:
		{
			LOG(COL_FG_GREEN<<" Casting parameter_declaration_2 with id 578 to PyCAst_object_parameter_declaration_2")
			PyCAst_object_parameter_declaration_2 *pyObj=(PyCAst_object_parameter_declaration_2*)PyCAst_new_parameter_declaration_2(&PyCAst_type_parameter_declaration_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 592:
		{
			LOG(COL_FG_GREEN<<" Casting multiplicative_expression with id 592 to PyCAst_object_multiplicative_expression")
			PyCAst_object_multiplicative_expression *pyObj=(PyCAst_object_multiplicative_expression*)PyCAst_new_multiplicative_expression(&PyCAst_type_multiplicative_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 593:
		{
			LOG(COL_FG_GREEN<<" Casting multiplicative_expression_item with id 593 to PyCAst_object_multiplicative_expression_item")
			PyCAst_object_multiplicative_expression_item *pyObj=(PyCAst_object_multiplicative_expression_item*)PyCAst_new_multiplicative_expression_item(&PyCAst_type_multiplicative_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 512:
		{
			LOG(COL_FG_GREEN<<" Casting type_qualifier_list with id 512 to PyCAst_object_type_qualifier_list")
			PyCAst_object_type_qualifier_list *pyObj=(PyCAst_object_type_qualifier_list*)PyCAst_new_type_qualifier_list(&PyCAst_type_type_qualifier_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 513:
		{
			LOG(COL_FG_GREEN<<" Casting type_qualifier_list_item with id 513 to PyCAst_object_type_qualifier_list_item")
			PyCAst_object_type_qualifier_list_item *pyObj=(PyCAst_object_type_qualifier_list_item*)PyCAst_new_type_qualifier_list_item(&PyCAst_type_type_qualifier_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 624:
		{
			LOG(COL_FG_GREEN<<" Casting argument_expression_list with id 624 to PyCAst_object_argument_expression_list")
			PyCAst_object_argument_expression_list *pyObj=(PyCAst_object_argument_expression_list*)PyCAst_new_argument_expression_list(&PyCAst_type_argument_expression_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 625:
		{
			LOG(COL_FG_GREEN<<" Casting argument_expression_list_item with id 625 to PyCAst_object_argument_expression_list_item")
			PyCAst_object_argument_expression_list_item *pyObj=(PyCAst_object_argument_expression_list_item*)PyCAst_new_argument_expression_list_item(&PyCAst_type_argument_expression_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 992:
		{
			LOG(COL_FG_GREEN<<" Casting direct_abstract_declarator with id 992 to PyCAst_object_direct_abstract_declarator")
			PyCAst_object_direct_abstract_declarator *pyObj=(PyCAst_object_direct_abstract_declarator*)PyCAst_new_direct_abstract_declarator(&PyCAst_type_direct_abstract_declarator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 993:
		{
			LOG(COL_FG_GREEN<<" Casting direct_abstract_declarator_1 with id 993 to PyCAst_object_direct_abstract_declarator_1")
			PyCAst_object_direct_abstract_declarator_1 *pyObj=(PyCAst_object_direct_abstract_declarator_1*)PyCAst_new_direct_abstract_declarator_1(&PyCAst_type_direct_abstract_declarator_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 994:
		{
			LOG(COL_FG_GREEN<<" Casting direct_abstract_declarator_2 with id 994 to PyCAst_object_direct_abstract_declarator_2")
			PyCAst_object_direct_abstract_declarator_2 *pyObj=(PyCAst_object_direct_abstract_declarator_2*)PyCAst_new_direct_abstract_declarator_2(&PyCAst_type_direct_abstract_declarator_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 995:
		{
			LOG(COL_FG_GREEN<<" Casting direct_abstract_declarator_3 with id 995 to PyCAst_object_direct_abstract_declarator_3")
			PyCAst_object_direct_abstract_declarator_3 *pyObj=(PyCAst_object_direct_abstract_declarator_3*)PyCAst_new_direct_abstract_declarator_3(&PyCAst_type_direct_abstract_declarator_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 768:
		{
			LOG(COL_FG_GREEN<<" Casting equality_expression with id 768 to PyCAst_object_equality_expression")
			PyCAst_object_equality_expression *pyObj=(PyCAst_object_equality_expression*)PyCAst_new_equality_expression(&PyCAst_type_equality_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 769:
		{
			LOG(COL_FG_GREEN<<" Casting equality_expression_item with id 769 to PyCAst_object_equality_expression_item")
			PyCAst_object_equality_expression_item *pyObj=(PyCAst_object_equality_expression_item*)PyCAst_new_equality_expression_item(&PyCAst_type_equality_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 656:
		{
			LOG(COL_FG_GREEN<<" Casting primary_expression with id 656 to PyCAst_object_primary_expression")
			PyCAst_object_primary_expression *pyObj=(PyCAst_object_primary_expression*)PyCAst_new_primary_expression(&PyCAst_type_primary_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 657:
		{
			LOG(COL_FG_GREEN<<" Casting primary_expression_1 with id 657 to PyCAst_object_primary_expression_1")
			PyCAst_object_primary_expression_1 *pyObj=(PyCAst_object_primary_expression_1*)PyCAst_new_primary_expression_1(&PyCAst_type_primary_expression_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 658:
		{
			LOG(COL_FG_GREEN<<" Casting primary_expression_2 with id 658 to PyCAst_object_primary_expression_2")
			PyCAst_object_primary_expression_2 *pyObj=(PyCAst_object_primary_expression_2*)PyCAst_new_primary_expression_2(&PyCAst_type_primary_expression_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 672:
		{
			LOG(COL_FG_GREEN<<" Casting declaration_specifiers with id 672 to PyCAst_object_declaration_specifiers")
			PyCAst_object_declaration_specifiers *pyObj=(PyCAst_object_declaration_specifiers*)PyCAst_new_declaration_specifiers(&PyCAst_type_declaration_specifiers,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 673:
		{
			LOG(COL_FG_GREEN<<" Casting declaration_specifiers_item with id 673 to PyCAst_object_declaration_specifiers_item")
			PyCAst_object_declaration_specifiers_item *pyObj=(PyCAst_object_declaration_specifiers_item*)PyCAst_new_declaration_specifiers_item(&PyCAst_type_declaration_specifiers_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 674:
		{
			LOG(COL_FG_GREEN<<" Casting declaration_specifiers_item_1 with id 674 to PyCAst_object_declaration_specifiers_item_1")
			PyCAst_object_declaration_specifiers_item_1 *pyObj=(PyCAst_object_declaration_specifiers_item_1*)PyCAst_new_declaration_specifiers_item_1(&PyCAst_type_declaration_specifiers_item_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 675:
		{
			LOG(COL_FG_GREEN<<" Casting declaration_specifiers_item_2 with id 675 to PyCAst_object_declaration_specifiers_item_2")
			PyCAst_object_declaration_specifiers_item_2 *pyObj=(PyCAst_object_declaration_specifiers_item_2*)PyCAst_new_declaration_specifiers_item_2(&PyCAst_type_declaration_specifiers_item_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 676:
		{
			LOG(COL_FG_GREEN<<" Casting declaration_specifiers_item_3 with id 676 to PyCAst_object_declaration_specifiers_item_3")
			PyCAst_object_declaration_specifiers_item_3 *pyObj=(PyCAst_object_declaration_specifiers_item_3*)PyCAst_new_declaration_specifiers_item_3(&PyCAst_type_declaration_specifiers_item_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 688:
		{
			LOG(COL_FG_GREEN<<" Casting declaration with id 688 to PyCAst_object_declaration")
			PyCAst_object_declaration *pyObj=(PyCAst_object_declaration*)PyCAst_new_declaration(&PyCAst_type_declaration,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 704:
		{
			LOG(COL_FG_GREEN<<" Casting direct_declarator with id 704 to PyCAst_object_direct_declarator")
			PyCAst_object_direct_declarator *pyObj=(PyCAst_object_direct_declarator*)PyCAst_new_direct_declarator(&PyCAst_type_direct_declarator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 705:
		{
			LOG(COL_FG_GREEN<<" Casting direct_declarator_1 with id 705 to PyCAst_object_direct_declarator_1")
			PyCAst_object_direct_declarator_1 *pyObj=(PyCAst_object_direct_declarator_1*)PyCAst_new_direct_declarator_1(&PyCAst_type_direct_declarator_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 706:
		{
			LOG(COL_FG_GREEN<<" Casting direct_declarator_2 with id 706 to PyCAst_object_direct_declarator_2")
			PyCAst_object_direct_declarator_2 *pyObj=(PyCAst_object_direct_declarator_2*)PyCAst_new_direct_declarator_2(&PyCAst_type_direct_declarator_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 707:
		{
			LOG(COL_FG_GREEN<<" Casting direct_declarator_3 with id 707 to PyCAst_object_direct_declarator_3")
			PyCAst_object_direct_declarator_3 *pyObj=(PyCAst_object_direct_declarator_3*)PyCAst_new_direct_declarator_3(&PyCAst_type_direct_declarator_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 708:
		{
			LOG(COL_FG_GREEN<<" Casting direct_declarator_4 with id 708 to PyCAst_object_direct_declarator_4")
			PyCAst_object_direct_declarator_4 *pyObj=(PyCAst_object_direct_declarator_4*)PyCAst_new_direct_declarator_4(&PyCAst_type_direct_declarator_4,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 709:
		{
			LOG(COL_FG_GREEN<<" Casting direct_declarator_5 with id 709 to PyCAst_object_direct_declarator_5")
			PyCAst_object_direct_declarator_5 *pyObj=(PyCAst_object_direct_declarator_5*)PyCAst_new_direct_declarator_5(&PyCAst_type_direct_declarator_5,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 720:
		{
			LOG(COL_FG_GREEN<<" Casting logical_and_expression with id 720 to PyCAst_object_logical_and_expression")
			PyCAst_object_logical_and_expression *pyObj=(PyCAst_object_logical_and_expression*)PyCAst_new_logical_and_expression(&PyCAst_type_logical_and_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 721:
		{
			LOG(COL_FG_GREEN<<" Casting logical_and_expression_item with id 721 to PyCAst_object_logical_and_expression_item")
			PyCAst_object_logical_and_expression_item *pyObj=(PyCAst_object_logical_and_expression_item*)PyCAst_new_logical_and_expression_item(&PyCAst_type_logical_and_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 144:
		{
			LOG(COL_FG_GREEN<<" Casting init_declarator_list with id 144 to PyCAst_object_init_declarator_list")
			PyCAst_object_init_declarator_list *pyObj=(PyCAst_object_init_declarator_list*)PyCAst_new_init_declarator_list(&PyCAst_type_init_declarator_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 145:
		{
			LOG(COL_FG_GREEN<<" Casting init_declarator_list_item with id 145 to PyCAst_object_init_declarator_list_item")
			PyCAst_object_init_declarator_list_item *pyObj=(PyCAst_object_init_declarator_list_item*)PyCAst_new_init_declarator_list_item(&PyCAst_type_init_declarator_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 752:
		{
			LOG(COL_FG_GREEN<<" Casting shift_expression with id 752 to PyCAst_object_shift_expression")
			PyCAst_object_shift_expression *pyObj=(PyCAst_object_shift_expression*)PyCAst_new_shift_expression(&PyCAst_type_shift_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 753:
		{
			LOG(COL_FG_GREEN<<" Casting shift_expression_item with id 753 to PyCAst_object_shift_expression_item")
			PyCAst_object_shift_expression_item *pyObj=(PyCAst_object_shift_expression_item*)PyCAst_new_shift_expression_item(&PyCAst_type_shift_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 128:
		{
			LOG(COL_FG_GREEN<<" Casting identifier_list with id 128 to PyCAst_object_identifier_list")
			PyCAst_object_identifier_list *pyObj=(PyCAst_object_identifier_list*)PyCAst_new_identifier_list(&PyCAst_type_identifier_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 129:
		{
			LOG(COL_FG_GREEN<<" Casting identifier_list_item with id 129 to PyCAst_object_identifier_list_item")
			PyCAst_object_identifier_list_item *pyObj=(PyCAst_object_identifier_list_item*)PyCAst_new_identifier_list_item(&PyCAst_type_identifier_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 784:
		{
			LOG(COL_FG_GREEN<<" Casting jump_statement with id 784 to PyCAst_object_jump_statement")
			PyCAst_object_jump_statement *pyObj=(PyCAst_object_jump_statement*)PyCAst_new_jump_statement(&PyCAst_type_jump_statement,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 785:
		{
			LOG(COL_FG_GREEN<<" Casting jump_statement_1 with id 785 to PyCAst_object_jump_statement_1")
			PyCAst_object_jump_statement_1 *pyObj=(PyCAst_object_jump_statement_1*)PyCAst_new_jump_statement_1(&PyCAst_type_jump_statement_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 786:
		{
			LOG(COL_FG_GREEN<<" Casting jump_statement_2 with id 786 to PyCAst_object_jump_statement_2")
			PyCAst_object_jump_statement_2 *pyObj=(PyCAst_object_jump_statement_2*)PyCAst_new_jump_statement_2(&PyCAst_type_jump_statement_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 787:
		{
			LOG(COL_FG_GREEN<<" Casting jump_statement_3 with id 787 to PyCAst_object_jump_statement_3")
			PyCAst_object_jump_statement_3 *pyObj=(PyCAst_object_jump_statement_3*)PyCAst_new_jump_statement_3(&PyCAst_type_jump_statement_3,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 800:
		{
			LOG(COL_FG_GREEN<<" Casting struct_declarator with id 800 to PyCAst_object_struct_declarator")
			PyCAst_object_struct_declarator *pyObj=(PyCAst_object_struct_declarator*)PyCAst_new_struct_declarator(&PyCAst_type_struct_declarator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 816:
		{
			LOG(COL_FG_GREEN<<" Casting function_definition with id 816 to PyCAst_object_function_definition")
			PyCAst_object_function_definition *pyObj=(PyCAst_object_function_definition*)PyCAst_new_function_definition(&PyCAst_type_function_definition,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 832:
		{
			LOG(COL_FG_GREEN<<" Casting parameter_list with id 832 to PyCAst_object_parameter_list")
			PyCAst_object_parameter_list *pyObj=(PyCAst_object_parameter_list*)PyCAst_new_parameter_list(&PyCAst_type_parameter_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 833:
		{
			LOG(COL_FG_GREEN<<" Casting parameter_list_item with id 833 to PyCAst_object_parameter_list_item")
			PyCAst_object_parameter_list_item *pyObj=(PyCAst_object_parameter_list_item*)PyCAst_new_parameter_list_item(&PyCAst_type_parameter_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 848:
		{
			LOG(COL_FG_GREEN<<" Casting enum_specifier with id 848 to PyCAst_object_enum_specifier")
			PyCAst_object_enum_specifier *pyObj=(PyCAst_object_enum_specifier*)PyCAst_new_enum_specifier(&PyCAst_type_enum_specifier,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 864:
		{
			LOG(COL_FG_GREEN<<" Casting type_qualifier with id 864 to PyCAst_object_type_qualifier")
			PyCAst_object_type_qualifier *pyObj=(PyCAst_object_type_qualifier*)PyCAst_new_type_qualifier(&PyCAst_type_type_qualifier,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 880:
		{
			LOG(COL_FG_GREEN<<" Casting enumerator_list with id 880 to PyCAst_object_enumerator_list")
			PyCAst_object_enumerator_list *pyObj=(PyCAst_object_enumerator_list*)PyCAst_new_enumerator_list(&PyCAst_type_enumerator_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 881:
		{
			LOG(COL_FG_GREEN<<" Casting enumerator_list_item with id 881 to PyCAst_object_enumerator_list_item")
			PyCAst_object_enumerator_list_item *pyObj=(PyCAst_object_enumerator_list_item*)PyCAst_new_enumerator_list_item(&PyCAst_type_enumerator_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 896:
		{
			LOG(COL_FG_GREEN<<" Casting labeled_statement with id 896 to PyCAst_object_labeled_statement")
			PyCAst_object_labeled_statement *pyObj=(PyCAst_object_labeled_statement*)PyCAst_new_labeled_statement(&PyCAst_type_labeled_statement,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 897:
		{
			LOG(COL_FG_GREEN<<" Casting labeled_statement_1 with id 897 to PyCAst_object_labeled_statement_1")
			PyCAst_object_labeled_statement_1 *pyObj=(PyCAst_object_labeled_statement_1*)PyCAst_new_labeled_statement_1(&PyCAst_type_labeled_statement_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 898:
		{
			LOG(COL_FG_GREEN<<" Casting labeled_statement_2 with id 898 to PyCAst_object_labeled_statement_2")
			PyCAst_object_labeled_statement_2 *pyObj=(PyCAst_object_labeled_statement_2*)PyCAst_new_labeled_statement_2(&PyCAst_type_labeled_statement_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 192:
		{
			LOG(COL_FG_GREEN<<" Casting declaration_list with id 192 to PyCAst_object_declaration_list")
			PyCAst_object_declaration_list *pyObj=(PyCAst_object_declaration_list*)PyCAst_new_declaration_list(&PyCAst_type_declaration_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 193:
		{
			LOG(COL_FG_GREEN<<" Casting declaration_list_item with id 193 to PyCAst_object_declaration_list_item")
			PyCAst_object_declaration_list_item *pyObj=(PyCAst_object_declaration_list_item*)PyCAst_new_declaration_list_item(&PyCAst_type_declaration_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 928:
		{
			LOG(COL_FG_GREEN<<" Casting specifier_qualifier_list with id 928 to PyCAst_object_specifier_qualifier_list")
			PyCAst_object_specifier_qualifier_list *pyObj=(PyCAst_object_specifier_qualifier_list*)PyCAst_new_specifier_qualifier_list(&PyCAst_type_specifier_qualifier_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 929:
		{
			LOG(COL_FG_GREEN<<" Casting specifier_qualifier_list_item with id 929 to PyCAst_object_specifier_qualifier_list_item")
			PyCAst_object_specifier_qualifier_list_item *pyObj=(PyCAst_object_specifier_qualifier_list_item*)PyCAst_new_specifier_qualifier_list_item(&PyCAst_type_specifier_qualifier_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 930:
		{
			LOG(COL_FG_GREEN<<" Casting specifier_qualifier_list_item_1 with id 930 to PyCAst_object_specifier_qualifier_list_item_1")
			PyCAst_object_specifier_qualifier_list_item_1 *pyObj=(PyCAst_object_specifier_qualifier_list_item_1*)PyCAst_new_specifier_qualifier_list_item_1(&PyCAst_type_specifier_qualifier_list_item_1,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 931:
		{
			LOG(COL_FG_GREEN<<" Casting specifier_qualifier_list_item_2 with id 931 to PyCAst_object_specifier_qualifier_list_item_2")
			PyCAst_object_specifier_qualifier_list_item_2 *pyObj=(PyCAst_object_specifier_qualifier_list_item_2*)PyCAst_new_specifier_qualifier_list_item_2(&PyCAst_type_specifier_qualifier_list_item_2,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 944:
		{
			LOG(COL_FG_GREEN<<" Casting translation_unit with id 944 to PyCAst_object_translation_unit")
			PyCAst_object_translation_unit *pyObj=(PyCAst_object_translation_unit*)PyCAst_new_translation_unit(&PyCAst_type_translation_unit,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 945:
		{
			LOG(COL_FG_GREEN<<" Casting translation_unit_item with id 945 to PyCAst_object_translation_unit_item")
			PyCAst_object_translation_unit_item *pyObj=(PyCAst_object_translation_unit_item*)PyCAst_new_translation_unit_item(&PyCAst_type_translation_unit_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 464:
		{
			LOG(COL_FG_GREEN<<" Casting constant_expression with id 464 to PyCAst_object_constant_expression")
			PyCAst_object_constant_expression *pyObj=(PyCAst_object_constant_expression*)PyCAst_new_constant_expression(&PyCAst_type_constant_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 416:
		{
			LOG(COL_FG_GREEN<<" Casting initializer_list with id 416 to PyCAst_object_initializer_list")
			PyCAst_object_initializer_list *pyObj=(PyCAst_object_initializer_list*)PyCAst_new_initializer_list(&PyCAst_type_initializer_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 417:
		{
			LOG(COL_FG_GREEN<<" Casting initializer_list_item with id 417 to PyCAst_object_initializer_list_item")
			PyCAst_object_initializer_list_item *pyObj=(PyCAst_object_initializer_list_item*)PyCAst_new_initializer_list_item(&PyCAst_type_initializer_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 640:
		{
			LOG(COL_FG_GREEN<<" Casting statement_list with id 640 to PyCAst_object_statement_list")
			PyCAst_object_statement_list *pyObj=(PyCAst_object_statement_list*)PyCAst_new_statement_list(&PyCAst_type_statement_list,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 641:
		{
			LOG(COL_FG_GREEN<<" Casting statement_list_item with id 641 to PyCAst_object_statement_list_item")
			PyCAst_object_statement_list_item *pyObj=(PyCAst_object_statement_list_item*)PyCAst_new_statement_list_item(&PyCAst_type_statement_list_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 1008:
		{
			LOG(COL_FG_GREEN<<" Casting expression with id 1008 to PyCAst_object_expression")
			PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_new_expression(&PyCAst_type_expression,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 1009:
		{
			LOG(COL_FG_GREEN<<" Casting expression_item with id 1009 to PyCAst_object_expression_item")
			PyCAst_object_expression_item *pyObj=(PyCAst_object_expression_item*)PyCAst_new_expression_item(&PyCAst_type_expression_item,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		case 736:
		{
			LOG(COL_FG_GREEN<<" Casting declarator with id 736 to PyCAst_object_declarator")
			PyCAst_object_declarator *pyObj=(PyCAst_object_declarator*)PyCAst_new_declarator(&PyCAst_type_declarator,NULL,NULL);
			pyObj->_p_cast_object=pointer;
			return (PyObject*)pyObj;
		}
		default:
		{
			LOG(COL_FG_RED<<"INVALID ID")
			Py_RETURN_NONE;
		}
	}
	
	
}
