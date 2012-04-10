#include "CAst.py.h"


    
#define CHECK_PYTHON_ARG_TYPE(NUM,ARG,TYP) {if(ARG->ob_type!=PyCAst_type_##TYP)PyErr_SetString(PyExc_TypeError,"test");}


static PyObject * PyCAst_new_token(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::token");
    PyCAst_object_token *self;
    self = (PyCAst_object_token*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}


static void PyCAst_dealloc_token(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::token");
    PyCAst_object_token *self=(PyCAst_object_token*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}


static int PyCAst_init_token(PyCAst_object_token *self, PyObject *args, PyObject *kwds)
{
    const char *s;
    LOG(COL_FG_CYAN<<"initializing PyCAst::token");
    if(! PyArg_ParseTuple(args, "s", &s))  
	return -1;
    LOG(COL_FG_CYAN<<"text:"<<s);
    PyObject *text=NULL;
    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::token>(new CAst::token(s));
    return 0;
}
static PyObject *PyCAst_getter_token_code(PyObject *_self)
{
	PyCAst_object_token *self=(PyCAst_object_token*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_token_isNull(PyObject *_self)
{
	PyCAst_object_token *self=(PyCAst_object_token*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_token_refCount(PyObject *_self)
{
	PyCAst_object_token *self=(PyCAst_object_token*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}






	
static PyObject * PyCAst_new_storage_class_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::storage_class_specifier");
    PyCAst_object_storage_class_specifier *self;
    self = (PyCAst_object_storage_class_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_storage_class_specifier(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::storage_class_specifier");
    PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_storage_class_specifier(PyCAst_object_storage_class_specifier *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::storage_class_specifier with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::storage_class_specifier>(new CAst::storage_class_specifier(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_storage_class_specifier_code(PyObject *_self)
{
	PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_storage_class_specifier_isNull(PyObject *_self)
{
	PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_storage_class_specifier_refCount(PyObject *_self)
{
	PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_storage_class_specifier_token(PyObject *_self)
{
	PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}





	
static PyObject * PyCAst_new_expression_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::expression_statement");
    PyCAst_object_expression_statement *self;
    self = (PyCAst_object_expression_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_expression_statement(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::expression_statement");
    PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_expression_statement(PyCAst_object_expression_statement *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::expression_statement with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		_arg_expression=(PyCAst_object_expression*)PyCAst_new_expression(&PyCAst_type_expression,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::expression_statement>(new CAst::expression_statement(_arg_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_expression_statement_code(PyObject *_self)
{
	PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_expression_statement_isNull(PyObject *_self)
{
	PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_expression_statement_refCount(PyObject *_self)
{
	PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_expression_statement_expression(PyObject *_self)
{
	PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}





	
static PyObject * PyCAst_new_type_name(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_name");
    PyCAst_object_type_name *self;
    self = (PyCAst_object_type_name*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_name(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_name");
    PyCAst_object_type_name *self=(PyCAst_object_type_name*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_type_name(PyCAst_object_type_name *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::type_name with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_specifier_qualifier_list* _arg_specifier_qualifier_list=(PyCAst_object_specifier_qualifier_list*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_specifier_qualifier_list==Py_None)
	{
		Py_DECREF(_arg_specifier_qualifier_list);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_abstract_declarator* _arg_abstract_declarator=(PyCAst_object_abstract_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_abstract_declarator==Py_None)
	{
		Py_DECREF(_arg_abstract_declarator);
		_arg_abstract_declarator=(PyCAst_object_abstract_declarator*)PyCAst_new_abstract_declarator(&PyCAst_type_abstract_declarator,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::type_name>(new CAst::type_name(_arg_specifier_qualifier_list->_p_cast_object,_arg_abstract_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_type_name_code(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_name_isNull(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_name_refCount(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_type_name_specifier_qualifier_list(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_specifier_qualifier_list());
}

static PyObject *PyCAst_getter_type_name_abstract_declarator(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_abstract_declarator());
}





	
static PyObject * PyCAst_new_unary_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::unary_expression");
    PyCAst_object_unary_expression *self;
    self = (PyCAst_object_unary_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_unary_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::unary_expression");
    PyCAst_object_unary_expression *self=(PyCAst_object_unary_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_unary_expression_code(PyObject *_self)
{
	PyCAst_object_unary_expression *self=(PyCAst_object_unary_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_unary_expression_isNull(PyObject *_self)
{
	PyCAst_object_unary_expression *self=(PyCAst_object_unary_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_unary_expression_refCount(PyObject *_self)
{
	PyCAst_object_unary_expression *self=(PyCAst_object_unary_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_unary_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::unary_expression_1");
    PyCAst_object_unary_expression_1 *self;
    self = (PyCAst_object_unary_expression_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_unary_expression_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::unary_expression_1");
    PyCAst_object_unary_expression_1 *self=(PyCAst_object_unary_expression_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_unary_expression_1(PyCAst_object_unary_expression_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::unary_expression_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_unary_expression* _arg_unary_expression=(PyCAst_object_unary_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_unary_expression==Py_None)
	{
		Py_DECREF(_arg_unary_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::unary_expression_1>(new CAst::unary_expression_1(_arg_token->_p_cast_object,_arg_unary_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_unary_expression_1_code(PyObject *_self)
{
	PyCAst_object_unary_expression_1 *self=(PyCAst_object_unary_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_unary_expression_1_isNull(PyObject *_self)
{
	PyCAst_object_unary_expression_1 *self=(PyCAst_object_unary_expression_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_unary_expression_1_refCount(PyObject *_self)
{
	PyCAst_object_unary_expression_1 *self=(PyCAst_object_unary_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_unary_expression_1_token(PyObject *_self)
{
	PyCAst_object_unary_expression_1 *self=(PyCAst_object_unary_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_unary_expression_1_unary_expression(PyObject *_self)
{
	PyCAst_object_unary_expression_1 *self=(PyCAst_object_unary_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_unary_expression());
}



	
static PyObject * PyCAst_new_unary_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::unary_expression_2");
    PyCAst_object_unary_expression_2 *self;
    self = (PyCAst_object_unary_expression_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_unary_expression_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::unary_expression_2");
    PyCAst_object_unary_expression_2 *self=(PyCAst_object_unary_expression_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_unary_expression_2(PyCAst_object_unary_expression_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::unary_expression_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_postfix_expression* _arg_postfix_expression=(PyCAst_object_postfix_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_postfix_expression==Py_None)
	{
		Py_DECREF(_arg_postfix_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::unary_expression_2>(new CAst::unary_expression_2(_arg_postfix_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_unary_expression_2_code(PyObject *_self)
{
	PyCAst_object_unary_expression_2 *self=(PyCAst_object_unary_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_unary_expression_2_isNull(PyObject *_self)
{
	PyCAst_object_unary_expression_2 *self=(PyCAst_object_unary_expression_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_unary_expression_2_refCount(PyObject *_self)
{
	PyCAst_object_unary_expression_2 *self=(PyCAst_object_unary_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_unary_expression_2_postfix_expression(PyObject *_self)
{
	PyCAst_object_unary_expression_2 *self=(PyCAst_object_unary_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_postfix_expression());
}



	
static PyObject * PyCAst_new_unary_expression_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::unary_expression_3");
    PyCAst_object_unary_expression_3 *self;
    self = (PyCAst_object_unary_expression_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_unary_expression_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::unary_expression_3");
    PyCAst_object_unary_expression_3 *self=(PyCAst_object_unary_expression_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_unary_expression_3(PyCAst_object_unary_expression_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::unary_expression_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_unary_operator* _arg_unary_operator=(PyCAst_object_unary_operator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_unary_operator==Py_None)
	{
		Py_DECREF(_arg_unary_operator);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_cast_expression* _arg_cast_expression=(PyCAst_object_cast_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_cast_expression==Py_None)
	{
		Py_DECREF(_arg_cast_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::unary_expression_3>(new CAst::unary_expression_3(_arg_unary_operator->_p_cast_object,_arg_cast_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_unary_expression_3_code(PyObject *_self)
{
	PyCAst_object_unary_expression_3 *self=(PyCAst_object_unary_expression_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_unary_expression_3_isNull(PyObject *_self)
{
	PyCAst_object_unary_expression_3 *self=(PyCAst_object_unary_expression_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_unary_expression_3_refCount(PyObject *_self)
{
	PyCAst_object_unary_expression_3 *self=(PyCAst_object_unary_expression_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_unary_expression_3_unary_operator(PyObject *_self)
{
	PyCAst_object_unary_expression_3 *self=(PyCAst_object_unary_expression_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_unary_operator());
}

static PyObject *PyCAst_getter_unary_expression_3_cast_expression(PyObject *_self)
{
	PyCAst_object_unary_expression_3 *self=(PyCAst_object_unary_expression_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_cast_expression());
}



	
static PyObject * PyCAst_new_unary_expression_4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::unary_expression_4");
    PyCAst_object_unary_expression_4 *self;
    self = (PyCAst_object_unary_expression_4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_unary_expression_4(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::unary_expression_4");
    PyCAst_object_unary_expression_4 *self=(PyCAst_object_unary_expression_4*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_unary_expression_4(PyCAst_object_unary_expression_4 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::unary_expression_4 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_name* _arg_type_name=(PyCAst_object_type_name*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_name==Py_None)
	{
		Py_DECREF(_arg_type_name);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::unary_expression_4>(new CAst::unary_expression_4(_arg_type_name->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_unary_expression_4_code(PyObject *_self)
{
	PyCAst_object_unary_expression_4 *self=(PyCAst_object_unary_expression_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_unary_expression_4_isNull(PyObject *_self)
{
	PyCAst_object_unary_expression_4 *self=(PyCAst_object_unary_expression_4*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_unary_expression_4_refCount(PyObject *_self)
{
	PyCAst_object_unary_expression_4 *self=(PyCAst_object_unary_expression_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_unary_expression_4_type_name(PyObject *_self)
{
	PyCAst_object_unary_expression_4 *self=(PyCAst_object_unary_expression_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_name());
}





	
static PyObject * PyCAst_new_conditional_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::conditional_expression_item");
    PyCAst_object_conditional_expression_item *self;
    self = (PyCAst_object_conditional_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_conditional_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::conditional_expression_item");
    PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_conditional_expression_item(PyCAst_object_conditional_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::conditional_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=4)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 4 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_logical_or_expression* _arg_logical_or_expression=(PyCAst_object_logical_or_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_logical_or_expression==Py_None)
	{
		Py_DECREF(_arg_logical_or_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token1=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token1==Py_None)
	{
		Py_DECREF(_arg_token1);
		_arg_token1=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		_arg_expression=(PyCAst_object_expression*)PyCAst_new_expression(&PyCAst_type_expression,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token2=(PyCAst_object_token*)PyTuple_GetItem(args,3);
	if((PyObject*)_arg_token2==Py_None)
	{
		Py_DECREF(_arg_token2);
		_arg_token2=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::conditional_expression_item>(new CAst::conditional_expression_item(_arg_logical_or_expression->_p_cast_object,_arg_token1->_p_cast_object,_arg_expression->_p_cast_object,_arg_token2->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_conditional_expression_item_code(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_conditional_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_conditional_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_conditional_expression_item_logical_or_expression(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_logical_or_expression());
}

static PyObject *PyCAst_getter_conditional_expression_item_token1(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token1());
}

static PyObject *PyCAst_getter_conditional_expression_item_expression(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}

static PyObject *PyCAst_getter_conditional_expression_item_token2(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token2());
}





	
static PyObject * PyCAst_new_conditional_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::conditional_expression");
    PyCAst_object_conditional_expression *self;
    self = (PyCAst_object_conditional_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_conditional_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::conditional_expression");
    PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_conditional_expression(PyCAst_object_conditional_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::conditional_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::conditional_expression>(new CAst::conditional_expression());
    return 0;
}

static PyObject *PyCAst_getter_conditional_expression_code(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_conditional_expression_isNull(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_conditional_expression_refCount(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_conditional_expression_size(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_conditional_expression(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_conditional_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::conditional_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_struct_or_union_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_or_union_specifier");
    PyCAst_object_struct_or_union_specifier *self;
    self = (PyCAst_object_struct_or_union_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_or_union_specifier(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_or_union_specifier");
    PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_or_union_specifier(PyCAst_object_struct_or_union_specifier *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_or_union_specifier with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=5)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 5 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_struct_or_union* _arg_struct_or_union=(PyCAst_object_struct_or_union*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_struct_or_union==Py_None)
	{
		Py_DECREF(_arg_struct_or_union);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token1=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token1==Py_None)
	{
		Py_DECREF(_arg_token1);
		_arg_token1=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token2=(PyCAst_object_token*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_token2==Py_None)
	{
		Py_DECREF(_arg_token2);
		_arg_token2=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_struct_declaration_list* _arg_struct_declaration_list=(PyCAst_object_struct_declaration_list*)PyTuple_GetItem(args,3);
	if((PyObject*)_arg_struct_declaration_list==Py_None)
	{
		Py_DECREF(_arg_struct_declaration_list);
		_arg_struct_declaration_list=(PyCAst_object_struct_declaration_list*)PyCAst_new_struct_declaration_list(&PyCAst_type_struct_declaration_list,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token3=(PyCAst_object_token*)PyTuple_GetItem(args,4);
	if((PyObject*)_arg_token3==Py_None)
	{
		Py_DECREF(_arg_token3);
		_arg_token3=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_or_union_specifier>(new CAst::struct_or_union_specifier(_arg_struct_or_union->_p_cast_object,_arg_token1->_p_cast_object,_arg_token2->_p_cast_object,_arg_struct_declaration_list->_p_cast_object,_arg_token3->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_struct_or_union_specifier_code(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_or_union_specifier_isNull(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_or_union_specifier_refCount(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_or_union_specifier_struct_or_union(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_struct_or_union());
}

static PyObject *PyCAst_getter_struct_or_union_specifier_token1(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token1());
}

static PyObject *PyCAst_getter_struct_or_union_specifier_token2(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token2());
}

static PyObject *PyCAst_getter_struct_or_union_specifier_struct_declaration_list(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_struct_declaration_list());
}

static PyObject *PyCAst_getter_struct_or_union_specifier_token3(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token3());
}





	
static PyObject * PyCAst_new_exclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::exclusive_or_expression_item");
    PyCAst_object_exclusive_or_expression_item *self;
    self = (PyCAst_object_exclusive_or_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_exclusive_or_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::exclusive_or_expression_item");
    PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_exclusive_or_expression_item(PyCAst_object_exclusive_or_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::exclusive_or_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_and_expression* _arg_and_expression=(PyCAst_object_and_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_and_expression==Py_None)
	{
		Py_DECREF(_arg_and_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::exclusive_or_expression_item>(new CAst::exclusive_or_expression_item(_arg_token->_p_cast_object,_arg_and_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_exclusive_or_expression_item_code(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_exclusive_or_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_exclusive_or_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_exclusive_or_expression_item_token(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_exclusive_or_expression_item_and_expression(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_and_expression());
}





	
static PyObject * PyCAst_new_exclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::exclusive_or_expression");
    PyCAst_object_exclusive_or_expression *self;
    self = (PyCAst_object_exclusive_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_exclusive_or_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::exclusive_or_expression");
    PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_exclusive_or_expression(PyCAst_object_exclusive_or_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::exclusive_or_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::exclusive_or_expression>(new CAst::exclusive_or_expression());
    return 0;
}

static PyObject *PyCAst_getter_exclusive_or_expression_code(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_exclusive_or_expression_isNull(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_exclusive_or_expression_refCount(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_exclusive_or_expression_size(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_exclusive_or_expression(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_exclusive_or_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::exclusive_or_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_initializer(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::initializer");
    PyCAst_object_initializer *self;
    self = (PyCAst_object_initializer*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_initializer(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::initializer");
    PyCAst_object_initializer *self=(PyCAst_object_initializer*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_initializer_code(PyObject *_self)
{
	PyCAst_object_initializer *self=(PyCAst_object_initializer*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_initializer_isNull(PyObject *_self)
{
	PyCAst_object_initializer *self=(PyCAst_object_initializer*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_initializer_refCount(PyObject *_self)
{
	PyCAst_object_initializer *self=(PyCAst_object_initializer*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_initializer_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::initializer_1");
    PyCAst_object_initializer_1 *self;
    self = (PyCAst_object_initializer_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_initializer_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::initializer_1");
    PyCAst_object_initializer_1 *self=(PyCAst_object_initializer_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_initializer_1(PyCAst_object_initializer_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::initializer_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_initializer_list* _arg_initializer_list=(PyCAst_object_initializer_list*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_initializer_list==Py_None)
	{
		Py_DECREF(_arg_initializer_list);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::initializer_1>(new CAst::initializer_1(_arg_initializer_list->_p_cast_object,_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_initializer_1_code(PyObject *_self)
{
	PyCAst_object_initializer_1 *self=(PyCAst_object_initializer_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_initializer_1_isNull(PyObject *_self)
{
	PyCAst_object_initializer_1 *self=(PyCAst_object_initializer_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_initializer_1_refCount(PyObject *_self)
{
	PyCAst_object_initializer_1 *self=(PyCAst_object_initializer_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_initializer_1_initializer_list(PyObject *_self)
{
	PyCAst_object_initializer_1 *self=(PyCAst_object_initializer_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_initializer_list());
}

static PyObject *PyCAst_getter_initializer_1_token(PyObject *_self)
{
	PyCAst_object_initializer_1 *self=(PyCAst_object_initializer_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}



	
static PyObject * PyCAst_new_initializer_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::initializer_2");
    PyCAst_object_initializer_2 *self;
    self = (PyCAst_object_initializer_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_initializer_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::initializer_2");
    PyCAst_object_initializer_2 *self=(PyCAst_object_initializer_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_initializer_2(PyCAst_object_initializer_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::initializer_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_assignment_expression* _arg_assignment_expression=(PyCAst_object_assignment_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_assignment_expression==Py_None)
	{
		Py_DECREF(_arg_assignment_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::initializer_2>(new CAst::initializer_2(_arg_assignment_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_initializer_2_code(PyObject *_self)
{
	PyCAst_object_initializer_2 *self=(PyCAst_object_initializer_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_initializer_2_isNull(PyObject *_self)
{
	PyCAst_object_initializer_2 *self=(PyCAst_object_initializer_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_initializer_2_refCount(PyObject *_self)
{
	PyCAst_object_initializer_2 *self=(PyCAst_object_initializer_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_initializer_2_assignment_expression(PyObject *_self)
{
	PyCAst_object_initializer_2 *self=(PyCAst_object_initializer_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_assignment_expression());
}





	
static PyObject * PyCAst_new_struct_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_declaration_list_item");
    PyCAst_object_struct_declaration_list_item *self;
    self = (PyCAst_object_struct_declaration_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_declaration_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_declaration_list_item");
    PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_declaration_list_item(PyCAst_object_struct_declaration_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_declaration_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_struct_declaration* _arg_struct_declaration=(PyCAst_object_struct_declaration*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_struct_declaration==Py_None)
	{
		Py_DECREF(_arg_struct_declaration);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_declaration_list_item>(new CAst::struct_declaration_list_item(_arg_struct_declaration->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_struct_declaration_list_item_code(PyObject *_self)
{
	PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_declaration_list_item_isNull(PyObject *_self)
{
	PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_declaration_list_item_refCount(PyObject *_self)
{
	PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_declaration_list_item_struct_declaration(PyObject *_self)
{
	PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_struct_declaration());
}





	
static PyObject * PyCAst_new_struct_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_declaration_list");
    PyCAst_object_struct_declaration_list *self;
    self = (PyCAst_object_struct_declaration_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_declaration_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_declaration_list");
    PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_declaration_list(PyCAst_object_struct_declaration_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_declaration_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_declaration_list>(new CAst::struct_declaration_list());
    return 0;
}

static PyObject *PyCAst_getter_struct_declaration_list_code(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_declaration_list_isNull(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_declaration_list_refCount(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_declaration_list_size(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_struct_declaration_list(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_struct_declaration_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::struct_declaration_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_assignment_operator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::assignment_operator");
    PyCAst_object_assignment_operator *self;
    self = (PyCAst_object_assignment_operator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_assignment_operator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::assignment_operator");
    PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_assignment_operator(PyCAst_object_assignment_operator *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::assignment_operator with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::assignment_operator>(new CAst::assignment_operator(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_assignment_operator_code(PyObject *_self)
{
	PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_assignment_operator_isNull(PyObject *_self)
{
	PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_assignment_operator_refCount(PyObject *_self)
{
	PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_assignment_operator_token(PyObject *_self)
{
	PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}





	
static PyObject * PyCAst_new_struct_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_declaration");
    PyCAst_object_struct_declaration *self;
    self = (PyCAst_object_struct_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_declaration(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_declaration");
    PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_declaration(PyCAst_object_struct_declaration *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_declaration with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_specifier_qualifier_list* _arg_specifier_qualifier_list=(PyCAst_object_specifier_qualifier_list*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_specifier_qualifier_list==Py_None)
	{
		Py_DECREF(_arg_specifier_qualifier_list);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_struct_declarator_list* _arg_struct_declarator_list=(PyCAst_object_struct_declarator_list*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_struct_declarator_list==Py_None)
	{
		Py_DECREF(_arg_struct_declarator_list);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_declaration>(new CAst::struct_declaration(_arg_specifier_qualifier_list->_p_cast_object,_arg_struct_declarator_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_struct_declaration_code(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_declaration_isNull(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_declaration_refCount(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_declaration_specifier_qualifier_list(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_specifier_qualifier_list());
}

static PyObject *PyCAst_getter_struct_declaration_struct_declarator_list(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_struct_declarator_list());
}





	
static PyObject * PyCAst_new_abstract_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::abstract_declarator");
    PyCAst_object_abstract_declarator *self;
    self = (PyCAst_object_abstract_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_abstract_declarator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::abstract_declarator");
    PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_abstract_declarator(PyCAst_object_abstract_declarator *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::abstract_declarator with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_pointer* _arg_pointer=(PyCAst_object_pointer*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_pointer==Py_None)
	{
		Py_DECREF(_arg_pointer);
		_arg_pointer=(PyCAst_object_pointer*)PyCAst_new_pointer(&PyCAst_type_pointer,NULL,NULL);
	}
    	PyCAst_object_direct_abstract_declarator* _arg_direct_abstract_declarator=(PyCAst_object_direct_abstract_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_direct_abstract_declarator==Py_None)
	{
		Py_DECREF(_arg_direct_abstract_declarator);
		_arg_direct_abstract_declarator=(PyCAst_object_direct_abstract_declarator*)PyCAst_new_direct_abstract_declarator(&PyCAst_type_direct_abstract_declarator,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::abstract_declarator>(new CAst::abstract_declarator(_arg_pointer->_p_cast_object,_arg_direct_abstract_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_abstract_declarator_code(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_abstract_declarator_isNull(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_abstract_declarator_refCount(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_abstract_declarator_pointer(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_pointer());
}

static PyObject *PyCAst_getter_abstract_declarator_direct_abstract_declarator(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_direct_abstract_declarator());
}





	
static PyObject * PyCAst_new_iteration_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::iteration_statement");
    PyCAst_object_iteration_statement *self;
    self = (PyCAst_object_iteration_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_iteration_statement(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::iteration_statement");
    PyCAst_object_iteration_statement *self=(PyCAst_object_iteration_statement*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_iteration_statement_code(PyObject *_self)
{
	PyCAst_object_iteration_statement *self=(PyCAst_object_iteration_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_iteration_statement_isNull(PyObject *_self)
{
	PyCAst_object_iteration_statement *self=(PyCAst_object_iteration_statement*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_iteration_statement_refCount(PyObject *_self)
{
	PyCAst_object_iteration_statement *self=(PyCAst_object_iteration_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_iteration_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::iteration_statement_1");
    PyCAst_object_iteration_statement_1 *self;
    self = (PyCAst_object_iteration_statement_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_iteration_statement_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::iteration_statement_1");
    PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_iteration_statement_1(PyCAst_object_iteration_statement_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::iteration_statement_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=4)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 4 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression_statement* _arg_expression_statement1=(PyCAst_object_expression_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression_statement1==Py_None)
	{
		Py_DECREF(_arg_expression_statement1);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_expression_statement* _arg_expression_statement2=(PyCAst_object_expression_statement*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_expression_statement2==Py_None)
	{
		Py_DECREF(_arg_expression_statement2);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}
    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		_arg_expression=(PyCAst_object_expression*)PyCAst_new_expression(&PyCAst_type_expression,NULL,NULL);
	}
    	PyCAst_object_statement* _arg_statement=(PyCAst_object_statement*)PyTuple_GetItem(args,3);
	if((PyObject*)_arg_statement==Py_None)
	{
		Py_DECREF(_arg_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 4 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::iteration_statement_1>(new CAst::iteration_statement_1(_arg_expression_statement1->_p_cast_object,_arg_expression_statement2->_p_cast_object,_arg_expression->_p_cast_object,_arg_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_iteration_statement_1_code(PyObject *_self)
{
	PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_iteration_statement_1_isNull(PyObject *_self)
{
	PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_iteration_statement_1_refCount(PyObject *_self)
{
	PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_iteration_statement_1_expression_statement1(PyObject *_self)
{
	PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression_statement1());
}

static PyObject *PyCAst_getter_iteration_statement_1_expression_statement2(PyObject *_self)
{
	PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression_statement2());
}

static PyObject *PyCAst_getter_iteration_statement_1_expression(PyObject *_self)
{
	PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}

static PyObject *PyCAst_getter_iteration_statement_1_statement(PyObject *_self)
{
	PyCAst_object_iteration_statement_1 *self=(PyCAst_object_iteration_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement());
}



	
static PyObject * PyCAst_new_iteration_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::iteration_statement_2");
    PyCAst_object_iteration_statement_2 *self;
    self = (PyCAst_object_iteration_statement_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_iteration_statement_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::iteration_statement_2");
    PyCAst_object_iteration_statement_2 *self=(PyCAst_object_iteration_statement_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_iteration_statement_2(PyCAst_object_iteration_statement_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::iteration_statement_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_statement* _arg_statement=(PyCAst_object_statement*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_statement==Py_None)
	{
		Py_DECREF(_arg_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::iteration_statement_2>(new CAst::iteration_statement_2(_arg_expression->_p_cast_object,_arg_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_iteration_statement_2_code(PyObject *_self)
{
	PyCAst_object_iteration_statement_2 *self=(PyCAst_object_iteration_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_iteration_statement_2_isNull(PyObject *_self)
{
	PyCAst_object_iteration_statement_2 *self=(PyCAst_object_iteration_statement_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_iteration_statement_2_refCount(PyObject *_self)
{
	PyCAst_object_iteration_statement_2 *self=(PyCAst_object_iteration_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_iteration_statement_2_expression(PyObject *_self)
{
	PyCAst_object_iteration_statement_2 *self=(PyCAst_object_iteration_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}

static PyObject *PyCAst_getter_iteration_statement_2_statement(PyObject *_self)
{
	PyCAst_object_iteration_statement_2 *self=(PyCAst_object_iteration_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement());
}



	
static PyObject * PyCAst_new_iteration_statement_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::iteration_statement_3");
    PyCAst_object_iteration_statement_3 *self;
    self = (PyCAst_object_iteration_statement_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_iteration_statement_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::iteration_statement_3");
    PyCAst_object_iteration_statement_3 *self=(PyCAst_object_iteration_statement_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_iteration_statement_3(PyCAst_object_iteration_statement_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::iteration_statement_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_statement* _arg_statement=(PyCAst_object_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_statement==Py_None)
	{
		Py_DECREF(_arg_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::iteration_statement_3>(new CAst::iteration_statement_3(_arg_statement->_p_cast_object,_arg_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_iteration_statement_3_code(PyObject *_self)
{
	PyCAst_object_iteration_statement_3 *self=(PyCAst_object_iteration_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_iteration_statement_3_isNull(PyObject *_self)
{
	PyCAst_object_iteration_statement_3 *self=(PyCAst_object_iteration_statement_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_iteration_statement_3_refCount(PyObject *_self)
{
	PyCAst_object_iteration_statement_3 *self=(PyCAst_object_iteration_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_iteration_statement_3_statement(PyObject *_self)
{
	PyCAst_object_iteration_statement_3 *self=(PyCAst_object_iteration_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement());
}

static PyObject *PyCAst_getter_iteration_statement_3_expression(PyObject *_self)
{
	PyCAst_object_iteration_statement_3 *self=(PyCAst_object_iteration_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}





	
static PyObject * PyCAst_new_additive_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::additive_expression_item");
    PyCAst_object_additive_expression_item *self;
    self = (PyCAst_object_additive_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_additive_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::additive_expression_item");
    PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_additive_expression_item(PyCAst_object_additive_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::additive_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_multiplicative_expression* _arg_multiplicative_expression=(PyCAst_object_multiplicative_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_multiplicative_expression==Py_None)
	{
		Py_DECREF(_arg_multiplicative_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::additive_expression_item>(new CAst::additive_expression_item(_arg_token->_p_cast_object,_arg_multiplicative_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_additive_expression_item_code(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_additive_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_additive_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_additive_expression_item_token(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_additive_expression_item_multiplicative_expression(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_multiplicative_expression());
}





	
static PyObject * PyCAst_new_additive_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::additive_expression");
    PyCAst_object_additive_expression *self;
    self = (PyCAst_object_additive_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_additive_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::additive_expression");
    PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_additive_expression(PyCAst_object_additive_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::additive_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::additive_expression>(new CAst::additive_expression());
    return 0;
}

static PyObject *PyCAst_getter_additive_expression_code(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_additive_expression_isNull(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_additive_expression_refCount(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_additive_expression_size(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_additive_expression(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_additive_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::additive_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_external_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::external_declaration");
    PyCAst_object_external_declaration *self;
    self = (PyCAst_object_external_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_external_declaration(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::external_declaration");
    PyCAst_object_external_declaration *self=(PyCAst_object_external_declaration*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_external_declaration_code(PyObject *_self)
{
	PyCAst_object_external_declaration *self=(PyCAst_object_external_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_external_declaration_isNull(PyObject *_self)
{
	PyCAst_object_external_declaration *self=(PyCAst_object_external_declaration*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_external_declaration_refCount(PyObject *_self)
{
	PyCAst_object_external_declaration *self=(PyCAst_object_external_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_external_declaration_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::external_declaration_1");
    PyCAst_object_external_declaration_1 *self;
    self = (PyCAst_object_external_declaration_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_external_declaration_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::external_declaration_1");
    PyCAst_object_external_declaration_1 *self=(PyCAst_object_external_declaration_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_external_declaration_1(PyCAst_object_external_declaration_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::external_declaration_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declaration* _arg_declaration=(PyCAst_object_declaration*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declaration==Py_None)
	{
		Py_DECREF(_arg_declaration);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::external_declaration_1>(new CAst::external_declaration_1(_arg_declaration->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_external_declaration_1_code(PyObject *_self)
{
	PyCAst_object_external_declaration_1 *self=(PyCAst_object_external_declaration_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_external_declaration_1_isNull(PyObject *_self)
{
	PyCAst_object_external_declaration_1 *self=(PyCAst_object_external_declaration_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_external_declaration_1_refCount(PyObject *_self)
{
	PyCAst_object_external_declaration_1 *self=(PyCAst_object_external_declaration_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_external_declaration_1_declaration(PyObject *_self)
{
	PyCAst_object_external_declaration_1 *self=(PyCAst_object_external_declaration_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration());
}



	
static PyObject * PyCAst_new_external_declaration_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::external_declaration_2");
    PyCAst_object_external_declaration_2 *self;
    self = (PyCAst_object_external_declaration_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_external_declaration_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::external_declaration_2");
    PyCAst_object_external_declaration_2 *self=(PyCAst_object_external_declaration_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_external_declaration_2(PyCAst_object_external_declaration_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::external_declaration_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_function_definition* _arg_function_definition=(PyCAst_object_function_definition*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_function_definition==Py_None)
	{
		Py_DECREF(_arg_function_definition);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::external_declaration_2>(new CAst::external_declaration_2(_arg_function_definition->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_external_declaration_2_code(PyObject *_self)
{
	PyCAst_object_external_declaration_2 *self=(PyCAst_object_external_declaration_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_external_declaration_2_isNull(PyObject *_self)
{
	PyCAst_object_external_declaration_2 *self=(PyCAst_object_external_declaration_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_external_declaration_2_refCount(PyObject *_self)
{
	PyCAst_object_external_declaration_2 *self=(PyCAst_object_external_declaration_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_external_declaration_2_function_definition(PyObject *_self)
{
	PyCAst_object_external_declaration_2 *self=(PyCAst_object_external_declaration_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_function_definition());
}





	
static PyObject * PyCAst_new_type_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_specifier");
    PyCAst_object_type_specifier *self;
    self = (PyCAst_object_type_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_specifier(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_specifier");
    PyCAst_object_type_specifier *self=(PyCAst_object_type_specifier*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_type_specifier_code(PyObject *_self)
{
	PyCAst_object_type_specifier *self=(PyCAst_object_type_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_specifier_isNull(PyObject *_self)
{
	PyCAst_object_type_specifier *self=(PyCAst_object_type_specifier*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_specifier_refCount(PyObject *_self)
{
	PyCAst_object_type_specifier *self=(PyCAst_object_type_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_type_specifier_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_specifier_1");
    PyCAst_object_type_specifier_1 *self;
    self = (PyCAst_object_type_specifier_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_specifier_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_specifier_1");
    PyCAst_object_type_specifier_1 *self=(PyCAst_object_type_specifier_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_type_specifier_1(PyCAst_object_type_specifier_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::type_specifier_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_enum_specifier* _arg_enum_specifier=(PyCAst_object_enum_specifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_enum_specifier==Py_None)
	{
		Py_DECREF(_arg_enum_specifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::type_specifier_1>(new CAst::type_specifier_1(_arg_enum_specifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_type_specifier_1_code(PyObject *_self)
{
	PyCAst_object_type_specifier_1 *self=(PyCAst_object_type_specifier_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_specifier_1_isNull(PyObject *_self)
{
	PyCAst_object_type_specifier_1 *self=(PyCAst_object_type_specifier_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_specifier_1_refCount(PyObject *_self)
{
	PyCAst_object_type_specifier_1 *self=(PyCAst_object_type_specifier_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_type_specifier_1_enum_specifier(PyObject *_self)
{
	PyCAst_object_type_specifier_1 *self=(PyCAst_object_type_specifier_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_enum_specifier());
}



	
static PyObject * PyCAst_new_type_specifier_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_specifier_2");
    PyCAst_object_type_specifier_2 *self;
    self = (PyCAst_object_type_specifier_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_specifier_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_specifier_2");
    PyCAst_object_type_specifier_2 *self=(PyCAst_object_type_specifier_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_type_specifier_2(PyCAst_object_type_specifier_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::type_specifier_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::type_specifier_2>(new CAst::type_specifier_2(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_type_specifier_2_code(PyObject *_self)
{
	PyCAst_object_type_specifier_2 *self=(PyCAst_object_type_specifier_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_specifier_2_isNull(PyObject *_self)
{
	PyCAst_object_type_specifier_2 *self=(PyCAst_object_type_specifier_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_specifier_2_refCount(PyObject *_self)
{
	PyCAst_object_type_specifier_2 *self=(PyCAst_object_type_specifier_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_type_specifier_2_token(PyObject *_self)
{
	PyCAst_object_type_specifier_2 *self=(PyCAst_object_type_specifier_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}



	
static PyObject * PyCAst_new_type_specifier_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_specifier_3");
    PyCAst_object_type_specifier_3 *self;
    self = (PyCAst_object_type_specifier_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_specifier_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_specifier_3");
    PyCAst_object_type_specifier_3 *self=(PyCAst_object_type_specifier_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_type_specifier_3(PyCAst_object_type_specifier_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::type_specifier_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_struct_or_union_specifier* _arg_struct_or_union_specifier=(PyCAst_object_struct_or_union_specifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_struct_or_union_specifier==Py_None)
	{
		Py_DECREF(_arg_struct_or_union_specifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::type_specifier_3>(new CAst::type_specifier_3(_arg_struct_or_union_specifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_type_specifier_3_code(PyObject *_self)
{
	PyCAst_object_type_specifier_3 *self=(PyCAst_object_type_specifier_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_specifier_3_isNull(PyObject *_self)
{
	PyCAst_object_type_specifier_3 *self=(PyCAst_object_type_specifier_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_specifier_3_refCount(PyObject *_self)
{
	PyCAst_object_type_specifier_3 *self=(PyCAst_object_type_specifier_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_type_specifier_3_struct_or_union_specifier(PyObject *_self)
{
	PyCAst_object_type_specifier_3 *self=(PyCAst_object_type_specifier_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_struct_or_union_specifier());
}





	
static PyObject * PyCAst_new_compound_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::compound_statement");
    PyCAst_object_compound_statement *self;
    self = (PyCAst_object_compound_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_compound_statement(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::compound_statement");
    PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_compound_statement(PyCAst_object_compound_statement *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::compound_statement with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declaration_list* _arg_declaration_list=(PyCAst_object_declaration_list*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declaration_list==Py_None)
	{
		Py_DECREF(_arg_declaration_list);
		_arg_declaration_list=(PyCAst_object_declaration_list*)PyCAst_new_declaration_list(&PyCAst_type_declaration_list,NULL,NULL);
	}
    	PyCAst_object_statement_list* _arg_statement_list=(PyCAst_object_statement_list*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_statement_list==Py_None)
	{
		Py_DECREF(_arg_statement_list);
		_arg_statement_list=(PyCAst_object_statement_list*)PyCAst_new_statement_list(&PyCAst_type_statement_list,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::compound_statement>(new CAst::compound_statement(_arg_declaration_list->_p_cast_object,_arg_statement_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_compound_statement_code(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_compound_statement_isNull(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_compound_statement_refCount(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_compound_statement_declaration_list(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration_list());
}

static PyObject *PyCAst_getter_compound_statement_statement_list(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement_list());
}





	
static PyObject * PyCAst_new_inclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::inclusive_or_expression_item");
    PyCAst_object_inclusive_or_expression_item *self;
    self = (PyCAst_object_inclusive_or_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_inclusive_or_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::inclusive_or_expression_item");
    PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_inclusive_or_expression_item(PyCAst_object_inclusive_or_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::inclusive_or_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_exclusive_or_expression* _arg_exclusive_or_expression=(PyCAst_object_exclusive_or_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_exclusive_or_expression==Py_None)
	{
		Py_DECREF(_arg_exclusive_or_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::inclusive_or_expression_item>(new CAst::inclusive_or_expression_item(_arg_token->_p_cast_object,_arg_exclusive_or_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_inclusive_or_expression_item_code(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_inclusive_or_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_inclusive_or_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_inclusive_or_expression_item_token(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_inclusive_or_expression_item_exclusive_or_expression(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_exclusive_or_expression());
}





	
static PyObject * PyCAst_new_inclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::inclusive_or_expression");
    PyCAst_object_inclusive_or_expression *self;
    self = (PyCAst_object_inclusive_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_inclusive_or_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::inclusive_or_expression");
    PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_inclusive_or_expression(PyCAst_object_inclusive_or_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::inclusive_or_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::inclusive_or_expression>(new CAst::inclusive_or_expression());
    return 0;
}

static PyObject *PyCAst_getter_inclusive_or_expression_code(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_inclusive_or_expression_isNull(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_inclusive_or_expression_refCount(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_inclusive_or_expression_size(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_inclusive_or_expression(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_inclusive_or_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::inclusive_or_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_pointer_item_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::pointer_item_1");
    PyCAst_object_pointer_item_1 *self;
    self = (PyCAst_object_pointer_item_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_pointer_item_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::pointer_item_1");
    PyCAst_object_pointer_item_1 *self=(PyCAst_object_pointer_item_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_pointer_item_1(PyCAst_object_pointer_item_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::pointer_item_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::pointer_item_1>(new CAst::pointer_item_1());
    return 0;
}

static PyObject *PyCAst_getter_pointer_item_1_code(PyObject *_self)
{
	PyCAst_object_pointer_item_1 *self=(PyCAst_object_pointer_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_pointer_item_1_isNull(PyObject *_self)
{
	PyCAst_object_pointer_item_1 *self=(PyCAst_object_pointer_item_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_pointer_item_1_refCount(PyObject *_self)
{
	PyCAst_object_pointer_item_1 *self=(PyCAst_object_pointer_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}



	
static PyObject * PyCAst_new_pointer_item_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::pointer_item_2");
    PyCAst_object_pointer_item_2 *self;
    self = (PyCAst_object_pointer_item_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_pointer_item_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::pointer_item_2");
    PyCAst_object_pointer_item_2 *self=(PyCAst_object_pointer_item_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_pointer_item_2(PyCAst_object_pointer_item_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::pointer_item_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_qualifier_list* _arg_type_qualifier_list=(PyCAst_object_type_qualifier_list*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_qualifier_list==Py_None)
	{
		Py_DECREF(_arg_type_qualifier_list);
		_arg_type_qualifier_list=(PyCAst_object_type_qualifier_list*)PyCAst_new_type_qualifier_list(&PyCAst_type_type_qualifier_list,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::pointer_item_2>(new CAst::pointer_item_2(_arg_type_qualifier_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_pointer_item_2_code(PyObject *_self)
{
	PyCAst_object_pointer_item_2 *self=(PyCAst_object_pointer_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_pointer_item_2_isNull(PyObject *_self)
{
	PyCAst_object_pointer_item_2 *self=(PyCAst_object_pointer_item_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_pointer_item_2_refCount(PyObject *_self)
{
	PyCAst_object_pointer_item_2 *self=(PyCAst_object_pointer_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_pointer_item_2_type_qualifier_list(PyObject *_self)
{
	PyCAst_object_pointer_item_2 *self=(PyCAst_object_pointer_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_qualifier_list());
}




	
static PyObject * PyCAst_new_pointer(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::pointer");
    PyCAst_object_pointer *self;
    self = (PyCAst_object_pointer*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_pointer(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::pointer");
    PyCAst_object_pointer *self=(PyCAst_object_pointer*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_pointer(PyCAst_object_pointer *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::pointer with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::pointer>(new CAst::pointer());
    return 0;
}

static PyObject *PyCAst_getter_pointer_code(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_pointer_isNull(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_pointer_refCount(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_pointer_size(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_pointer(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_pointer(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::pointer_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_pointer_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::pointer_item");
    PyCAst_object_pointer_item *self;
    self = (PyCAst_object_pointer_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_pointer_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::pointer_item");
    PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_pointer_item_code(PyObject *_self)
{
	PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_pointer_item_isNull(PyObject *_self)
{
	PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_pointer_item_refCount(PyObject *_self)
{
	PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}





	
static PyObject * PyCAst_new_selection_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::selection_statement");
    PyCAst_object_selection_statement *self;
    self = (PyCAst_object_selection_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_selection_statement(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::selection_statement");
    PyCAst_object_selection_statement *self=(PyCAst_object_selection_statement*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_selection_statement_code(PyObject *_self)
{
	PyCAst_object_selection_statement *self=(PyCAst_object_selection_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_selection_statement_isNull(PyObject *_self)
{
	PyCAst_object_selection_statement *self=(PyCAst_object_selection_statement*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_selection_statement_refCount(PyObject *_self)
{
	PyCAst_object_selection_statement *self=(PyCAst_object_selection_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_selection_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::selection_statement_1");
    PyCAst_object_selection_statement_1 *self;
    self = (PyCAst_object_selection_statement_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_selection_statement_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::selection_statement_1");
    PyCAst_object_selection_statement_1 *self=(PyCAst_object_selection_statement_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_selection_statement_1(PyCAst_object_selection_statement_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::selection_statement_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_statement* _arg_statement=(PyCAst_object_statement*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_statement==Py_None)
	{
		Py_DECREF(_arg_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::selection_statement_1>(new CAst::selection_statement_1(_arg_expression->_p_cast_object,_arg_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_selection_statement_1_code(PyObject *_self)
{
	PyCAst_object_selection_statement_1 *self=(PyCAst_object_selection_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_selection_statement_1_isNull(PyObject *_self)
{
	PyCAst_object_selection_statement_1 *self=(PyCAst_object_selection_statement_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_selection_statement_1_refCount(PyObject *_self)
{
	PyCAst_object_selection_statement_1 *self=(PyCAst_object_selection_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_selection_statement_1_expression(PyObject *_self)
{
	PyCAst_object_selection_statement_1 *self=(PyCAst_object_selection_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}

static PyObject *PyCAst_getter_selection_statement_1_statement(PyObject *_self)
{
	PyCAst_object_selection_statement_1 *self=(PyCAst_object_selection_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement());
}



	
static PyObject * PyCAst_new_selection_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::selection_statement_2");
    PyCAst_object_selection_statement_2 *self;
    self = (PyCAst_object_selection_statement_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_selection_statement_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::selection_statement_2");
    PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_selection_statement_2(PyCAst_object_selection_statement_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::selection_statement_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=4)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 4 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_statement* _arg_statement1=(PyCAst_object_statement*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_statement1==Py_None)
	{
		Py_DECREF(_arg_statement1);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_statement* _arg_statement2=(PyCAst_object_statement*)PyTuple_GetItem(args,3);
	if((PyObject*)_arg_statement2==Py_None)
	{
		Py_DECREF(_arg_statement2);
		_arg_statement2=(PyCAst_object_statement*)PyCAst_new_statement(&PyCAst_type_statement,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::selection_statement_2>(new CAst::selection_statement_2(_arg_expression->_p_cast_object,_arg_statement1->_p_cast_object,_arg_token->_p_cast_object,_arg_statement2->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_selection_statement_2_code(PyObject *_self)
{
	PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_selection_statement_2_isNull(PyObject *_self)
{
	PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_selection_statement_2_refCount(PyObject *_self)
{
	PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_selection_statement_2_expression(PyObject *_self)
{
	PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}

static PyObject *PyCAst_getter_selection_statement_2_statement1(PyObject *_self)
{
	PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement1());
}

static PyObject *PyCAst_getter_selection_statement_2_token(PyObject *_self)
{
	PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_selection_statement_2_statement2(PyObject *_self)
{
	PyCAst_object_selection_statement_2 *self=(PyCAst_object_selection_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement2());
}





	
static PyObject * PyCAst_new_postfix_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::postfix_expression");
    PyCAst_object_postfix_expression *self;
    self = (PyCAst_object_postfix_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_postfix_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::postfix_expression");
    PyCAst_object_postfix_expression *self=(PyCAst_object_postfix_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_postfix_expression_code(PyObject *_self)
{
	PyCAst_object_postfix_expression *self=(PyCAst_object_postfix_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_postfix_expression_isNull(PyObject *_self)
{
	PyCAst_object_postfix_expression *self=(PyCAst_object_postfix_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_postfix_expression_refCount(PyObject *_self)
{
	PyCAst_object_postfix_expression *self=(PyCAst_object_postfix_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_postfix_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::postfix_expression_1");
    PyCAst_object_postfix_expression_1 *self;
    self = (PyCAst_object_postfix_expression_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_postfix_expression_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::postfix_expression_1");
    PyCAst_object_postfix_expression_1 *self=(PyCAst_object_postfix_expression_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_postfix_expression_1(PyCAst_object_postfix_expression_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::postfix_expression_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_postfix_expression* _arg_postfix_expression=(PyCAst_object_postfix_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_postfix_expression==Py_None)
	{
		Py_DECREF(_arg_postfix_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_argument_expression_list* _arg_argument_expression_list=(PyCAst_object_argument_expression_list*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_argument_expression_list==Py_None)
	{
		Py_DECREF(_arg_argument_expression_list);
		_arg_argument_expression_list=(PyCAst_object_argument_expression_list*)PyCAst_new_argument_expression_list(&PyCAst_type_argument_expression_list,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_1>(new CAst::postfix_expression_1(_arg_postfix_expression->_p_cast_object,_arg_argument_expression_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_postfix_expression_1_code(PyObject *_self)
{
	PyCAst_object_postfix_expression_1 *self=(PyCAst_object_postfix_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_postfix_expression_1_isNull(PyObject *_self)
{
	PyCAst_object_postfix_expression_1 *self=(PyCAst_object_postfix_expression_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_postfix_expression_1_refCount(PyObject *_self)
{
	PyCAst_object_postfix_expression_1 *self=(PyCAst_object_postfix_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_postfix_expression_1_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression_1 *self=(PyCAst_object_postfix_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_postfix_expression());
}

static PyObject *PyCAst_getter_postfix_expression_1_argument_expression_list(PyObject *_self)
{
	PyCAst_object_postfix_expression_1 *self=(PyCAst_object_postfix_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_argument_expression_list());
}



	
static PyObject * PyCAst_new_postfix_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::postfix_expression_2");
    PyCAst_object_postfix_expression_2 *self;
    self = (PyCAst_object_postfix_expression_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_postfix_expression_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::postfix_expression_2");
    PyCAst_object_postfix_expression_2 *self=(PyCAst_object_postfix_expression_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_postfix_expression_2(PyCAst_object_postfix_expression_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::postfix_expression_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=3)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 3 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_postfix_expression* _arg_postfix_expression=(PyCAst_object_postfix_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_postfix_expression==Py_None)
	{
		Py_DECREF(_arg_postfix_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token1=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token1==Py_None)
	{
		Py_DECREF(_arg_token1);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token2=(PyCAst_object_token*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_token2==Py_None)
	{
		Py_DECREF(_arg_token2);
		PyErr_SetString(PyExc_TypeError,"Parameter 3 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_2>(new CAst::postfix_expression_2(_arg_postfix_expression->_p_cast_object,_arg_token1->_p_cast_object,_arg_token2->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_postfix_expression_2_code(PyObject *_self)
{
	PyCAst_object_postfix_expression_2 *self=(PyCAst_object_postfix_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_postfix_expression_2_isNull(PyObject *_self)
{
	PyCAst_object_postfix_expression_2 *self=(PyCAst_object_postfix_expression_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_postfix_expression_2_refCount(PyObject *_self)
{
	PyCAst_object_postfix_expression_2 *self=(PyCAst_object_postfix_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_postfix_expression_2_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression_2 *self=(PyCAst_object_postfix_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_postfix_expression());
}

static PyObject *PyCAst_getter_postfix_expression_2_token1(PyObject *_self)
{
	PyCAst_object_postfix_expression_2 *self=(PyCAst_object_postfix_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token1());
}

static PyObject *PyCAst_getter_postfix_expression_2_token2(PyObject *_self)
{
	PyCAst_object_postfix_expression_2 *self=(PyCAst_object_postfix_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token2());
}



	
static PyObject * PyCAst_new_postfix_expression_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::postfix_expression_3");
    PyCAst_object_postfix_expression_3 *self;
    self = (PyCAst_object_postfix_expression_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_postfix_expression_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::postfix_expression_3");
    PyCAst_object_postfix_expression_3 *self=(PyCAst_object_postfix_expression_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_postfix_expression_3(PyCAst_object_postfix_expression_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::postfix_expression_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_primary_expression* _arg_primary_expression=(PyCAst_object_primary_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_primary_expression==Py_None)
	{
		Py_DECREF(_arg_primary_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_3>(new CAst::postfix_expression_3(_arg_primary_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_postfix_expression_3_code(PyObject *_self)
{
	PyCAst_object_postfix_expression_3 *self=(PyCAst_object_postfix_expression_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_postfix_expression_3_isNull(PyObject *_self)
{
	PyCAst_object_postfix_expression_3 *self=(PyCAst_object_postfix_expression_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_postfix_expression_3_refCount(PyObject *_self)
{
	PyCAst_object_postfix_expression_3 *self=(PyCAst_object_postfix_expression_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_postfix_expression_3_primary_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression_3 *self=(PyCAst_object_postfix_expression_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_primary_expression());
}



	
static PyObject * PyCAst_new_postfix_expression_4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::postfix_expression_4");
    PyCAst_object_postfix_expression_4 *self;
    self = (PyCAst_object_postfix_expression_4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_postfix_expression_4(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::postfix_expression_4");
    PyCAst_object_postfix_expression_4 *self=(PyCAst_object_postfix_expression_4*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_postfix_expression_4(PyCAst_object_postfix_expression_4 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::postfix_expression_4 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_postfix_expression* _arg_postfix_expression=(PyCAst_object_postfix_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_postfix_expression==Py_None)
	{
		Py_DECREF(_arg_postfix_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_4>(new CAst::postfix_expression_4(_arg_postfix_expression->_p_cast_object,_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_postfix_expression_4_code(PyObject *_self)
{
	PyCAst_object_postfix_expression_4 *self=(PyCAst_object_postfix_expression_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_postfix_expression_4_isNull(PyObject *_self)
{
	PyCAst_object_postfix_expression_4 *self=(PyCAst_object_postfix_expression_4*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_postfix_expression_4_refCount(PyObject *_self)
{
	PyCAst_object_postfix_expression_4 *self=(PyCAst_object_postfix_expression_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_postfix_expression_4_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression_4 *self=(PyCAst_object_postfix_expression_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_postfix_expression());
}

static PyObject *PyCAst_getter_postfix_expression_4_token(PyObject *_self)
{
	PyCAst_object_postfix_expression_4 *self=(PyCAst_object_postfix_expression_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}



	
static PyObject * PyCAst_new_postfix_expression_5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::postfix_expression_5");
    PyCAst_object_postfix_expression_5 *self;
    self = (PyCAst_object_postfix_expression_5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_postfix_expression_5(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::postfix_expression_5");
    PyCAst_object_postfix_expression_5 *self=(PyCAst_object_postfix_expression_5*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_postfix_expression_5(PyCAst_object_postfix_expression_5 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::postfix_expression_5 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_postfix_expression* _arg_postfix_expression=(PyCAst_object_postfix_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_postfix_expression==Py_None)
	{
		Py_DECREF(_arg_postfix_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::postfix_expression_5>(new CAst::postfix_expression_5(_arg_postfix_expression->_p_cast_object,_arg_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_postfix_expression_5_code(PyObject *_self)
{
	PyCAst_object_postfix_expression_5 *self=(PyCAst_object_postfix_expression_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_postfix_expression_5_isNull(PyObject *_self)
{
	PyCAst_object_postfix_expression_5 *self=(PyCAst_object_postfix_expression_5*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_postfix_expression_5_refCount(PyObject *_self)
{
	PyCAst_object_postfix_expression_5 *self=(PyCAst_object_postfix_expression_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_postfix_expression_5_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression_5 *self=(PyCAst_object_postfix_expression_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_postfix_expression());
}

static PyObject *PyCAst_getter_postfix_expression_5_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression_5 *self=(PyCAst_object_postfix_expression_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}





	
static PyObject * PyCAst_new_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::and_expression_item");
    PyCAst_object_and_expression_item *self;
    self = (PyCAst_object_and_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_and_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::and_expression_item");
    PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_and_expression_item(PyCAst_object_and_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::and_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_equality_expression* _arg_equality_expression=(PyCAst_object_equality_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_equality_expression==Py_None)
	{
		Py_DECREF(_arg_equality_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::and_expression_item>(new CAst::and_expression_item(_arg_token->_p_cast_object,_arg_equality_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_and_expression_item_code(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_and_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_and_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_and_expression_item_token(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_and_expression_item_equality_expression(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_equality_expression());
}





	
static PyObject * PyCAst_new_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::and_expression");
    PyCAst_object_and_expression *self;
    self = (PyCAst_object_and_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_and_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::and_expression");
    PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_and_expression(PyCAst_object_and_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::and_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::and_expression>(new CAst::and_expression());
    return 0;
}

static PyObject *PyCAst_getter_and_expression_code(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_and_expression_isNull(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_and_expression_refCount(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_and_expression_size(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_and_expression(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_and_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::and_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement");
    PyCAst_object_statement *self;
    self = (PyCAst_object_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement");
    PyCAst_object_statement *self=(PyCAst_object_statement*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_statement_code(PyObject *_self)
{
	PyCAst_object_statement *self=(PyCAst_object_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_isNull(PyObject *_self)
{
	PyCAst_object_statement *self=(PyCAst_object_statement*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_refCount(PyObject *_self)
{
	PyCAst_object_statement *self=(PyCAst_object_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_1");
    PyCAst_object_statement_1 *self;
    self = (PyCAst_object_statement_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_1");
    PyCAst_object_statement_1 *self=(PyCAst_object_statement_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_1(PyCAst_object_statement_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_jump_statement* _arg_jump_statement=(PyCAst_object_jump_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_jump_statement==Py_None)
	{
		Py_DECREF(_arg_jump_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_1>(new CAst::statement_1(_arg_jump_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_statement_1_code(PyObject *_self)
{
	PyCAst_object_statement_1 *self=(PyCAst_object_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_1_isNull(PyObject *_self)
{
	PyCAst_object_statement_1 *self=(PyCAst_object_statement_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_1_refCount(PyObject *_self)
{
	PyCAst_object_statement_1 *self=(PyCAst_object_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_1_jump_statement(PyObject *_self)
{
	PyCAst_object_statement_1 *self=(PyCAst_object_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_jump_statement());
}



	
static PyObject * PyCAst_new_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_2");
    PyCAst_object_statement_2 *self;
    self = (PyCAst_object_statement_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_2");
    PyCAst_object_statement_2 *self=(PyCAst_object_statement_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_2(PyCAst_object_statement_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_labeled_statement* _arg_labeled_statement=(PyCAst_object_labeled_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_labeled_statement==Py_None)
	{
		Py_DECREF(_arg_labeled_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_2>(new CAst::statement_2(_arg_labeled_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_statement_2_code(PyObject *_self)
{
	PyCAst_object_statement_2 *self=(PyCAst_object_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_2_isNull(PyObject *_self)
{
	PyCAst_object_statement_2 *self=(PyCAst_object_statement_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_2_refCount(PyObject *_self)
{
	PyCAst_object_statement_2 *self=(PyCAst_object_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_2_labeled_statement(PyObject *_self)
{
	PyCAst_object_statement_2 *self=(PyCAst_object_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_labeled_statement());
}



	
static PyObject * PyCAst_new_statement_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_3");
    PyCAst_object_statement_3 *self;
    self = (PyCAst_object_statement_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_3");
    PyCAst_object_statement_3 *self=(PyCAst_object_statement_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_3(PyCAst_object_statement_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_compound_statement* _arg_compound_statement=(PyCAst_object_compound_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_compound_statement==Py_None)
	{
		Py_DECREF(_arg_compound_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_3>(new CAst::statement_3(_arg_compound_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_statement_3_code(PyObject *_self)
{
	PyCAst_object_statement_3 *self=(PyCAst_object_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_3_isNull(PyObject *_self)
{
	PyCAst_object_statement_3 *self=(PyCAst_object_statement_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_3_refCount(PyObject *_self)
{
	PyCAst_object_statement_3 *self=(PyCAst_object_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_3_compound_statement(PyObject *_self)
{
	PyCAst_object_statement_3 *self=(PyCAst_object_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_compound_statement());
}



	
static PyObject * PyCAst_new_statement_4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_4");
    PyCAst_object_statement_4 *self;
    self = (PyCAst_object_statement_4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_4(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_4");
    PyCAst_object_statement_4 *self=(PyCAst_object_statement_4*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_4(PyCAst_object_statement_4 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_4 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression_statement* _arg_expression_statement=(PyCAst_object_expression_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression_statement==Py_None)
	{
		Py_DECREF(_arg_expression_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_4>(new CAst::statement_4(_arg_expression_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_statement_4_code(PyObject *_self)
{
	PyCAst_object_statement_4 *self=(PyCAst_object_statement_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_4_isNull(PyObject *_self)
{
	PyCAst_object_statement_4 *self=(PyCAst_object_statement_4*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_4_refCount(PyObject *_self)
{
	PyCAst_object_statement_4 *self=(PyCAst_object_statement_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_4_expression_statement(PyObject *_self)
{
	PyCAst_object_statement_4 *self=(PyCAst_object_statement_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression_statement());
}



	
static PyObject * PyCAst_new_statement_5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_5");
    PyCAst_object_statement_5 *self;
    self = (PyCAst_object_statement_5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_5(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_5");
    PyCAst_object_statement_5 *self=(PyCAst_object_statement_5*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_5(PyCAst_object_statement_5 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_5 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_selection_statement* _arg_selection_statement=(PyCAst_object_selection_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_selection_statement==Py_None)
	{
		Py_DECREF(_arg_selection_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_5>(new CAst::statement_5(_arg_selection_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_statement_5_code(PyObject *_self)
{
	PyCAst_object_statement_5 *self=(PyCAst_object_statement_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_5_isNull(PyObject *_self)
{
	PyCAst_object_statement_5 *self=(PyCAst_object_statement_5*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_5_refCount(PyObject *_self)
{
	PyCAst_object_statement_5 *self=(PyCAst_object_statement_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_5_selection_statement(PyObject *_self)
{
	PyCAst_object_statement_5 *self=(PyCAst_object_statement_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_selection_statement());
}



	
static PyObject * PyCAst_new_statement_6(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_6");
    PyCAst_object_statement_6 *self;
    self = (PyCAst_object_statement_6*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_6(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_6");
    PyCAst_object_statement_6 *self=(PyCAst_object_statement_6*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_6(PyCAst_object_statement_6 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_6 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_iteration_statement* _arg_iteration_statement=(PyCAst_object_iteration_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_iteration_statement==Py_None)
	{
		Py_DECREF(_arg_iteration_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_6>(new CAst::statement_6(_arg_iteration_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_statement_6_code(PyObject *_self)
{
	PyCAst_object_statement_6 *self=(PyCAst_object_statement_6*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_6_isNull(PyObject *_self)
{
	PyCAst_object_statement_6 *self=(PyCAst_object_statement_6*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_6_refCount(PyObject *_self)
{
	PyCAst_object_statement_6 *self=(PyCAst_object_statement_6*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_6_iteration_statement(PyObject *_self)
{
	PyCAst_object_statement_6 *self=(PyCAst_object_statement_6*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_iteration_statement());
}





	
static PyObject * PyCAst_new_cast_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::cast_expression");
    PyCAst_object_cast_expression *self;
    self = (PyCAst_object_cast_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_cast_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::cast_expression");
    PyCAst_object_cast_expression *self=(PyCAst_object_cast_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_cast_expression_code(PyObject *_self)
{
	PyCAst_object_cast_expression *self=(PyCAst_object_cast_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_cast_expression_isNull(PyObject *_self)
{
	PyCAst_object_cast_expression *self=(PyCAst_object_cast_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_cast_expression_refCount(PyObject *_self)
{
	PyCAst_object_cast_expression *self=(PyCAst_object_cast_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_cast_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::cast_expression_1");
    PyCAst_object_cast_expression_1 *self;
    self = (PyCAst_object_cast_expression_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_cast_expression_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::cast_expression_1");
    PyCAst_object_cast_expression_1 *self=(PyCAst_object_cast_expression_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_cast_expression_1(PyCAst_object_cast_expression_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::cast_expression_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_name* _arg_type_name=(PyCAst_object_type_name*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_name==Py_None)
	{
		Py_DECREF(_arg_type_name);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_cast_expression* _arg_cast_expression=(PyCAst_object_cast_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_cast_expression==Py_None)
	{
		Py_DECREF(_arg_cast_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::cast_expression_1>(new CAst::cast_expression_1(_arg_type_name->_p_cast_object,_arg_cast_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_cast_expression_1_code(PyObject *_self)
{
	PyCAst_object_cast_expression_1 *self=(PyCAst_object_cast_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_cast_expression_1_isNull(PyObject *_self)
{
	PyCAst_object_cast_expression_1 *self=(PyCAst_object_cast_expression_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_cast_expression_1_refCount(PyObject *_self)
{
	PyCAst_object_cast_expression_1 *self=(PyCAst_object_cast_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_cast_expression_1_type_name(PyObject *_self)
{
	PyCAst_object_cast_expression_1 *self=(PyCAst_object_cast_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_name());
}

static PyObject *PyCAst_getter_cast_expression_1_cast_expression(PyObject *_self)
{
	PyCAst_object_cast_expression_1 *self=(PyCAst_object_cast_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_cast_expression());
}



	
static PyObject * PyCAst_new_cast_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::cast_expression_2");
    PyCAst_object_cast_expression_2 *self;
    self = (PyCAst_object_cast_expression_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_cast_expression_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::cast_expression_2");
    PyCAst_object_cast_expression_2 *self=(PyCAst_object_cast_expression_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_cast_expression_2(PyCAst_object_cast_expression_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::cast_expression_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_unary_expression* _arg_unary_expression=(PyCAst_object_unary_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_unary_expression==Py_None)
	{
		Py_DECREF(_arg_unary_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::cast_expression_2>(new CAst::cast_expression_2(_arg_unary_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_cast_expression_2_code(PyObject *_self)
{
	PyCAst_object_cast_expression_2 *self=(PyCAst_object_cast_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_cast_expression_2_isNull(PyObject *_self)
{
	PyCAst_object_cast_expression_2 *self=(PyCAst_object_cast_expression_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_cast_expression_2_refCount(PyObject *_self)
{
	PyCAst_object_cast_expression_2 *self=(PyCAst_object_cast_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_cast_expression_2_unary_expression(PyObject *_self)
{
	PyCAst_object_cast_expression_2 *self=(PyCAst_object_cast_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_unary_expression());
}





	
static PyObject * PyCAst_new_init_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::init_declarator");
    PyCAst_object_init_declarator *self;
    self = (PyCAst_object_init_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_init_declarator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::init_declarator");
    PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_init_declarator(PyCAst_object_init_declarator *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::init_declarator with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=3)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 3 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declarator* _arg_declarator=(PyCAst_object_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declarator==Py_None)
	{
		Py_DECREF(_arg_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_initializer* _arg_initializer=(PyCAst_object_initializer*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_initializer==Py_None)
	{
		Py_DECREF(_arg_initializer);
		_arg_initializer=(PyCAst_object_initializer*)PyCAst_new_initializer(&PyCAst_type_initializer,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::init_declarator>(new CAst::init_declarator(_arg_declarator->_p_cast_object,_arg_token->_p_cast_object,_arg_initializer->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_init_declarator_code(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_init_declarator_isNull(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_init_declarator_refCount(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_init_declarator_declarator(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declarator());
}

static PyObject *PyCAst_getter_init_declarator_token(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_init_declarator_initializer(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_initializer());
}





	
static PyObject * PyCAst_new_struct_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_declarator_list_item");
    PyCAst_object_struct_declarator_list_item *self;
    self = (PyCAst_object_struct_declarator_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_declarator_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_declarator_list_item");
    PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_declarator_list_item(PyCAst_object_struct_declarator_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_declarator_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_struct_declarator* _arg_struct_declarator=(PyCAst_object_struct_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_struct_declarator==Py_None)
	{
		Py_DECREF(_arg_struct_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_declarator_list_item>(new CAst::struct_declarator_list_item(_arg_token->_p_cast_object,_arg_struct_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_struct_declarator_list_item_code(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_declarator_list_item_isNull(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_declarator_list_item_refCount(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_declarator_list_item_token(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_struct_declarator_list_item_struct_declarator(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_struct_declarator());
}





	
static PyObject * PyCAst_new_struct_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_declarator_list");
    PyCAst_object_struct_declarator_list *self;
    self = (PyCAst_object_struct_declarator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_declarator_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_declarator_list");
    PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_declarator_list(PyCAst_object_struct_declarator_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_declarator_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_declarator_list>(new CAst::struct_declarator_list());
    return 0;
}

static PyObject *PyCAst_getter_struct_declarator_list_code(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_declarator_list_isNull(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_declarator_list_refCount(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_declarator_list_size(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_struct_declarator_list(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_struct_declarator_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::struct_declarator_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_logical_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::logical_or_expression_item");
    PyCAst_object_logical_or_expression_item *self;
    self = (PyCAst_object_logical_or_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_logical_or_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::logical_or_expression_item");
    PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_logical_or_expression_item(PyCAst_object_logical_or_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::logical_or_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_logical_and_expression* _arg_logical_and_expression=(PyCAst_object_logical_and_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_logical_and_expression==Py_None)
	{
		Py_DECREF(_arg_logical_and_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::logical_or_expression_item>(new CAst::logical_or_expression_item(_arg_token->_p_cast_object,_arg_logical_and_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_logical_or_expression_item_code(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_logical_or_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_logical_or_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_logical_or_expression_item_token(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_logical_or_expression_item_logical_and_expression(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_logical_and_expression());
}





	
static PyObject * PyCAst_new_logical_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::logical_or_expression");
    PyCAst_object_logical_or_expression *self;
    self = (PyCAst_object_logical_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_logical_or_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::logical_or_expression");
    PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_logical_or_expression(PyCAst_object_logical_or_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::logical_or_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::logical_or_expression>(new CAst::logical_or_expression());
    return 0;
}

static PyObject *PyCAst_getter_logical_or_expression_code(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_logical_or_expression_isNull(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_logical_or_expression_refCount(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_logical_or_expression_size(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_logical_or_expression(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_logical_or_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::logical_or_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_unary_operator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::unary_operator");
    PyCAst_object_unary_operator *self;
    self = (PyCAst_object_unary_operator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_unary_operator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::unary_operator");
    PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_unary_operator(PyCAst_object_unary_operator *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::unary_operator with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::unary_operator>(new CAst::unary_operator(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_unary_operator_code(PyObject *_self)
{
	PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_unary_operator_isNull(PyObject *_self)
{
	PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_unary_operator_refCount(PyObject *_self)
{
	PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_unary_operator_token(PyObject *_self)
{
	PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}





	
static PyObject * PyCAst_new_relational_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::relational_expression_item");
    PyCAst_object_relational_expression_item *self;
    self = (PyCAst_object_relational_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_relational_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::relational_expression_item");
    PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_relational_expression_item(PyCAst_object_relational_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::relational_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_shift_expression* _arg_shift_expression=(PyCAst_object_shift_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_shift_expression==Py_None)
	{
		Py_DECREF(_arg_shift_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::relational_expression_item>(new CAst::relational_expression_item(_arg_token->_p_cast_object,_arg_shift_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_relational_expression_item_code(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_relational_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_relational_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_relational_expression_item_token(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_relational_expression_item_shift_expression(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_shift_expression());
}





	
static PyObject * PyCAst_new_relational_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::relational_expression");
    PyCAst_object_relational_expression *self;
    self = (PyCAst_object_relational_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_relational_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::relational_expression");
    PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_relational_expression(PyCAst_object_relational_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::relational_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::relational_expression>(new CAst::relational_expression());
    return 0;
}

static PyObject *PyCAst_getter_relational_expression_code(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_relational_expression_isNull(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_relational_expression_refCount(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_relational_expression_size(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_relational_expression(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_relational_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::relational_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_struct_or_union(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_or_union");
    PyCAst_object_struct_or_union *self;
    self = (PyCAst_object_struct_or_union*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_or_union(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_or_union");
    PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_or_union(PyCAst_object_struct_or_union *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_or_union with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_or_union>(new CAst::struct_or_union(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_struct_or_union_code(PyObject *_self)
{
	PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_or_union_isNull(PyObject *_self)
{
	PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_or_union_refCount(PyObject *_self)
{
	PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_or_union_token(PyObject *_self)
{
	PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}





	
static PyObject * PyCAst_new_enumerator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::enumerator");
    PyCAst_object_enumerator *self;
    self = (PyCAst_object_enumerator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_enumerator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::enumerator");
    PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_enumerator(PyCAst_object_enumerator *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::enumerator with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=3)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 3 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token1=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token1==Py_None)
	{
		Py_DECREF(_arg_token1);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token2=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token2==Py_None)
	{
		Py_DECREF(_arg_token2);
		_arg_token2=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_constant_expression* _arg_constant_expression=(PyCAst_object_constant_expression*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_constant_expression==Py_None)
	{
		Py_DECREF(_arg_constant_expression);
		_arg_constant_expression=(PyCAst_object_constant_expression*)PyCAst_new_constant_expression(&PyCAst_type_constant_expression,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::enumerator>(new CAst::enumerator(_arg_token1->_p_cast_object,_arg_token2->_p_cast_object,_arg_constant_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_enumerator_code(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_enumerator_isNull(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_enumerator_refCount(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_enumerator_token1(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token1());
}

static PyObject *PyCAst_getter_enumerator_token2(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token2());
}

static PyObject *PyCAst_getter_enumerator_constant_expression(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_constant_expression());
}





	
static PyObject * PyCAst_new_assignment_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::assignment_expression");
    PyCAst_object_assignment_expression *self;
    self = (PyCAst_object_assignment_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_assignment_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::assignment_expression");
    PyCAst_object_assignment_expression *self=(PyCAst_object_assignment_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_assignment_expression_code(PyObject *_self)
{
	PyCAst_object_assignment_expression *self=(PyCAst_object_assignment_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_assignment_expression_isNull(PyObject *_self)
{
	PyCAst_object_assignment_expression *self=(PyCAst_object_assignment_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_assignment_expression_refCount(PyObject *_self)
{
	PyCAst_object_assignment_expression *self=(PyCAst_object_assignment_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_assignment_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::assignment_expression_1");
    PyCAst_object_assignment_expression_1 *self;
    self = (PyCAst_object_assignment_expression_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_assignment_expression_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::assignment_expression_1");
    PyCAst_object_assignment_expression_1 *self=(PyCAst_object_assignment_expression_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_assignment_expression_1(PyCAst_object_assignment_expression_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::assignment_expression_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_conditional_expression* _arg_conditional_expression=(PyCAst_object_conditional_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_conditional_expression==Py_None)
	{
		Py_DECREF(_arg_conditional_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::assignment_expression_1>(new CAst::assignment_expression_1(_arg_conditional_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_assignment_expression_1_code(PyObject *_self)
{
	PyCAst_object_assignment_expression_1 *self=(PyCAst_object_assignment_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_assignment_expression_1_isNull(PyObject *_self)
{
	PyCAst_object_assignment_expression_1 *self=(PyCAst_object_assignment_expression_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_assignment_expression_1_refCount(PyObject *_self)
{
	PyCAst_object_assignment_expression_1 *self=(PyCAst_object_assignment_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_assignment_expression_1_conditional_expression(PyObject *_self)
{
	PyCAst_object_assignment_expression_1 *self=(PyCAst_object_assignment_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_conditional_expression());
}



	
static PyObject * PyCAst_new_assignment_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::assignment_expression_2");
    PyCAst_object_assignment_expression_2 *self;
    self = (PyCAst_object_assignment_expression_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_assignment_expression_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::assignment_expression_2");
    PyCAst_object_assignment_expression_2 *self=(PyCAst_object_assignment_expression_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_assignment_expression_2(PyCAst_object_assignment_expression_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::assignment_expression_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=3)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 3 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_unary_expression* _arg_unary_expression=(PyCAst_object_unary_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_unary_expression==Py_None)
	{
		Py_DECREF(_arg_unary_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_assignment_operator* _arg_assignment_operator=(PyCAst_object_assignment_operator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_assignment_operator==Py_None)
	{
		Py_DECREF(_arg_assignment_operator);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}
    	PyCAst_object_assignment_expression* _arg_assignment_expression=(PyCAst_object_assignment_expression*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_assignment_expression==Py_None)
	{
		Py_DECREF(_arg_assignment_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 3 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::assignment_expression_2>(new CAst::assignment_expression_2(_arg_unary_expression->_p_cast_object,_arg_assignment_operator->_p_cast_object,_arg_assignment_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_assignment_expression_2_code(PyObject *_self)
{
	PyCAst_object_assignment_expression_2 *self=(PyCAst_object_assignment_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_assignment_expression_2_isNull(PyObject *_self)
{
	PyCAst_object_assignment_expression_2 *self=(PyCAst_object_assignment_expression_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_assignment_expression_2_refCount(PyObject *_self)
{
	PyCAst_object_assignment_expression_2 *self=(PyCAst_object_assignment_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_assignment_expression_2_unary_expression(PyObject *_self)
{
	PyCAst_object_assignment_expression_2 *self=(PyCAst_object_assignment_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_unary_expression());
}

static PyObject *PyCAst_getter_assignment_expression_2_assignment_operator(PyObject *_self)
{
	PyCAst_object_assignment_expression_2 *self=(PyCAst_object_assignment_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_assignment_operator());
}

static PyObject *PyCAst_getter_assignment_expression_2_assignment_expression(PyObject *_self)
{
	PyCAst_object_assignment_expression_2 *self=(PyCAst_object_assignment_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_assignment_expression());
}





	
static PyObject * PyCAst_new_parameter_type_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::parameter_type_list");
    PyCAst_object_parameter_type_list *self;
    self = (PyCAst_object_parameter_type_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_parameter_type_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::parameter_type_list");
    PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_parameter_type_list(PyCAst_object_parameter_type_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::parameter_type_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=3)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 3 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_parameter_list* _arg_parameter_list=(PyCAst_object_parameter_list*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_parameter_list==Py_None)
	{
		Py_DECREF(_arg_parameter_list);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_token* _arg_token1=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token1==Py_None)
	{
		Py_DECREF(_arg_token1);
		_arg_token1=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token2=(PyCAst_object_token*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_token2==Py_None)
	{
		Py_DECREF(_arg_token2);
		_arg_token2=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::parameter_type_list>(new CAst::parameter_type_list(_arg_parameter_list->_p_cast_object,_arg_token1->_p_cast_object,_arg_token2->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_parameter_type_list_code(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_parameter_type_list_isNull(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_parameter_type_list_refCount(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_parameter_type_list_parameter_list(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_parameter_list());
}

static PyObject *PyCAst_getter_parameter_type_list_token1(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token1());
}

static PyObject *PyCAst_getter_parameter_type_list_token2(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token2());
}





	
static PyObject * PyCAst_new_parameter_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::parameter_declaration");
    PyCAst_object_parameter_declaration *self;
    self = (PyCAst_object_parameter_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_parameter_declaration(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::parameter_declaration");
    PyCAst_object_parameter_declaration *self=(PyCAst_object_parameter_declaration*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_parameter_declaration_code(PyObject *_self)
{
	PyCAst_object_parameter_declaration *self=(PyCAst_object_parameter_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_parameter_declaration_isNull(PyObject *_self)
{
	PyCAst_object_parameter_declaration *self=(PyCAst_object_parameter_declaration*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_parameter_declaration_refCount(PyObject *_self)
{
	PyCAst_object_parameter_declaration *self=(PyCAst_object_parameter_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_parameter_declaration_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::parameter_declaration_1");
    PyCAst_object_parameter_declaration_1 *self;
    self = (PyCAst_object_parameter_declaration_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_parameter_declaration_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::parameter_declaration_1");
    PyCAst_object_parameter_declaration_1 *self=(PyCAst_object_parameter_declaration_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_parameter_declaration_1(PyCAst_object_parameter_declaration_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::parameter_declaration_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declaration_specifiers* _arg_declaration_specifiers=(PyCAst_object_declaration_specifiers*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declaration_specifiers==Py_None)
	{
		Py_DECREF(_arg_declaration_specifiers);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_abstract_declarator* _arg_abstract_declarator=(PyCAst_object_abstract_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_abstract_declarator==Py_None)
	{
		Py_DECREF(_arg_abstract_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::parameter_declaration_1>(new CAst::parameter_declaration_1(_arg_declaration_specifiers->_p_cast_object,_arg_abstract_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_parameter_declaration_1_code(PyObject *_self)
{
	PyCAst_object_parameter_declaration_1 *self=(PyCAst_object_parameter_declaration_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_parameter_declaration_1_isNull(PyObject *_self)
{
	PyCAst_object_parameter_declaration_1 *self=(PyCAst_object_parameter_declaration_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_parameter_declaration_1_refCount(PyObject *_self)
{
	PyCAst_object_parameter_declaration_1 *self=(PyCAst_object_parameter_declaration_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_parameter_declaration_1_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_parameter_declaration_1 *self=(PyCAst_object_parameter_declaration_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration_specifiers());
}

static PyObject *PyCAst_getter_parameter_declaration_1_abstract_declarator(PyObject *_self)
{
	PyCAst_object_parameter_declaration_1 *self=(PyCAst_object_parameter_declaration_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_abstract_declarator());
}



	
static PyObject * PyCAst_new_parameter_declaration_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::parameter_declaration_2");
    PyCAst_object_parameter_declaration_2 *self;
    self = (PyCAst_object_parameter_declaration_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_parameter_declaration_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::parameter_declaration_2");
    PyCAst_object_parameter_declaration_2 *self=(PyCAst_object_parameter_declaration_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_parameter_declaration_2(PyCAst_object_parameter_declaration_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::parameter_declaration_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declaration_specifiers* _arg_declaration_specifiers=(PyCAst_object_declaration_specifiers*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declaration_specifiers==Py_None)
	{
		Py_DECREF(_arg_declaration_specifiers);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_declarator* _arg_declarator=(PyCAst_object_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_declarator==Py_None)
	{
		Py_DECREF(_arg_declarator);
		_arg_declarator=(PyCAst_object_declarator*)PyCAst_new_declarator(&PyCAst_type_declarator,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::parameter_declaration_2>(new CAst::parameter_declaration_2(_arg_declaration_specifiers->_p_cast_object,_arg_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_parameter_declaration_2_code(PyObject *_self)
{
	PyCAst_object_parameter_declaration_2 *self=(PyCAst_object_parameter_declaration_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_parameter_declaration_2_isNull(PyObject *_self)
{
	PyCAst_object_parameter_declaration_2 *self=(PyCAst_object_parameter_declaration_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_parameter_declaration_2_refCount(PyObject *_self)
{
	PyCAst_object_parameter_declaration_2 *self=(PyCAst_object_parameter_declaration_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_parameter_declaration_2_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_parameter_declaration_2 *self=(PyCAst_object_parameter_declaration_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration_specifiers());
}

static PyObject *PyCAst_getter_parameter_declaration_2_declarator(PyObject *_self)
{
	PyCAst_object_parameter_declaration_2 *self=(PyCAst_object_parameter_declaration_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declarator());
}





	
static PyObject * PyCAst_new_multiplicative_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::multiplicative_expression_item");
    PyCAst_object_multiplicative_expression_item *self;
    self = (PyCAst_object_multiplicative_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_multiplicative_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::multiplicative_expression_item");
    PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_multiplicative_expression_item(PyCAst_object_multiplicative_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::multiplicative_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_cast_expression* _arg_cast_expression=(PyCAst_object_cast_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_cast_expression==Py_None)
	{
		Py_DECREF(_arg_cast_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::multiplicative_expression_item>(new CAst::multiplicative_expression_item(_arg_token->_p_cast_object,_arg_cast_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_multiplicative_expression_item_code(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_multiplicative_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_multiplicative_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_multiplicative_expression_item_token(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_multiplicative_expression_item_cast_expression(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_cast_expression());
}





	
static PyObject * PyCAst_new_multiplicative_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::multiplicative_expression");
    PyCAst_object_multiplicative_expression *self;
    self = (PyCAst_object_multiplicative_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_multiplicative_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::multiplicative_expression");
    PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_multiplicative_expression(PyCAst_object_multiplicative_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::multiplicative_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::multiplicative_expression>(new CAst::multiplicative_expression());
    return 0;
}

static PyObject *PyCAst_getter_multiplicative_expression_code(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_multiplicative_expression_isNull(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_multiplicative_expression_refCount(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_multiplicative_expression_size(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_multiplicative_expression(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_multiplicative_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::multiplicative_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_type_qualifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_qualifier_list_item");
    PyCAst_object_type_qualifier_list_item *self;
    self = (PyCAst_object_type_qualifier_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_qualifier_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_qualifier_list_item");
    PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_type_qualifier_list_item(PyCAst_object_type_qualifier_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::type_qualifier_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_qualifier* _arg_type_qualifier=(PyCAst_object_type_qualifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_qualifier==Py_None)
	{
		Py_DECREF(_arg_type_qualifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::type_qualifier_list_item>(new CAst::type_qualifier_list_item(_arg_type_qualifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_type_qualifier_list_item_code(PyObject *_self)
{
	PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_qualifier_list_item_isNull(PyObject *_self)
{
	PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_qualifier_list_item_refCount(PyObject *_self)
{
	PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_type_qualifier_list_item_type_qualifier(PyObject *_self)
{
	PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_qualifier());
}





	
static PyObject * PyCAst_new_type_qualifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_qualifier_list");
    PyCAst_object_type_qualifier_list *self;
    self = (PyCAst_object_type_qualifier_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_qualifier_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_qualifier_list");
    PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_type_qualifier_list(PyCAst_object_type_qualifier_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::type_qualifier_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::type_qualifier_list>(new CAst::type_qualifier_list());
    return 0;
}

static PyObject *PyCAst_getter_type_qualifier_list_code(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_qualifier_list_isNull(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_qualifier_list_refCount(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_type_qualifier_list_size(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_type_qualifier_list(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_type_qualifier_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::type_qualifier_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_argument_expression_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::argument_expression_list_item");
    PyCAst_object_argument_expression_list_item *self;
    self = (PyCAst_object_argument_expression_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_argument_expression_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::argument_expression_list_item");
    PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_argument_expression_list_item(PyCAst_object_argument_expression_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::argument_expression_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_assignment_expression* _arg_assignment_expression=(PyCAst_object_assignment_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_assignment_expression==Py_None)
	{
		Py_DECREF(_arg_assignment_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::argument_expression_list_item>(new CAst::argument_expression_list_item(_arg_token->_p_cast_object,_arg_assignment_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_argument_expression_list_item_code(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_argument_expression_list_item_isNull(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_argument_expression_list_item_refCount(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_argument_expression_list_item_token(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_argument_expression_list_item_assignment_expression(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_assignment_expression());
}





	
static PyObject * PyCAst_new_argument_expression_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::argument_expression_list");
    PyCAst_object_argument_expression_list *self;
    self = (PyCAst_object_argument_expression_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_argument_expression_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::argument_expression_list");
    PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_argument_expression_list(PyCAst_object_argument_expression_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::argument_expression_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::argument_expression_list>(new CAst::argument_expression_list());
    return 0;
}

static PyObject *PyCAst_getter_argument_expression_list_code(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_argument_expression_list_isNull(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_argument_expression_list_refCount(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_argument_expression_list_size(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_argument_expression_list(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_argument_expression_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::argument_expression_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_direct_abstract_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_abstract_declarator");
    PyCAst_object_direct_abstract_declarator *self;
    self = (PyCAst_object_direct_abstract_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_abstract_declarator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_abstract_declarator");
    PyCAst_object_direct_abstract_declarator *self=(PyCAst_object_direct_abstract_declarator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_code(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator *self=(PyCAst_object_direct_abstract_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_isNull(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator *self=(PyCAst_object_direct_abstract_declarator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_abstract_declarator_refCount(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator *self=(PyCAst_object_direct_abstract_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_direct_abstract_declarator_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_abstract_declarator_1");
    PyCAst_object_direct_abstract_declarator_1 *self;
    self = (PyCAst_object_direct_abstract_declarator_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_abstract_declarator_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_abstract_declarator_1");
    PyCAst_object_direct_abstract_declarator_1 *self=(PyCAst_object_direct_abstract_declarator_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_abstract_declarator_1(PyCAst_object_direct_abstract_declarator_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_abstract_declarator_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_abstract_declarator* _arg_abstract_declarator=(PyCAst_object_abstract_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_abstract_declarator==Py_None)
	{
		Py_DECREF(_arg_abstract_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_abstract_declarator_1>(new CAst::direct_abstract_declarator_1(_arg_abstract_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_abstract_declarator_1_code(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_1 *self=(PyCAst_object_direct_abstract_declarator_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_1_isNull(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_1 *self=(PyCAst_object_direct_abstract_declarator_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_abstract_declarator_1_refCount(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_1 *self=(PyCAst_object_direct_abstract_declarator_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_1_abstract_declarator(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_1 *self=(PyCAst_object_direct_abstract_declarator_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_abstract_declarator());
}



	
static PyObject * PyCAst_new_direct_abstract_declarator_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_abstract_declarator_2");
    PyCAst_object_direct_abstract_declarator_2 *self;
    self = (PyCAst_object_direct_abstract_declarator_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_abstract_declarator_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_abstract_declarator_2");
    PyCAst_object_direct_abstract_declarator_2 *self=(PyCAst_object_direct_abstract_declarator_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_abstract_declarator_2(PyCAst_object_direct_abstract_declarator_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_abstract_declarator_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_direct_abstract_declarator* _arg_direct_abstract_declarator=(PyCAst_object_direct_abstract_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_direct_abstract_declarator==Py_None)
	{
		Py_DECREF(_arg_direct_abstract_declarator);
		_arg_direct_abstract_declarator=(PyCAst_object_direct_abstract_declarator*)PyCAst_new_direct_abstract_declarator(&PyCAst_type_direct_abstract_declarator,NULL,NULL);
	}
    	PyCAst_object_parameter_type_list* _arg_parameter_type_list=(PyCAst_object_parameter_type_list*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_parameter_type_list==Py_None)
	{
		Py_DECREF(_arg_parameter_type_list);
		_arg_parameter_type_list=(PyCAst_object_parameter_type_list*)PyCAst_new_parameter_type_list(&PyCAst_type_parameter_type_list,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_abstract_declarator_2>(new CAst::direct_abstract_declarator_2(_arg_direct_abstract_declarator->_p_cast_object,_arg_parameter_type_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_abstract_declarator_2_code(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_2 *self=(PyCAst_object_direct_abstract_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_2_isNull(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_2 *self=(PyCAst_object_direct_abstract_declarator_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_abstract_declarator_2_refCount(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_2 *self=(PyCAst_object_direct_abstract_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_2_direct_abstract_declarator(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_2 *self=(PyCAst_object_direct_abstract_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_direct_abstract_declarator());
}

static PyObject *PyCAst_getter_direct_abstract_declarator_2_parameter_type_list(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_2 *self=(PyCAst_object_direct_abstract_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_parameter_type_list());
}



	
static PyObject * PyCAst_new_direct_abstract_declarator_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_abstract_declarator_3");
    PyCAst_object_direct_abstract_declarator_3 *self;
    self = (PyCAst_object_direct_abstract_declarator_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_abstract_declarator_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_abstract_declarator_3");
    PyCAst_object_direct_abstract_declarator_3 *self=(PyCAst_object_direct_abstract_declarator_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_abstract_declarator_3(PyCAst_object_direct_abstract_declarator_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_abstract_declarator_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_direct_abstract_declarator* _arg_direct_abstract_declarator=(PyCAst_object_direct_abstract_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_direct_abstract_declarator==Py_None)
	{
		Py_DECREF(_arg_direct_abstract_declarator);
		_arg_direct_abstract_declarator=(PyCAst_object_direct_abstract_declarator*)PyCAst_new_direct_abstract_declarator(&PyCAst_type_direct_abstract_declarator,NULL,NULL);
	}
    	PyCAst_object_constant_expression* _arg_constant_expression=(PyCAst_object_constant_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_constant_expression==Py_None)
	{
		Py_DECREF(_arg_constant_expression);
		_arg_constant_expression=(PyCAst_object_constant_expression*)PyCAst_new_constant_expression(&PyCAst_type_constant_expression,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_abstract_declarator_3>(new CAst::direct_abstract_declarator_3(_arg_direct_abstract_declarator->_p_cast_object,_arg_constant_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_abstract_declarator_3_code(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_3 *self=(PyCAst_object_direct_abstract_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_3_isNull(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_3 *self=(PyCAst_object_direct_abstract_declarator_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_abstract_declarator_3_refCount(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_3 *self=(PyCAst_object_direct_abstract_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_abstract_declarator_3_direct_abstract_declarator(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_3 *self=(PyCAst_object_direct_abstract_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_direct_abstract_declarator());
}

static PyObject *PyCAst_getter_direct_abstract_declarator_3_constant_expression(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator_3 *self=(PyCAst_object_direct_abstract_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_constant_expression());
}





	
static PyObject * PyCAst_new_equality_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::equality_expression_item");
    PyCAst_object_equality_expression_item *self;
    self = (PyCAst_object_equality_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_equality_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::equality_expression_item");
    PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_equality_expression_item(PyCAst_object_equality_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::equality_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_relational_expression* _arg_relational_expression=(PyCAst_object_relational_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_relational_expression==Py_None)
	{
		Py_DECREF(_arg_relational_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::equality_expression_item>(new CAst::equality_expression_item(_arg_token->_p_cast_object,_arg_relational_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_equality_expression_item_code(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_equality_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_equality_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_equality_expression_item_token(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_equality_expression_item_relational_expression(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_relational_expression());
}





	
static PyObject * PyCAst_new_equality_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::equality_expression");
    PyCAst_object_equality_expression *self;
    self = (PyCAst_object_equality_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_equality_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::equality_expression");
    PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_equality_expression(PyCAst_object_equality_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::equality_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::equality_expression>(new CAst::equality_expression());
    return 0;
}

static PyObject *PyCAst_getter_equality_expression_code(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_equality_expression_isNull(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_equality_expression_refCount(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_equality_expression_size(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_equality_expression(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_equality_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::equality_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_primary_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::primary_expression");
    PyCAst_object_primary_expression *self;
    self = (PyCAst_object_primary_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_primary_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::primary_expression");
    PyCAst_object_primary_expression *self=(PyCAst_object_primary_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_primary_expression_code(PyObject *_self)
{
	PyCAst_object_primary_expression *self=(PyCAst_object_primary_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_primary_expression_isNull(PyObject *_self)
{
	PyCAst_object_primary_expression *self=(PyCAst_object_primary_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_primary_expression_refCount(PyObject *_self)
{
	PyCAst_object_primary_expression *self=(PyCAst_object_primary_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_primary_expression_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::primary_expression_1");
    PyCAst_object_primary_expression_1 *self;
    self = (PyCAst_object_primary_expression_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_primary_expression_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::primary_expression_1");
    PyCAst_object_primary_expression_1 *self=(PyCAst_object_primary_expression_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_primary_expression_1(PyCAst_object_primary_expression_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::primary_expression_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::primary_expression_1>(new CAst::primary_expression_1(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_primary_expression_1_code(PyObject *_self)
{
	PyCAst_object_primary_expression_1 *self=(PyCAst_object_primary_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_primary_expression_1_isNull(PyObject *_self)
{
	PyCAst_object_primary_expression_1 *self=(PyCAst_object_primary_expression_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_primary_expression_1_refCount(PyObject *_self)
{
	PyCAst_object_primary_expression_1 *self=(PyCAst_object_primary_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_primary_expression_1_token(PyObject *_self)
{
	PyCAst_object_primary_expression_1 *self=(PyCAst_object_primary_expression_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}



	
static PyObject * PyCAst_new_primary_expression_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::primary_expression_2");
    PyCAst_object_primary_expression_2 *self;
    self = (PyCAst_object_primary_expression_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_primary_expression_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::primary_expression_2");
    PyCAst_object_primary_expression_2 *self=(PyCAst_object_primary_expression_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_primary_expression_2(PyCAst_object_primary_expression_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::primary_expression_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::primary_expression_2>(new CAst::primary_expression_2(_arg_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_primary_expression_2_code(PyObject *_self)
{
	PyCAst_object_primary_expression_2 *self=(PyCAst_object_primary_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_primary_expression_2_isNull(PyObject *_self)
{
	PyCAst_object_primary_expression_2 *self=(PyCAst_object_primary_expression_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_primary_expression_2_refCount(PyObject *_self)
{
	PyCAst_object_primary_expression_2 *self=(PyCAst_object_primary_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_primary_expression_2_expression(PyObject *_self)
{
	PyCAst_object_primary_expression_2 *self=(PyCAst_object_primary_expression_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}





	
static PyObject * PyCAst_new_declaration_specifiers_item_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration_specifiers_item_1");
    PyCAst_object_declaration_specifiers_item_1 *self;
    self = (PyCAst_object_declaration_specifiers_item_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration_specifiers_item_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration_specifiers_item_1");
    PyCAst_object_declaration_specifiers_item_1 *self=(PyCAst_object_declaration_specifiers_item_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declaration_specifiers_item_1(PyCAst_object_declaration_specifiers_item_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declaration_specifiers_item_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_storage_class_specifier* _arg_storage_class_specifier=(PyCAst_object_storage_class_specifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_storage_class_specifier==Py_None)
	{
		Py_DECREF(_arg_storage_class_specifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item_1>(new CAst::declaration_specifiers_item_1(_arg_storage_class_specifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_declaration_specifiers_item_1_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_1 *self=(PyCAst_object_declaration_specifiers_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_1_isNull(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_1 *self=(PyCAst_object_declaration_specifiers_item_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_specifiers_item_1_refCount(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_1 *self=(PyCAst_object_declaration_specifiers_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_1_storage_class_specifier(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_1 *self=(PyCAst_object_declaration_specifiers_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_storage_class_specifier());
}



	
static PyObject * PyCAst_new_declaration_specifiers_item_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration_specifiers_item_2");
    PyCAst_object_declaration_specifiers_item_2 *self;
    self = (PyCAst_object_declaration_specifiers_item_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration_specifiers_item_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration_specifiers_item_2");
    PyCAst_object_declaration_specifiers_item_2 *self=(PyCAst_object_declaration_specifiers_item_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declaration_specifiers_item_2(PyCAst_object_declaration_specifiers_item_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declaration_specifiers_item_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_specifier* _arg_type_specifier=(PyCAst_object_type_specifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_specifier==Py_None)
	{
		Py_DECREF(_arg_type_specifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item_2>(new CAst::declaration_specifiers_item_2(_arg_type_specifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_declaration_specifiers_item_2_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_2 *self=(PyCAst_object_declaration_specifiers_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_2_isNull(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_2 *self=(PyCAst_object_declaration_specifiers_item_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_specifiers_item_2_refCount(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_2 *self=(PyCAst_object_declaration_specifiers_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_2_type_specifier(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_2 *self=(PyCAst_object_declaration_specifiers_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_specifier());
}



	
static PyObject * PyCAst_new_declaration_specifiers_item_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration_specifiers_item_3");
    PyCAst_object_declaration_specifiers_item_3 *self;
    self = (PyCAst_object_declaration_specifiers_item_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration_specifiers_item_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration_specifiers_item_3");
    PyCAst_object_declaration_specifiers_item_3 *self=(PyCAst_object_declaration_specifiers_item_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declaration_specifiers_item_3(PyCAst_object_declaration_specifiers_item_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declaration_specifiers_item_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_qualifier* _arg_type_qualifier=(PyCAst_object_type_qualifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_qualifier==Py_None)
	{
		Py_DECREF(_arg_type_qualifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item_3>(new CAst::declaration_specifiers_item_3(_arg_type_qualifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_declaration_specifiers_item_3_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_3 *self=(PyCAst_object_declaration_specifiers_item_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_3_isNull(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_3 *self=(PyCAst_object_declaration_specifiers_item_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_specifiers_item_3_refCount(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_3 *self=(PyCAst_object_declaration_specifiers_item_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_3_type_qualifier(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item_3 *self=(PyCAst_object_declaration_specifiers_item_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_qualifier());
}




	
static PyObject * PyCAst_new_declaration_specifiers(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration_specifiers");
    PyCAst_object_declaration_specifiers *self;
    self = (PyCAst_object_declaration_specifiers*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration_specifiers(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration_specifiers");
    PyCAst_object_declaration_specifiers *self=(PyCAst_object_declaration_specifiers*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declaration_specifiers(PyCAst_object_declaration_specifiers *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declaration_specifiers with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers>(new CAst::declaration_specifiers());
    return 0;
}

static PyObject *PyCAst_getter_declaration_specifiers_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers *self=(PyCAst_object_declaration_specifiers*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_isNull(PyObject *_self)
{
	PyCAst_object_declaration_specifiers *self=(PyCAst_object_declaration_specifiers*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_specifiers_refCount(PyObject *_self)
{
	PyCAst_object_declaration_specifiers *self=(PyCAst_object_declaration_specifiers*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_size(PyObject *_self)
{
	PyCAst_object_declaration_specifiers *self=(PyCAst_object_declaration_specifiers*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_declaration_specifiers *self=(PyCAst_object_declaration_specifiers*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_declaration_specifiers(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_declaration_specifiers *self=(PyCAst_object_declaration_specifiers*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::declaration_specifiers_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_declaration_specifiers_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration_specifiers_item");
    PyCAst_object_declaration_specifiers_item *self;
    self = (PyCAst_object_declaration_specifiers_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration_specifiers_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration_specifiers_item");
    PyCAst_object_declaration_specifiers_item *self=(PyCAst_object_declaration_specifiers_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item *self=(PyCAst_object_declaration_specifiers_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_specifiers_item_isNull(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item *self=(PyCAst_object_declaration_specifiers_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_specifiers_item_refCount(PyObject *_self)
{
	PyCAst_object_declaration_specifiers_item *self=(PyCAst_object_declaration_specifiers_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}





	
static PyObject * PyCAst_new_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration");
    PyCAst_object_declaration *self;
    self = (PyCAst_object_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration");
    PyCAst_object_declaration *self=(PyCAst_object_declaration*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declaration(PyCAst_object_declaration *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declaration with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declaration_specifiers* _arg_declaration_specifiers=(PyCAst_object_declaration_specifiers*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declaration_specifiers==Py_None)
	{
		Py_DECREF(_arg_declaration_specifiers);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_init_declarator_list* _arg_init_declarator_list=(PyCAst_object_init_declarator_list*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_init_declarator_list==Py_None)
	{
		Py_DECREF(_arg_init_declarator_list);
		_arg_init_declarator_list=(PyCAst_object_init_declarator_list*)PyCAst_new_init_declarator_list(&PyCAst_type_init_declarator_list,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declaration>(new CAst::declaration(_arg_declaration_specifiers->_p_cast_object,_arg_init_declarator_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_declaration_code(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_isNull(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_refCount(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declaration_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration_specifiers());
}

static PyObject *PyCAst_getter_declaration_init_declarator_list(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_init_declarator_list());
}





	
static PyObject * PyCAst_new_direct_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_declarator");
    PyCAst_object_direct_declarator *self;
    self = (PyCAst_object_direct_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_declarator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_declarator");
    PyCAst_object_direct_declarator *self=(PyCAst_object_direct_declarator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_direct_declarator_code(PyObject *_self)
{
	PyCAst_object_direct_declarator *self=(PyCAst_object_direct_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_declarator_isNull(PyObject *_self)
{
	PyCAst_object_direct_declarator *self=(PyCAst_object_direct_declarator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_declarator_refCount(PyObject *_self)
{
	PyCAst_object_direct_declarator *self=(PyCAst_object_direct_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_direct_declarator_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_declarator_1");
    PyCAst_object_direct_declarator_1 *self;
    self = (PyCAst_object_direct_declarator_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_declarator_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_declarator_1");
    PyCAst_object_direct_declarator_1 *self=(PyCAst_object_direct_declarator_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_declarator_1(PyCAst_object_direct_declarator_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_declarator_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declarator* _arg_declarator=(PyCAst_object_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declarator==Py_None)
	{
		Py_DECREF(_arg_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_1>(new CAst::direct_declarator_1(_arg_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_declarator_1_code(PyObject *_self)
{
	PyCAst_object_direct_declarator_1 *self=(PyCAst_object_direct_declarator_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_declarator_1_isNull(PyObject *_self)
{
	PyCAst_object_direct_declarator_1 *self=(PyCAst_object_direct_declarator_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_declarator_1_refCount(PyObject *_self)
{
	PyCAst_object_direct_declarator_1 *self=(PyCAst_object_direct_declarator_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_declarator_1_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator_1 *self=(PyCAst_object_direct_declarator_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declarator());
}



	
static PyObject * PyCAst_new_direct_declarator_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_declarator_2");
    PyCAst_object_direct_declarator_2 *self;
    self = (PyCAst_object_direct_declarator_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_declarator_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_declarator_2");
    PyCAst_object_direct_declarator_2 *self=(PyCAst_object_direct_declarator_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_declarator_2(PyCAst_object_direct_declarator_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_declarator_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_direct_declarator* _arg_direct_declarator=(PyCAst_object_direct_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_direct_declarator==Py_None)
	{
		Py_DECREF(_arg_direct_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_constant_expression* _arg_constant_expression=(PyCAst_object_constant_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_constant_expression==Py_None)
	{
		Py_DECREF(_arg_constant_expression);
		_arg_constant_expression=(PyCAst_object_constant_expression*)PyCAst_new_constant_expression(&PyCAst_type_constant_expression,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_2>(new CAst::direct_declarator_2(_arg_direct_declarator->_p_cast_object,_arg_constant_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_declarator_2_code(PyObject *_self)
{
	PyCAst_object_direct_declarator_2 *self=(PyCAst_object_direct_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_declarator_2_isNull(PyObject *_self)
{
	PyCAst_object_direct_declarator_2 *self=(PyCAst_object_direct_declarator_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_declarator_2_refCount(PyObject *_self)
{
	PyCAst_object_direct_declarator_2 *self=(PyCAst_object_direct_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_declarator_2_direct_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator_2 *self=(PyCAst_object_direct_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_direct_declarator());
}

static PyObject *PyCAst_getter_direct_declarator_2_constant_expression(PyObject *_self)
{
	PyCAst_object_direct_declarator_2 *self=(PyCAst_object_direct_declarator_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_constant_expression());
}



	
static PyObject * PyCAst_new_direct_declarator_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_declarator_3");
    PyCAst_object_direct_declarator_3 *self;
    self = (PyCAst_object_direct_declarator_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_declarator_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_declarator_3");
    PyCAst_object_direct_declarator_3 *self=(PyCAst_object_direct_declarator_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_declarator_3(PyCAst_object_direct_declarator_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_declarator_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_direct_declarator* _arg_direct_declarator=(PyCAst_object_direct_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_direct_declarator==Py_None)
	{
		Py_DECREF(_arg_direct_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_parameter_type_list* _arg_parameter_type_list=(PyCAst_object_parameter_type_list*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_parameter_type_list==Py_None)
	{
		Py_DECREF(_arg_parameter_type_list);
		_arg_parameter_type_list=(PyCAst_object_parameter_type_list*)PyCAst_new_parameter_type_list(&PyCAst_type_parameter_type_list,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_3>(new CAst::direct_declarator_3(_arg_direct_declarator->_p_cast_object,_arg_parameter_type_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_declarator_3_code(PyObject *_self)
{
	PyCAst_object_direct_declarator_3 *self=(PyCAst_object_direct_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_declarator_3_isNull(PyObject *_self)
{
	PyCAst_object_direct_declarator_3 *self=(PyCAst_object_direct_declarator_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_declarator_3_refCount(PyObject *_self)
{
	PyCAst_object_direct_declarator_3 *self=(PyCAst_object_direct_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_declarator_3_direct_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator_3 *self=(PyCAst_object_direct_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_direct_declarator());
}

static PyObject *PyCAst_getter_direct_declarator_3_parameter_type_list(PyObject *_self)
{
	PyCAst_object_direct_declarator_3 *self=(PyCAst_object_direct_declarator_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_parameter_type_list());
}



	
static PyObject * PyCAst_new_direct_declarator_4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_declarator_4");
    PyCAst_object_direct_declarator_4 *self;
    self = (PyCAst_object_direct_declarator_4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_declarator_4(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_declarator_4");
    PyCAst_object_direct_declarator_4 *self=(PyCAst_object_direct_declarator_4*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_declarator_4(PyCAst_object_direct_declarator_4 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_declarator_4 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_direct_declarator* _arg_direct_declarator=(PyCAst_object_direct_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_direct_declarator==Py_None)
	{
		Py_DECREF(_arg_direct_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_identifier_list* _arg_identifier_list=(PyCAst_object_identifier_list*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_identifier_list==Py_None)
	{
		Py_DECREF(_arg_identifier_list);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_4>(new CAst::direct_declarator_4(_arg_direct_declarator->_p_cast_object,_arg_identifier_list->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_declarator_4_code(PyObject *_self)
{
	PyCAst_object_direct_declarator_4 *self=(PyCAst_object_direct_declarator_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_declarator_4_isNull(PyObject *_self)
{
	PyCAst_object_direct_declarator_4 *self=(PyCAst_object_direct_declarator_4*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_declarator_4_refCount(PyObject *_self)
{
	PyCAst_object_direct_declarator_4 *self=(PyCAst_object_direct_declarator_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_declarator_4_direct_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator_4 *self=(PyCAst_object_direct_declarator_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_direct_declarator());
}

static PyObject *PyCAst_getter_direct_declarator_4_identifier_list(PyObject *_self)
{
	PyCAst_object_direct_declarator_4 *self=(PyCAst_object_direct_declarator_4*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_identifier_list());
}



	
static PyObject * PyCAst_new_direct_declarator_5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::direct_declarator_5");
    PyCAst_object_direct_declarator_5 *self;
    self = (PyCAst_object_direct_declarator_5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_direct_declarator_5(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::direct_declarator_5");
    PyCAst_object_direct_declarator_5 *self=(PyCAst_object_direct_declarator_5*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_direct_declarator_5(PyCAst_object_direct_declarator_5 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::direct_declarator_5 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::direct_declarator_5>(new CAst::direct_declarator_5(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_direct_declarator_5_code(PyObject *_self)
{
	PyCAst_object_direct_declarator_5 *self=(PyCAst_object_direct_declarator_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_direct_declarator_5_isNull(PyObject *_self)
{
	PyCAst_object_direct_declarator_5 *self=(PyCAst_object_direct_declarator_5*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_direct_declarator_5_refCount(PyObject *_self)
{
	PyCAst_object_direct_declarator_5 *self=(PyCAst_object_direct_declarator_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_direct_declarator_5_token(PyObject *_self)
{
	PyCAst_object_direct_declarator_5 *self=(PyCAst_object_direct_declarator_5*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}





	
static PyObject * PyCAst_new_logical_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::logical_and_expression_item");
    PyCAst_object_logical_and_expression_item *self;
    self = (PyCAst_object_logical_and_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_logical_and_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::logical_and_expression_item");
    PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_logical_and_expression_item(PyCAst_object_logical_and_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::logical_and_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_inclusive_or_expression* _arg_inclusive_or_expression=(PyCAst_object_inclusive_or_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_inclusive_or_expression==Py_None)
	{
		Py_DECREF(_arg_inclusive_or_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::logical_and_expression_item>(new CAst::logical_and_expression_item(_arg_token->_p_cast_object,_arg_inclusive_or_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_logical_and_expression_item_code(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_logical_and_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_logical_and_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_logical_and_expression_item_token(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_logical_and_expression_item_inclusive_or_expression(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_inclusive_or_expression());
}





	
static PyObject * PyCAst_new_logical_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::logical_and_expression");
    PyCAst_object_logical_and_expression *self;
    self = (PyCAst_object_logical_and_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_logical_and_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::logical_and_expression");
    PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_logical_and_expression(PyCAst_object_logical_and_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::logical_and_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::logical_and_expression>(new CAst::logical_and_expression());
    return 0;
}

static PyObject *PyCAst_getter_logical_and_expression_code(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_logical_and_expression_isNull(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_logical_and_expression_refCount(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_logical_and_expression_size(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_logical_and_expression(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_logical_and_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::logical_and_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_init_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::init_declarator_list_item");
    PyCAst_object_init_declarator_list_item *self;
    self = (PyCAst_object_init_declarator_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_init_declarator_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::init_declarator_list_item");
    PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_init_declarator_list_item(PyCAst_object_init_declarator_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::init_declarator_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_init_declarator* _arg_init_declarator=(PyCAst_object_init_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_init_declarator==Py_None)
	{
		Py_DECREF(_arg_init_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::init_declarator_list_item>(new CAst::init_declarator_list_item(_arg_token->_p_cast_object,_arg_init_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_init_declarator_list_item_code(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_init_declarator_list_item_isNull(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_init_declarator_list_item_refCount(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_init_declarator_list_item_token(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_init_declarator_list_item_init_declarator(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_init_declarator());
}





	
static PyObject * PyCAst_new_init_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::init_declarator_list");
    PyCAst_object_init_declarator_list *self;
    self = (PyCAst_object_init_declarator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_init_declarator_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::init_declarator_list");
    PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_init_declarator_list(PyCAst_object_init_declarator_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::init_declarator_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::init_declarator_list>(new CAst::init_declarator_list());
    return 0;
}

static PyObject *PyCAst_getter_init_declarator_list_code(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_init_declarator_list_isNull(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_init_declarator_list_refCount(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_init_declarator_list_size(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_init_declarator_list(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_init_declarator_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::init_declarator_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_shift_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::shift_expression_item");
    PyCAst_object_shift_expression_item *self;
    self = (PyCAst_object_shift_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_shift_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::shift_expression_item");
    PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_shift_expression_item(PyCAst_object_shift_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::shift_expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_additive_expression* _arg_additive_expression=(PyCAst_object_additive_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_additive_expression==Py_None)
	{
		Py_DECREF(_arg_additive_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::shift_expression_item>(new CAst::shift_expression_item(_arg_token->_p_cast_object,_arg_additive_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_shift_expression_item_code(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_shift_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_shift_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_shift_expression_item_token(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_shift_expression_item_additive_expression(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_additive_expression());
}





	
static PyObject * PyCAst_new_shift_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::shift_expression");
    PyCAst_object_shift_expression *self;
    self = (PyCAst_object_shift_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_shift_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::shift_expression");
    PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_shift_expression(PyCAst_object_shift_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::shift_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::shift_expression>(new CAst::shift_expression());
    return 0;
}

static PyObject *PyCAst_getter_shift_expression_code(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_shift_expression_isNull(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_shift_expression_refCount(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_shift_expression_size(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_shift_expression(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_shift_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::shift_expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_identifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::identifier_list_item");
    PyCAst_object_identifier_list_item *self;
    self = (PyCAst_object_identifier_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_identifier_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::identifier_list_item");
    PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_identifier_list_item(PyCAst_object_identifier_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::identifier_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token1=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token1==Py_None)
	{
		Py_DECREF(_arg_token1);
		_arg_token1=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token2=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token2==Py_None)
	{
		Py_DECREF(_arg_token2);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::identifier_list_item>(new CAst::identifier_list_item(_arg_token1->_p_cast_object,_arg_token2->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_identifier_list_item_code(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_identifier_list_item_isNull(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_identifier_list_item_refCount(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_identifier_list_item_token1(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token1());
}

static PyObject *PyCAst_getter_identifier_list_item_token2(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token2());
}





	
static PyObject * PyCAst_new_identifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::identifier_list");
    PyCAst_object_identifier_list *self;
    self = (PyCAst_object_identifier_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_identifier_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::identifier_list");
    PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_identifier_list(PyCAst_object_identifier_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::identifier_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::identifier_list>(new CAst::identifier_list());
    return 0;
}

static PyObject *PyCAst_getter_identifier_list_code(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_identifier_list_isNull(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_identifier_list_refCount(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_identifier_list_size(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_identifier_list(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_identifier_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::identifier_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_jump_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::jump_statement");
    PyCAst_object_jump_statement *self;
    self = (PyCAst_object_jump_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_jump_statement(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::jump_statement");
    PyCAst_object_jump_statement *self=(PyCAst_object_jump_statement*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_jump_statement_code(PyObject *_self)
{
	PyCAst_object_jump_statement *self=(PyCAst_object_jump_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_jump_statement_isNull(PyObject *_self)
{
	PyCAst_object_jump_statement *self=(PyCAst_object_jump_statement*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_jump_statement_refCount(PyObject *_self)
{
	PyCAst_object_jump_statement *self=(PyCAst_object_jump_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_jump_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::jump_statement_1");
    PyCAst_object_jump_statement_1 *self;
    self = (PyCAst_object_jump_statement_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_jump_statement_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::jump_statement_1");
    PyCAst_object_jump_statement_1 *self=(PyCAst_object_jump_statement_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_jump_statement_1(PyCAst_object_jump_statement_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::jump_statement_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_expression* _arg_expression=(PyCAst_object_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_expression==Py_None)
	{
		Py_DECREF(_arg_expression);
		_arg_expression=(PyCAst_object_expression*)PyCAst_new_expression(&PyCAst_type_expression,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::jump_statement_1>(new CAst::jump_statement_1(_arg_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_jump_statement_1_code(PyObject *_self)
{
	PyCAst_object_jump_statement_1 *self=(PyCAst_object_jump_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_jump_statement_1_isNull(PyObject *_self)
{
	PyCAst_object_jump_statement_1 *self=(PyCAst_object_jump_statement_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_jump_statement_1_refCount(PyObject *_self)
{
	PyCAst_object_jump_statement_1 *self=(PyCAst_object_jump_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_jump_statement_1_expression(PyObject *_self)
{
	PyCAst_object_jump_statement_1 *self=(PyCAst_object_jump_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_expression());
}



	
static PyObject * PyCAst_new_jump_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::jump_statement_2");
    PyCAst_object_jump_statement_2 *self;
    self = (PyCAst_object_jump_statement_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_jump_statement_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::jump_statement_2");
    PyCAst_object_jump_statement_2 *self=(PyCAst_object_jump_statement_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_jump_statement_2(PyCAst_object_jump_statement_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::jump_statement_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::jump_statement_2>(new CAst::jump_statement_2(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_jump_statement_2_code(PyObject *_self)
{
	PyCAst_object_jump_statement_2 *self=(PyCAst_object_jump_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_jump_statement_2_isNull(PyObject *_self)
{
	PyCAst_object_jump_statement_2 *self=(PyCAst_object_jump_statement_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_jump_statement_2_refCount(PyObject *_self)
{
	PyCAst_object_jump_statement_2 *self=(PyCAst_object_jump_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_jump_statement_2_token(PyObject *_self)
{
	PyCAst_object_jump_statement_2 *self=(PyCAst_object_jump_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}



	
static PyObject * PyCAst_new_jump_statement_3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::jump_statement_3");
    PyCAst_object_jump_statement_3 *self;
    self = (PyCAst_object_jump_statement_3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_jump_statement_3(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::jump_statement_3");
    PyCAst_object_jump_statement_3 *self=(PyCAst_object_jump_statement_3*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_jump_statement_3(PyCAst_object_jump_statement_3 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::jump_statement_3 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::jump_statement_3>(new CAst::jump_statement_3(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_jump_statement_3_code(PyObject *_self)
{
	PyCAst_object_jump_statement_3 *self=(PyCAst_object_jump_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_jump_statement_3_isNull(PyObject *_self)
{
	PyCAst_object_jump_statement_3 *self=(PyCAst_object_jump_statement_3*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_jump_statement_3_refCount(PyObject *_self)
{
	PyCAst_object_jump_statement_3 *self=(PyCAst_object_jump_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_jump_statement_3_token(PyObject *_self)
{
	PyCAst_object_jump_statement_3 *self=(PyCAst_object_jump_statement_3*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}





	
static PyObject * PyCAst_new_struct_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::struct_declarator");
    PyCAst_object_struct_declarator *self;
    self = (PyCAst_object_struct_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_struct_declarator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::struct_declarator");
    PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_struct_declarator(PyCAst_object_struct_declarator *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::struct_declarator with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=3)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 3 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declarator* _arg_declarator=(PyCAst_object_declarator*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declarator==Py_None)
	{
		Py_DECREF(_arg_declarator);
		_arg_declarator=(PyCAst_object_declarator*)PyCAst_new_declarator(&PyCAst_type_declarator,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_constant_expression* _arg_constant_expression=(PyCAst_object_constant_expression*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_constant_expression==Py_None)
	{
		Py_DECREF(_arg_constant_expression);
		_arg_constant_expression=(PyCAst_object_constant_expression*)PyCAst_new_constant_expression(&PyCAst_type_constant_expression,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::struct_declarator>(new CAst::struct_declarator(_arg_declarator->_p_cast_object,_arg_token->_p_cast_object,_arg_constant_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_struct_declarator_code(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_struct_declarator_isNull(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_struct_declarator_refCount(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_struct_declarator_declarator(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declarator());
}

static PyObject *PyCAst_getter_struct_declarator_token(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_struct_declarator_constant_expression(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_constant_expression());
}





	
static PyObject * PyCAst_new_function_definition(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::function_definition");
    PyCAst_object_function_definition *self;
    self = (PyCAst_object_function_definition*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_function_definition(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::function_definition");
    PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_function_definition(PyCAst_object_function_definition *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::function_definition with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=4)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 4 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declaration_specifiers* _arg_declaration_specifiers=(PyCAst_object_declaration_specifiers*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declaration_specifiers==Py_None)
	{
		Py_DECREF(_arg_declaration_specifiers);
		_arg_declaration_specifiers=(PyCAst_object_declaration_specifiers*)PyCAst_new_declaration_specifiers(&PyCAst_type_declaration_specifiers,NULL,NULL);
	}
    	PyCAst_object_declarator* _arg_declarator=(PyCAst_object_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_declarator==Py_None)
	{
		Py_DECREF(_arg_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}
    	PyCAst_object_declaration_list* _arg_declaration_list=(PyCAst_object_declaration_list*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_declaration_list==Py_None)
	{
		Py_DECREF(_arg_declaration_list);
		_arg_declaration_list=(PyCAst_object_declaration_list*)PyCAst_new_declaration_list(&PyCAst_type_declaration_list,NULL,NULL);
	}
    	PyCAst_object_compound_statement* _arg_compound_statement=(PyCAst_object_compound_statement*)PyTuple_GetItem(args,3);
	if((PyObject*)_arg_compound_statement==Py_None)
	{
		Py_DECREF(_arg_compound_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 4 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::function_definition>(new CAst::function_definition(_arg_declaration_specifiers->_p_cast_object,_arg_declarator->_p_cast_object,_arg_declaration_list->_p_cast_object,_arg_compound_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_function_definition_code(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_function_definition_isNull(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_function_definition_refCount(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_function_definition_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration_specifiers());
}

static PyObject *PyCAst_getter_function_definition_declarator(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declarator());
}

static PyObject *PyCAst_getter_function_definition_declaration_list(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration_list());
}

static PyObject *PyCAst_getter_function_definition_compound_statement(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_compound_statement());
}





	
static PyObject * PyCAst_new_parameter_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::parameter_list_item");
    PyCAst_object_parameter_list_item *self;
    self = (PyCAst_object_parameter_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_parameter_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::parameter_list_item");
    PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_parameter_list_item(PyCAst_object_parameter_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::parameter_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_parameter_declaration* _arg_parameter_declaration=(PyCAst_object_parameter_declaration*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_parameter_declaration==Py_None)
	{
		Py_DECREF(_arg_parameter_declaration);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::parameter_list_item>(new CAst::parameter_list_item(_arg_token->_p_cast_object,_arg_parameter_declaration->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_parameter_list_item_code(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_parameter_list_item_isNull(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_parameter_list_item_refCount(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_parameter_list_item_token(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_parameter_list_item_parameter_declaration(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_parameter_declaration());
}





	
static PyObject * PyCAst_new_parameter_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::parameter_list");
    PyCAst_object_parameter_list *self;
    self = (PyCAst_object_parameter_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_parameter_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::parameter_list");
    PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_parameter_list(PyCAst_object_parameter_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::parameter_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::parameter_list>(new CAst::parameter_list());
    return 0;
}

static PyObject *PyCAst_getter_parameter_list_code(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_parameter_list_isNull(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_parameter_list_refCount(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_parameter_list_size(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_parameter_list(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_parameter_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::parameter_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_enum_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::enum_specifier");
    PyCAst_object_enum_specifier *self;
    self = (PyCAst_object_enum_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_enum_specifier(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::enum_specifier");
    PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_enum_specifier(PyCAst_object_enum_specifier *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::enum_specifier with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=4)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 4 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token1=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token1==Py_None)
	{
		Py_DECREF(_arg_token1);
		_arg_token1=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token2=(PyCAst_object_token*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_token2==Py_None)
	{
		Py_DECREF(_arg_token2);
		_arg_token2=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_enumerator_list* _arg_enumerator_list=(PyCAst_object_enumerator_list*)PyTuple_GetItem(args,2);
	if((PyObject*)_arg_enumerator_list==Py_None)
	{
		Py_DECREF(_arg_enumerator_list);
		_arg_enumerator_list=(PyCAst_object_enumerator_list*)PyCAst_new_enumerator_list(&PyCAst_type_enumerator_list,NULL,NULL);
	}
    	PyCAst_object_token* _arg_token3=(PyCAst_object_token*)PyTuple_GetItem(args,3);
	if((PyObject*)_arg_token3==Py_None)
	{
		Py_DECREF(_arg_token3);
		_arg_token3=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::enum_specifier>(new CAst::enum_specifier(_arg_token1->_p_cast_object,_arg_token2->_p_cast_object,_arg_enumerator_list->_p_cast_object,_arg_token3->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_enum_specifier_code(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_enum_specifier_isNull(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_enum_specifier_refCount(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_enum_specifier_token1(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token1());
}

static PyObject *PyCAst_getter_enum_specifier_token2(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token2());
}

static PyObject *PyCAst_getter_enum_specifier_enumerator_list(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_enumerator_list());
}

static PyObject *PyCAst_getter_enum_specifier_token3(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token3());
}





	
static PyObject * PyCAst_new_type_qualifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::type_qualifier");
    PyCAst_object_type_qualifier *self;
    self = (PyCAst_object_type_qualifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_type_qualifier(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::type_qualifier");
    PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_type_qualifier(PyCAst_object_type_qualifier *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::type_qualifier with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::type_qualifier>(new CAst::type_qualifier(_arg_token->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_type_qualifier_code(PyObject *_self)
{
	PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_type_qualifier_isNull(PyObject *_self)
{
	PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_type_qualifier_refCount(PyObject *_self)
{
	PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_type_qualifier_token(PyObject *_self)
{
	PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}





	
static PyObject * PyCAst_new_enumerator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::enumerator_list_item");
    PyCAst_object_enumerator_list_item *self;
    self = (PyCAst_object_enumerator_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_enumerator_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::enumerator_list_item");
    PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_enumerator_list_item(PyCAst_object_enumerator_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::enumerator_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_enumerator* _arg_enumerator=(PyCAst_object_enumerator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_enumerator==Py_None)
	{
		Py_DECREF(_arg_enumerator);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::enumerator_list_item>(new CAst::enumerator_list_item(_arg_token->_p_cast_object,_arg_enumerator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_enumerator_list_item_code(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_enumerator_list_item_isNull(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_enumerator_list_item_refCount(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_enumerator_list_item_token(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_enumerator_list_item_enumerator(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_enumerator());
}





	
static PyObject * PyCAst_new_enumerator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::enumerator_list");
    PyCAst_object_enumerator_list *self;
    self = (PyCAst_object_enumerator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_enumerator_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::enumerator_list");
    PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_enumerator_list(PyCAst_object_enumerator_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::enumerator_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::enumerator_list>(new CAst::enumerator_list());
    return 0;
}

static PyObject *PyCAst_getter_enumerator_list_code(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_enumerator_list_isNull(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_enumerator_list_refCount(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_enumerator_list_size(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_enumerator_list(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_enumerator_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::enumerator_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_labeled_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::labeled_statement");
    PyCAst_object_labeled_statement *self;
    self = (PyCAst_object_labeled_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_labeled_statement(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::labeled_statement");
    PyCAst_object_labeled_statement *self=(PyCAst_object_labeled_statement*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_labeled_statement_code(PyObject *_self)
{
	PyCAst_object_labeled_statement *self=(PyCAst_object_labeled_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_labeled_statement_isNull(PyObject *_self)
{
	PyCAst_object_labeled_statement *self=(PyCAst_object_labeled_statement*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_labeled_statement_refCount(PyObject *_self)
{
	PyCAst_object_labeled_statement *self=(PyCAst_object_labeled_statement*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}




	
static PyObject * PyCAst_new_labeled_statement_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::labeled_statement_1");
    PyCAst_object_labeled_statement_1 *self;
    self = (PyCAst_object_labeled_statement_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_labeled_statement_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::labeled_statement_1");
    PyCAst_object_labeled_statement_1 *self=(PyCAst_object_labeled_statement_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_labeled_statement_1(PyCAst_object_labeled_statement_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::labeled_statement_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_constant_expression* _arg_constant_expression=(PyCAst_object_constant_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_constant_expression==Py_None)
	{
		Py_DECREF(_arg_constant_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_statement* _arg_statement=(PyCAst_object_statement*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_statement==Py_None)
	{
		Py_DECREF(_arg_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::labeled_statement_1>(new CAst::labeled_statement_1(_arg_constant_expression->_p_cast_object,_arg_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_labeled_statement_1_code(PyObject *_self)
{
	PyCAst_object_labeled_statement_1 *self=(PyCAst_object_labeled_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_labeled_statement_1_isNull(PyObject *_self)
{
	PyCAst_object_labeled_statement_1 *self=(PyCAst_object_labeled_statement_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_labeled_statement_1_refCount(PyObject *_self)
{
	PyCAst_object_labeled_statement_1 *self=(PyCAst_object_labeled_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_labeled_statement_1_constant_expression(PyObject *_self)
{
	PyCAst_object_labeled_statement_1 *self=(PyCAst_object_labeled_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_constant_expression());
}

static PyObject *PyCAst_getter_labeled_statement_1_statement(PyObject *_self)
{
	PyCAst_object_labeled_statement_1 *self=(PyCAst_object_labeled_statement_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement());
}



	
static PyObject * PyCAst_new_labeled_statement_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::labeled_statement_2");
    PyCAst_object_labeled_statement_2 *self;
    self = (PyCAst_object_labeled_statement_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_labeled_statement_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::labeled_statement_2");
    PyCAst_object_labeled_statement_2 *self=(PyCAst_object_labeled_statement_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_labeled_statement_2(PyCAst_object_labeled_statement_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::labeled_statement_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}
    	PyCAst_object_statement* _arg_statement=(PyCAst_object_statement*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_statement==Py_None)
	{
		Py_DECREF(_arg_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::labeled_statement_2>(new CAst::labeled_statement_2(_arg_token->_p_cast_object,_arg_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_labeled_statement_2_code(PyObject *_self)
{
	PyCAst_object_labeled_statement_2 *self=(PyCAst_object_labeled_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_labeled_statement_2_isNull(PyObject *_self)
{
	PyCAst_object_labeled_statement_2 *self=(PyCAst_object_labeled_statement_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_labeled_statement_2_refCount(PyObject *_self)
{
	PyCAst_object_labeled_statement_2 *self=(PyCAst_object_labeled_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_labeled_statement_2_token(PyObject *_self)
{
	PyCAst_object_labeled_statement_2 *self=(PyCAst_object_labeled_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_labeled_statement_2_statement(PyObject *_self)
{
	PyCAst_object_labeled_statement_2 *self=(PyCAst_object_labeled_statement_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement());
}





	
static PyObject * PyCAst_new_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration_list_item");
    PyCAst_object_declaration_list_item *self;
    self = (PyCAst_object_declaration_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration_list_item");
    PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declaration_list_item(PyCAst_object_declaration_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declaration_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_declaration* _arg_declaration=(PyCAst_object_declaration*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_declaration==Py_None)
	{
		Py_DECREF(_arg_declaration);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declaration_list_item>(new CAst::declaration_list_item(_arg_declaration->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_declaration_list_item_code(PyObject *_self)
{
	PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_list_item_isNull(PyObject *_self)
{
	PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_list_item_refCount(PyObject *_self)
{
	PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declaration_list_item_declaration(PyObject *_self)
{
	PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_declaration());
}





	
static PyObject * PyCAst_new_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declaration_list");
    PyCAst_object_declaration_list *self;
    self = (PyCAst_object_declaration_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declaration_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declaration_list");
    PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declaration_list(PyCAst_object_declaration_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declaration_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declaration_list>(new CAst::declaration_list());
    return 0;
}

static PyObject *PyCAst_getter_declaration_list_code(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declaration_list_isNull(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declaration_list_refCount(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declaration_list_size(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_declaration_list(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_declaration_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::declaration_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_specifier_qualifier_list_item_1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::specifier_qualifier_list_item_1");
    PyCAst_object_specifier_qualifier_list_item_1 *self;
    self = (PyCAst_object_specifier_qualifier_list_item_1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_specifier_qualifier_list_item_1(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::specifier_qualifier_list_item_1");
    PyCAst_object_specifier_qualifier_list_item_1 *self=(PyCAst_object_specifier_qualifier_list_item_1*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_specifier_qualifier_list_item_1(PyCAst_object_specifier_qualifier_list_item_1 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::specifier_qualifier_list_item_1 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_qualifier* _arg_type_qualifier=(PyCAst_object_type_qualifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_qualifier==Py_None)
	{
		Py_DECREF(_arg_type_qualifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list_item_1>(new CAst::specifier_qualifier_list_item_1(_arg_type_qualifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_1 *self=(PyCAst_object_specifier_qualifier_list_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_isNull(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_1 *self=(PyCAst_object_specifier_qualifier_list_item_1*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_refCount(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_1 *self=(PyCAst_object_specifier_qualifier_list_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_1_type_qualifier(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_1 *self=(PyCAst_object_specifier_qualifier_list_item_1*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_qualifier());
}



	
static PyObject * PyCAst_new_specifier_qualifier_list_item_2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::specifier_qualifier_list_item_2");
    PyCAst_object_specifier_qualifier_list_item_2 *self;
    self = (PyCAst_object_specifier_qualifier_list_item_2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_specifier_qualifier_list_item_2(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::specifier_qualifier_list_item_2");
    PyCAst_object_specifier_qualifier_list_item_2 *self=(PyCAst_object_specifier_qualifier_list_item_2*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_specifier_qualifier_list_item_2(PyCAst_object_specifier_qualifier_list_item_2 *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::specifier_qualifier_list_item_2 with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_type_specifier* _arg_type_specifier=(PyCAst_object_type_specifier*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_type_specifier==Py_None)
	{
		Py_DECREF(_arg_type_specifier);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list_item_2>(new CAst::specifier_qualifier_list_item_2(_arg_type_specifier->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_2 *self=(PyCAst_object_specifier_qualifier_list_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_isNull(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_2 *self=(PyCAst_object_specifier_qualifier_list_item_2*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_refCount(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_2 *self=(PyCAst_object_specifier_qualifier_list_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_2_type_specifier(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item_2 *self=(PyCAst_object_specifier_qualifier_list_item_2*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_type_specifier());
}




	
static PyObject * PyCAst_new_specifier_qualifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::specifier_qualifier_list");
    PyCAst_object_specifier_qualifier_list *self;
    self = (PyCAst_object_specifier_qualifier_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_specifier_qualifier_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::specifier_qualifier_list");
    PyCAst_object_specifier_qualifier_list *self=(PyCAst_object_specifier_qualifier_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_specifier_qualifier_list(PyCAst_object_specifier_qualifier_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::specifier_qualifier_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list>(new CAst::specifier_qualifier_list());
    return 0;
}

static PyObject *PyCAst_getter_specifier_qualifier_list_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list *self=(PyCAst_object_specifier_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_isNull(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list *self=(PyCAst_object_specifier_qualifier_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_specifier_qualifier_list_refCount(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list *self=(PyCAst_object_specifier_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_size(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list *self=(PyCAst_object_specifier_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_specifier_qualifier_list(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list *self=(PyCAst_object_specifier_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_specifier_qualifier_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_specifier_qualifier_list *self=(PyCAst_object_specifier_qualifier_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::specifier_qualifier_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_specifier_qualifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::specifier_qualifier_list_item");
    PyCAst_object_specifier_qualifier_list_item *self;
    self = (PyCAst_object_specifier_qualifier_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_specifier_qualifier_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::specifier_qualifier_list_item");
    PyCAst_object_specifier_qualifier_list_item *self=(PyCAst_object_specifier_qualifier_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item *self=(PyCAst_object_specifier_qualifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_isNull(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item *self=(PyCAst_object_specifier_qualifier_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_specifier_qualifier_list_item_refCount(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list_item *self=(PyCAst_object_specifier_qualifier_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}





	
static PyObject * PyCAst_new_translation_unit_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::translation_unit_item");
    PyCAst_object_translation_unit_item *self;
    self = (PyCAst_object_translation_unit_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_translation_unit_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::translation_unit_item");
    PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_translation_unit_item(PyCAst_object_translation_unit_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::translation_unit_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_external_declaration* _arg_external_declaration=(PyCAst_object_external_declaration*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_external_declaration==Py_None)
	{
		Py_DECREF(_arg_external_declaration);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::translation_unit_item>(new CAst::translation_unit_item(_arg_external_declaration->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_translation_unit_item_code(PyObject *_self)
{
	PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_translation_unit_item_isNull(PyObject *_self)
{
	PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_translation_unit_item_refCount(PyObject *_self)
{
	PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_translation_unit_item_external_declaration(PyObject *_self)
{
	PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_external_declaration());
}





	
static PyObject * PyCAst_new_translation_unit(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::translation_unit");
    PyCAst_object_translation_unit *self;
    self = (PyCAst_object_translation_unit*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_translation_unit(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::translation_unit");
    PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_translation_unit(PyCAst_object_translation_unit *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::translation_unit with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::translation_unit>(new CAst::translation_unit());
    return 0;
}

static PyObject *PyCAst_getter_translation_unit_code(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_translation_unit_isNull(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_translation_unit_refCount(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_translation_unit_size(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_translation_unit(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_translation_unit(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::translation_unit_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_constant_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::constant_expression");
    PyCAst_object_constant_expression *self;
    self = (PyCAst_object_constant_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_constant_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::constant_expression");
    PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_constant_expression(PyCAst_object_constant_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::constant_expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_conditional_expression* _arg_conditional_expression=(PyCAst_object_conditional_expression*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_conditional_expression==Py_None)
	{
		Py_DECREF(_arg_conditional_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::constant_expression>(new CAst::constant_expression(_arg_conditional_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_constant_expression_code(PyObject *_self)
{
	PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_constant_expression_isNull(PyObject *_self)
{
	PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_constant_expression_refCount(PyObject *_self)
{
	PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_constant_expression_conditional_expression(PyObject *_self)
{
	PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_conditional_expression());
}





	
static PyObject * PyCAst_new_initializer_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::initializer_list_item");
    PyCAst_object_initializer_list_item *self;
    self = (PyCAst_object_initializer_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_initializer_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::initializer_list_item");
    PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_initializer_list_item(PyCAst_object_initializer_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::initializer_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_initializer* _arg_initializer=(PyCAst_object_initializer*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_initializer==Py_None)
	{
		Py_DECREF(_arg_initializer);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::initializer_list_item>(new CAst::initializer_list_item(_arg_token->_p_cast_object,_arg_initializer->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_initializer_list_item_code(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_initializer_list_item_isNull(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_initializer_list_item_refCount(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_initializer_list_item_token(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_initializer_list_item_initializer(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_initializer());
}





	
static PyObject * PyCAst_new_initializer_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::initializer_list");
    PyCAst_object_initializer_list *self;
    self = (PyCAst_object_initializer_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_initializer_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::initializer_list");
    PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_initializer_list(PyCAst_object_initializer_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::initializer_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::initializer_list>(new CAst::initializer_list());
    return 0;
}

static PyObject *PyCAst_getter_initializer_list_code(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_initializer_list_isNull(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_initializer_list_refCount(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_initializer_list_size(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_initializer_list(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_initializer_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::initializer_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_statement_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_list_item");
    PyCAst_object_statement_list_item *self;
    self = (PyCAst_object_statement_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_list_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_list_item");
    PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_list_item(PyCAst_object_statement_list_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_list_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_statement* _arg_statement=(PyCAst_object_statement*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_statement==Py_None)
	{
		Py_DECREF(_arg_statement);
		PyErr_SetString(PyExc_TypeError,"Parameter 1 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_list_item>(new CAst::statement_list_item(_arg_statement->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_statement_list_item_code(PyObject *_self)
{
	PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_list_item_isNull(PyObject *_self)
{
	PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_list_item_refCount(PyObject *_self)
{
	PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_list_item_statement(PyObject *_self)
{
	PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_statement());
}





	
static PyObject * PyCAst_new_statement_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::statement_list");
    PyCAst_object_statement_list *self;
    self = (PyCAst_object_statement_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_statement_list(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::statement_list");
    PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_statement_list(PyCAst_object_statement_list *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::statement_list with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::statement_list>(new CAst::statement_list());
    return 0;
}

static PyObject *PyCAst_getter_statement_list_code(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_statement_list_isNull(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_statement_list_refCount(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_statement_list_size(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_statement_list(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_statement_list(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::statement_list_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::expression_item");
    PyCAst_object_expression_item *self;
    self = (PyCAst_object_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_expression_item(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::expression_item");
    PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_expression_item(PyCAst_object_expression_item *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::expression_item with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_token* _arg_token=(PyCAst_object_token*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_token==Py_None)
	{
		Py_DECREF(_arg_token);
		_arg_token=(PyCAst_object_token*)PyCAst_new_token(&PyCAst_type_token,NULL,NULL);
	}
    	PyCAst_object_assignment_expression* _arg_assignment_expression=(PyCAst_object_assignment_expression*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_assignment_expression==Py_None)
	{
		Py_DECREF(_arg_assignment_expression);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::expression_item>(new CAst::expression_item(_arg_token->_p_cast_object,_arg_assignment_expression->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_expression_item_code(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_expression_item_isNull(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_expression_item_refCount(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_expression_item_token(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_token());
}

static PyObject *PyCAst_getter_expression_item_assignment_expression(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_assignment_expression());
}





	
static PyObject * PyCAst_new_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::expression");
    PyCAst_object_expression *self;
    self = (PyCAst_object_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_expression(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::expression");
    PyCAst_object_expression *self=(PyCAst_object_expression*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_expression(PyCAst_object_expression *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::expression with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=0)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 0 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")



    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::expression>(new CAst::expression());
    return 0;
}

static PyObject *PyCAst_getter_expression_code(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_expression_isNull(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_expression_refCount(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_expression_size(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object->size()
	);
}



static Py_ssize_t PyCAst_list_length_expression(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);
	if(self->_p_cast_object.isNull())return 0;
	return self->_p_cast_object->size();
	
}


static PyObject* PyCAst_list_item_expression(PyObject *_self,Py_ssize_t index)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);
	if(self->_p_cast_object.isNull())Py_RETURN_NONE;
	if(abs(index)>self->_p_cast_object->size()) PyErr_SetString(PyExc_IndexError,"Index out of range");
	CAst::ReferenceCountedAutoPointer<CAst::expression_item> item=self->_p_cast_object->operator[](index);
	
	return CAstToPyCAst(item);
}





	
static PyObject * PyCAst_new_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"new PyCAst::declarator");
    PyCAst_object_declarator *self;
    self = (PyCAst_object_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

	
static void PyCAst_dealloc_declarator(PyObject *_self)
{
    LOG(COL_FG_MAGENTA<<"Deallocating PyCAst::declarator");
    PyCAst_object_declarator *self=(PyCAst_object_declarator*)_self;
    self->_p_cast_object.clear();
    self->ob_type->tp_free((PyObject*)self);
}

	
static int PyCAst_init_declarator(PyCAst_object_declarator *self, PyObject *args, PyObject *kwds)
{
    LOG(COL_FG_CYAN<<"initializing PyCAst::declarator with "<<PyTuple_Size(args)<<" arguments");
	
	if(PyTuple_Size(args)!=2)
	{
		LOG("Detected insufficient arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 2 argument(s).");
		return -1;
	}
	LOG("Parsing Arguments")


    	PyCAst_object_pointer* _arg_pointer=(PyCAst_object_pointer*)PyTuple_GetItem(args,0);
	if((PyObject*)_arg_pointer==Py_None)
	{
		Py_DECREF(_arg_pointer);
		_arg_pointer=(PyCAst_object_pointer*)PyCAst_new_pointer(&PyCAst_type_pointer,NULL,NULL);
	}
    	PyCAst_object_direct_declarator* _arg_direct_declarator=(PyCAst_object_direct_declarator*)PyTuple_GetItem(args,1);
	if((PyObject*)_arg_direct_declarator==Py_None)
	{
		Py_DECREF(_arg_direct_declarator);
		PyErr_SetString(PyExc_TypeError,"Parameter 2 cannot be None");
		return -1;
	}

    self->_p_cast_object=CAst::ReferenceCountedAutoPointer<CAst::declarator>(new CAst::declarator(_arg_pointer->_p_cast_object,_arg_direct_declarator->_p_cast_object));
    return 0;
}

static PyObject *PyCAst_getter_declarator_code(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);
}

static PyObject *PyCAst_getter_declarator_isNull(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);

	
	if(self->_p_cast_object.isNull())	{Py_RETURN_TRUE;}
	else					{Py_RETURN_FALSE;}
}

static PyObject *PyCAst_getter_declarator_refCount(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return PyInt_FromLong
	(
		self->_p_cast_object.refCount()
	);
}

static PyObject *PyCAst_getter_declarator_pointer(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_pointer());
}

static PyObject *PyCAst_getter_declarator_direct_declarator(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
	if(self->_p_cast_object.isNull())
		Py_RETURN_NONE;
	
	return CAstToPyCAst(self->_p_cast_object->p_direct_declarator());
}







static PyObject * parseFile(PyObject *self, PyObject *args)
{
	if(PyTuple_Size(args)!=1)
	{
		LOG("Detected insufficient/excessive arguments")
		PyErr_SetString(PyExc_TypeError,"Insufficient number of arguments. Expecting 1 argument.");
		Py_RETURN_NONE;
	}
	LOG("Parsing Arguments")
	PyObject *fn=PyTuple_GetItem(args,0);
	if(!PyString_Check(fn))
	{
		LOG("Detected incorrect argument")
		PyErr_SetString(PyExc_TypeError,"Expecting a string");
		Py_RETURN_NONE;
	}
	const char* fileName=PyString_AsString(fn);

	CAst::ReferenceCountedAutoPointer<CAst::translation_unit> root=parseFile(fileName);
	return CAstToPyCAst(root);

}

static PyMethodDef module_methods[] = {	{"parseFile",parseFile, METH_VARARGS,"Parses a File for C AST"},{ NULL,NULL,0,NULL }};



#ifndef PyMODINIT_FUNC
#define PyMODINIT_FUNC void
#endif
PyMODINIT_FUNC
initPyCAst(void) 
{
	if (PyType_Ready(&PyCAst_type_expression_statement) < 0) {printf("Initialization of expression_statement FAILED");return;}
	if (PyType_Ready(&PyCAst_type_relational_expression_item) < 0) {printf("Initialization of relational_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_selection_statement_2) < 0) {printf("Initialization of selection_statement_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator_3) < 0) {printf("Initialization of direct_abstract_declarator_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator_2) < 0) {printf("Initialization of direct_abstract_declarator_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator_1) < 0) {printf("Initialization of direct_abstract_declarator_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_selection_statement_1) < 0) {printf("Initialization of selection_statement_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_or_union_specifier) < 0) {printf("Initialization of struct_or_union_specifier FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_list) < 0) {printf("Initialization of statement_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator_list) < 0) {printf("Initialization of init_declarator_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement) < 0) {printf("Initialization of iteration_statement FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression_5) < 0) {printf("Initialization of postfix_expression_5 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression_4) < 0) {printf("Initialization of postfix_expression_4 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression_1) < 0) {printf("Initialization of postfix_expression_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression_3) < 0) {printf("Initialization of postfix_expression_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression_2) < 0) {printf("Initialization of postfix_expression_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_inclusive_or_expression) < 0) {printf("Initialization of inclusive_or_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_additive_expression_item) < 0) {printf("Initialization of additive_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enumerator) < 0) {printf("Initialization of enumerator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_argument_expression_list_item) < 0) {printf("Initialization of argument_expression_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_list) < 0) {printf("Initialization of parameter_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_labeled_statement) < 0) {printf("Initialization of labeled_statement FAILED");return;}
	if (PyType_Ready(&PyCAst_type_abstract_declarator) < 0) {printf("Initialization of abstract_declarator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_token) < 0) {printf("Initialization of token FAILED");return;}
	if (PyType_Ready(&PyCAst_type_equality_expression_item) < 0) {printf("Initialization of equality_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator) < 0) {printf("Initialization of init_declarator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator) < 0) {printf("Initialization of direct_abstract_declarator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_assignment_expression_1) < 0) {printf("Initialization of assignment_expression_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_declaration_2) < 0) {printf("Initialization of parameter_declaration_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression) < 0) {printf("Initialization of unary_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_declaration_1) < 0) {printf("Initialization of parameter_declaration_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator_1) < 0) {printf("Initialization of direct_declarator_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator_3) < 0) {printf("Initialization of direct_declarator_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator_2) < 0) {printf("Initialization of direct_declarator_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator_5) < 0) {printf("Initialization of direct_declarator_5 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator_4) < 0) {printf("Initialization of direct_declarator_4 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer) < 0) {printf("Initialization of initializer FAILED");return;}
	if (PyType_Ready(&PyCAst_type_conditional_expression_item) < 0) {printf("Initialization of conditional_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_pointer_item_1) < 0) {printf("Initialization of pointer_item_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_pointer_item_2) < 0) {printf("Initialization of pointer_item_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_list) < 0) {printf("Initialization of declaration_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_labeled_statement_2) < 0) {printf("Initialization of labeled_statement_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_and_expression_item) < 0) {printf("Initialization of logical_and_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier) < 0) {printf("Initialization of type_specifier FAILED");return;}
	if (PyType_Ready(&PyCAst_type_compound_statement) < 0) {printf("Initialization of compound_statement FAILED");return;}
	if (PyType_Ready(&PyCAst_type_pointer) < 0) {printf("Initialization of pointer FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression_4) < 0) {printf("Initialization of unary_expression_4 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression_1) < 0) {printf("Initialization of unary_expression_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression_3) < 0) {printf("Initialization of unary_expression_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression_2) < 0) {printf("Initialization of unary_expression_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator) < 0) {printf("Initialization of direct_declarator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_translation_unit) < 0) {printf("Initialization of translation_unit FAILED");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator_list_item) < 0) {printf("Initialization of init_declarator_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_multiplicative_expression) < 0) {printf("Initialization of multiplicative_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer_list) < 0) {printf("Initialization of initializer_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_argument_expression_list) < 0) {printf("Initialization of argument_expression_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_pointer_item) < 0) {printf("Initialization of pointer_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_and_expression) < 0) {printf("Initialization of logical_and_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declarator) < 0) {printf("Initialization of declarator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_shift_expression) < 0) {printf("Initialization of shift_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers_item) < 0) {printf("Initialization of declaration_specifiers_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator) < 0) {printf("Initialization of struct_declarator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator_list_item) < 0) {printf("Initialization of struct_declarator_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier) < 0) {printf("Initialization of type_qualifier FAILED");return;}
	if (PyType_Ready(&PyCAst_type_assignment_operator) < 0) {printf("Initialization of assignment_operator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_shift_expression_item) < 0) {printf("Initialization of shift_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_expression) < 0) {printf("Initialization of expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_storage_class_specifier) < 0) {printf("Initialization of storage_class_specifier FAILED");return;}
	if (PyType_Ready(&PyCAst_type_exclusive_or_expression_item) < 0) {printf("Initialization of exclusive_or_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer_1) < 0) {printf("Initialization of initializer_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer_2) < 0) {printf("Initialization of initializer_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_exclusive_or_expression) < 0) {printf("Initialization of exclusive_or_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_translation_unit_item) < 0) {printf("Initialization of translation_unit_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_labeled_statement_1) < 0) {printf("Initialization of labeled_statement_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer_list_item) < 0) {printf("Initialization of initializer_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_additive_expression) < 0) {printf("Initialization of additive_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_external_declaration) < 0) {printf("Initialization of external_declaration FAILED");return;}
	if (PyType_Ready(&PyCAst_type_identifier_list) < 0) {printf("Initialization of identifier_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement_3) < 0) {printf("Initialization of jump_statement_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier_list_item) < 0) {printf("Initialization of type_qualifier_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_name) < 0) {printf("Initialization of type_name FAILED");return;}
	if (PyType_Ready(&PyCAst_type_external_declaration_2) < 0) {printf("Initialization of external_declaration_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_external_declaration_1) < 0) {printf("Initialization of external_declaration_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_relational_expression) < 0) {printf("Initialization of relational_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement) < 0) {printf("Initialization of statement FAILED");return;}
	if (PyType_Ready(&PyCAst_type_cast_expression) < 0) {printf("Initialization of cast_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_inclusive_or_expression_item) < 0) {printf("Initialization of inclusive_or_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator_list) < 0) {printf("Initialization of struct_declarator_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_constant_expression) < 0) {printf("Initialization of constant_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list_item) < 0) {printf("Initialization of specifier_qualifier_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list_item_1) < 0) {printf("Initialization of specifier_qualifier_list_item_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list_item_2) < 0) {printf("Initialization of specifier_qualifier_list_item_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_declaration) < 0) {printf("Initialization of parameter_declaration FAILED");return;}
	if (PyType_Ready(&PyCAst_type_primary_expression) < 0) {printf("Initialization of primary_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration) < 0) {printf("Initialization of declaration FAILED");return;}
	if (PyType_Ready(&PyCAst_type_equality_expression) < 0) {printf("Initialization of equality_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement) < 0) {printf("Initialization of jump_statement FAILED");return;}
	if (PyType_Ready(&PyCAst_type_assignment_expression_2) < 0) {printf("Initialization of assignment_expression_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier_1) < 0) {printf("Initialization of type_specifier_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier_2) < 0) {printf("Initialization of type_specifier_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier_3) < 0) {printf("Initialization of type_specifier_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration_list) < 0) {printf("Initialization of struct_declaration_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_expression_item) < 0) {printf("Initialization of expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enumerator_list) < 0) {printf("Initialization of enumerator_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_list_item) < 0) {printf("Initialization of declaration_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_list_item) < 0) {printf("Initialization of statement_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_and_expression_item) < 0) {printf("Initialization of and_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement_1) < 0) {printf("Initialization of jump_statement_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enumerator_list_item) < 0) {printf("Initialization of enumerator_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_cast_expression_2) < 0) {printf("Initialization of cast_expression_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_cast_expression_1) < 0) {printf("Initialization of cast_expression_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration) < 0) {printf("Initialization of struct_declaration FAILED");return;}
	if (PyType_Ready(&PyCAst_type_and_expression) < 0) {printf("Initialization of and_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_selection_statement) < 0) {printf("Initialization of selection_statement FAILED");return;}
	if (PyType_Ready(&PyCAst_type_multiplicative_expression_item) < 0) {printf("Initialization of multiplicative_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression) < 0) {printf("Initialization of postfix_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement_3) < 0) {printf("Initialization of iteration_statement_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement_2) < 0) {printf("Initialization of iteration_statement_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement_1) < 0) {printf("Initialization of iteration_statement_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration_list_item) < 0) {printf("Initialization of struct_declaration_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_or_expression) < 0) {printf("Initialization of logical_or_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_operator) < 0) {printf("Initialization of unary_operator FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_or_union) < 0) {printf("Initialization of struct_or_union FAILED");return;}
	if (PyType_Ready(&PyCAst_type_assignment_expression) < 0) {printf("Initialization of assignment_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_type_list) < 0) {printf("Initialization of parameter_type_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier_list) < 0) {printf("Initialization of type_qualifier_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_primary_expression_2) < 0) {printf("Initialization of primary_expression_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_identifier_list_item) < 0) {printf("Initialization of identifier_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers) < 0) {printf("Initialization of declaration_specifiers FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_5) < 0) {printf("Initialization of statement_5 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_4) < 0) {printf("Initialization of statement_4 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_6) < 0) {printf("Initialization of statement_6 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_1) < 0) {printf("Initialization of statement_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement_2) < 0) {printf("Initialization of jump_statement_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_3) < 0) {printf("Initialization of statement_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_2) < 0) {printf("Initialization of statement_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_function_definition) < 0) {printf("Initialization of function_definition FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enum_specifier) < 0) {printf("Initialization of enum_specifier FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_list_item) < 0) {printf("Initialization of parameter_list_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list) < 0) {printf("Initialization of specifier_qualifier_list FAILED");return;}
	if (PyType_Ready(&PyCAst_type_conditional_expression) < 0) {printf("Initialization of conditional_expression FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_or_expression_item) < 0) {printf("Initialization of logical_or_expression_item FAILED");return;}
	if (PyType_Ready(&PyCAst_type_primary_expression_1) < 0) {printf("Initialization of primary_expression_1 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers_item_2) < 0) {printf("Initialization of declaration_specifiers_item_2 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers_item_3) < 0) {printf("Initialization of declaration_specifiers_item_3 FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers_item_1) < 0) {printf("Initialization of declaration_specifiers_item_1 FAILED");return;}


	PyObject* m;
	m = Py_InitModule3("PyCAst", module_methods,"The PyCAst Module");
	if (m == NULL) return;

	Py_INCREF(&PyCAst_type_expression_statement);
	PyModule_AddObject(m,"expression_statement", (PyObject *)&PyCAst_type_expression_statement);
	Py_INCREF(&PyCAst_type_relational_expression_item);
	PyModule_AddObject(m,"relational_expression_item", (PyObject *)&PyCAst_type_relational_expression_item);
	Py_INCREF(&PyCAst_type_selection_statement_2);
	PyModule_AddObject(m,"selection_statement_2", (PyObject *)&PyCAst_type_selection_statement_2);
	Py_INCREF(&PyCAst_type_direct_abstract_declarator_3);
	PyModule_AddObject(m,"direct_abstract_declarator_3", (PyObject *)&PyCAst_type_direct_abstract_declarator_3);
	Py_INCREF(&PyCAst_type_direct_abstract_declarator_2);
	PyModule_AddObject(m,"direct_abstract_declarator_2", (PyObject *)&PyCAst_type_direct_abstract_declarator_2);
	Py_INCREF(&PyCAst_type_direct_abstract_declarator_1);
	PyModule_AddObject(m,"direct_abstract_declarator_1", (PyObject *)&PyCAst_type_direct_abstract_declarator_1);
	Py_INCREF(&PyCAst_type_selection_statement_1);
	PyModule_AddObject(m,"selection_statement_1", (PyObject *)&PyCAst_type_selection_statement_1);
	Py_INCREF(&PyCAst_type_struct_or_union_specifier);
	PyModule_AddObject(m,"struct_or_union_specifier", (PyObject *)&PyCAst_type_struct_or_union_specifier);
	Py_INCREF(&PyCAst_type_statement_list);
	PyModule_AddObject(m,"statement_list", (PyObject *)&PyCAst_type_statement_list);
	Py_INCREF(&PyCAst_type_init_declarator_list);
	PyModule_AddObject(m,"init_declarator_list", (PyObject *)&PyCAst_type_init_declarator_list);
	Py_INCREF(&PyCAst_type_iteration_statement);
	PyModule_AddObject(m,"iteration_statement", (PyObject *)&PyCAst_type_iteration_statement);
	Py_INCREF(&PyCAst_type_postfix_expression_5);
	PyModule_AddObject(m,"postfix_expression_5", (PyObject *)&PyCAst_type_postfix_expression_5);
	Py_INCREF(&PyCAst_type_postfix_expression_4);
	PyModule_AddObject(m,"postfix_expression_4", (PyObject *)&PyCAst_type_postfix_expression_4);
	Py_INCREF(&PyCAst_type_postfix_expression_1);
	PyModule_AddObject(m,"postfix_expression_1", (PyObject *)&PyCAst_type_postfix_expression_1);
	Py_INCREF(&PyCAst_type_postfix_expression_3);
	PyModule_AddObject(m,"postfix_expression_3", (PyObject *)&PyCAst_type_postfix_expression_3);
	Py_INCREF(&PyCAst_type_postfix_expression_2);
	PyModule_AddObject(m,"postfix_expression_2", (PyObject *)&PyCAst_type_postfix_expression_2);
	Py_INCREF(&PyCAst_type_inclusive_or_expression);
	PyModule_AddObject(m,"inclusive_or_expression", (PyObject *)&PyCAst_type_inclusive_or_expression);
	Py_INCREF(&PyCAst_type_additive_expression_item);
	PyModule_AddObject(m,"additive_expression_item", (PyObject *)&PyCAst_type_additive_expression_item);
	Py_INCREF(&PyCAst_type_enumerator);
	PyModule_AddObject(m,"enumerator", (PyObject *)&PyCAst_type_enumerator);
	Py_INCREF(&PyCAst_type_argument_expression_list_item);
	PyModule_AddObject(m,"argument_expression_list_item", (PyObject *)&PyCAst_type_argument_expression_list_item);
	Py_INCREF(&PyCAst_type_parameter_list);
	PyModule_AddObject(m,"parameter_list", (PyObject *)&PyCAst_type_parameter_list);
	Py_INCREF(&PyCAst_type_labeled_statement);
	PyModule_AddObject(m,"labeled_statement", (PyObject *)&PyCAst_type_labeled_statement);
	Py_INCREF(&PyCAst_type_abstract_declarator);
	PyModule_AddObject(m,"abstract_declarator", (PyObject *)&PyCAst_type_abstract_declarator);
	Py_INCREF(&PyCAst_type_token);
	PyModule_AddObject(m,"token", (PyObject *)&PyCAst_type_token);
	Py_INCREF(&PyCAst_type_equality_expression_item);
	PyModule_AddObject(m,"equality_expression_item", (PyObject *)&PyCAst_type_equality_expression_item);
	Py_INCREF(&PyCAst_type_init_declarator);
	PyModule_AddObject(m,"init_declarator", (PyObject *)&PyCAst_type_init_declarator);
	Py_INCREF(&PyCAst_type_direct_abstract_declarator);
	PyModule_AddObject(m,"direct_abstract_declarator", (PyObject *)&PyCAst_type_direct_abstract_declarator);
	Py_INCREF(&PyCAst_type_assignment_expression_1);
	PyModule_AddObject(m,"assignment_expression_1", (PyObject *)&PyCAst_type_assignment_expression_1);
	Py_INCREF(&PyCAst_type_parameter_declaration_2);
	PyModule_AddObject(m,"parameter_declaration_2", (PyObject *)&PyCAst_type_parameter_declaration_2);
	Py_INCREF(&PyCAst_type_unary_expression);
	PyModule_AddObject(m,"unary_expression", (PyObject *)&PyCAst_type_unary_expression);
	Py_INCREF(&PyCAst_type_parameter_declaration_1);
	PyModule_AddObject(m,"parameter_declaration_1", (PyObject *)&PyCAst_type_parameter_declaration_1);
	Py_INCREF(&PyCAst_type_direct_declarator_1);
	PyModule_AddObject(m,"direct_declarator_1", (PyObject *)&PyCAst_type_direct_declarator_1);
	Py_INCREF(&PyCAst_type_direct_declarator_3);
	PyModule_AddObject(m,"direct_declarator_3", (PyObject *)&PyCAst_type_direct_declarator_3);
	Py_INCREF(&PyCAst_type_direct_declarator_2);
	PyModule_AddObject(m,"direct_declarator_2", (PyObject *)&PyCAst_type_direct_declarator_2);
	Py_INCREF(&PyCAst_type_direct_declarator_5);
	PyModule_AddObject(m,"direct_declarator_5", (PyObject *)&PyCAst_type_direct_declarator_5);
	Py_INCREF(&PyCAst_type_direct_declarator_4);
	PyModule_AddObject(m,"direct_declarator_4", (PyObject *)&PyCAst_type_direct_declarator_4);
	Py_INCREF(&PyCAst_type_initializer);
	PyModule_AddObject(m,"initializer", (PyObject *)&PyCAst_type_initializer);
	Py_INCREF(&PyCAst_type_conditional_expression_item);
	PyModule_AddObject(m,"conditional_expression_item", (PyObject *)&PyCAst_type_conditional_expression_item);
	Py_INCREF(&PyCAst_type_pointer_item_1);
	PyModule_AddObject(m,"pointer_item_1", (PyObject *)&PyCAst_type_pointer_item_1);
	Py_INCREF(&PyCAst_type_pointer_item_2);
	PyModule_AddObject(m,"pointer_item_2", (PyObject *)&PyCAst_type_pointer_item_2);
	Py_INCREF(&PyCAst_type_declaration_list);
	PyModule_AddObject(m,"declaration_list", (PyObject *)&PyCAst_type_declaration_list);
	Py_INCREF(&PyCAst_type_labeled_statement_2);
	PyModule_AddObject(m,"labeled_statement_2", (PyObject *)&PyCAst_type_labeled_statement_2);
	Py_INCREF(&PyCAst_type_logical_and_expression_item);
	PyModule_AddObject(m,"logical_and_expression_item", (PyObject *)&PyCAst_type_logical_and_expression_item);
	Py_INCREF(&PyCAst_type_type_specifier);
	PyModule_AddObject(m,"type_specifier", (PyObject *)&PyCAst_type_type_specifier);
	Py_INCREF(&PyCAst_type_compound_statement);
	PyModule_AddObject(m,"compound_statement", (PyObject *)&PyCAst_type_compound_statement);
	Py_INCREF(&PyCAst_type_pointer);
	PyModule_AddObject(m,"pointer", (PyObject *)&PyCAst_type_pointer);
	Py_INCREF(&PyCAst_type_unary_expression_4);
	PyModule_AddObject(m,"unary_expression_4", (PyObject *)&PyCAst_type_unary_expression_4);
	Py_INCREF(&PyCAst_type_unary_expression_1);
	PyModule_AddObject(m,"unary_expression_1", (PyObject *)&PyCAst_type_unary_expression_1);
	Py_INCREF(&PyCAst_type_unary_expression_3);
	PyModule_AddObject(m,"unary_expression_3", (PyObject *)&PyCAst_type_unary_expression_3);
	Py_INCREF(&PyCAst_type_unary_expression_2);
	PyModule_AddObject(m,"unary_expression_2", (PyObject *)&PyCAst_type_unary_expression_2);
	Py_INCREF(&PyCAst_type_direct_declarator);
	PyModule_AddObject(m,"direct_declarator", (PyObject *)&PyCAst_type_direct_declarator);
	Py_INCREF(&PyCAst_type_translation_unit);
	PyModule_AddObject(m,"translation_unit", (PyObject *)&PyCAst_type_translation_unit);
	Py_INCREF(&PyCAst_type_init_declarator_list_item);
	PyModule_AddObject(m,"init_declarator_list_item", (PyObject *)&PyCAst_type_init_declarator_list_item);
	Py_INCREF(&PyCAst_type_multiplicative_expression);
	PyModule_AddObject(m,"multiplicative_expression", (PyObject *)&PyCAst_type_multiplicative_expression);
	Py_INCREF(&PyCAst_type_initializer_list);
	PyModule_AddObject(m,"initializer_list", (PyObject *)&PyCAst_type_initializer_list);
	Py_INCREF(&PyCAst_type_argument_expression_list);
	PyModule_AddObject(m,"argument_expression_list", (PyObject *)&PyCAst_type_argument_expression_list);
	Py_INCREF(&PyCAst_type_pointer_item);
	PyModule_AddObject(m,"pointer_item", (PyObject *)&PyCAst_type_pointer_item);
	Py_INCREF(&PyCAst_type_logical_and_expression);
	PyModule_AddObject(m,"logical_and_expression", (PyObject *)&PyCAst_type_logical_and_expression);
	Py_INCREF(&PyCAst_type_declarator);
	PyModule_AddObject(m,"declarator", (PyObject *)&PyCAst_type_declarator);
	Py_INCREF(&PyCAst_type_shift_expression);
	PyModule_AddObject(m,"shift_expression", (PyObject *)&PyCAst_type_shift_expression);
	Py_INCREF(&PyCAst_type_declaration_specifiers_item);
	PyModule_AddObject(m,"declaration_specifiers_item", (PyObject *)&PyCAst_type_declaration_specifiers_item);
	Py_INCREF(&PyCAst_type_struct_declarator);
	PyModule_AddObject(m,"struct_declarator", (PyObject *)&PyCAst_type_struct_declarator);
	Py_INCREF(&PyCAst_type_struct_declarator_list_item);
	PyModule_AddObject(m,"struct_declarator_list_item", (PyObject *)&PyCAst_type_struct_declarator_list_item);
	Py_INCREF(&PyCAst_type_type_qualifier);
	PyModule_AddObject(m,"type_qualifier", (PyObject *)&PyCAst_type_type_qualifier);
	Py_INCREF(&PyCAst_type_assignment_operator);
	PyModule_AddObject(m,"assignment_operator", (PyObject *)&PyCAst_type_assignment_operator);
	Py_INCREF(&PyCAst_type_shift_expression_item);
	PyModule_AddObject(m,"shift_expression_item", (PyObject *)&PyCAst_type_shift_expression_item);
	Py_INCREF(&PyCAst_type_expression);
	PyModule_AddObject(m,"expression", (PyObject *)&PyCAst_type_expression);
	Py_INCREF(&PyCAst_type_storage_class_specifier);
	PyModule_AddObject(m,"storage_class_specifier", (PyObject *)&PyCAst_type_storage_class_specifier);
	Py_INCREF(&PyCAst_type_exclusive_or_expression_item);
	PyModule_AddObject(m,"exclusive_or_expression_item", (PyObject *)&PyCAst_type_exclusive_or_expression_item);
	Py_INCREF(&PyCAst_type_initializer_1);
	PyModule_AddObject(m,"initializer_1", (PyObject *)&PyCAst_type_initializer_1);
	Py_INCREF(&PyCAst_type_initializer_2);
	PyModule_AddObject(m,"initializer_2", (PyObject *)&PyCAst_type_initializer_2);
	Py_INCREF(&PyCAst_type_exclusive_or_expression);
	PyModule_AddObject(m,"exclusive_or_expression", (PyObject *)&PyCAst_type_exclusive_or_expression);
	Py_INCREF(&PyCAst_type_translation_unit_item);
	PyModule_AddObject(m,"translation_unit_item", (PyObject *)&PyCAst_type_translation_unit_item);
	Py_INCREF(&PyCAst_type_labeled_statement_1);
	PyModule_AddObject(m,"labeled_statement_1", (PyObject *)&PyCAst_type_labeled_statement_1);
	Py_INCREF(&PyCAst_type_initializer_list_item);
	PyModule_AddObject(m,"initializer_list_item", (PyObject *)&PyCAst_type_initializer_list_item);
	Py_INCREF(&PyCAst_type_additive_expression);
	PyModule_AddObject(m,"additive_expression", (PyObject *)&PyCAst_type_additive_expression);
	Py_INCREF(&PyCAst_type_external_declaration);
	PyModule_AddObject(m,"external_declaration", (PyObject *)&PyCAst_type_external_declaration);
	Py_INCREF(&PyCAst_type_identifier_list);
	PyModule_AddObject(m,"identifier_list", (PyObject *)&PyCAst_type_identifier_list);
	Py_INCREF(&PyCAst_type_jump_statement_3);
	PyModule_AddObject(m,"jump_statement_3", (PyObject *)&PyCAst_type_jump_statement_3);
	Py_INCREF(&PyCAst_type_type_qualifier_list_item);
	PyModule_AddObject(m,"type_qualifier_list_item", (PyObject *)&PyCAst_type_type_qualifier_list_item);
	Py_INCREF(&PyCAst_type_type_name);
	PyModule_AddObject(m,"type_name", (PyObject *)&PyCAst_type_type_name);
	Py_INCREF(&PyCAst_type_external_declaration_2);
	PyModule_AddObject(m,"external_declaration_2", (PyObject *)&PyCAst_type_external_declaration_2);
	Py_INCREF(&PyCAst_type_external_declaration_1);
	PyModule_AddObject(m,"external_declaration_1", (PyObject *)&PyCAst_type_external_declaration_1);
	Py_INCREF(&PyCAst_type_relational_expression);
	PyModule_AddObject(m,"relational_expression", (PyObject *)&PyCAst_type_relational_expression);
	Py_INCREF(&PyCAst_type_statement);
	PyModule_AddObject(m,"statement", (PyObject *)&PyCAst_type_statement);
	Py_INCREF(&PyCAst_type_cast_expression);
	PyModule_AddObject(m,"cast_expression", (PyObject *)&PyCAst_type_cast_expression);
	Py_INCREF(&PyCAst_type_inclusive_or_expression_item);
	PyModule_AddObject(m,"inclusive_or_expression_item", (PyObject *)&PyCAst_type_inclusive_or_expression_item);
	Py_INCREF(&PyCAst_type_struct_declarator_list);
	PyModule_AddObject(m,"struct_declarator_list", (PyObject *)&PyCAst_type_struct_declarator_list);
	Py_INCREF(&PyCAst_type_constant_expression);
	PyModule_AddObject(m,"constant_expression", (PyObject *)&PyCAst_type_constant_expression);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list_item);
	PyModule_AddObject(m,"specifier_qualifier_list_item", (PyObject *)&PyCAst_type_specifier_qualifier_list_item);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list_item_1);
	PyModule_AddObject(m,"specifier_qualifier_list_item_1", (PyObject *)&PyCAst_type_specifier_qualifier_list_item_1);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list_item_2);
	PyModule_AddObject(m,"specifier_qualifier_list_item_2", (PyObject *)&PyCAst_type_specifier_qualifier_list_item_2);
	Py_INCREF(&PyCAst_type_parameter_declaration);
	PyModule_AddObject(m,"parameter_declaration", (PyObject *)&PyCAst_type_parameter_declaration);
	Py_INCREF(&PyCAst_type_primary_expression);
	PyModule_AddObject(m,"primary_expression", (PyObject *)&PyCAst_type_primary_expression);
	Py_INCREF(&PyCAst_type_declaration);
	PyModule_AddObject(m,"declaration", (PyObject *)&PyCAst_type_declaration);
	Py_INCREF(&PyCAst_type_equality_expression);
	PyModule_AddObject(m,"equality_expression", (PyObject *)&PyCAst_type_equality_expression);
	Py_INCREF(&PyCAst_type_jump_statement);
	PyModule_AddObject(m,"jump_statement", (PyObject *)&PyCAst_type_jump_statement);
	Py_INCREF(&PyCAst_type_assignment_expression_2);
	PyModule_AddObject(m,"assignment_expression_2", (PyObject *)&PyCAst_type_assignment_expression_2);
	Py_INCREF(&PyCAst_type_type_specifier_1);
	PyModule_AddObject(m,"type_specifier_1", (PyObject *)&PyCAst_type_type_specifier_1);
	Py_INCREF(&PyCAst_type_type_specifier_2);
	PyModule_AddObject(m,"type_specifier_2", (PyObject *)&PyCAst_type_type_specifier_2);
	Py_INCREF(&PyCAst_type_type_specifier_3);
	PyModule_AddObject(m,"type_specifier_3", (PyObject *)&PyCAst_type_type_specifier_3);
	Py_INCREF(&PyCAst_type_struct_declaration_list);
	PyModule_AddObject(m,"struct_declaration_list", (PyObject *)&PyCAst_type_struct_declaration_list);
	Py_INCREF(&PyCAst_type_expression_item);
	PyModule_AddObject(m,"expression_item", (PyObject *)&PyCAst_type_expression_item);
	Py_INCREF(&PyCAst_type_enumerator_list);
	PyModule_AddObject(m,"enumerator_list", (PyObject *)&PyCAst_type_enumerator_list);
	Py_INCREF(&PyCAst_type_declaration_list_item);
	PyModule_AddObject(m,"declaration_list_item", (PyObject *)&PyCAst_type_declaration_list_item);
	Py_INCREF(&PyCAst_type_statement_list_item);
	PyModule_AddObject(m,"statement_list_item", (PyObject *)&PyCAst_type_statement_list_item);
	Py_INCREF(&PyCAst_type_and_expression_item);
	PyModule_AddObject(m,"and_expression_item", (PyObject *)&PyCAst_type_and_expression_item);
	Py_INCREF(&PyCAst_type_jump_statement_1);
	PyModule_AddObject(m,"jump_statement_1", (PyObject *)&PyCAst_type_jump_statement_1);
	Py_INCREF(&PyCAst_type_enumerator_list_item);
	PyModule_AddObject(m,"enumerator_list_item", (PyObject *)&PyCAst_type_enumerator_list_item);
	Py_INCREF(&PyCAst_type_cast_expression_2);
	PyModule_AddObject(m,"cast_expression_2", (PyObject *)&PyCAst_type_cast_expression_2);
	Py_INCREF(&PyCAst_type_cast_expression_1);
	PyModule_AddObject(m,"cast_expression_1", (PyObject *)&PyCAst_type_cast_expression_1);
	Py_INCREF(&PyCAst_type_struct_declaration);
	PyModule_AddObject(m,"struct_declaration", (PyObject *)&PyCAst_type_struct_declaration);
	Py_INCREF(&PyCAst_type_and_expression);
	PyModule_AddObject(m,"and_expression", (PyObject *)&PyCAst_type_and_expression);
	Py_INCREF(&PyCAst_type_selection_statement);
	PyModule_AddObject(m,"selection_statement", (PyObject *)&PyCAst_type_selection_statement);
	Py_INCREF(&PyCAst_type_multiplicative_expression_item);
	PyModule_AddObject(m,"multiplicative_expression_item", (PyObject *)&PyCAst_type_multiplicative_expression_item);
	Py_INCREF(&PyCAst_type_postfix_expression);
	PyModule_AddObject(m,"postfix_expression", (PyObject *)&PyCAst_type_postfix_expression);
	Py_INCREF(&PyCAst_type_iteration_statement_3);
	PyModule_AddObject(m,"iteration_statement_3", (PyObject *)&PyCAst_type_iteration_statement_3);
	Py_INCREF(&PyCAst_type_iteration_statement_2);
	PyModule_AddObject(m,"iteration_statement_2", (PyObject *)&PyCAst_type_iteration_statement_2);
	Py_INCREF(&PyCAst_type_iteration_statement_1);
	PyModule_AddObject(m,"iteration_statement_1", (PyObject *)&PyCAst_type_iteration_statement_1);
	Py_INCREF(&PyCAst_type_struct_declaration_list_item);
	PyModule_AddObject(m,"struct_declaration_list_item", (PyObject *)&PyCAst_type_struct_declaration_list_item);
	Py_INCREF(&PyCAst_type_logical_or_expression);
	PyModule_AddObject(m,"logical_or_expression", (PyObject *)&PyCAst_type_logical_or_expression);
	Py_INCREF(&PyCAst_type_unary_operator);
	PyModule_AddObject(m,"unary_operator", (PyObject *)&PyCAst_type_unary_operator);
	Py_INCREF(&PyCAst_type_struct_or_union);
	PyModule_AddObject(m,"struct_or_union", (PyObject *)&PyCAst_type_struct_or_union);
	Py_INCREF(&PyCAst_type_assignment_expression);
	PyModule_AddObject(m,"assignment_expression", (PyObject *)&PyCAst_type_assignment_expression);
	Py_INCREF(&PyCAst_type_parameter_type_list);
	PyModule_AddObject(m,"parameter_type_list", (PyObject *)&PyCAst_type_parameter_type_list);
	Py_INCREF(&PyCAst_type_type_qualifier_list);
	PyModule_AddObject(m,"type_qualifier_list", (PyObject *)&PyCAst_type_type_qualifier_list);
	Py_INCREF(&PyCAst_type_primary_expression_2);
	PyModule_AddObject(m,"primary_expression_2", (PyObject *)&PyCAst_type_primary_expression_2);
	Py_INCREF(&PyCAst_type_identifier_list_item);
	PyModule_AddObject(m,"identifier_list_item", (PyObject *)&PyCAst_type_identifier_list_item);
	Py_INCREF(&PyCAst_type_declaration_specifiers);
	PyModule_AddObject(m,"declaration_specifiers", (PyObject *)&PyCAst_type_declaration_specifiers);
	Py_INCREF(&PyCAst_type_statement_5);
	PyModule_AddObject(m,"statement_5", (PyObject *)&PyCAst_type_statement_5);
	Py_INCREF(&PyCAst_type_statement_4);
	PyModule_AddObject(m,"statement_4", (PyObject *)&PyCAst_type_statement_4);
	Py_INCREF(&PyCAst_type_statement_6);
	PyModule_AddObject(m,"statement_6", (PyObject *)&PyCAst_type_statement_6);
	Py_INCREF(&PyCAst_type_statement_1);
	PyModule_AddObject(m,"statement_1", (PyObject *)&PyCAst_type_statement_1);
	Py_INCREF(&PyCAst_type_jump_statement_2);
	PyModule_AddObject(m,"jump_statement_2", (PyObject *)&PyCAst_type_jump_statement_2);
	Py_INCREF(&PyCAst_type_statement_3);
	PyModule_AddObject(m,"statement_3", (PyObject *)&PyCAst_type_statement_3);
	Py_INCREF(&PyCAst_type_statement_2);
	PyModule_AddObject(m,"statement_2", (PyObject *)&PyCAst_type_statement_2);
	Py_INCREF(&PyCAst_type_function_definition);
	PyModule_AddObject(m,"function_definition", (PyObject *)&PyCAst_type_function_definition);
	Py_INCREF(&PyCAst_type_enum_specifier);
	PyModule_AddObject(m,"enum_specifier", (PyObject *)&PyCAst_type_enum_specifier);
	Py_INCREF(&PyCAst_type_parameter_list_item);
	PyModule_AddObject(m,"parameter_list_item", (PyObject *)&PyCAst_type_parameter_list_item);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list);
	PyModule_AddObject(m,"specifier_qualifier_list", (PyObject *)&PyCAst_type_specifier_qualifier_list);
	Py_INCREF(&PyCAst_type_conditional_expression);
	PyModule_AddObject(m,"conditional_expression", (PyObject *)&PyCAst_type_conditional_expression);
	Py_INCREF(&PyCAst_type_logical_or_expression_item);
	PyModule_AddObject(m,"logical_or_expression_item", (PyObject *)&PyCAst_type_logical_or_expression_item);
	Py_INCREF(&PyCAst_type_primary_expression_1);
	PyModule_AddObject(m,"primary_expression_1", (PyObject *)&PyCAst_type_primary_expression_1);
	Py_INCREF(&PyCAst_type_declaration_specifiers_item_2);
	PyModule_AddObject(m,"declaration_specifiers_item_2", (PyObject *)&PyCAst_type_declaration_specifiers_item_2);
	Py_INCREF(&PyCAst_type_declaration_specifiers_item_3);
	PyModule_AddObject(m,"declaration_specifiers_item_3", (PyObject *)&PyCAst_type_declaration_specifiers_item_3);
	Py_INCREF(&PyCAst_type_declaration_specifiers_item_1);
	PyModule_AddObject(m,"declaration_specifiers_item_1", (PyObject *)&PyCAst_type_declaration_specifiers_item_1);
}



