

















#include <Python.h>
#include <structmember.h>






/*=====================================================================================================================================*\

        DEFINITION OF Token

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::Token *_p_cast_object;
}PyCAst_object_Token;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_Token [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_Token [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_Token(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_Token_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_Token[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_Token_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_Token = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.Token",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_Token),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the Token",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_Token,
	/* tp_members-----------*/      PyCAst_members_Token,
	/* tp_getset------------*/      PyCAst_getsetter_Token,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_Token,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




			





/*=====================================================================================================================================*\

        DEFINITION OF storage_class_specifier

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::storage_class_specifier *_p_cast_object;
}PyCAst_object_storage_class_specifier;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_storage_class_specifier [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_storage_class_specifier [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_storage_class_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_storage_class_specifier(PyCAst_object_storage_class_specifier *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_storage_class_specifier_ast(PyObject *_self);

static PyObject *PyCAst_getter_storage_class_specifier_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_storage_class_specifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_storage_class_specifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_storage_class_specifier_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_storage_class_specifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.storage_class_specifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_storage_class_specifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF expression_statement

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::expression_statement *_p_cast_object;
}PyCAst_object_expression_statement;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_expression_statement [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_expression_statement [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_expression_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_expression_statement(PyCAst_object_expression_statement *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_expression_statement_ast(PyObject *_self);

static PyObject *PyCAst_getter_expression_statement_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_expression_statement[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_expression_statement_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression", (getter)PyCAst_getter_expression_statement_expression,NULL,(char*)"Parameter expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_expression_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.expression_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_expression_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF type_name

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_name *_p_cast_object;
}PyCAst_object_type_name;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_name [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_name [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_name(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_type_name(PyCAst_object_type_name *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_type_name_ast(PyObject *_self);

static PyObject *PyCAst_getter_type_name_specifier_qualifier_list(PyObject *_self);
static PyObject *PyCAst_getter_type_name_abstract_declarator(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_type_name[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_name_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"specifier_qualifier_list", (getter)PyCAst_getter_type_name_specifier_qualifier_list,NULL,(char*)"Parameter specifier_qualifier_list", NULL},
	
	{(char*)"abstract_declarator", (getter)PyCAst_getter_type_name_abstract_declarator,NULL,(char*)"Parameter abstract_declarator", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_name = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_name",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_name),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF unary_expression1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::unary_expression1 *_p_cast_object;
}PyCAst_object_unary_expression1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_unary_expression1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_unary_expression1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_unary_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_unary_expression1(PyCAst_object_unary_expression1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_unary_expression1_ast(PyObject *_self);

static PyObject *PyCAst_getter_unary_expression1_type_name(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_unary_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"type_name", (getter)PyCAst_getter_unary_expression1_type_name,NULL,(char*)"Parameter type_name", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_unary_expression1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the unary_expression1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression1,
	/* tp_members-----------*/      PyCAst_members_unary_expression1,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF unary_expression2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::unary_expression2 *_p_cast_object;
}PyCAst_object_unary_expression2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_unary_expression2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_unary_expression2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_unary_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_unary_expression2(PyCAst_object_unary_expression2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_unary_expression2_ast(PyObject *_self);

static PyObject *PyCAst_getter_unary_expression2_token1(PyObject *_self);
static PyObject *PyCAst_getter_unary_expression2_unary_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_unary_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_unary_expression2_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"unary_expression", (getter)PyCAst_getter_unary_expression2_unary_expression,NULL,(char*)"Parameter unary_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_unary_expression2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the unary_expression2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression2,
	/* tp_members-----------*/      PyCAst_members_unary_expression2,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF unary_expression3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::unary_expression3 *_p_cast_object;
}PyCAst_object_unary_expression3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_unary_expression3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_unary_expression3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_unary_expression3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_unary_expression3(PyCAst_object_unary_expression3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_unary_expression3_ast(PyObject *_self);

static PyObject *PyCAst_getter_unary_expression3_unary_operator(PyObject *_self);
static PyObject *PyCAst_getter_unary_expression3_cast_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_unary_expression3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"unary_operator", (getter)PyCAst_getter_unary_expression3_unary_operator,NULL,(char*)"Parameter unary_operator", NULL},
	
	{(char*)"cast_expression", (getter)PyCAst_getter_unary_expression3_cast_expression,NULL,(char*)"Parameter cast_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_unary_expression3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the unary_expression3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression3,
	/* tp_members-----------*/      PyCAst_members_unary_expression3,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF unary_expression4

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::unary_expression4 *_p_cast_object;
}PyCAst_object_unary_expression4;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_unary_expression4 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_unary_expression4 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_unary_expression4(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_unary_expression4(PyCAst_object_unary_expression4 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_unary_expression4_ast(PyObject *_self);

static PyObject *PyCAst_getter_unary_expression4_postfix_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_unary_expression4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_expression4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"postfix_expression", (getter)PyCAst_getter_unary_expression4_postfix_expression,NULL,(char*)"Parameter postfix_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_unary_expression4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_expression4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_expression4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the unary_expression4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_unary_expression4,
	/* tp_members-----------*/      PyCAst_members_unary_expression4,
	/* tp_getset------------*/      PyCAst_getsetter_unary_expression4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_unary_expression4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_unary_expression4,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF conditional_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::conditional_expression_iterator *_p_cast_object;
	CAst::conditional_expression *_p_cast_list_object;
}PyCAst_object_conditional_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_conditional_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_conditional_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_conditional_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_conditional_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_conditional_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_conditional_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.conditional_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_conditional_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the conditional_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_conditional_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_conditional_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_conditional_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_conditional_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_conditional_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF conditional_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::conditional_expression_item *_p_cast_object;
}PyCAst_object_conditional_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_conditional_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_conditional_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_conditional_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_conditional_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_conditional_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_conditional_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_conditional_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.conditional_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_conditional_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_conditional_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF conditional_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::conditional_expression *_p_cast_object;
}PyCAst_object_conditional_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_conditional_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_conditional_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_conditional_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_conditional_expression(PyCAst_object_conditional_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_conditional_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_conditional_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_conditional_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_conditional_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_conditional_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.conditional_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_conditional_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the conditional_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_conditional_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF struct_or_union_specifier

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_or_union_specifier *_p_cast_object;
}PyCAst_object_struct_or_union_specifier;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_or_union_specifier [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_or_union_specifier [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_or_union_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_struct_or_union_specifier(PyCAst_object_struct_or_union_specifier *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_or_union_specifier_ast(PyObject *_self);

static PyObject *PyCAst_getter_struct_or_union_specifier_struct_or_union(PyObject *_self);
static PyObject *PyCAst_getter_struct_or_union_specifier_token1(PyObject *_self);
static PyObject *PyCAst_getter_struct_or_union_specifier_token2(PyObject *_self);
static PyObject *PyCAst_getter_struct_or_union_specifier_struct_declaration_list(PyObject *_self);
static PyObject *PyCAst_getter_struct_or_union_specifier_token3(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_struct_or_union_specifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_or_union_specifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"struct_or_union", (getter)PyCAst_getter_struct_or_union_specifier_struct_or_union,NULL,(char*)"Parameter struct_or_union", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_struct_or_union_specifier_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"token2", (getter)PyCAst_getter_struct_or_union_specifier_token2,NULL,(char*)"Parameter token2", NULL},
	
	{(char*)"struct_declaration_list", (getter)PyCAst_getter_struct_or_union_specifier_struct_declaration_list,NULL,(char*)"Parameter struct_declaration_list", NULL},
	
	{(char*)"token3", (getter)PyCAst_getter_struct_or_union_specifier_token3,NULL,(char*)"Parameter token3", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_or_union_specifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_or_union_specifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_or_union_specifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF exclusive_or_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::exclusive_or_expression_iterator *_p_cast_object;
	CAst::exclusive_or_expression *_p_cast_list_object;
}PyCAst_object_exclusive_or_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_exclusive_or_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_exclusive_or_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_exclusive_or_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_exclusive_or_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_exclusive_or_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_exclusive_or_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.exclusive_or_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_exclusive_or_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the exclusive_or_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_exclusive_or_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_exclusive_or_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_exclusive_or_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_exclusive_or_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_exclusive_or_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF exclusive_or_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::exclusive_or_expression_item *_p_cast_object;
}PyCAst_object_exclusive_or_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_exclusive_or_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_exclusive_or_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_exclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_exclusive_or_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_exclusive_or_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_exclusive_or_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_exclusive_or_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.exclusive_or_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_exclusive_or_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_exclusive_or_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF exclusive_or_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::exclusive_or_expression *_p_cast_object;
}PyCAst_object_exclusive_or_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_exclusive_or_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_exclusive_or_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_exclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_exclusive_or_expression(PyCAst_object_exclusive_or_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_exclusive_or_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_exclusive_or_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_exclusive_or_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_exclusive_or_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_exclusive_or_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.exclusive_or_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_exclusive_or_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the exclusive_or_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_exclusive_or_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF initializer1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::initializer1 *_p_cast_object;
}PyCAst_object_initializer1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_initializer1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_initializer1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_initializer1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_initializer1(PyCAst_object_initializer1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_initializer1_ast(PyObject *_self);

static PyObject *PyCAst_getter_initializer1_initializer_list(PyObject *_self);
static PyObject *PyCAst_getter_initializer1_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_initializer1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_initializer1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"initializer_list", (getter)PyCAst_getter_initializer1_initializer_list,NULL,(char*)"Parameter initializer_list", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_initializer1_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_initializer1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the initializer1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_initializer1,
	/* tp_members-----------*/      PyCAst_members_initializer1,
	/* tp_getset------------*/      PyCAst_getsetter_initializer1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_initializer1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF initializer2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::initializer2 *_p_cast_object;
}PyCAst_object_initializer2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_initializer2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_initializer2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_initializer2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_initializer2(PyCAst_object_initializer2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_initializer2_ast(PyObject *_self);

static PyObject *PyCAst_getter_initializer2_assignment_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_initializer2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_initializer2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"assignment_expression", (getter)PyCAst_getter_initializer2_assignment_expression,NULL,(char*)"Parameter assignment_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_initializer2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the initializer2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_initializer2,
	/* tp_members-----------*/      PyCAst_members_initializer2,
	/* tp_getset------------*/      PyCAst_getsetter_initializer2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_initializer2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declaration_list_iterator *_p_cast_object;
	CAst::struct_declaration_list *_p_cast_list_object;
}PyCAst_object_struct_declaration_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declaration_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declaration_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declaration_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_struct_declaration_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_struct_declaration_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declaration_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declaration_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declaration_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the struct_declaration_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_struct_declaration_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_struct_declaration_list_iterator,
	/* tp_members-----------*/      PyCAst_members_struct_declaration_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declaration_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declaration_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declaration_list_item *_p_cast_object;
}PyCAst_object_struct_declaration_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declaration_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declaration_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_declaration_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_struct_declaration_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declaration_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declaration_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declaration_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declaration_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declaration_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declaration_list *_p_cast_object;
}PyCAst_object_struct_declaration_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declaration_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declaration_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_struct_declaration_list(PyCAst_object_struct_declaration_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_declaration_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_struct_declaration_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declaration_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_struct_declaration_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declaration_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declaration_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declaration_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the struct_declaration_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_struct_declaration_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF assignment_operator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::assignment_operator *_p_cast_object;
}PyCAst_object_assignment_operator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_assignment_operator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_assignment_operator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_assignment_operator(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_assignment_operator(PyCAst_object_assignment_operator *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_assignment_operator_ast(PyObject *_self);

static PyObject *PyCAst_getter_assignment_operator_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_assignment_operator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_assignment_operator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_assignment_operator_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_assignment_operator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.assignment_operator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_assignment_operator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declaration *_p_cast_object;
}PyCAst_object_struct_declaration;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declaration [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declaration [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_struct_declaration(PyCAst_object_struct_declaration *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_declaration_ast(PyObject *_self);

static PyObject *PyCAst_getter_struct_declaration_specifier_qualifier_list(PyObject *_self);
static PyObject *PyCAst_getter_struct_declaration_struct_declarator_list(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_struct_declaration[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declaration_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"specifier_qualifier_list", (getter)PyCAst_getter_struct_declaration_specifier_qualifier_list,NULL,(char*)"Parameter specifier_qualifier_list", NULL},
	
	{(char*)"struct_declarator_list", (getter)PyCAst_getter_struct_declaration_struct_declarator_list,NULL,(char*)"Parameter struct_declarator_list", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declaration = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declaration",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declaration),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF abstract_declarator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::abstract_declarator *_p_cast_object;
}PyCAst_object_abstract_declarator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_abstract_declarator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_abstract_declarator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_abstract_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_abstract_declarator(PyCAst_object_abstract_declarator *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_abstract_declarator_ast(PyObject *_self);

static PyObject *PyCAst_getter_abstract_declarator_pointer(PyObject *_self);
static PyObject *PyCAst_getter_abstract_declarator_direct_abstract_declarator(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_abstract_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_abstract_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"pointer", (getter)PyCAst_getter_abstract_declarator_pointer,NULL,(char*)"Parameter pointer", NULL},
	
	{(char*)"direct_abstract_declarator", (getter)PyCAst_getter_abstract_declarator_direct_abstract_declarator,NULL,(char*)"Parameter direct_abstract_declarator", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_abstract_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.abstract_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_abstract_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF iteration_statement1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::iteration_statement1 *_p_cast_object;
}PyCAst_object_iteration_statement1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_iteration_statement1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_iteration_statement1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_iteration_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_iteration_statement1(PyCAst_object_iteration_statement1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_iteration_statement1_ast(PyObject *_self);

static PyObject *PyCAst_getter_iteration_statement1_statement(PyObject *_self);
static PyObject *PyCAst_getter_iteration_statement1_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_iteration_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_iteration_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"statement", (getter)PyCAst_getter_iteration_statement1_statement,NULL,(char*)"Parameter statement", NULL},
	
	{(char*)"expression", (getter)PyCAst_getter_iteration_statement1_expression,NULL,(char*)"Parameter expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_iteration_statement1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.iteration_statement1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_iteration_statement1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the iteration_statement1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_iteration_statement1,
	/* tp_members-----------*/      PyCAst_members_iteration_statement1,
	/* tp_getset------------*/      PyCAst_getsetter_iteration_statement1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_iteration_statement1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_iteration_statement1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF iteration_statement2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::iteration_statement2 *_p_cast_object;
}PyCAst_object_iteration_statement2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_iteration_statement2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_iteration_statement2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_iteration_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_iteration_statement2(PyCAst_object_iteration_statement2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_iteration_statement2_ast(PyObject *_self);

static PyObject *PyCAst_getter_iteration_statement2_expression_statement(PyObject *_self);
static PyObject *PyCAst_getter_iteration_statement2_expression_statement1(PyObject *_self);
static PyObject *PyCAst_getter_iteration_statement2_expression(PyObject *_self);
static PyObject *PyCAst_getter_iteration_statement2_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_iteration_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_iteration_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression_statement", (getter)PyCAst_getter_iteration_statement2_expression_statement,NULL,(char*)"Parameter expression_statement", NULL},
	
	{(char*)"expression_statement1", (getter)PyCAst_getter_iteration_statement2_expression_statement1,NULL,(char*)"Parameter expression_statement1", NULL},
	
	{(char*)"expression", (getter)PyCAst_getter_iteration_statement2_expression,NULL,(char*)"Parameter expression", NULL},
	
	{(char*)"statement", (getter)PyCAst_getter_iteration_statement2_statement,NULL,(char*)"Parameter statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_iteration_statement2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.iteration_statement2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_iteration_statement2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the iteration_statement2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_iteration_statement2,
	/* tp_members-----------*/      PyCAst_members_iteration_statement2,
	/* tp_getset------------*/      PyCAst_getsetter_iteration_statement2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_iteration_statement2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_iteration_statement2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF iteration_statement3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::iteration_statement3 *_p_cast_object;
}PyCAst_object_iteration_statement3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_iteration_statement3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_iteration_statement3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_iteration_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_iteration_statement3(PyCAst_object_iteration_statement3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_iteration_statement3_ast(PyObject *_self);

static PyObject *PyCAst_getter_iteration_statement3_expression(PyObject *_self);
static PyObject *PyCAst_getter_iteration_statement3_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_iteration_statement3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_iteration_statement3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression", (getter)PyCAst_getter_iteration_statement3_expression,NULL,(char*)"Parameter expression", NULL},
	
	{(char*)"statement", (getter)PyCAst_getter_iteration_statement3_statement,NULL,(char*)"Parameter statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_iteration_statement3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.iteration_statement3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_iteration_statement3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the iteration_statement3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_iteration_statement3,
	/* tp_members-----------*/      PyCAst_members_iteration_statement3,
	/* tp_getset------------*/      PyCAst_getsetter_iteration_statement3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_iteration_statement3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_iteration_statement3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF additive_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::additive_expression_iterator *_p_cast_object;
	CAst::additive_expression *_p_cast_list_object;
}PyCAst_object_additive_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_additive_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_additive_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_additive_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_additive_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_additive_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_additive_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.additive_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_additive_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the additive_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_additive_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_additive_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_additive_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_additive_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_additive_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF additive_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::additive_expression_item *_p_cast_object;
}PyCAst_object_additive_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_additive_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_additive_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_additive_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_additive_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_additive_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_additive_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_additive_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.additive_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_additive_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_additive_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF additive_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::additive_expression *_p_cast_object;
}PyCAst_object_additive_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_additive_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_additive_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_additive_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_additive_expression(PyCAst_object_additive_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_additive_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_additive_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_additive_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_additive_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_additive_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.additive_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_additive_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the additive_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_additive_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF external_declaration1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::external_declaration1 *_p_cast_object;
}PyCAst_object_external_declaration1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_external_declaration1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_external_declaration1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_external_declaration1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_external_declaration1(PyCAst_object_external_declaration1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_external_declaration1_ast(PyObject *_self);

static PyObject *PyCAst_getter_external_declaration1_function_definition(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_external_declaration1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_external_declaration1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"function_definition", (getter)PyCAst_getter_external_declaration1_function_definition,NULL,(char*)"Parameter function_definition", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_external_declaration1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.external_declaration1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_external_declaration1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the external_declaration1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_external_declaration1,
	/* tp_members-----------*/      PyCAst_members_external_declaration1,
	/* tp_getset------------*/      PyCAst_getsetter_external_declaration1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_external_declaration1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_external_declaration1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF external_declaration2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::external_declaration2 *_p_cast_object;
}PyCAst_object_external_declaration2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_external_declaration2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_external_declaration2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_external_declaration2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_external_declaration2(PyCAst_object_external_declaration2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_external_declaration2_ast(PyObject *_self);

static PyObject *PyCAst_getter_external_declaration2_declaration(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_external_declaration2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_external_declaration2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declaration", (getter)PyCAst_getter_external_declaration2_declaration,NULL,(char*)"Parameter declaration", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_external_declaration2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.external_declaration2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_external_declaration2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the external_declaration2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_external_declaration2,
	/* tp_members-----------*/      PyCAst_members_external_declaration2,
	/* tp_getset------------*/      PyCAst_getsetter_external_declaration2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_external_declaration2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_external_declaration2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF type_specifier1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_specifier1 *_p_cast_object;
}PyCAst_object_type_specifier1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_specifier1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_specifier1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_specifier1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_type_specifier1(PyCAst_object_type_specifier1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_type_specifier1_ast(PyObject *_self);

static PyObject *PyCAst_getter_type_specifier1_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_type_specifier1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_specifier1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_type_specifier1_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_specifier1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_specifier1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_specifier1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the type_specifier1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_specifier1,
	/* tp_members-----------*/      PyCAst_members_type_specifier1,
	/* tp_getset------------*/      PyCAst_getsetter_type_specifier1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_specifier1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_specifier1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF type_specifier2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_specifier2 *_p_cast_object;
}PyCAst_object_type_specifier2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_specifier2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_specifier2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_specifier2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_type_specifier2(PyCAst_object_type_specifier2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_type_specifier2_ast(PyObject *_self);

static PyObject *PyCAst_getter_type_specifier2_struct_or_union_specifier(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_type_specifier2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_specifier2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"struct_or_union_specifier", (getter)PyCAst_getter_type_specifier2_struct_or_union_specifier,NULL,(char*)"Parameter struct_or_union_specifier", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_specifier2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_specifier2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_specifier2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the type_specifier2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_specifier2,
	/* tp_members-----------*/      PyCAst_members_type_specifier2,
	/* tp_getset------------*/      PyCAst_getsetter_type_specifier2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_specifier2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_specifier2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF type_specifier3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_specifier3 *_p_cast_object;
}PyCAst_object_type_specifier3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_specifier3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_specifier3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_specifier3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_type_specifier3(PyCAst_object_type_specifier3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_type_specifier3_ast(PyObject *_self);

static PyObject *PyCAst_getter_type_specifier3_enum_specifier(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_type_specifier3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_specifier3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"enum_specifier", (getter)PyCAst_getter_type_specifier3_enum_specifier,NULL,(char*)"Parameter enum_specifier", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_specifier3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_specifier3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_specifier3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the type_specifier3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_type_specifier3,
	/* tp_members-----------*/      PyCAst_members_type_specifier3,
	/* tp_getset------------*/      PyCAst_getsetter_type_specifier3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_type_specifier3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_specifier3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF compound_statement

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::compound_statement *_p_cast_object;
}PyCAst_object_compound_statement;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_compound_statement [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_compound_statement [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_compound_statement(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_compound_statement(PyCAst_object_compound_statement *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_compound_statement_ast(PyObject *_self);

static PyObject *PyCAst_getter_compound_statement_declaration_list(PyObject *_self);
static PyObject *PyCAst_getter_compound_statement_statement_list(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_compound_statement[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_compound_statement_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declaration_list", (getter)PyCAst_getter_compound_statement_declaration_list,NULL,(char*)"Parameter declaration_list", NULL},
	
	{(char*)"statement_list", (getter)PyCAst_getter_compound_statement_statement_list,NULL,(char*)"Parameter statement_list", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_compound_statement = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.compound_statement",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_compound_statement),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF inclusive_or_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::inclusive_or_expression_iterator *_p_cast_object;
	CAst::inclusive_or_expression *_p_cast_list_object;
}PyCAst_object_inclusive_or_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_inclusive_or_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_inclusive_or_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_inclusive_or_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_inclusive_or_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_inclusive_or_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_inclusive_or_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.inclusive_or_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_inclusive_or_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the inclusive_or_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_inclusive_or_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_inclusive_or_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_inclusive_or_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_inclusive_or_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_inclusive_or_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF inclusive_or_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::inclusive_or_expression_item *_p_cast_object;
}PyCAst_object_inclusive_or_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_inclusive_or_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_inclusive_or_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_inclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_inclusive_or_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_inclusive_or_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_inclusive_or_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_inclusive_or_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.inclusive_or_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_inclusive_or_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_inclusive_or_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF inclusive_or_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::inclusive_or_expression *_p_cast_object;
}PyCAst_object_inclusive_or_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_inclusive_or_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_inclusive_or_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_inclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_inclusive_or_expression(PyCAst_object_inclusive_or_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_inclusive_or_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_inclusive_or_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_inclusive_or_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_inclusive_or_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_inclusive_or_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.inclusive_or_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_inclusive_or_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the inclusive_or_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_inclusive_or_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF pointer_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::pointer_iterator *_p_cast_object;
	CAst::pointer *_p_cast_list_object;
}PyCAst_object_pointer_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_pointer_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_pointer_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_pointer_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_pointer_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_pointer_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_pointer_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.pointer_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_pointer_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the pointer_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_pointer_iterator,
	/* tp_methods-----------*/      PyCAst_methods_pointer_iterator,
	/* tp_members-----------*/      PyCAst_members_pointer_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_pointer_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_pointer_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF pointer_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::pointer_item *_p_cast_object;
}PyCAst_object_pointer_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_pointer_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_pointer_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_pointer_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_pointer_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_pointer_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_pointer_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_pointer_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.pointer_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_pointer_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF pointer

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::pointer *_p_cast_object;
}PyCAst_object_pointer;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_pointer [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_pointer [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_pointer(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_pointer(PyCAst_object_pointer *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_pointer_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_pointer[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_pointer_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_pointer(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_pointer = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.pointer",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_pointer),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the pointer",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_pointer,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF selection_statement1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::selection_statement1 *_p_cast_object;
}PyCAst_object_selection_statement1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_selection_statement1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_selection_statement1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_selection_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_selection_statement1(PyCAst_object_selection_statement1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_selection_statement1_ast(PyObject *_self);

static PyObject *PyCAst_getter_selection_statement1_expression(PyObject *_self);
static PyObject *PyCAst_getter_selection_statement1_statement(PyObject *_self);
static PyObject *PyCAst_getter_selection_statement1_token1(PyObject *_self);
static PyObject *PyCAst_getter_selection_statement1_statement1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_selection_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_selection_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression", (getter)PyCAst_getter_selection_statement1_expression,NULL,(char*)"Parameter expression", NULL},
	
	{(char*)"statement", (getter)PyCAst_getter_selection_statement1_statement,NULL,(char*)"Parameter statement", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_selection_statement1_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"statement1", (getter)PyCAst_getter_selection_statement1_statement1,NULL,(char*)"Parameter statement1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_selection_statement1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.selection_statement1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_selection_statement1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the selection_statement1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_selection_statement1,
	/* tp_members-----------*/      PyCAst_members_selection_statement1,
	/* tp_getset------------*/      PyCAst_getsetter_selection_statement1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_selection_statement1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_selection_statement1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF selection_statement2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::selection_statement2 *_p_cast_object;
}PyCAst_object_selection_statement2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_selection_statement2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_selection_statement2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_selection_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_selection_statement2(PyCAst_object_selection_statement2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_selection_statement2_ast(PyObject *_self);

static PyObject *PyCAst_getter_selection_statement2_expression(PyObject *_self);
static PyObject *PyCAst_getter_selection_statement2_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_selection_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_selection_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression", (getter)PyCAst_getter_selection_statement2_expression,NULL,(char*)"Parameter expression", NULL},
	
	{(char*)"statement", (getter)PyCAst_getter_selection_statement2_statement,NULL,(char*)"Parameter statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_selection_statement2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.selection_statement2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_selection_statement2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the selection_statement2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_selection_statement2,
	/* tp_members-----------*/      PyCAst_members_selection_statement2,
	/* tp_getset------------*/      PyCAst_getsetter_selection_statement2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_selection_statement2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_selection_statement2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression1 *_p_cast_object;
}PyCAst_object_postfix_expression1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_postfix_expression1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_postfix_expression1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_postfix_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_postfix_expression1(PyCAst_object_postfix_expression1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_postfix_expression1_ast(PyObject *_self);

static PyObject *PyCAst_getter_postfix_expression1_postfix_expression(PyObject *_self);
static PyObject *PyCAst_getter_postfix_expression1_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_postfix_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression1_postfix_expression,NULL,(char*)"Parameter postfix_expression", NULL},
	
	{(char*)"expression", (getter)PyCAst_getter_postfix_expression1_expression,NULL,(char*)"Parameter expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_postfix_expression1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the postfix_expression1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression1,
	/* tp_members-----------*/      PyCAst_members_postfix_expression1,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression2 *_p_cast_object;
}PyCAst_object_postfix_expression2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_postfix_expression2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_postfix_expression2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_postfix_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_postfix_expression2(PyCAst_object_postfix_expression2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_postfix_expression2_ast(PyObject *_self);

static PyObject *PyCAst_getter_postfix_expression2_postfix_expression(PyObject *_self);
static PyObject *PyCAst_getter_postfix_expression2_argument_expression_list(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_postfix_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression2_postfix_expression,NULL,(char*)"Parameter postfix_expression", NULL},
	
	{(char*)"argument_expression_list", (getter)PyCAst_getter_postfix_expression2_argument_expression_list,NULL,(char*)"Parameter argument_expression_list", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_postfix_expression2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the postfix_expression2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression2,
	/* tp_members-----------*/      PyCAst_members_postfix_expression2,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression3 *_p_cast_object;
}PyCAst_object_postfix_expression3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_postfix_expression3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_postfix_expression3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_postfix_expression3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_postfix_expression3(PyCAst_object_postfix_expression3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_postfix_expression3_ast(PyObject *_self);

static PyObject *PyCAst_getter_postfix_expression3_postfix_expression(PyObject *_self);
static PyObject *PyCAst_getter_postfix_expression3_token1(PyObject *_self);
static PyObject *PyCAst_getter_postfix_expression3_token2(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_postfix_expression3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression3_postfix_expression,NULL,(char*)"Parameter postfix_expression", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_postfix_expression3_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"token2", (getter)PyCAst_getter_postfix_expression3_token2,NULL,(char*)"Parameter token2", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_postfix_expression3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the postfix_expression3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression3,
	/* tp_members-----------*/      PyCAst_members_postfix_expression3,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression4

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression4 *_p_cast_object;
}PyCAst_object_postfix_expression4;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_postfix_expression4 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_postfix_expression4 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_postfix_expression4(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_postfix_expression4(PyCAst_object_postfix_expression4 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_postfix_expression4_ast(PyObject *_self);

static PyObject *PyCAst_getter_postfix_expression4_postfix_expression(PyObject *_self);
static PyObject *PyCAst_getter_postfix_expression4_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_postfix_expression4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"postfix_expression", (getter)PyCAst_getter_postfix_expression4_postfix_expression,NULL,(char*)"Parameter postfix_expression", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_postfix_expression4_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_postfix_expression4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the postfix_expression4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression4,
	/* tp_members-----------*/      PyCAst_members_postfix_expression4,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression4,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression5

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::postfix_expression5 *_p_cast_object;
}PyCAst_object_postfix_expression5;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_postfix_expression5 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_postfix_expression5 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_postfix_expression5(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_postfix_expression5(PyCAst_object_postfix_expression5 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_postfix_expression5_ast(PyObject *_self);

static PyObject *PyCAst_getter_postfix_expression5_primary_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_postfix_expression5[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_postfix_expression5_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"primary_expression", (getter)PyCAst_getter_postfix_expression5_primary_expression,NULL,(char*)"Parameter primary_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_postfix_expression5 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.postfix_expression5",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_postfix_expression5),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the postfix_expression5",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_postfix_expression5,
	/* tp_members-----------*/      PyCAst_members_postfix_expression5,
	/* tp_getset------------*/      PyCAst_getsetter_postfix_expression5,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_postfix_expression5,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_postfix_expression5,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF and_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::and_expression_iterator *_p_cast_object;
	CAst::and_expression *_p_cast_list_object;
}PyCAst_object_and_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_and_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_and_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_and_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_and_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_and_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_and_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.and_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_and_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the and_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_and_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_and_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_and_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_and_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_and_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF and_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::and_expression_item *_p_cast_object;
}PyCAst_object_and_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_and_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_and_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_and_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_and_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_and_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_and_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.and_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_and_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_and_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF and_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::and_expression *_p_cast_object;
}PyCAst_object_and_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_and_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_and_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_and_expression(PyCAst_object_and_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_and_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_and_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_and_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_and_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_and_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.and_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_and_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the and_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_and_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF statement1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement1 *_p_cast_object;
}PyCAst_object_statement1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_statement1(PyCAst_object_statement1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement1_ast(PyObject *_self);

static PyObject *PyCAst_getter_statement1_labeled_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"labeled_statement", (getter)PyCAst_getter_statement1_labeled_statement,NULL,(char*)"Parameter labeled_statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement1,
	/* tp_members-----------*/      PyCAst_members_statement1,
	/* tp_getset------------*/      PyCAst_getsetter_statement1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF statement2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement2 *_p_cast_object;
}PyCAst_object_statement2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_statement2(PyCAst_object_statement2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement2_ast(PyObject *_self);

static PyObject *PyCAst_getter_statement2_compound_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"compound_statement", (getter)PyCAst_getter_statement2_compound_statement,NULL,(char*)"Parameter compound_statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement2,
	/* tp_members-----------*/      PyCAst_members_statement2,
	/* tp_getset------------*/      PyCAst_getsetter_statement2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF statement3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement3 *_p_cast_object;
}PyCAst_object_statement3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_statement3(PyCAst_object_statement3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement3_ast(PyObject *_self);

static PyObject *PyCAst_getter_statement3_expression_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_statement3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression_statement", (getter)PyCAst_getter_statement3_expression_statement,NULL,(char*)"Parameter expression_statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement3,
	/* tp_members-----------*/      PyCAst_members_statement3,
	/* tp_getset------------*/      PyCAst_getsetter_statement3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF statement4

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement4 *_p_cast_object;
}PyCAst_object_statement4;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement4 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement4 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement4(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_statement4(PyCAst_object_statement4 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement4_ast(PyObject *_self);

static PyObject *PyCAst_getter_statement4_selection_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_statement4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"selection_statement", (getter)PyCAst_getter_statement4_selection_statement,NULL,(char*)"Parameter selection_statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement4,
	/* tp_members-----------*/      PyCAst_members_statement4,
	/* tp_getset------------*/      PyCAst_getsetter_statement4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement4,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF statement5

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement5 *_p_cast_object;
}PyCAst_object_statement5;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement5 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement5 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement5(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_statement5(PyCAst_object_statement5 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement5_ast(PyObject *_self);

static PyObject *PyCAst_getter_statement5_iteration_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_statement5[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement5_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"iteration_statement", (getter)PyCAst_getter_statement5_iteration_statement,NULL,(char*)"Parameter iteration_statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement5 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement5",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement5),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement5",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement5,
	/* tp_members-----------*/      PyCAst_members_statement5,
	/* tp_getset------------*/      PyCAst_getsetter_statement5,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement5,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement5,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF statement6

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement6 *_p_cast_object;
}PyCAst_object_statement6;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement6 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement6 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement6(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_statement6(PyCAst_object_statement6 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement6_ast(PyObject *_self);

static PyObject *PyCAst_getter_statement6_jump_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_statement6[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement6_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"jump_statement", (getter)PyCAst_getter_statement6_jump_statement,NULL,(char*)"Parameter jump_statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement6 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement6",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement6),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement6",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_statement6,
	/* tp_members-----------*/      PyCAst_members_statement6,
	/* tp_getset------------*/      PyCAst_getsetter_statement6,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_statement6,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement6,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF cast_expression1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::cast_expression1 *_p_cast_object;
}PyCAst_object_cast_expression1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_cast_expression1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_cast_expression1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_cast_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_cast_expression1(PyCAst_object_cast_expression1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_cast_expression1_ast(PyObject *_self);

static PyObject *PyCAst_getter_cast_expression1_type_name(PyObject *_self);
static PyObject *PyCAst_getter_cast_expression1_cast_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_cast_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_cast_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"type_name", (getter)PyCAst_getter_cast_expression1_type_name,NULL,(char*)"Parameter type_name", NULL},
	
	{(char*)"cast_expression", (getter)PyCAst_getter_cast_expression1_cast_expression,NULL,(char*)"Parameter cast_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_cast_expression1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.cast_expression1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_cast_expression1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the cast_expression1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_cast_expression1,
	/* tp_members-----------*/      PyCAst_members_cast_expression1,
	/* tp_getset------------*/      PyCAst_getsetter_cast_expression1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_cast_expression1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_cast_expression1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF cast_expression2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::cast_expression2 *_p_cast_object;
}PyCAst_object_cast_expression2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_cast_expression2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_cast_expression2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_cast_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_cast_expression2(PyCAst_object_cast_expression2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_cast_expression2_ast(PyObject *_self);

static PyObject *PyCAst_getter_cast_expression2_unary_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_cast_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_cast_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"unary_expression", (getter)PyCAst_getter_cast_expression2_unary_expression,NULL,(char*)"Parameter unary_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_cast_expression2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.cast_expression2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_cast_expression2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the cast_expression2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_cast_expression2,
	/* tp_members-----------*/      PyCAst_members_cast_expression2,
	/* tp_getset------------*/      PyCAst_getsetter_cast_expression2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_cast_expression2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_cast_expression2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF init_declarator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::init_declarator *_p_cast_object;
}PyCAst_object_init_declarator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_init_declarator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_init_declarator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_init_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_init_declarator(PyCAst_object_init_declarator *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_init_declarator_ast(PyObject *_self);

static PyObject *PyCAst_getter_init_declarator_declarator(PyObject *_self);
static PyObject *PyCAst_getter_init_declarator_token1(PyObject *_self);
static PyObject *PyCAst_getter_init_declarator_initializer(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_init_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_init_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declarator", (getter)PyCAst_getter_init_declarator_declarator,NULL,(char*)"Parameter declarator", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_init_declarator_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"initializer", (getter)PyCAst_getter_init_declarator_initializer,NULL,(char*)"Parameter initializer", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_init_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.init_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_init_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declarator_list_iterator *_p_cast_object;
	CAst::struct_declarator_list *_p_cast_list_object;
}PyCAst_object_struct_declarator_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declarator_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declarator_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declarator_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_struct_declarator_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_struct_declarator_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declarator_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declarator_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declarator_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the struct_declarator_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_struct_declarator_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_struct_declarator_list_iterator,
	/* tp_members-----------*/      PyCAst_members_struct_declarator_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_struct_declarator_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declarator_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declarator_list_item *_p_cast_object;
}PyCAst_object_struct_declarator_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declarator_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declarator_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_declarator_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_struct_declarator_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declarator_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declarator_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declarator_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declarator_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_struct_declarator_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declarator_list *_p_cast_object;
}PyCAst_object_struct_declarator_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declarator_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declarator_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_struct_declarator_list(PyCAst_object_struct_declarator_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_declarator_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_struct_declarator_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declarator_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_struct_declarator_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declarator_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declarator_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declarator_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the struct_declarator_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_struct_declarator_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF logical_or_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::logical_or_expression_iterator *_p_cast_object;
	CAst::logical_or_expression *_p_cast_list_object;
}PyCAst_object_logical_or_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_logical_or_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_logical_or_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_logical_or_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_logical_or_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_logical_or_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_logical_or_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_or_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_or_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the logical_or_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_logical_or_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_logical_or_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_logical_or_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_logical_or_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_or_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF logical_or_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::logical_or_expression_item *_p_cast_object;
}PyCAst_object_logical_or_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_logical_or_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_logical_or_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_logical_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_logical_or_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_logical_or_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_logical_or_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_logical_or_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_or_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_or_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_or_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF logical_or_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::logical_or_expression *_p_cast_object;
}PyCAst_object_logical_or_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_logical_or_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_logical_or_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_logical_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_logical_or_expression(PyCAst_object_logical_or_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_logical_or_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_logical_or_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_logical_or_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_logical_or_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_logical_or_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_or_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_or_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the logical_or_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_logical_or_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF unary_operator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::unary_operator *_p_cast_object;
}PyCAst_object_unary_operator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_unary_operator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_unary_operator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_unary_operator(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_unary_operator(PyCAst_object_unary_operator *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_unary_operator_ast(PyObject *_self);

static PyObject *PyCAst_getter_unary_operator_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_unary_operator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_unary_operator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_unary_operator_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_unary_operator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.unary_operator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_unary_operator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF relational_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::relational_expression_iterator *_p_cast_object;
	CAst::relational_expression *_p_cast_list_object;
}PyCAst_object_relational_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_relational_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_relational_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_relational_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_relational_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_relational_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_relational_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.relational_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_relational_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the relational_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_relational_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_relational_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_relational_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_relational_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_relational_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF relational_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::relational_expression_item *_p_cast_object;
}PyCAst_object_relational_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_relational_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_relational_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_relational_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_relational_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_relational_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_relational_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_relational_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.relational_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_relational_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_relational_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF relational_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::relational_expression *_p_cast_object;
}PyCAst_object_relational_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_relational_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_relational_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_relational_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_relational_expression(PyCAst_object_relational_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_relational_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_relational_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_relational_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_relational_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_relational_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.relational_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_relational_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the relational_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_relational_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF struct_or_union

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_or_union *_p_cast_object;
}PyCAst_object_struct_or_union;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_or_union [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_or_union [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_or_union(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_struct_or_union(PyCAst_object_struct_or_union *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_or_union_ast(PyObject *_self);

static PyObject *PyCAst_getter_struct_or_union_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_struct_or_union[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_or_union_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_struct_or_union_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_or_union = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_or_union",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_or_union),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF enumerator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::enumerator *_p_cast_object;
}PyCAst_object_enumerator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_enumerator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_enumerator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_enumerator(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_enumerator(PyCAst_object_enumerator *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_enumerator_ast(PyObject *_self);

static PyObject *PyCAst_getter_enumerator_token1(PyObject *_self);
static PyObject *PyCAst_getter_enumerator_token2(PyObject *_self);
static PyObject *PyCAst_getter_enumerator_constant_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_enumerator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_enumerator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_enumerator_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"token2", (getter)PyCAst_getter_enumerator_token2,NULL,(char*)"Parameter token2", NULL},
	
	{(char*)"constant_expression", (getter)PyCAst_getter_enumerator_constant_expression,NULL,(char*)"Parameter constant_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_enumerator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enumerator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enumerator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF assignment_expression1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::assignment_expression1 *_p_cast_object;
}PyCAst_object_assignment_expression1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_assignment_expression1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_assignment_expression1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_assignment_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_assignment_expression1(PyCAst_object_assignment_expression1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_assignment_expression1_ast(PyObject *_self);

static PyObject *PyCAst_getter_assignment_expression1_unary_expression(PyObject *_self);
static PyObject *PyCAst_getter_assignment_expression1_assignment_operator(PyObject *_self);
static PyObject *PyCAst_getter_assignment_expression1_assignment_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_assignment_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_assignment_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"unary_expression", (getter)PyCAst_getter_assignment_expression1_unary_expression,NULL,(char*)"Parameter unary_expression", NULL},
	
	{(char*)"assignment_operator", (getter)PyCAst_getter_assignment_expression1_assignment_operator,NULL,(char*)"Parameter assignment_operator", NULL},
	
	{(char*)"assignment_expression", (getter)PyCAst_getter_assignment_expression1_assignment_expression,NULL,(char*)"Parameter assignment_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_assignment_expression1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.assignment_expression1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_assignment_expression1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the assignment_expression1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_assignment_expression1,
	/* tp_members-----------*/      PyCAst_members_assignment_expression1,
	/* tp_getset------------*/      PyCAst_getsetter_assignment_expression1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_assignment_expression1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_assignment_expression1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF assignment_expression2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::assignment_expression2 *_p_cast_object;
}PyCAst_object_assignment_expression2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_assignment_expression2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_assignment_expression2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_assignment_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_assignment_expression2(PyCAst_object_assignment_expression2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_assignment_expression2_ast(PyObject *_self);

static PyObject *PyCAst_getter_assignment_expression2_conditional_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_assignment_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_assignment_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"conditional_expression", (getter)PyCAst_getter_assignment_expression2_conditional_expression,NULL,(char*)"Parameter conditional_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_assignment_expression2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.assignment_expression2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_assignment_expression2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the assignment_expression2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_assignment_expression2,
	/* tp_members-----------*/      PyCAst_members_assignment_expression2,
	/* tp_getset------------*/      PyCAst_getsetter_assignment_expression2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_assignment_expression2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_assignment_expression2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF parameter_type_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::parameter_type_list *_p_cast_object;
}PyCAst_object_parameter_type_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_parameter_type_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_parameter_type_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_parameter_type_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_parameter_type_list(PyCAst_object_parameter_type_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_parameter_type_list_ast(PyObject *_self);

static PyObject *PyCAst_getter_parameter_type_list_parameter_list(PyObject *_self);
static PyObject *PyCAst_getter_parameter_type_list_token1(PyObject *_self);
static PyObject *PyCAst_getter_parameter_type_list_token2(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_parameter_type_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_type_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"parameter_list", (getter)PyCAst_getter_parameter_type_list_parameter_list,NULL,(char*)"Parameter parameter_list", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_parameter_type_list_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"token2", (getter)PyCAst_getter_parameter_type_list_token2,NULL,(char*)"Parameter token2", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_parameter_type_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_type_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_type_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF parameter_declaration1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::parameter_declaration1 *_p_cast_object;
}PyCAst_object_parameter_declaration1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_parameter_declaration1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_parameter_declaration1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_parameter_declaration1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_parameter_declaration1(PyCAst_object_parameter_declaration1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_parameter_declaration1_ast(PyObject *_self);

static PyObject *PyCAst_getter_parameter_declaration1_declaration_specifiers(PyObject *_self);
static PyObject *PyCAst_getter_parameter_declaration1_declarator(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_parameter_declaration1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_declaration1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declaration_specifiers", (getter)PyCAst_getter_parameter_declaration1_declaration_specifiers,NULL,(char*)"Parameter declaration_specifiers", NULL},
	
	{(char*)"declarator", (getter)PyCAst_getter_parameter_declaration1_declarator,NULL,(char*)"Parameter declarator", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_parameter_declaration1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_declaration1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_declaration1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the parameter_declaration1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_declaration1,
	/* tp_members-----------*/      PyCAst_members_parameter_declaration1,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_declaration1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_parameter_declaration1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_declaration1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF parameter_declaration2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::parameter_declaration2 *_p_cast_object;
}PyCAst_object_parameter_declaration2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_parameter_declaration2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_parameter_declaration2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_parameter_declaration2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_parameter_declaration2(PyCAst_object_parameter_declaration2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_parameter_declaration2_ast(PyObject *_self);

static PyObject *PyCAst_getter_parameter_declaration2_declaration_specifiers(PyObject *_self);
static PyObject *PyCAst_getter_parameter_declaration2_abstract_declarator(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_parameter_declaration2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_declaration2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declaration_specifiers", (getter)PyCAst_getter_parameter_declaration2_declaration_specifiers,NULL,(char*)"Parameter declaration_specifiers", NULL},
	
	{(char*)"abstract_declarator", (getter)PyCAst_getter_parameter_declaration2_abstract_declarator,NULL,(char*)"Parameter abstract_declarator", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_parameter_declaration2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_declaration2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_declaration2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the parameter_declaration2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_parameter_declaration2,
	/* tp_members-----------*/      PyCAst_members_parameter_declaration2,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_declaration2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_parameter_declaration2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_declaration2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF multiplicative_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::multiplicative_expression_iterator *_p_cast_object;
	CAst::multiplicative_expression *_p_cast_list_object;
}PyCAst_object_multiplicative_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_multiplicative_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_multiplicative_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_multiplicative_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_multiplicative_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_multiplicative_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_multiplicative_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.multiplicative_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_multiplicative_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the multiplicative_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_multiplicative_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_multiplicative_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_multiplicative_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_multiplicative_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_multiplicative_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF multiplicative_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::multiplicative_expression_item *_p_cast_object;
}PyCAst_object_multiplicative_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_multiplicative_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_multiplicative_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_multiplicative_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_multiplicative_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_multiplicative_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_multiplicative_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_multiplicative_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.multiplicative_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_multiplicative_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_multiplicative_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF multiplicative_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::multiplicative_expression *_p_cast_object;
}PyCAst_object_multiplicative_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_multiplicative_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_multiplicative_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_multiplicative_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_multiplicative_expression(PyCAst_object_multiplicative_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_multiplicative_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_multiplicative_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_multiplicative_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_multiplicative_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_multiplicative_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.multiplicative_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_multiplicative_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the multiplicative_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_multiplicative_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_qualifier_list_iterator *_p_cast_object;
	CAst::type_qualifier_list *_p_cast_list_object;
}PyCAst_object_type_qualifier_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_qualifier_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_qualifier_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_qualifier_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_type_qualifier_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_type_qualifier_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_qualifier_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_qualifier_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_qualifier_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the type_qualifier_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_type_qualifier_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_type_qualifier_list_iterator,
	/* tp_members-----------*/      PyCAst_members_type_qualifier_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_type_qualifier_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_qualifier_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_qualifier_list_item *_p_cast_object;
}PyCAst_object_type_qualifier_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_qualifier_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_qualifier_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_qualifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_type_qualifier_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_type_qualifier_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_qualifier_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_qualifier_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_qualifier_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_qualifier_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_type_qualifier_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_qualifier_list *_p_cast_object;
}PyCAst_object_type_qualifier_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_qualifier_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_qualifier_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_qualifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_type_qualifier_list(PyCAst_object_type_qualifier_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_type_qualifier_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_type_qualifier_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_qualifier_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_type_qualifier_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_qualifier_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_qualifier_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_qualifier_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the type_qualifier_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_type_qualifier_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF argument_expression_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::argument_expression_list_iterator *_p_cast_object;
	CAst::argument_expression_list *_p_cast_list_object;
}PyCAst_object_argument_expression_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_argument_expression_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_argument_expression_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_argument_expression_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_argument_expression_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_argument_expression_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_argument_expression_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.argument_expression_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_argument_expression_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the argument_expression_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_argument_expression_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_argument_expression_list_iterator,
	/* tp_members-----------*/      PyCAst_members_argument_expression_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_argument_expression_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_argument_expression_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF argument_expression_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::argument_expression_list_item *_p_cast_object;
}PyCAst_object_argument_expression_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_argument_expression_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_argument_expression_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_argument_expression_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_argument_expression_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_argument_expression_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_argument_expression_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_argument_expression_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.argument_expression_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_argument_expression_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_argument_expression_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF argument_expression_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::argument_expression_list *_p_cast_object;
}PyCAst_object_argument_expression_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_argument_expression_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_argument_expression_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_argument_expression_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_argument_expression_list(PyCAst_object_argument_expression_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_argument_expression_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_argument_expression_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_argument_expression_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_argument_expression_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_argument_expression_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.argument_expression_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_argument_expression_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the argument_expression_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_argument_expression_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_abstract_declarator1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_abstract_declarator1 *_p_cast_object;
}PyCAst_object_direct_abstract_declarator1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_abstract_declarator1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_abstract_declarator1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_abstract_declarator1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_abstract_declarator1(PyCAst_object_direct_abstract_declarator1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_abstract_declarator1_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_abstract_declarator1_direct_abstract_declarator(PyObject *_self);
static PyObject *PyCAst_getter_direct_abstract_declarator1_constant_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_abstract_declarator1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"direct_abstract_declarator", (getter)PyCAst_getter_direct_abstract_declarator1_direct_abstract_declarator,NULL,(char*)"Parameter direct_abstract_declarator", NULL},
	
	{(char*)"constant_expression", (getter)PyCAst_getter_direct_abstract_declarator1_constant_expression,NULL,(char*)"Parameter constant_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_abstract_declarator1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_abstract_declarator1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_abstract_declarator1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_abstract_declarator1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_abstract_declarator1,
	/* tp_members-----------*/      PyCAst_members_direct_abstract_declarator1,
	/* tp_getset------------*/      PyCAst_getsetter_direct_abstract_declarator1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_abstract_declarator1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_abstract_declarator1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_abstract_declarator2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_abstract_declarator2 *_p_cast_object;
}PyCAst_object_direct_abstract_declarator2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_abstract_declarator2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_abstract_declarator2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_abstract_declarator2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_abstract_declarator2(PyCAst_object_direct_abstract_declarator2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_abstract_declarator2_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_abstract_declarator2_direct_abstract_declarator(PyObject *_self);
static PyObject *PyCAst_getter_direct_abstract_declarator2_parameter_type_list(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_abstract_declarator2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"direct_abstract_declarator", (getter)PyCAst_getter_direct_abstract_declarator2_direct_abstract_declarator,NULL,(char*)"Parameter direct_abstract_declarator", NULL},
	
	{(char*)"parameter_type_list", (getter)PyCAst_getter_direct_abstract_declarator2_parameter_type_list,NULL,(char*)"Parameter parameter_type_list", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_abstract_declarator2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_abstract_declarator2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_abstract_declarator2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_abstract_declarator2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_abstract_declarator2,
	/* tp_members-----------*/      PyCAst_members_direct_abstract_declarator2,
	/* tp_getset------------*/      PyCAst_getsetter_direct_abstract_declarator2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_abstract_declarator2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_abstract_declarator2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_abstract_declarator3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_abstract_declarator3 *_p_cast_object;
}PyCAst_object_direct_abstract_declarator3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_abstract_declarator3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_abstract_declarator3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_abstract_declarator3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_abstract_declarator3(PyCAst_object_direct_abstract_declarator3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_abstract_declarator3_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_abstract_declarator3_abstract_declarator(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_abstract_declarator3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_abstract_declarator3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"abstract_declarator", (getter)PyCAst_getter_direct_abstract_declarator3_abstract_declarator,NULL,(char*)"Parameter abstract_declarator", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_abstract_declarator3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_abstract_declarator3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_abstract_declarator3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_abstract_declarator3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_abstract_declarator3,
	/* tp_members-----------*/      PyCAst_members_direct_abstract_declarator3,
	/* tp_getset------------*/      PyCAst_getsetter_direct_abstract_declarator3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_abstract_declarator3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_abstract_declarator3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF equality_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::equality_expression_iterator *_p_cast_object;
	CAst::equality_expression *_p_cast_list_object;
}PyCAst_object_equality_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_equality_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_equality_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_equality_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_equality_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_equality_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_equality_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.equality_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_equality_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the equality_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_equality_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_equality_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_equality_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_equality_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_equality_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF equality_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::equality_expression_item *_p_cast_object;
}PyCAst_object_equality_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_equality_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_equality_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_equality_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_equality_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_equality_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_equality_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_equality_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.equality_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_equality_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_equality_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF equality_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::equality_expression *_p_cast_object;
}PyCAst_object_equality_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_equality_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_equality_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_equality_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_equality_expression(PyCAst_object_equality_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_equality_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_equality_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_equality_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_equality_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_equality_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.equality_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_equality_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the equality_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_equality_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF primary_expression1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::primary_expression1 *_p_cast_object;
}PyCAst_object_primary_expression1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_primary_expression1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_primary_expression1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_primary_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_primary_expression1(PyCAst_object_primary_expression1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_primary_expression1_ast(PyObject *_self);

static PyObject *PyCAst_getter_primary_expression1_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_primary_expression1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_primary_expression1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression", (getter)PyCAst_getter_primary_expression1_expression,NULL,(char*)"Parameter expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_primary_expression1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.primary_expression1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_primary_expression1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the primary_expression1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_primary_expression1,
	/* tp_members-----------*/      PyCAst_members_primary_expression1,
	/* tp_getset------------*/      PyCAst_getsetter_primary_expression1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_primary_expression1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_primary_expression1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF primary_expression2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::primary_expression2 *_p_cast_object;
}PyCAst_object_primary_expression2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_primary_expression2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_primary_expression2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_primary_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_primary_expression2(PyCAst_object_primary_expression2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_primary_expression2_ast(PyObject *_self);

static PyObject *PyCAst_getter_primary_expression2_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_primary_expression2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_primary_expression2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_primary_expression2_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_primary_expression2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.primary_expression2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_primary_expression2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the primary_expression2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_primary_expression2,
	/* tp_members-----------*/      PyCAst_members_primary_expression2,
	/* tp_getset------------*/      PyCAst_getsetter_primary_expression2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_primary_expression2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_primary_expression2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers1_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers1_iterator *_p_cast_object;
	CAst::declaration_specifiers1 *_p_cast_list_object;
}PyCAst_object_declaration_specifiers1_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers1_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers1_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers1_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_declaration_specifiers1_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_declaration_specifiers1_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers1_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers1_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers1_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers1_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_declaration_specifiers1_iterator,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers1_iterator,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers1_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers1_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers1_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers1_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers1_item *_p_cast_object;
}PyCAst_object_declaration_specifiers1_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers1_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers1_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers1_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_specifiers1_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_specifiers1_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers1_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers1_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers1_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers1_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers1_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers1_item,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers1_item,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers1_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers1_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers1 *_p_cast_object;
}PyCAst_object_declaration_specifiers1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_declaration_specifiers1(PyCAst_object_declaration_specifiers1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_specifiers1_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_specifiers1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_declaration_specifiers1(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_declaration_specifiers1,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers1,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers1,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_specifiers1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers2_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers2_iterator *_p_cast_object;
	CAst::declaration_specifiers2 *_p_cast_list_object;
}PyCAst_object_declaration_specifiers2_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers2_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers2_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers2_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_declaration_specifiers2_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_declaration_specifiers2_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers2_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers2_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers2_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers2_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_declaration_specifiers2_iterator,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers2_iterator,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers2_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers2_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers2_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers2_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers2_item *_p_cast_object;
}PyCAst_object_declaration_specifiers2_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers2_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers2_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers2_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_specifiers2_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_specifiers2_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers2_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers2_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers2_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers2_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers2_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers2_item,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers2_item,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers2_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers2_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers2 *_p_cast_object;
}PyCAst_object_declaration_specifiers2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_declaration_specifiers2(PyCAst_object_declaration_specifiers2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_specifiers2_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_specifiers2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_declaration_specifiers2(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_declaration_specifiers2,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers2,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers2,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_specifiers2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers3_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers3_iterator *_p_cast_object;
	CAst::declaration_specifiers3 *_p_cast_list_object;
}PyCAst_object_declaration_specifiers3_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers3_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers3_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers3_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_declaration_specifiers3_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_declaration_specifiers3_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers3_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers3_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers3_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers3_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_declaration_specifiers3_iterator,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers3_iterator,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers3_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers3_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers3_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers3_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers3_item *_p_cast_object;
}PyCAst_object_declaration_specifiers3_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers3_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers3_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers3_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_specifiers3_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_specifiers3_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers3_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers3_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers3_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers3_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers3_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers3_item,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers3_item,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers3_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers3_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_specifiers3 *_p_cast_object;
}PyCAst_object_declaration_specifiers3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_specifiers3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_specifiers3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_specifiers3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_declaration_specifiers3(PyCAst_object_declaration_specifiers3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_specifiers3_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_specifiers3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_specifiers3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_declaration_specifiers3(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_specifiers3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_specifiers3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_specifiers3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_specifiers3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_declaration_specifiers3,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_declaration_specifiers3,
	/* tp_members-----------*/      PyCAst_members_declaration_specifiers3,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_specifiers3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_declaration_specifiers3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_specifiers3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF declaration

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration *_p_cast_object;
}PyCAst_object_declaration;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_declaration(PyCAst_object_declaration *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_ast(PyObject *_self);

static PyObject *PyCAst_getter_declaration_declaration_specifiers(PyObject *_self);
static PyObject *PyCAst_getter_declaration_init_declarator_list(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_declaration[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declaration_specifiers", (getter)PyCAst_getter_declaration_declaration_specifiers,NULL,(char*)"Parameter declaration_specifiers", NULL},
	
	{(char*)"init_declarator_list", (getter)PyCAst_getter_declaration_init_declarator_list,NULL,(char*)"Parameter init_declarator_list", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator1 *_p_cast_object;
}PyCAst_object_direct_declarator1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_declarator1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_declarator1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_declarator1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_declarator1(PyCAst_object_direct_declarator1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_declarator1_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_declarator1_direct_declarator(PyObject *_self);
static PyObject *PyCAst_getter_direct_declarator1_constant_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_declarator1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"direct_declarator", (getter)PyCAst_getter_direct_declarator1_direct_declarator,NULL,(char*)"Parameter direct_declarator", NULL},
	
	{(char*)"constant_expression", (getter)PyCAst_getter_direct_declarator1_constant_expression,NULL,(char*)"Parameter constant_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_declarator1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_declarator1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator1,
	/* tp_members-----------*/      PyCAst_members_direct_declarator1,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator2 *_p_cast_object;
}PyCAst_object_direct_declarator2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_declarator2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_declarator2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_declarator2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_declarator2(PyCAst_object_direct_declarator2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_declarator2_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_declarator2_direct_declarator(PyObject *_self);
static PyObject *PyCAst_getter_direct_declarator2_parameter_type_list(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_declarator2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"direct_declarator", (getter)PyCAst_getter_direct_declarator2_direct_declarator,NULL,(char*)"Parameter direct_declarator", NULL},
	
	{(char*)"parameter_type_list", (getter)PyCAst_getter_direct_declarator2_parameter_type_list,NULL,(char*)"Parameter parameter_type_list", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_declarator2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_declarator2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator2,
	/* tp_members-----------*/      PyCAst_members_direct_declarator2,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator3 *_p_cast_object;
}PyCAst_object_direct_declarator3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_declarator3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_declarator3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_declarator3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_declarator3(PyCAst_object_direct_declarator3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_declarator3_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_declarator3_direct_declarator(PyObject *_self);
static PyObject *PyCAst_getter_direct_declarator3_identifier_list(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_declarator3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"direct_declarator", (getter)PyCAst_getter_direct_declarator3_direct_declarator,NULL,(char*)"Parameter direct_declarator", NULL},
	
	{(char*)"identifier_list", (getter)PyCAst_getter_direct_declarator3_identifier_list,NULL,(char*)"Parameter identifier_list", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_declarator3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_declarator3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator3,
	/* tp_members-----------*/      PyCAst_members_direct_declarator3,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator4

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator4 *_p_cast_object;
}PyCAst_object_direct_declarator4;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_declarator4 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_declarator4 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_declarator4(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_declarator4(PyCAst_object_direct_declarator4 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_declarator4_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_declarator4_declarator(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_declarator4[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator4_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declarator", (getter)PyCAst_getter_direct_declarator4_declarator,NULL,(char*)"Parameter declarator", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_declarator4 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator4",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator4),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_declarator4",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator4,
	/* tp_members-----------*/      PyCAst_members_direct_declarator4,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator4,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator4,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator4,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator5

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::direct_declarator5 *_p_cast_object;
}PyCAst_object_direct_declarator5;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_direct_declarator5 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_direct_declarator5 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_direct_declarator5(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_direct_declarator5(PyCAst_object_direct_declarator5 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_direct_declarator5_ast(PyObject *_self);

static PyObject *PyCAst_getter_direct_declarator5_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_direct_declarator5[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_direct_declarator5_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_direct_declarator5_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_direct_declarator5 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.direct_declarator5",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_direct_declarator5),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the direct_declarator5",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_direct_declarator5,
	/* tp_members-----------*/      PyCAst_members_direct_declarator5,
	/* tp_getset------------*/      PyCAst_getsetter_direct_declarator5,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_direct_declarator5,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_direct_declarator5,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF logical_and_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::logical_and_expression_iterator *_p_cast_object;
	CAst::logical_and_expression *_p_cast_list_object;
}PyCAst_object_logical_and_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_logical_and_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_logical_and_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_logical_and_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_logical_and_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_logical_and_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_logical_and_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_and_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_and_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the logical_and_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_logical_and_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_logical_and_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_logical_and_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_logical_and_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_and_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF logical_and_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::logical_and_expression_item *_p_cast_object;
}PyCAst_object_logical_and_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_logical_and_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_logical_and_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_logical_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_logical_and_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_logical_and_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_logical_and_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_logical_and_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_and_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_and_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_logical_and_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF logical_and_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::logical_and_expression *_p_cast_object;
}PyCAst_object_logical_and_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_logical_and_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_logical_and_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_logical_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_logical_and_expression(PyCAst_object_logical_and_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_logical_and_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_logical_and_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_logical_and_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_logical_and_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_logical_and_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.logical_and_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_logical_and_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the logical_and_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_logical_and_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF init_declarator_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::init_declarator_list_iterator *_p_cast_object;
	CAst::init_declarator_list *_p_cast_list_object;
}PyCAst_object_init_declarator_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_init_declarator_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_init_declarator_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_init_declarator_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_init_declarator_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_init_declarator_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_init_declarator_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.init_declarator_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_init_declarator_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the init_declarator_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_init_declarator_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_init_declarator_list_iterator,
	/* tp_members-----------*/      PyCAst_members_init_declarator_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_init_declarator_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_init_declarator_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF init_declarator_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::init_declarator_list_item *_p_cast_object;
}PyCAst_object_init_declarator_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_init_declarator_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_init_declarator_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_init_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_init_declarator_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_init_declarator_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_init_declarator_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_init_declarator_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.init_declarator_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_init_declarator_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_init_declarator_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF init_declarator_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::init_declarator_list *_p_cast_object;
}PyCAst_object_init_declarator_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_init_declarator_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_init_declarator_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_init_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_init_declarator_list(PyCAst_object_init_declarator_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_init_declarator_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_init_declarator_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_init_declarator_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_init_declarator_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_init_declarator_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.init_declarator_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_init_declarator_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the init_declarator_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_init_declarator_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF shift_expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::shift_expression_iterator *_p_cast_object;
	CAst::shift_expression *_p_cast_list_object;
}PyCAst_object_shift_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_shift_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_shift_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_shift_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_shift_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_shift_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_shift_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.shift_expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_shift_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the shift_expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_shift_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_shift_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_shift_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_shift_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_shift_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF shift_expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::shift_expression_item *_p_cast_object;
}PyCAst_object_shift_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_shift_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_shift_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_shift_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_shift_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_shift_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_shift_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_shift_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.shift_expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_shift_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_shift_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF shift_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::shift_expression *_p_cast_object;
}PyCAst_object_shift_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_shift_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_shift_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_shift_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_shift_expression(PyCAst_object_shift_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_shift_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_shift_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_shift_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_shift_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_shift_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.shift_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_shift_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the shift_expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_shift_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF identifier_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::identifier_list_iterator *_p_cast_object;
	CAst::identifier_list *_p_cast_list_object;
}PyCAst_object_identifier_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_identifier_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_identifier_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_identifier_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_identifier_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_identifier_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_identifier_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.identifier_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_identifier_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the identifier_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_identifier_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_identifier_list_iterator,
	/* tp_members-----------*/      PyCAst_members_identifier_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_identifier_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_identifier_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF identifier_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::identifier_list_item *_p_cast_object;
}PyCAst_object_identifier_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_identifier_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_identifier_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_identifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_identifier_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_identifier_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_identifier_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_identifier_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.identifier_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_identifier_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_identifier_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF identifier_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::identifier_list *_p_cast_object;
}PyCAst_object_identifier_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_identifier_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_identifier_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_identifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_identifier_list(PyCAst_object_identifier_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_identifier_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_identifier_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_identifier_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_identifier_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_identifier_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.identifier_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_identifier_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the identifier_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_identifier_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF jump_statement1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::jump_statement1 *_p_cast_object;
}PyCAst_object_jump_statement1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_jump_statement1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_jump_statement1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_jump_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_jump_statement1(PyCAst_object_jump_statement1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_jump_statement1_ast(PyObject *_self);

static PyObject *PyCAst_getter_jump_statement1_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_jump_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_jump_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_jump_statement1_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_jump_statement1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.jump_statement1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_jump_statement1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the jump_statement1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_jump_statement1,
	/* tp_members-----------*/      PyCAst_members_jump_statement1,
	/* tp_getset------------*/      PyCAst_getsetter_jump_statement1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_jump_statement1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_jump_statement1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF jump_statement2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::jump_statement2 *_p_cast_object;
}PyCAst_object_jump_statement2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_jump_statement2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_jump_statement2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_jump_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_jump_statement2(PyCAst_object_jump_statement2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_jump_statement2_ast(PyObject *_self);

static PyObject *PyCAst_getter_jump_statement2_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_jump_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_jump_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"expression", (getter)PyCAst_getter_jump_statement2_expression,NULL,(char*)"Parameter expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_jump_statement2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.jump_statement2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_jump_statement2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the jump_statement2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_jump_statement2,
	/* tp_members-----------*/      PyCAst_members_jump_statement2,
	/* tp_getset------------*/      PyCAst_getsetter_jump_statement2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_jump_statement2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_jump_statement2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF jump_statement3

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::jump_statement3 *_p_cast_object;
}PyCAst_object_jump_statement3;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_jump_statement3 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_jump_statement3 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_jump_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_jump_statement3(PyCAst_object_jump_statement3 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_jump_statement3_ast(PyObject *_self);

static PyObject *PyCAst_getter_jump_statement3_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_jump_statement3[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_jump_statement3_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_jump_statement3_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_jump_statement3 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.jump_statement3",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_jump_statement3),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the jump_statement3",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_jump_statement3,
	/* tp_members-----------*/      PyCAst_members_jump_statement3,
	/* tp_getset------------*/      PyCAst_getsetter_jump_statement3,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_jump_statement3,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_jump_statement3,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::struct_declarator *_p_cast_object;
}PyCAst_object_struct_declarator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_struct_declarator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_struct_declarator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_struct_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_struct_declarator(PyCAst_object_struct_declarator *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_struct_declarator_ast(PyObject *_self);

static PyObject *PyCAst_getter_struct_declarator_declarator(PyObject *_self);
static PyObject *PyCAst_getter_struct_declarator_token1(PyObject *_self);
static PyObject *PyCAst_getter_struct_declarator_constant_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_struct_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_struct_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declarator", (getter)PyCAst_getter_struct_declarator_declarator,NULL,(char*)"Parameter declarator", NULL},
	
	{(char*)"token1", (getter)PyCAst_getter_struct_declarator_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"constant_expression", (getter)PyCAst_getter_struct_declarator_constant_expression,NULL,(char*)"Parameter constant_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_struct_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.struct_declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_struct_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF function_definition

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::function_definition *_p_cast_object;
}PyCAst_object_function_definition;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_function_definition [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_function_definition [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_function_definition(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_function_definition(PyCAst_object_function_definition *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_function_definition_ast(PyObject *_self);

static PyObject *PyCAst_getter_function_definition_declaration_specifiers(PyObject *_self);
static PyObject *PyCAst_getter_function_definition_declarator(PyObject *_self);
static PyObject *PyCAst_getter_function_definition_declaration_list(PyObject *_self);
static PyObject *PyCAst_getter_function_definition_compound_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_function_definition[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_function_definition_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"declaration_specifiers", (getter)PyCAst_getter_function_definition_declaration_specifiers,NULL,(char*)"Parameter declaration_specifiers", NULL},
	
	{(char*)"declarator", (getter)PyCAst_getter_function_definition_declarator,NULL,(char*)"Parameter declarator", NULL},
	
	{(char*)"declaration_list", (getter)PyCAst_getter_function_definition_declaration_list,NULL,(char*)"Parameter declaration_list", NULL},
	
	{(char*)"compound_statement", (getter)PyCAst_getter_function_definition_compound_statement,NULL,(char*)"Parameter compound_statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_function_definition = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.function_definition",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_function_definition),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF parameter_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::parameter_list_iterator *_p_cast_object;
	CAst::parameter_list *_p_cast_list_object;
}PyCAst_object_parameter_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_parameter_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_parameter_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_parameter_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_parameter_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_parameter_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_parameter_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the parameter_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_parameter_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_parameter_list_iterator,
	/* tp_members-----------*/      PyCAst_members_parameter_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_parameter_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF parameter_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::parameter_list_item *_p_cast_object;
}PyCAst_object_parameter_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_parameter_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_parameter_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_parameter_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_parameter_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_parameter_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_parameter_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_parameter_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF parameter_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::parameter_list *_p_cast_object;
}PyCAst_object_parameter_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_parameter_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_parameter_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_parameter_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_parameter_list(PyCAst_object_parameter_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_parameter_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_parameter_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_parameter_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_parameter_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_parameter_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.parameter_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_parameter_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the parameter_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_parameter_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF enum_specifier

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::enum_specifier *_p_cast_object;
}PyCAst_object_enum_specifier;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_enum_specifier [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_enum_specifier [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_enum_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_enum_specifier(PyCAst_object_enum_specifier *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_enum_specifier_ast(PyObject *_self);

static PyObject *PyCAst_getter_enum_specifier_token1(PyObject *_self);
static PyObject *PyCAst_getter_enum_specifier_token2(PyObject *_self);
static PyObject *PyCAst_getter_enum_specifier_enumerator_list(PyObject *_self);
static PyObject *PyCAst_getter_enum_specifier_token3(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_enum_specifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_enum_specifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_enum_specifier_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"token2", (getter)PyCAst_getter_enum_specifier_token2,NULL,(char*)"Parameter token2", NULL},
	
	{(char*)"enumerator_list", (getter)PyCAst_getter_enum_specifier_enumerator_list,NULL,(char*)"Parameter enumerator_list", NULL},
	
	{(char*)"token3", (getter)PyCAst_getter_enum_specifier_token3,NULL,(char*)"Parameter token3", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_enum_specifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enum_specifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enum_specifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::type_qualifier *_p_cast_object;
}PyCAst_object_type_qualifier;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_type_qualifier [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_type_qualifier [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_type_qualifier(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_type_qualifier(PyCAst_object_type_qualifier *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_type_qualifier_ast(PyObject *_self);

static PyObject *PyCAst_getter_type_qualifier_token1(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_type_qualifier[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_type_qualifier_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_type_qualifier_token1,NULL,(char*)"Parameter token1", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_type_qualifier = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.type_qualifier",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_type_qualifier),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF enumerator_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::enumerator_list_iterator *_p_cast_object;
	CAst::enumerator_list *_p_cast_list_object;
}PyCAst_object_enumerator_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_enumerator_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_enumerator_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_enumerator_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_enumerator_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_enumerator_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_enumerator_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enumerator_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enumerator_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the enumerator_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_enumerator_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_enumerator_list_iterator,
	/* tp_members-----------*/      PyCAst_members_enumerator_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_enumerator_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_enumerator_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF enumerator_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::enumerator_list_item *_p_cast_object;
}PyCAst_object_enumerator_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_enumerator_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_enumerator_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_enumerator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_enumerator_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_enumerator_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_enumerator_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_enumerator_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enumerator_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enumerator_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_enumerator_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF enumerator_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::enumerator_list *_p_cast_object;
}PyCAst_object_enumerator_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_enumerator_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_enumerator_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_enumerator_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_enumerator_list(PyCAst_object_enumerator_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_enumerator_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_enumerator_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_enumerator_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_enumerator_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_enumerator_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.enumerator_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_enumerator_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the enumerator_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_enumerator_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF labeled_statement1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::labeled_statement1 *_p_cast_object;
}PyCAst_object_labeled_statement1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_labeled_statement1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_labeled_statement1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_labeled_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_labeled_statement1(PyCAst_object_labeled_statement1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_labeled_statement1_ast(PyObject *_self);

static PyObject *PyCAst_getter_labeled_statement1_constant_expression(PyObject *_self);
static PyObject *PyCAst_getter_labeled_statement1_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_labeled_statement1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_labeled_statement1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"constant_expression", (getter)PyCAst_getter_labeled_statement1_constant_expression,NULL,(char*)"Parameter constant_expression", NULL},
	
	{(char*)"statement", (getter)PyCAst_getter_labeled_statement1_statement,NULL,(char*)"Parameter statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_labeled_statement1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.labeled_statement1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_labeled_statement1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the labeled_statement1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_labeled_statement1,
	/* tp_members-----------*/      PyCAst_members_labeled_statement1,
	/* tp_getset------------*/      PyCAst_getsetter_labeled_statement1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_labeled_statement1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_labeled_statement1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF labeled_statement2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::labeled_statement2 *_p_cast_object;
}PyCAst_object_labeled_statement2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_labeled_statement2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_labeled_statement2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_labeled_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_labeled_statement2(PyCAst_object_labeled_statement2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_labeled_statement2_ast(PyObject *_self);

static PyObject *PyCAst_getter_labeled_statement2_token1(PyObject *_self);
static PyObject *PyCAst_getter_labeled_statement2_statement(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_labeled_statement2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_labeled_statement2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"token1", (getter)PyCAst_getter_labeled_statement2_token1,NULL,(char*)"Parameter token1", NULL},
	
	{(char*)"statement", (getter)PyCAst_getter_labeled_statement2_statement,NULL,(char*)"Parameter statement", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_labeled_statement2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.labeled_statement2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_labeled_statement2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the labeled_statement2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_labeled_statement2,
	/* tp_members-----------*/      PyCAst_members_labeled_statement2,
	/* tp_getset------------*/      PyCAst_getsetter_labeled_statement2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_labeled_statement2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_labeled_statement2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF declaration_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_list_iterator *_p_cast_object;
	CAst::declaration_list *_p_cast_list_object;
}PyCAst_object_declaration_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_declaration_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_declaration_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_declaration_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_declaration_list_iterator,
	/* tp_members-----------*/      PyCAst_members_declaration_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_declaration_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_list_item *_p_cast_object;
}PyCAst_object_declaration_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_declaration_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF declaration_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declaration_list *_p_cast_object;
}PyCAst_object_declaration_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declaration_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declaration_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_declaration_list(PyCAst_object_declaration_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declaration_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_declaration_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declaration_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_declaration_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declaration_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declaration_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declaration_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the declaration_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_declaration_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list1_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list1_iterator *_p_cast_object;
	CAst::specifier_qualifier_list1 *_p_cast_list_object;
}PyCAst_object_specifier_qualifier_list1_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_specifier_qualifier_list1_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_specifier_qualifier_list1_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_specifier_qualifier_list1_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list1_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_specifier_qualifier_list1_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_specifier_qualifier_list1_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list1_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list1_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list1_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_specifier_qualifier_list1_iterator,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list1_iterator,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list1_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list1_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list1_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list1_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list1_item *_p_cast_object;
}PyCAst_object_specifier_qualifier_list1_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_specifier_qualifier_list1_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_specifier_qualifier_list1_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_specifier_qualifier_list1_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_specifier_qualifier_list1_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list1_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_specifier_qualifier_list1_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_specifier_qualifier_list1_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list1_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list1_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list1_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list1_item,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list1_item,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list1_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list1_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list1

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list1 *_p_cast_object;
}PyCAst_object_specifier_qualifier_list1;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_specifier_qualifier_list1 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_specifier_qualifier_list1 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_specifier_qualifier_list1(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_specifier_qualifier_list1(PyCAst_object_specifier_qualifier_list1 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_specifier_qualifier_list1_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list1[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_specifier_qualifier_list1_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_specifier_qualifier_list1(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_specifier_qualifier_list1 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list1",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list1),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list1",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_specifier_qualifier_list1,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list1,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list1,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list1,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_specifier_qualifier_list1,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list1,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list2_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list2_iterator *_p_cast_object;
	CAst::specifier_qualifier_list2 *_p_cast_list_object;
}PyCAst_object_specifier_qualifier_list2_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_specifier_qualifier_list2_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_specifier_qualifier_list2_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_specifier_qualifier_list2_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list2_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_specifier_qualifier_list2_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_specifier_qualifier_list2_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list2_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list2_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list2_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_specifier_qualifier_list2_iterator,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list2_iterator,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list2_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list2_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list2_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list2_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list2_item *_p_cast_object;
}PyCAst_object_specifier_qualifier_list2_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_specifier_qualifier_list2_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_specifier_qualifier_list2_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_specifier_qualifier_list2_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_specifier_qualifier_list2_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list2_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_specifier_qualifier_list2_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_specifier_qualifier_list2_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list2_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list2_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list2_item",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list2_item,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list2_item,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list2_item,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list2_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list2

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::specifier_qualifier_list2 *_p_cast_object;
}PyCAst_object_specifier_qualifier_list2;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_specifier_qualifier_list2 [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_specifier_qualifier_list2 [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_specifier_qualifier_list2(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_specifier_qualifier_list2(PyCAst_object_specifier_qualifier_list2 *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_specifier_qualifier_list2_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_specifier_qualifier_list2[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_specifier_qualifier_list2_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_specifier_qualifier_list2(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_specifier_qualifier_list2 = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.specifier_qualifier_list2",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_specifier_qualifier_list2),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the specifier_qualifier_list2",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_specifier_qualifier_list2,
	/* tp_iternext----------*/      0,
	/* tp_methods-----------*/      PyCAst_methods_specifier_qualifier_list2,
	/* tp_members-----------*/      PyCAst_members_specifier_qualifier_list2,
	/* tp_getset------------*/      PyCAst_getsetter_specifier_qualifier_list2,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      (initproc)PyCAst_init_specifier_qualifier_list2,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_specifier_qualifier_list2,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF translation_unit_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::translation_unit_iterator *_p_cast_object;
	CAst::translation_unit *_p_cast_list_object;
}PyCAst_object_translation_unit_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_translation_unit_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_translation_unit_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_translation_unit_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_translation_unit_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_translation_unit_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_translation_unit_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.translation_unit_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_translation_unit_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the translation_unit_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_translation_unit_iterator,
	/* tp_methods-----------*/      PyCAst_methods_translation_unit_iterator,
	/* tp_members-----------*/      PyCAst_members_translation_unit_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_translation_unit_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_translation_unit_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF translation_unit_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::translation_unit_item *_p_cast_object;
}PyCAst_object_translation_unit_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_translation_unit_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_translation_unit_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_translation_unit_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_translation_unit_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_translation_unit_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_translation_unit_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_translation_unit_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.translation_unit_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_translation_unit_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_translation_unit_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF translation_unit

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::translation_unit *_p_cast_object;
}PyCAst_object_translation_unit;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_translation_unit [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_translation_unit [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_translation_unit(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_translation_unit(PyCAst_object_translation_unit *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_translation_unit_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_translation_unit[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_translation_unit_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_translation_unit(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_translation_unit = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.translation_unit",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_translation_unit),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the translation_unit",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_translation_unit,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF constant_expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::constant_expression *_p_cast_object;
}PyCAst_object_constant_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_constant_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_constant_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_constant_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_constant_expression(PyCAst_object_constant_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_constant_expression_ast(PyObject *_self);

static PyObject *PyCAst_getter_constant_expression_conditional_expression(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_constant_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_constant_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"conditional_expression", (getter)PyCAst_getter_constant_expression_conditional_expression,NULL,(char*)"Parameter conditional_expression", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_constant_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.constant_expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_constant_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF initializer_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::initializer_list_iterator *_p_cast_object;
	CAst::initializer_list *_p_cast_list_object;
}PyCAst_object_initializer_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_initializer_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_initializer_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_initializer_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_initializer_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_initializer_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_initializer_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the initializer_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_initializer_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_initializer_list_iterator,
	/* tp_members-----------*/      PyCAst_members_initializer_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_initializer_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF initializer_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::initializer_list_item *_p_cast_object;
}PyCAst_object_initializer_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_initializer_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_initializer_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_initializer_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_initializer_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_initializer_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_initializer_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_initializer_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_initializer_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF initializer_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::initializer_list *_p_cast_object;
}PyCAst_object_initializer_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_initializer_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_initializer_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_initializer_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_initializer_list(PyCAst_object_initializer_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_initializer_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_initializer_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_initializer_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_initializer_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_initializer_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.initializer_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_initializer_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the initializer_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_initializer_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF statement_list_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement_list_iterator *_p_cast_object;
	CAst::statement_list *_p_cast_list_object;
}PyCAst_object_statement_list_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement_list_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement_list_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_statement_list_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_statement_list_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement_list_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_list_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_list_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement_list_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_statement_list_iterator,
	/* tp_methods-----------*/      PyCAst_methods_statement_list_iterator,
	/* tp_members-----------*/      PyCAst_members_statement_list_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_statement_list_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_list_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF statement_list_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement_list_item *_p_cast_object;
}PyCAst_object_statement_list_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement_list_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement_list_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement_list_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_statement_list_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement_list_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement_list_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_list_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_list_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_statement_list_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF statement_list

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::statement_list *_p_cast_object;
}PyCAst_object_statement_list;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_statement_list [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_statement_list [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_statement_list(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_statement_list(PyCAst_object_statement_list *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_statement_list_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_statement_list[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_statement_list_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_statement_list(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_statement_list = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.statement_list",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_statement_list),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the statement_list",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_statement_list,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			






/*=====================================================================================================================================*\

        DEFINITION OF expression_iterator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::expression_iterator *_p_cast_object;
	CAst::expression *_p_cast_list_object;
}PyCAst_object_expression_iterator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_expression_iterator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_expression_iterator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/






static PyGetSetDef PyCAst_getsetter_expression_iterator[] = 
{
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/


PyObject* PyCAst_iter_next_expression_iterator(PyObject* self);

/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_expression_iterator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.expression_iterator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_expression_iterator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the expression_iterator",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      0,
	/* tp_iternext----------*/      (iternextfunc)PyCAst_iter_next_expression_iterator,
	/* tp_methods-----------*/      PyCAst_methods_expression_iterator,
	/* tp_members-----------*/      PyCAst_members_expression_iterator,
	/* tp_getset------------*/      PyCAst_getsetter_expression_iterator,
	/* tp_base--------------*/      0,
	/* tp_dict--------------*/      0,
	/* tp_descr_get---------*/      0,
	/* tp_descr_set---------*/      0,
	/* tp_dictoffset--------*/      0,
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_expression_iterator,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF expression_item

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::expression_item *_p_cast_object;
}PyCAst_object_expression_item;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_expression_item [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_expression_item [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New 
\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_expression_item_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_expression_item[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_expression_item_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_expression_item = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.expression_item",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_expression_item),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_init--------------*/      0,
	/* tp_alloc-------------*/      0,
	/* tp_new---------------*/      PyCAst_new_expression_item,
	
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////









/*=====================================================================================================================================*\

        DEFINITION OF expression

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::expression *_p_cast_object;
}PyCAst_object_expression;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_expression [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_expression [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_expression(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_expression(PyCAst_object_expression *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_expression_ast(PyObject *_self);






static PyGetSetDef PyCAst_getsetter_expression[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_expression_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
	
	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/

PyObject* PyCAst_iter_expression(PyObject* self);


/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_expression = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.expression",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_expression),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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
	/* tp_doc---------------*/      "Object representing the expression",
	/* tp_traverse----------*/      0,
	/* tp_clear-------------*/      0,
	/* tp_richcompare-------*/      0,
	/* tp_weaklistoffset----*/      0,
	/* tp_iter--------------*/      (getiterfunc)PyCAst_iter_expression,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



			





/*=====================================================================================================================================*\

        DEFINITION OF declarator

\*=====================================================================================================================================*/


/*---------------------------------------------------------------------------------------------*\

      Class Declaration

\*---------------------------------------------------------------------------------------------*/

typedef struct
{
	PyObject_HEAD
	CAst::declarator *_p_cast_object;
}PyCAst_object_declarator;


/*---------------------------------------------------------------------------------------------*\

      Class Methods

\*---------------------------------------------------------------------------------------------*/




static PyMethodDef PyCAst_methods_declarator [] = {{

NULL
}};


/*---------------------------------------------------------------------------------------------*\

      Class Members

\*---------------------------------------------------------------------------------------------*/
static PyMemberDef PyCAst_members_declarator [] = {{NULL}};



/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/
static PyObject * PyCAst_new_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds);
static int PyCAst_init_declarator(PyCAst_object_declarator *self, PyObject *args, PyObject *kwds);





/*---------------------------------------------------------------------------------------------*\

      Class Attribute getters and setters

\*---------------------------------------------------------------------------------------------*/
static PyObject *PyCAst_getter_declarator_ast(PyObject *_self);

static PyObject *PyCAst_getter_declarator_pointer(PyObject *_self);
static PyObject *PyCAst_getter_declarator_direct_declarator(PyObject *_self);





static PyGetSetDef PyCAst_getsetter_declarator[] = 
{
	{(char*)"ast", (getter)PyCAst_getter_declarator_ast,NULL,(char*)"Abstract Syntax Tree", NULL},
		
	{(char*)"pointer", (getter)PyCAst_getter_declarator_pointer,NULL,(char*)"Parameter pointer", NULL},
	
	{(char*)"direct_declarator", (getter)PyCAst_getter_declarator_direct_declarator,NULL,(char*)"Parameter direct_declarator", NULL},

	NULL
};


/*---------------------------------------------------------------------------------------------*\

      Other Functions

\*---------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------*\

      Class Type Declaration

\*---------------------------------------------------------------------------------------------*/

static PyTypeObject  PyCAst_type_declarator = 
{
	                                PyObject_HEAD_INIT(NULL)
	/* ob_size -------------*/      0,
	/* tp_name--------------*/      "CAst.declarator",
	/* tp_basicsize---------*/      sizeof(PyCAst_object_declarator),
	/* tp_itemsize----------*/      0,
	/* tp_dealloc-----------*/      0,
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



