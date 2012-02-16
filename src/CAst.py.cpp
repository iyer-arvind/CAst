





















#include "CAst.py.h"

/*=====================================================================================================================================*\

        DEFINITION OF Token

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_Token(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::Token\033[0m\n");
    PyCAst_object_Token *self;
    self = (PyCAst_object_Token*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_Token(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::Token\033[0m\n");
    PyCAst_object_Token *self=(PyCAst_object_Token*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_Token(PyCAst_object_Token *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::Token\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_Token_ast(PyObject *_self)
{
	PyCAst_object_Token *self=(PyCAst_object_Token*)(_self);
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

static PyObject *PyCAst_getter_Token_code(PyObject *_self)
{
	PyCAst_object_Token *self=(PyCAst_object_Token*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}



			
/*=====================================================================================================================================*\

        DEFINITION OF storage_class_specifier

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_storage_class_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::storage_class_specifier\033[0m\n");
    PyCAst_object_storage_class_specifier *self;
    self = (PyCAst_object_storage_class_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_storage_class_specifier(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::storage_class_specifier\033[0m\n");
    PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_storage_class_specifier(PyCAst_object_storage_class_specifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::storage_class_specifier\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_storage_class_specifier_code(PyObject *_self)
{
	PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_storage_class_specifier_token1(PyObject *_self)
{
	PyCAst_object_storage_class_specifier *self=(PyCAst_object_storage_class_specifier*)(_self);
	CAst::storage_class_specifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF expression_statement

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_expression_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::expression_statement\033[0m\n");
    PyCAst_object_expression_statement *self;
    self = (PyCAst_object_expression_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_expression_statement(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::expression_statement\033[0m\n");
    PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_expression_statement(PyCAst_object_expression_statement *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::expression_statement\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_expression_statement_code(PyObject *_self)
{
	PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_expression_statement_expression(PyObject *_self)
{
	PyCAst_object_expression_statement *self=(PyCAst_object_expression_statement*)(_self);
	CAst::expression_statement *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF type_name

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_name(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_name\033[0m\n");
    PyCAst_object_type_name *self;
    self = (PyCAst_object_type_name*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_name(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_name\033[0m\n");
    PyCAst_object_type_name *self=(PyCAst_object_type_name*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_type_name(PyCAst_object_type_name *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_name\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_type_name_code(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_type_name_specifier_qualifier_list(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
	CAst::type_name *_c_obj=self->_p_cast_object;
	CAst::specifier_qualifier_list *_p_parameter=_c_obj->get_p_specifier_qualifier_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_SPECIFIER_QUALIFIER_LIST1)
	{
		PyCAst_object_specifier_qualifier_list1 *pyObj=(PyCAst_object_specifier_qualifier_list1*)PyCAst_type_specifier_qualifier_list1.tp_new(&PyCAst_type_specifier_qualifier_list1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::specifier_qualifier_list1(*dynamic_cast<CAst::specifier_qualifier_list1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_SPECIFIER_QUALIFIER_LIST2)
	{
		PyCAst_object_specifier_qualifier_list2 *pyObj=(PyCAst_object_specifier_qualifier_list2*)PyCAst_type_specifier_qualifier_list2.tp_new(&PyCAst_type_specifier_qualifier_list2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::specifier_qualifier_list2(*dynamic_cast<CAst::specifier_qualifier_list2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_type_name_abstract_declarator(PyObject *_self)
{
	PyCAst_object_type_name *self=(PyCAst_object_type_name*)(_self);
	CAst::type_name *_c_obj=self->_p_cast_object;
	CAst::abstract_declarator *_p_parameter=_c_obj->get_p_abstract_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ABSTRACT_DECLARATOR)
	{
		PyCAst_object_abstract_declarator *pyObj=(PyCAst_object_abstract_declarator*)PyCAst_type_abstract_declarator.tp_new(&PyCAst_type_abstract_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::abstract_declarator(*dynamic_cast<CAst::abstract_declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF unary_expression1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_unary_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::unary_expression1\033[0m\n");
    PyCAst_object_unary_expression1 *self;
    self = (PyCAst_object_unary_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_unary_expression1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::unary_expression1\033[0m\n");
    PyCAst_object_unary_expression1 *self=(PyCAst_object_unary_expression1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_unary_expression1(PyCAst_object_unary_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_unary_expression1_code(PyObject *_self)
{
	PyCAst_object_unary_expression1 *self=(PyCAst_object_unary_expression1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_unary_expression1_type_name(PyObject *_self)
{
	PyCAst_object_unary_expression1 *self=(PyCAst_object_unary_expression1*)(_self);
	CAst::unary_expression1 *_c_obj=self->_p_cast_object;
	CAst::type_name *_p_parameter=_c_obj->get_p_type_name();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_NAME)
	{
		PyCAst_object_type_name *pyObj=(PyCAst_object_type_name*)PyCAst_type_type_name.tp_new(&PyCAst_type_type_name,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_name(*dynamic_cast<CAst::type_name*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF unary_expression2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_unary_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::unary_expression2\033[0m\n");
    PyCAst_object_unary_expression2 *self;
    self = (PyCAst_object_unary_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_unary_expression2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::unary_expression2\033[0m\n");
    PyCAst_object_unary_expression2 *self=(PyCAst_object_unary_expression2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_unary_expression2(PyCAst_object_unary_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_unary_expression2_code(PyObject *_self)
{
	PyCAst_object_unary_expression2 *self=(PyCAst_object_unary_expression2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_unary_expression2_token1(PyObject *_self)
{
	PyCAst_object_unary_expression2 *self=(PyCAst_object_unary_expression2*)(_self);
	CAst::unary_expression2 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_unary_expression2_unary_expression(PyObject *_self)
{
	PyCAst_object_unary_expression2 *self=(PyCAst_object_unary_expression2*)(_self);
	CAst::unary_expression2 *_c_obj=self->_p_cast_object;
	CAst::unary_expression *_p_parameter=_c_obj->get_p_unary_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION1)
	{
		PyCAst_object_unary_expression1 *pyObj=(PyCAst_object_unary_expression1*)PyCAst_type_unary_expression1.tp_new(&PyCAst_type_unary_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression1(*dynamic_cast<CAst::unary_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION2)
	{
		PyCAst_object_unary_expression2 *pyObj=(PyCAst_object_unary_expression2*)PyCAst_type_unary_expression2.tp_new(&PyCAst_type_unary_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression2(*dynamic_cast<CAst::unary_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION3)
	{
		PyCAst_object_unary_expression3 *pyObj=(PyCAst_object_unary_expression3*)PyCAst_type_unary_expression3.tp_new(&PyCAst_type_unary_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression3(*dynamic_cast<CAst::unary_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION4)
	{
		PyCAst_object_unary_expression4 *pyObj=(PyCAst_object_unary_expression4*)PyCAst_type_unary_expression4.tp_new(&PyCAst_type_unary_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression4(*dynamic_cast<CAst::unary_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF unary_expression3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_unary_expression3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::unary_expression3\033[0m\n");
    PyCAst_object_unary_expression3 *self;
    self = (PyCAst_object_unary_expression3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_unary_expression3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::unary_expression3\033[0m\n");
    PyCAst_object_unary_expression3 *self=(PyCAst_object_unary_expression3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_unary_expression3(PyCAst_object_unary_expression3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_unary_expression3_code(PyObject *_self)
{
	PyCAst_object_unary_expression3 *self=(PyCAst_object_unary_expression3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_unary_expression3_unary_operator(PyObject *_self)
{
	PyCAst_object_unary_expression3 *self=(PyCAst_object_unary_expression3*)(_self);
	CAst::unary_expression3 *_c_obj=self->_p_cast_object;
	CAst::unary_operator *_p_parameter=_c_obj->get_p_unary_operator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_OPERATOR)
	{
		PyCAst_object_unary_operator *pyObj=(PyCAst_object_unary_operator*)PyCAst_type_unary_operator.tp_new(&PyCAst_type_unary_operator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_operator(*dynamic_cast<CAst::unary_operator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_unary_expression3_cast_expression(PyObject *_self)
{
	PyCAst_object_unary_expression3 *self=(PyCAst_object_unary_expression3*)(_self);
	CAst::unary_expression3 *_c_obj=self->_p_cast_object;
	CAst::cast_expression *_p_parameter=_c_obj->get_p_cast_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CAST_EXPRESSION1)
	{
		PyCAst_object_cast_expression1 *pyObj=(PyCAst_object_cast_expression1*)PyCAst_type_cast_expression1.tp_new(&PyCAst_type_cast_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::cast_expression1(*dynamic_cast<CAst::cast_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CAST_EXPRESSION2)
	{
		PyCAst_object_cast_expression2 *pyObj=(PyCAst_object_cast_expression2*)PyCAst_type_cast_expression2.tp_new(&PyCAst_type_cast_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::cast_expression2(*dynamic_cast<CAst::cast_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF unary_expression4

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_unary_expression4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::unary_expression4\033[0m\n");
    PyCAst_object_unary_expression4 *self;
    self = (PyCAst_object_unary_expression4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_unary_expression4(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::unary_expression4\033[0m\n");
    PyCAst_object_unary_expression4 *self=(PyCAst_object_unary_expression4*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_unary_expression4(PyCAst_object_unary_expression4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_expression4\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_unary_expression4_code(PyObject *_self)
{
	PyCAst_object_unary_expression4 *self=(PyCAst_object_unary_expression4*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_unary_expression4_postfix_expression(PyObject *_self)
{
	PyCAst_object_unary_expression4 *self=(PyCAst_object_unary_expression4*)(_self);
	CAst::unary_expression4 *_c_obj=self->_p_cast_object;
	CAst::postfix_expression *_p_parameter=_c_obj->get_p_postfix_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION1)
	{
		PyCAst_object_postfix_expression1 *pyObj=(PyCAst_object_postfix_expression1*)PyCAst_type_postfix_expression1.tp_new(&PyCAst_type_postfix_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression1(*dynamic_cast<CAst::postfix_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION2)
	{
		PyCAst_object_postfix_expression2 *pyObj=(PyCAst_object_postfix_expression2*)PyCAst_type_postfix_expression2.tp_new(&PyCAst_type_postfix_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression2(*dynamic_cast<CAst::postfix_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION3)
	{
		PyCAst_object_postfix_expression3 *pyObj=(PyCAst_object_postfix_expression3*)PyCAst_type_postfix_expression3.tp_new(&PyCAst_type_postfix_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression3(*dynamic_cast<CAst::postfix_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION4)
	{
		PyCAst_object_postfix_expression4 *pyObj=(PyCAst_object_postfix_expression4*)PyCAst_type_postfix_expression4.tp_new(&PyCAst_type_postfix_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression4(*dynamic_cast<CAst::postfix_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION5)
	{
		PyCAst_object_postfix_expression5 *pyObj=(PyCAst_object_postfix_expression5*)PyCAst_type_postfix_expression5.tp_new(&PyCAst_type_postfix_expression5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression5(*dynamic_cast<CAst::postfix_expression5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF conditional_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_conditional_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::conditional_expression_iterator\033[0m\n");
    PyCAst_object_conditional_expression_iterator *self;
    self = (PyCAst_object_conditional_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_conditional_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::conditional_expression_iterator\033[0m\n");
    PyCAst_object_conditional_expression_iterator *self=(PyCAst_object_conditional_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF conditional_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_conditional_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::conditional_expression_item\033[0m\n");
    PyCAst_object_conditional_expression_item *self;
    self = (PyCAst_object_conditional_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_conditional_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::conditional_expression_item\033[0m\n");
    PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_conditional_expression_item_ast(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
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

static PyObject *PyCAst_getter_conditional_expression_item_code(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF conditional_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_conditional_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::conditional_expression\033[0m\n");
    PyCAst_object_conditional_expression *self;
    self = (PyCAst_object_conditional_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_conditional_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::conditional_expression\033[0m\n");
    PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_conditional_expression(PyCAst_object_conditional_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::conditional_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_conditional_expression_code(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_conditional_expression(PyObject *_self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)_self;
	CAst::conditional_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_conditional_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)_self;
	CAst::conditional_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_conditional_expression_item *ret=(PyCAst_object_conditional_expression_item*)PyCAst_type_conditional_expression_item.tp_new(&PyCAst_type_conditional_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::conditional_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_conditional_expression(PyObject* _self)
{
	PyCAst_object_conditional_expression *self=(PyCAst_object_conditional_expression*)_self;
	PyCAst_object_conditional_expression_iterator *iter=(PyCAst_object_conditional_expression_iterator*)PyCAst_type_conditional_expression_iterator.tp_new(&PyCAst_type_conditional_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::conditional_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_conditional_expression_iterator(PyObject* _self)
{
	PyCAst_object_conditional_expression_iterator *self=(PyCAst_object_conditional_expression_iterator*)_self;
	CAst::conditional_expression_iterator *iter=self->_p_cast_object;
	CAst::conditional_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_conditional_expression_item *ret=(PyCAst_object_conditional_expression_item*)PyCAst_type_conditional_expression_item.tp_new(&PyCAst_type_conditional_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::conditional_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_conditional_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_conditional_expression_item_logical_or_expression(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	CAst::conditional_expression_item *_c_obj=self->_p_cast_object;
	CAst::logical_or_expression *_p_parameter=const_cast<CAst::logical_or_expression*>(_c_obj->get_p_logical_or_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_LOGICAL_OR_EXPRESSION)
	{
		PyCAst_object_logical_or_expression *pyObj=(PyCAst_object_logical_or_expression*)PyCAst_type_logical_or_expression.tp_new(&PyCAst_type_logical_or_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::logical_or_expression(*dynamic_cast<CAst::logical_or_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_conditional_expression_item_expression(PyObject *_self)
{
	PyCAst_object_conditional_expression_item *self=(PyCAst_object_conditional_expression_item*)(_self);
	CAst::conditional_expression_item *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=const_cast<CAst::expression*>(_c_obj->get_p_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF struct_or_union_specifier

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_or_union_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_or_union_specifier\033[0m\n");
    PyCAst_object_struct_or_union_specifier *self;
    self = (PyCAst_object_struct_or_union_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_or_union_specifier(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_or_union_specifier\033[0m\n");
    PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_struct_or_union_specifier(PyCAst_object_struct_or_union_specifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_or_union_specifier\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_struct_or_union_specifier_code(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_struct_or_union_specifier_struct_or_union(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	CAst::struct_or_union_specifier *_c_obj=self->_p_cast_object;
	CAst::struct_or_union *_p_parameter=_c_obj->get_p_struct_or_union();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STRUCT_OR_UNION)
	{
		PyCAst_object_struct_or_union *pyObj=(PyCAst_object_struct_or_union*)PyCAst_type_struct_or_union.tp_new(&PyCAst_type_struct_or_union,NULL,NULL);
		pyObj->_p_cast_object=new CAst::struct_or_union(*dynamic_cast<CAst::struct_or_union*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_struct_or_union_specifier_token1(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	CAst::struct_or_union_specifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_struct_or_union_specifier_token2(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	CAst::struct_or_union_specifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token2();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_struct_or_union_specifier_struct_declaration_list(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	CAst::struct_or_union_specifier *_c_obj=self->_p_cast_object;
	CAst::struct_declaration_list *_p_parameter=_c_obj->get_p_struct_declaration_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STRUCT_DECLARATION_LIST)
	{
		PyCAst_object_struct_declaration_list *pyObj=(PyCAst_object_struct_declaration_list*)PyCAst_type_struct_declaration_list.tp_new(&PyCAst_type_struct_declaration_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::struct_declaration_list(*dynamic_cast<CAst::struct_declaration_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_struct_or_union_specifier_token3(PyObject *_self)
{
	PyCAst_object_struct_or_union_specifier *self=(PyCAst_object_struct_or_union_specifier*)(_self);
	CAst::struct_or_union_specifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token3();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF exclusive_or_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_exclusive_or_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::exclusive_or_expression_iterator\033[0m\n");
    PyCAst_object_exclusive_or_expression_iterator *self;
    self = (PyCAst_object_exclusive_or_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_exclusive_or_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::exclusive_or_expression_iterator\033[0m\n");
    PyCAst_object_exclusive_or_expression_iterator *self=(PyCAst_object_exclusive_or_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF exclusive_or_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_exclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::exclusive_or_expression_item\033[0m\n");
    PyCAst_object_exclusive_or_expression_item *self;
    self = (PyCAst_object_exclusive_or_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_exclusive_or_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::exclusive_or_expression_item\033[0m\n");
    PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_exclusive_or_expression_item_ast(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);
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

static PyObject *PyCAst_getter_exclusive_or_expression_item_code(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF exclusive_or_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_exclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::exclusive_or_expression\033[0m\n");
    PyCAst_object_exclusive_or_expression *self;
    self = (PyCAst_object_exclusive_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_exclusive_or_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::exclusive_or_expression\033[0m\n");
    PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_exclusive_or_expression(PyCAst_object_exclusive_or_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::exclusive_or_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_exclusive_or_expression_code(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_exclusive_or_expression(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)_self;
	CAst::exclusive_or_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_exclusive_or_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)_self;
	CAst::exclusive_or_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_exclusive_or_expression_item *ret=(PyCAst_object_exclusive_or_expression_item*)PyCAst_type_exclusive_or_expression_item.tp_new(&PyCAst_type_exclusive_or_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::exclusive_or_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_exclusive_or_expression(PyObject* _self)
{
	PyCAst_object_exclusive_or_expression *self=(PyCAst_object_exclusive_or_expression*)_self;
	PyCAst_object_exclusive_or_expression_iterator *iter=(PyCAst_object_exclusive_or_expression_iterator*)PyCAst_type_exclusive_or_expression_iterator.tp_new(&PyCAst_type_exclusive_or_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::exclusive_or_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_exclusive_or_expression_iterator(PyObject* _self)
{
	PyCAst_object_exclusive_or_expression_iterator *self=(PyCAst_object_exclusive_or_expression_iterator*)_self;
	CAst::exclusive_or_expression_iterator *iter=self->_p_cast_object;
	CAst::exclusive_or_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_exclusive_or_expression_item *ret=(PyCAst_object_exclusive_or_expression_item*)PyCAst_type_exclusive_or_expression_item.tp_new(&PyCAst_type_exclusive_or_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::exclusive_or_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_exclusive_or_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_exclusive_or_expression_item_and_expression(PyObject *_self)
{
	PyCAst_object_exclusive_or_expression_item *self=(PyCAst_object_exclusive_or_expression_item*)(_self);
	CAst::exclusive_or_expression_item *_c_obj=self->_p_cast_object;
	CAst::and_expression *_p_parameter=const_cast<CAst::and_expression*>(_c_obj->get_p_and_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_AND_EXPRESSION)
	{
		PyCAst_object_and_expression *pyObj=(PyCAst_object_and_expression*)PyCAst_type_and_expression.tp_new(&PyCAst_type_and_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::and_expression(*dynamic_cast<CAst::and_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF initializer1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_initializer1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::initializer1\033[0m\n");
    PyCAst_object_initializer1 *self;
    self = (PyCAst_object_initializer1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_initializer1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::initializer1\033[0m\n");
    PyCAst_object_initializer1 *self=(PyCAst_object_initializer1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_initializer1(PyCAst_object_initializer1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::initializer1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_initializer1_code(PyObject *_self)
{
	PyCAst_object_initializer1 *self=(PyCAst_object_initializer1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_initializer1_initializer_list(PyObject *_self)
{
	PyCAst_object_initializer1 *self=(PyCAst_object_initializer1*)(_self);
	CAst::initializer1 *_c_obj=self->_p_cast_object;
	CAst::initializer_list *_p_parameter=_c_obj->get_p_initializer_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INITIALIZER_LIST)
	{
		PyCAst_object_initializer_list *pyObj=(PyCAst_object_initializer_list*)PyCAst_type_initializer_list.tp_new(&PyCAst_type_initializer_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::initializer_list(*dynamic_cast<CAst::initializer_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_initializer1_token1(PyObject *_self)
{
	PyCAst_object_initializer1 *self=(PyCAst_object_initializer1*)(_self);
	CAst::initializer1 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF initializer2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_initializer2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::initializer2\033[0m\n");
    PyCAst_object_initializer2 *self;
    self = (PyCAst_object_initializer2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_initializer2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::initializer2\033[0m\n");
    PyCAst_object_initializer2 *self=(PyCAst_object_initializer2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_initializer2(PyCAst_object_initializer2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::initializer2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_initializer2_code(PyObject *_self)
{
	PyCAst_object_initializer2 *self=(PyCAst_object_initializer2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_initializer2_assignment_expression(PyObject *_self)
{
	PyCAst_object_initializer2 *self=(PyCAst_object_initializer2*)(_self);
	CAst::initializer2 *_c_obj=self->_p_cast_object;
	CAst::assignment_expression *_p_parameter=_c_obj->get_p_assignment_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION1)
	{
		PyCAst_object_assignment_expression1 *pyObj=(PyCAst_object_assignment_expression1*)PyCAst_type_assignment_expression1.tp_new(&PyCAst_type_assignment_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression1(*dynamic_cast<CAst::assignment_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION2)
	{
		PyCAst_object_assignment_expression2 *pyObj=(PyCAst_object_assignment_expression2*)PyCAst_type_assignment_expression2.tp_new(&PyCAst_type_assignment_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression2(*dynamic_cast<CAst::assignment_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declaration_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declaration_list_iterator\033[0m\n");
    PyCAst_object_struct_declaration_list_iterator *self;
    self = (PyCAst_object_struct_declaration_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declaration_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declaration_list_iterator\033[0m\n");
    PyCAst_object_struct_declaration_list_iterator *self=(PyCAst_object_struct_declaration_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declaration_list_item\033[0m\n");
    PyCAst_object_struct_declaration_list_item *self;
    self = (PyCAst_object_struct_declaration_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declaration_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declaration_list_item\033[0m\n");
    PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_struct_declaration_list_item_ast(PyObject *_self)
{
	PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)(_self);
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

static PyObject *PyCAst_getter_struct_declaration_list_item_code(PyObject *_self)
{
	PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declaration_list\033[0m\n");
    PyCAst_object_struct_declaration_list *self;
    self = (PyCAst_object_struct_declaration_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declaration_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declaration_list\033[0m\n");
    PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_struct_declaration_list(PyCAst_object_struct_declaration_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declaration_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_struct_declaration_list_code(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_struct_declaration_list(PyObject *_self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)_self;
	CAst::struct_declaration_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_struct_declaration_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)_self;
	CAst::struct_declaration_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_struct_declaration_list_item *ret=(PyCAst_object_struct_declaration_list_item*)PyCAst_type_struct_declaration_list_item.tp_new(&PyCAst_type_struct_declaration_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::struct_declaration_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_struct_declaration_list(PyObject* _self)
{
	PyCAst_object_struct_declaration_list *self=(PyCAst_object_struct_declaration_list*)_self;
	PyCAst_object_struct_declaration_list_iterator *iter=(PyCAst_object_struct_declaration_list_iterator*)PyCAst_type_struct_declaration_list_iterator.tp_new(&PyCAst_type_struct_declaration_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::struct_declaration_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_struct_declaration_list_iterator(PyObject* _self)
{
	PyCAst_object_struct_declaration_list_iterator *self=(PyCAst_object_struct_declaration_list_iterator*)_self;
	CAst::struct_declaration_list_iterator *iter=self->_p_cast_object;
	CAst::struct_declaration_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_struct_declaration_list_item *ret=(PyCAst_object_struct_declaration_list_item*)PyCAst_type_struct_declaration_list_item.tp_new(&PyCAst_type_struct_declaration_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::struct_declaration_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_struct_declaration_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_struct_declaration_list_item_struct_declaration(PyObject *_self)
{
	PyCAst_object_struct_declaration_list_item *self=(PyCAst_object_struct_declaration_list_item*)(_self);
	CAst::struct_declaration_list_item *_c_obj=self->_p_cast_object;
	CAst::struct_declaration *_p_parameter=const_cast<CAst::struct_declaration*>(_c_obj->get_p_struct_declaration());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STRUCT_DECLARATION)
	{
		PyCAst_object_struct_declaration *pyObj=(PyCAst_object_struct_declaration*)PyCAst_type_struct_declaration.tp_new(&PyCAst_type_struct_declaration,NULL,NULL);
		pyObj->_p_cast_object=new CAst::struct_declaration(*dynamic_cast<CAst::struct_declaration*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF assignment_operator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_assignment_operator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::assignment_operator\033[0m\n");
    PyCAst_object_assignment_operator *self;
    self = (PyCAst_object_assignment_operator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_assignment_operator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::assignment_operator\033[0m\n");
    PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_assignment_operator(PyCAst_object_assignment_operator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::assignment_operator\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_assignment_operator_code(PyObject *_self)
{
	PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_assignment_operator_token1(PyObject *_self)
{
	PyCAst_object_assignment_operator *self=(PyCAst_object_assignment_operator*)(_self);
	CAst::assignment_operator *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF struct_declaration

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declaration\033[0m\n");
    PyCAst_object_struct_declaration *self;
    self = (PyCAst_object_struct_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declaration(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declaration\033[0m\n");
    PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_struct_declaration(PyCAst_object_struct_declaration *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declaration\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_struct_declaration_code(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_struct_declaration_specifier_qualifier_list(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
	CAst::struct_declaration *_c_obj=self->_p_cast_object;
	CAst::specifier_qualifier_list *_p_parameter=_c_obj->get_p_specifier_qualifier_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_SPECIFIER_QUALIFIER_LIST1)
	{
		PyCAst_object_specifier_qualifier_list1 *pyObj=(PyCAst_object_specifier_qualifier_list1*)PyCAst_type_specifier_qualifier_list1.tp_new(&PyCAst_type_specifier_qualifier_list1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::specifier_qualifier_list1(*dynamic_cast<CAst::specifier_qualifier_list1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_SPECIFIER_QUALIFIER_LIST2)
	{
		PyCAst_object_specifier_qualifier_list2 *pyObj=(PyCAst_object_specifier_qualifier_list2*)PyCAst_type_specifier_qualifier_list2.tp_new(&PyCAst_type_specifier_qualifier_list2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::specifier_qualifier_list2(*dynamic_cast<CAst::specifier_qualifier_list2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_struct_declaration_struct_declarator_list(PyObject *_self)
{
	PyCAst_object_struct_declaration *self=(PyCAst_object_struct_declaration*)(_self);
	CAst::struct_declaration *_c_obj=self->_p_cast_object;
	CAst::struct_declarator_list *_p_parameter=_c_obj->get_p_struct_declarator_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STRUCT_DECLARATOR_LIST)
	{
		PyCAst_object_struct_declarator_list *pyObj=(PyCAst_object_struct_declarator_list*)PyCAst_type_struct_declarator_list.tp_new(&PyCAst_type_struct_declarator_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::struct_declarator_list(*dynamic_cast<CAst::struct_declarator_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF abstract_declarator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_abstract_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::abstract_declarator\033[0m\n");
    PyCAst_object_abstract_declarator *self;
    self = (PyCAst_object_abstract_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_abstract_declarator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::abstract_declarator\033[0m\n");
    PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_abstract_declarator(PyCAst_object_abstract_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::abstract_declarator\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_abstract_declarator_code(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_abstract_declarator_pointer(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
	CAst::abstract_declarator *_c_obj=self->_p_cast_object;
	CAst::pointer *_p_parameter=_c_obj->get_p_pointer();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POINTER)
	{
		PyCAst_object_pointer *pyObj=(PyCAst_object_pointer*)PyCAst_type_pointer.tp_new(&PyCAst_type_pointer,NULL,NULL);
		pyObj->_p_cast_object=new CAst::pointer(*dynamic_cast<CAst::pointer*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_abstract_declarator_direct_abstract_declarator(PyObject *_self)
{
	PyCAst_object_abstract_declarator *self=(PyCAst_object_abstract_declarator*)(_self);
	CAst::abstract_declarator *_c_obj=self->_p_cast_object;
	CAst::direct_abstract_declarator *_p_parameter=_c_obj->get_p_direct_abstract_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR1)
	{
		PyCAst_object_direct_abstract_declarator1 *pyObj=(PyCAst_object_direct_abstract_declarator1*)PyCAst_type_direct_abstract_declarator1.tp_new(&PyCAst_type_direct_abstract_declarator1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator1(*dynamic_cast<CAst::direct_abstract_declarator1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR2)
	{
		PyCAst_object_direct_abstract_declarator2 *pyObj=(PyCAst_object_direct_abstract_declarator2*)PyCAst_type_direct_abstract_declarator2.tp_new(&PyCAst_type_direct_abstract_declarator2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator2(*dynamic_cast<CAst::direct_abstract_declarator2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR3)
	{
		PyCAst_object_direct_abstract_declarator3 *pyObj=(PyCAst_object_direct_abstract_declarator3*)PyCAst_type_direct_abstract_declarator3.tp_new(&PyCAst_type_direct_abstract_declarator3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator3(*dynamic_cast<CAst::direct_abstract_declarator3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF iteration_statement1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_iteration_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::iteration_statement1\033[0m\n");
    PyCAst_object_iteration_statement1 *self;
    self = (PyCAst_object_iteration_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_iteration_statement1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::iteration_statement1\033[0m\n");
    PyCAst_object_iteration_statement1 *self=(PyCAst_object_iteration_statement1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_iteration_statement1(PyCAst_object_iteration_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::iteration_statement1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_iteration_statement1_code(PyObject *_self)
{
	PyCAst_object_iteration_statement1 *self=(PyCAst_object_iteration_statement1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_iteration_statement1_statement(PyObject *_self)
{
	PyCAst_object_iteration_statement1 *self=(PyCAst_object_iteration_statement1*)(_self);
	CAst::iteration_statement1 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_iteration_statement1_expression(PyObject *_self)
{
	PyCAst_object_iteration_statement1 *self=(PyCAst_object_iteration_statement1*)(_self);
	CAst::iteration_statement1 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF iteration_statement2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_iteration_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::iteration_statement2\033[0m\n");
    PyCAst_object_iteration_statement2 *self;
    self = (PyCAst_object_iteration_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_iteration_statement2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::iteration_statement2\033[0m\n");
    PyCAst_object_iteration_statement2 *self=(PyCAst_object_iteration_statement2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_iteration_statement2(PyCAst_object_iteration_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::iteration_statement2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_iteration_statement2_code(PyObject *_self)
{
	PyCAst_object_iteration_statement2 *self=(PyCAst_object_iteration_statement2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_iteration_statement2_expression_statement(PyObject *_self)
{
	PyCAst_object_iteration_statement2 *self=(PyCAst_object_iteration_statement2*)(_self);
	CAst::iteration_statement2 *_c_obj=self->_p_cast_object;
	CAst::expression_statement *_p_parameter=_c_obj->get_p_expression_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION_STATEMENT)
	{
		PyCAst_object_expression_statement *pyObj=(PyCAst_object_expression_statement*)PyCAst_type_expression_statement.tp_new(&PyCAst_type_expression_statement,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression_statement(*dynamic_cast<CAst::expression_statement*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_iteration_statement2_expression_statement1(PyObject *_self)
{
	PyCAst_object_iteration_statement2 *self=(PyCAst_object_iteration_statement2*)(_self);
	CAst::iteration_statement2 *_c_obj=self->_p_cast_object;
	CAst::expression_statement *_p_parameter=_c_obj->get_p_expression_statement1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION_STATEMENT)
	{
		PyCAst_object_expression_statement *pyObj=(PyCAst_object_expression_statement*)PyCAst_type_expression_statement.tp_new(&PyCAst_type_expression_statement,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression_statement(*dynamic_cast<CAst::expression_statement*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_iteration_statement2_expression(PyObject *_self)
{
	PyCAst_object_iteration_statement2 *self=(PyCAst_object_iteration_statement2*)(_self);
	CAst::iteration_statement2 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_iteration_statement2_statement(PyObject *_self)
{
	PyCAst_object_iteration_statement2 *self=(PyCAst_object_iteration_statement2*)(_self);
	CAst::iteration_statement2 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF iteration_statement3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_iteration_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::iteration_statement3\033[0m\n");
    PyCAst_object_iteration_statement3 *self;
    self = (PyCAst_object_iteration_statement3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_iteration_statement3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::iteration_statement3\033[0m\n");
    PyCAst_object_iteration_statement3 *self=(PyCAst_object_iteration_statement3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_iteration_statement3(PyCAst_object_iteration_statement3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::iteration_statement3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_iteration_statement3_code(PyObject *_self)
{
	PyCAst_object_iteration_statement3 *self=(PyCAst_object_iteration_statement3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_iteration_statement3_expression(PyObject *_self)
{
	PyCAst_object_iteration_statement3 *self=(PyCAst_object_iteration_statement3*)(_self);
	CAst::iteration_statement3 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_iteration_statement3_statement(PyObject *_self)
{
	PyCAst_object_iteration_statement3 *self=(PyCAst_object_iteration_statement3*)(_self);
	CAst::iteration_statement3 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF additive_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_additive_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::additive_expression_iterator\033[0m\n");
    PyCAst_object_additive_expression_iterator *self;
    self = (PyCAst_object_additive_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_additive_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::additive_expression_iterator\033[0m\n");
    PyCAst_object_additive_expression_iterator *self=(PyCAst_object_additive_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF additive_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_additive_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::additive_expression_item\033[0m\n");
    PyCAst_object_additive_expression_item *self;
    self = (PyCAst_object_additive_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_additive_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::additive_expression_item\033[0m\n");
    PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_additive_expression_item_ast(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
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

static PyObject *PyCAst_getter_additive_expression_item_code(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF additive_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_additive_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::additive_expression\033[0m\n");
    PyCAst_object_additive_expression *self;
    self = (PyCAst_object_additive_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_additive_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::additive_expression\033[0m\n");
    PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_additive_expression(PyCAst_object_additive_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::additive_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_additive_expression_code(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_additive_expression(PyObject *_self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)_self;
	CAst::additive_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_additive_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)_self;
	CAst::additive_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_additive_expression_item *ret=(PyCAst_object_additive_expression_item*)PyCAst_type_additive_expression_item.tp_new(&PyCAst_type_additive_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::additive_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_additive_expression(PyObject* _self)
{
	PyCAst_object_additive_expression *self=(PyCAst_object_additive_expression*)_self;
	PyCAst_object_additive_expression_iterator *iter=(PyCAst_object_additive_expression_iterator*)PyCAst_type_additive_expression_iterator.tp_new(&PyCAst_type_additive_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::additive_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_additive_expression_iterator(PyObject* _self)
{
	PyCAst_object_additive_expression_iterator *self=(PyCAst_object_additive_expression_iterator*)_self;
	CAst::additive_expression_iterator *iter=self->_p_cast_object;
	CAst::additive_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_additive_expression_item *ret=(PyCAst_object_additive_expression_item*)PyCAst_type_additive_expression_item.tp_new(&PyCAst_type_additive_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::additive_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_additive_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_additive_expression_item_token1(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
	CAst::additive_expression_item *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=const_cast<CAst::Token*>(_c_obj->get_p_token1());
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_additive_expression_item_multiplicative_expression(PyObject *_self)
{
	PyCAst_object_additive_expression_item *self=(PyCAst_object_additive_expression_item*)(_self);
	CAst::additive_expression_item *_c_obj=self->_p_cast_object;
	CAst::multiplicative_expression *_p_parameter=const_cast<CAst::multiplicative_expression*>(_c_obj->get_p_multiplicative_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_MULTIPLICATIVE_EXPRESSION)
	{
		PyCAst_object_multiplicative_expression *pyObj=(PyCAst_object_multiplicative_expression*)PyCAst_type_multiplicative_expression.tp_new(&PyCAst_type_multiplicative_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::multiplicative_expression(*dynamic_cast<CAst::multiplicative_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF external_declaration1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_external_declaration1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::external_declaration1\033[0m\n");
    PyCAst_object_external_declaration1 *self;
    self = (PyCAst_object_external_declaration1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_external_declaration1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::external_declaration1\033[0m\n");
    PyCAst_object_external_declaration1 *self=(PyCAst_object_external_declaration1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_external_declaration1(PyCAst_object_external_declaration1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::external_declaration1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_external_declaration1_code(PyObject *_self)
{
	PyCAst_object_external_declaration1 *self=(PyCAst_object_external_declaration1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_external_declaration1_function_definition(PyObject *_self)
{
	PyCAst_object_external_declaration1 *self=(PyCAst_object_external_declaration1*)(_self);
	CAst::external_declaration1 *_c_obj=self->_p_cast_object;
	CAst::function_definition *_p_parameter=_c_obj->get_p_function_definition();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_FUNCTION_DEFINITION)
	{
		PyCAst_object_function_definition *pyObj=(PyCAst_object_function_definition*)PyCAst_type_function_definition.tp_new(&PyCAst_type_function_definition,NULL,NULL);
		pyObj->_p_cast_object=new CAst::function_definition(*dynamic_cast<CAst::function_definition*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF external_declaration2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_external_declaration2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::external_declaration2\033[0m\n");
    PyCAst_object_external_declaration2 *self;
    self = (PyCAst_object_external_declaration2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_external_declaration2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::external_declaration2\033[0m\n");
    PyCAst_object_external_declaration2 *self=(PyCAst_object_external_declaration2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_external_declaration2(PyCAst_object_external_declaration2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::external_declaration2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_external_declaration2_code(PyObject *_self)
{
	PyCAst_object_external_declaration2 *self=(PyCAst_object_external_declaration2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_external_declaration2_declaration(PyObject *_self)
{
	PyCAst_object_external_declaration2 *self=(PyCAst_object_external_declaration2*)(_self);
	CAst::external_declaration2 *_c_obj=self->_p_cast_object;
	CAst::declaration *_p_parameter=_c_obj->get_p_declaration();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION)
	{
		PyCAst_object_declaration *pyObj=(PyCAst_object_declaration*)PyCAst_type_declaration.tp_new(&PyCAst_type_declaration,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration(*dynamic_cast<CAst::declaration*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF type_specifier1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_specifier1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_specifier1\033[0m\n");
    PyCAst_object_type_specifier1 *self;
    self = (PyCAst_object_type_specifier1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_specifier1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_specifier1\033[0m\n");
    PyCAst_object_type_specifier1 *self=(PyCAst_object_type_specifier1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_type_specifier1(PyCAst_object_type_specifier1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_specifier1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_type_specifier1_code(PyObject *_self)
{
	PyCAst_object_type_specifier1 *self=(PyCAst_object_type_specifier1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_type_specifier1_token1(PyObject *_self)
{
	PyCAst_object_type_specifier1 *self=(PyCAst_object_type_specifier1*)(_self);
	CAst::type_specifier1 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF type_specifier2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_specifier2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_specifier2\033[0m\n");
    PyCAst_object_type_specifier2 *self;
    self = (PyCAst_object_type_specifier2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_specifier2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_specifier2\033[0m\n");
    PyCAst_object_type_specifier2 *self=(PyCAst_object_type_specifier2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_type_specifier2(PyCAst_object_type_specifier2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_specifier2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_type_specifier2_code(PyObject *_self)
{
	PyCAst_object_type_specifier2 *self=(PyCAst_object_type_specifier2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_type_specifier2_struct_or_union_specifier(PyObject *_self)
{
	PyCAst_object_type_specifier2 *self=(PyCAst_object_type_specifier2*)(_self);
	CAst::type_specifier2 *_c_obj=self->_p_cast_object;
	CAst::struct_or_union_specifier *_p_parameter=_c_obj->get_p_struct_or_union_specifier();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STRUCT_OR_UNION_SPECIFIER)
	{
		PyCAst_object_struct_or_union_specifier *pyObj=(PyCAst_object_struct_or_union_specifier*)PyCAst_type_struct_or_union_specifier.tp_new(&PyCAst_type_struct_or_union_specifier,NULL,NULL);
		pyObj->_p_cast_object=new CAst::struct_or_union_specifier(*dynamic_cast<CAst::struct_or_union_specifier*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF type_specifier3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_specifier3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_specifier3\033[0m\n");
    PyCAst_object_type_specifier3 *self;
    self = (PyCAst_object_type_specifier3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_specifier3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_specifier3\033[0m\n");
    PyCAst_object_type_specifier3 *self=(PyCAst_object_type_specifier3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_type_specifier3(PyCAst_object_type_specifier3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_specifier3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_type_specifier3_code(PyObject *_self)
{
	PyCAst_object_type_specifier3 *self=(PyCAst_object_type_specifier3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_type_specifier3_enum_specifier(PyObject *_self)
{
	PyCAst_object_type_specifier3 *self=(PyCAst_object_type_specifier3*)(_self);
	CAst::type_specifier3 *_c_obj=self->_p_cast_object;
	CAst::enum_specifier *_p_parameter=_c_obj->get_p_enum_specifier();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ENUM_SPECIFIER)
	{
		PyCAst_object_enum_specifier *pyObj=(PyCAst_object_enum_specifier*)PyCAst_type_enum_specifier.tp_new(&PyCAst_type_enum_specifier,NULL,NULL);
		pyObj->_p_cast_object=new CAst::enum_specifier(*dynamic_cast<CAst::enum_specifier*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF compound_statement

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_compound_statement(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::compound_statement\033[0m\n");
    PyCAst_object_compound_statement *self;
    self = (PyCAst_object_compound_statement*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_compound_statement(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::compound_statement\033[0m\n");
    PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_compound_statement(PyCAst_object_compound_statement *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::compound_statement\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_compound_statement_code(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_compound_statement_declaration_list(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
	CAst::compound_statement *_c_obj=self->_p_cast_object;
	CAst::declaration_list *_p_parameter=_c_obj->get_p_declaration_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_LIST)
	{
		PyCAst_object_declaration_list *pyObj=(PyCAst_object_declaration_list*)PyCAst_type_declaration_list.tp_new(&PyCAst_type_declaration_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_list(*dynamic_cast<CAst::declaration_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_compound_statement_statement_list(PyObject *_self)
{
	PyCAst_object_compound_statement *self=(PyCAst_object_compound_statement*)(_self);
	CAst::compound_statement *_c_obj=self->_p_cast_object;
	CAst::statement_list *_p_parameter=_c_obj->get_p_statement_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT_LIST)
	{
		PyCAst_object_statement_list *pyObj=(PyCAst_object_statement_list*)PyCAst_type_statement_list.tp_new(&PyCAst_type_statement_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement_list(*dynamic_cast<CAst::statement_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF inclusive_or_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_inclusive_or_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::inclusive_or_expression_iterator\033[0m\n");
    PyCAst_object_inclusive_or_expression_iterator *self;
    self = (PyCAst_object_inclusive_or_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_inclusive_or_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::inclusive_or_expression_iterator\033[0m\n");
    PyCAst_object_inclusive_or_expression_iterator *self=(PyCAst_object_inclusive_or_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF inclusive_or_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_inclusive_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::inclusive_or_expression_item\033[0m\n");
    PyCAst_object_inclusive_or_expression_item *self;
    self = (PyCAst_object_inclusive_or_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_inclusive_or_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::inclusive_or_expression_item\033[0m\n");
    PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_inclusive_or_expression_item_ast(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);
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

static PyObject *PyCAst_getter_inclusive_or_expression_item_code(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF inclusive_or_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_inclusive_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::inclusive_or_expression\033[0m\n");
    PyCAst_object_inclusive_or_expression *self;
    self = (PyCAst_object_inclusive_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_inclusive_or_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::inclusive_or_expression\033[0m\n");
    PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_inclusive_or_expression(PyCAst_object_inclusive_or_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::inclusive_or_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_inclusive_or_expression_code(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_inclusive_or_expression(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)_self;
	CAst::inclusive_or_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_inclusive_or_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)_self;
	CAst::inclusive_or_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_inclusive_or_expression_item *ret=(PyCAst_object_inclusive_or_expression_item*)PyCAst_type_inclusive_or_expression_item.tp_new(&PyCAst_type_inclusive_or_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::inclusive_or_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_inclusive_or_expression(PyObject* _self)
{
	PyCAst_object_inclusive_or_expression *self=(PyCAst_object_inclusive_or_expression*)_self;
	PyCAst_object_inclusive_or_expression_iterator *iter=(PyCAst_object_inclusive_or_expression_iterator*)PyCAst_type_inclusive_or_expression_iterator.tp_new(&PyCAst_type_inclusive_or_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::inclusive_or_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_inclusive_or_expression_iterator(PyObject* _self)
{
	PyCAst_object_inclusive_or_expression_iterator *self=(PyCAst_object_inclusive_or_expression_iterator*)_self;
	CAst::inclusive_or_expression_iterator *iter=self->_p_cast_object;
	CAst::inclusive_or_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_inclusive_or_expression_item *ret=(PyCAst_object_inclusive_or_expression_item*)PyCAst_type_inclusive_or_expression_item.tp_new(&PyCAst_type_inclusive_or_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::inclusive_or_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_inclusive_or_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_inclusive_or_expression_item_exclusive_or_expression(PyObject *_self)
{
	PyCAst_object_inclusive_or_expression_item *self=(PyCAst_object_inclusive_or_expression_item*)(_self);
	CAst::inclusive_or_expression_item *_c_obj=self->_p_cast_object;
	CAst::exclusive_or_expression *_p_parameter=const_cast<CAst::exclusive_or_expression*>(_c_obj->get_p_exclusive_or_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXCLUSIVE_OR_EXPRESSION)
	{
		PyCAst_object_exclusive_or_expression *pyObj=(PyCAst_object_exclusive_or_expression*)PyCAst_type_exclusive_or_expression.tp_new(&PyCAst_type_exclusive_or_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::exclusive_or_expression(*dynamic_cast<CAst::exclusive_or_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF pointer_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_pointer_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::pointer_iterator\033[0m\n");
    PyCAst_object_pointer_iterator *self;
    self = (PyCAst_object_pointer_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_pointer_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::pointer_iterator\033[0m\n");
    PyCAst_object_pointer_iterator *self=(PyCAst_object_pointer_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF pointer_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_pointer_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::pointer_item\033[0m\n");
    PyCAst_object_pointer_item *self;
    self = (PyCAst_object_pointer_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_pointer_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::pointer_item\033[0m\n");
    PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_pointer_item_ast(PyObject *_self)
{
	PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)(_self);
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

static PyObject *PyCAst_getter_pointer_item_code(PyObject *_self)
{
	PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF pointer

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_pointer(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::pointer\033[0m\n");
    PyCAst_object_pointer *self;
    self = (PyCAst_object_pointer*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_pointer(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::pointer\033[0m\n");
    PyCAst_object_pointer *self=(PyCAst_object_pointer*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_pointer(PyCAst_object_pointer *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::pointer\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_pointer_code(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_pointer(PyObject *_self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)_self;
	CAst::pointer *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_pointer(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)_self;
	CAst::pointer *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_pointer_item *ret=(PyCAst_object_pointer_item*)PyCAst_type_pointer_item.tp_new(&PyCAst_type_pointer_item,NULL,NULL);
	ret->_p_cast_object=new CAst::pointer_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_pointer(PyObject* _self)
{
	PyCAst_object_pointer *self=(PyCAst_object_pointer*)_self;
	PyCAst_object_pointer_iterator *iter=(PyCAst_object_pointer_iterator*)PyCAst_type_pointer_iterator.tp_new(&PyCAst_type_pointer_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::pointer_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_pointer_iterator(PyObject* _self)
{
	PyCAst_object_pointer_iterator *self=(PyCAst_object_pointer_iterator*)_self;
	CAst::pointer_iterator *iter=self->_p_cast_object;
	CAst::pointer *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_pointer_item *ret=(PyCAst_object_pointer_item*)PyCAst_type_pointer_item.tp_new(&PyCAst_type_pointer_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::pointer_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_pointer_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_pointer_item_type_qualifier_list(PyObject *_self)
{
	PyCAst_object_pointer_item *self=(PyCAst_object_pointer_item*)(_self);
	CAst::pointer_item *_c_obj=self->_p_cast_object;
	CAst::type_qualifier_list *_p_parameter=const_cast<CAst::type_qualifier_list*>(_c_obj->get_p_type_qualifier_list());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_QUALIFIER_LIST)
	{
		PyCAst_object_type_qualifier_list *pyObj=(PyCAst_object_type_qualifier_list*)PyCAst_type_type_qualifier_list.tp_new(&PyCAst_type_type_qualifier_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_qualifier_list(*dynamic_cast<CAst::type_qualifier_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF selection_statement1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_selection_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::selection_statement1\033[0m\n");
    PyCAst_object_selection_statement1 *self;
    self = (PyCAst_object_selection_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_selection_statement1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::selection_statement1\033[0m\n");
    PyCAst_object_selection_statement1 *self=(PyCAst_object_selection_statement1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_selection_statement1(PyCAst_object_selection_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::selection_statement1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_selection_statement1_code(PyObject *_self)
{
	PyCAst_object_selection_statement1 *self=(PyCAst_object_selection_statement1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_selection_statement1_expression(PyObject *_self)
{
	PyCAst_object_selection_statement1 *self=(PyCAst_object_selection_statement1*)(_self);
	CAst::selection_statement1 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_selection_statement1_statement(PyObject *_self)
{
	PyCAst_object_selection_statement1 *self=(PyCAst_object_selection_statement1*)(_self);
	CAst::selection_statement1 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_selection_statement1_token1(PyObject *_self)
{
	PyCAst_object_selection_statement1 *self=(PyCAst_object_selection_statement1*)(_self);
	CAst::selection_statement1 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_selection_statement1_statement1(PyObject *_self)
{
	PyCAst_object_selection_statement1 *self=(PyCAst_object_selection_statement1*)(_self);
	CAst::selection_statement1 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF selection_statement2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_selection_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::selection_statement2\033[0m\n");
    PyCAst_object_selection_statement2 *self;
    self = (PyCAst_object_selection_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_selection_statement2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::selection_statement2\033[0m\n");
    PyCAst_object_selection_statement2 *self=(PyCAst_object_selection_statement2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_selection_statement2(PyCAst_object_selection_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::selection_statement2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_selection_statement2_code(PyObject *_self)
{
	PyCAst_object_selection_statement2 *self=(PyCAst_object_selection_statement2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_selection_statement2_expression(PyObject *_self)
{
	PyCAst_object_selection_statement2 *self=(PyCAst_object_selection_statement2*)(_self);
	CAst::selection_statement2 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_selection_statement2_statement(PyObject *_self)
{
	PyCAst_object_selection_statement2 *self=(PyCAst_object_selection_statement2*)(_self);
	CAst::selection_statement2 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_postfix_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::postfix_expression1\033[0m\n");
    PyCAst_object_postfix_expression1 *self;
    self = (PyCAst_object_postfix_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_postfix_expression1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::postfix_expression1\033[0m\n");
    PyCAst_object_postfix_expression1 *self=(PyCAst_object_postfix_expression1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_postfix_expression1(PyCAst_object_postfix_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_postfix_expression1_code(PyObject *_self)
{
	PyCAst_object_postfix_expression1 *self=(PyCAst_object_postfix_expression1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_postfix_expression1_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression1 *self=(PyCAst_object_postfix_expression1*)(_self);
	CAst::postfix_expression1 *_c_obj=self->_p_cast_object;
	CAst::postfix_expression *_p_parameter=_c_obj->get_p_postfix_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION1)
	{
		PyCAst_object_postfix_expression1 *pyObj=(PyCAst_object_postfix_expression1*)PyCAst_type_postfix_expression1.tp_new(&PyCAst_type_postfix_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression1(*dynamic_cast<CAst::postfix_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION2)
	{
		PyCAst_object_postfix_expression2 *pyObj=(PyCAst_object_postfix_expression2*)PyCAst_type_postfix_expression2.tp_new(&PyCAst_type_postfix_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression2(*dynamic_cast<CAst::postfix_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION3)
	{
		PyCAst_object_postfix_expression3 *pyObj=(PyCAst_object_postfix_expression3*)PyCAst_type_postfix_expression3.tp_new(&PyCAst_type_postfix_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression3(*dynamic_cast<CAst::postfix_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION4)
	{
		PyCAst_object_postfix_expression4 *pyObj=(PyCAst_object_postfix_expression4*)PyCAst_type_postfix_expression4.tp_new(&PyCAst_type_postfix_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression4(*dynamic_cast<CAst::postfix_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION5)
	{
		PyCAst_object_postfix_expression5 *pyObj=(PyCAst_object_postfix_expression5*)PyCAst_type_postfix_expression5.tp_new(&PyCAst_type_postfix_expression5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression5(*dynamic_cast<CAst::postfix_expression5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_postfix_expression1_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression1 *self=(PyCAst_object_postfix_expression1*)(_self);
	CAst::postfix_expression1 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_postfix_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::postfix_expression2\033[0m\n");
    PyCAst_object_postfix_expression2 *self;
    self = (PyCAst_object_postfix_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_postfix_expression2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::postfix_expression2\033[0m\n");
    PyCAst_object_postfix_expression2 *self=(PyCAst_object_postfix_expression2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_postfix_expression2(PyCAst_object_postfix_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_postfix_expression2_code(PyObject *_self)
{
	PyCAst_object_postfix_expression2 *self=(PyCAst_object_postfix_expression2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_postfix_expression2_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression2 *self=(PyCAst_object_postfix_expression2*)(_self);
	CAst::postfix_expression2 *_c_obj=self->_p_cast_object;
	CAst::postfix_expression *_p_parameter=_c_obj->get_p_postfix_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION1)
	{
		PyCAst_object_postfix_expression1 *pyObj=(PyCAst_object_postfix_expression1*)PyCAst_type_postfix_expression1.tp_new(&PyCAst_type_postfix_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression1(*dynamic_cast<CAst::postfix_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION2)
	{
		PyCAst_object_postfix_expression2 *pyObj=(PyCAst_object_postfix_expression2*)PyCAst_type_postfix_expression2.tp_new(&PyCAst_type_postfix_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression2(*dynamic_cast<CAst::postfix_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION3)
	{
		PyCAst_object_postfix_expression3 *pyObj=(PyCAst_object_postfix_expression3*)PyCAst_type_postfix_expression3.tp_new(&PyCAst_type_postfix_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression3(*dynamic_cast<CAst::postfix_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION4)
	{
		PyCAst_object_postfix_expression4 *pyObj=(PyCAst_object_postfix_expression4*)PyCAst_type_postfix_expression4.tp_new(&PyCAst_type_postfix_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression4(*dynamic_cast<CAst::postfix_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION5)
	{
		PyCAst_object_postfix_expression5 *pyObj=(PyCAst_object_postfix_expression5*)PyCAst_type_postfix_expression5.tp_new(&PyCAst_type_postfix_expression5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression5(*dynamic_cast<CAst::postfix_expression5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_postfix_expression2_argument_expression_list(PyObject *_self)
{
	PyCAst_object_postfix_expression2 *self=(PyCAst_object_postfix_expression2*)(_self);
	CAst::postfix_expression2 *_c_obj=self->_p_cast_object;
	CAst::argument_expression_list *_p_parameter=_c_obj->get_p_argument_expression_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ARGUMENT_EXPRESSION_LIST)
	{
		PyCAst_object_argument_expression_list *pyObj=(PyCAst_object_argument_expression_list*)PyCAst_type_argument_expression_list.tp_new(&PyCAst_type_argument_expression_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::argument_expression_list(*dynamic_cast<CAst::argument_expression_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_postfix_expression3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::postfix_expression3\033[0m\n");
    PyCAst_object_postfix_expression3 *self;
    self = (PyCAst_object_postfix_expression3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_postfix_expression3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::postfix_expression3\033[0m\n");
    PyCAst_object_postfix_expression3 *self=(PyCAst_object_postfix_expression3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_postfix_expression3(PyCAst_object_postfix_expression3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_postfix_expression3_code(PyObject *_self)
{
	PyCAst_object_postfix_expression3 *self=(PyCAst_object_postfix_expression3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_postfix_expression3_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression3 *self=(PyCAst_object_postfix_expression3*)(_self);
	CAst::postfix_expression3 *_c_obj=self->_p_cast_object;
	CAst::postfix_expression *_p_parameter=_c_obj->get_p_postfix_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION1)
	{
		PyCAst_object_postfix_expression1 *pyObj=(PyCAst_object_postfix_expression1*)PyCAst_type_postfix_expression1.tp_new(&PyCAst_type_postfix_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression1(*dynamic_cast<CAst::postfix_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION2)
	{
		PyCAst_object_postfix_expression2 *pyObj=(PyCAst_object_postfix_expression2*)PyCAst_type_postfix_expression2.tp_new(&PyCAst_type_postfix_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression2(*dynamic_cast<CAst::postfix_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION3)
	{
		PyCAst_object_postfix_expression3 *pyObj=(PyCAst_object_postfix_expression3*)PyCAst_type_postfix_expression3.tp_new(&PyCAst_type_postfix_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression3(*dynamic_cast<CAst::postfix_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION4)
	{
		PyCAst_object_postfix_expression4 *pyObj=(PyCAst_object_postfix_expression4*)PyCAst_type_postfix_expression4.tp_new(&PyCAst_type_postfix_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression4(*dynamic_cast<CAst::postfix_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION5)
	{
		PyCAst_object_postfix_expression5 *pyObj=(PyCAst_object_postfix_expression5*)PyCAst_type_postfix_expression5.tp_new(&PyCAst_type_postfix_expression5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression5(*dynamic_cast<CAst::postfix_expression5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_postfix_expression3_token1(PyObject *_self)
{
	PyCAst_object_postfix_expression3 *self=(PyCAst_object_postfix_expression3*)(_self);
	CAst::postfix_expression3 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_postfix_expression3_token2(PyObject *_self)
{
	PyCAst_object_postfix_expression3 *self=(PyCAst_object_postfix_expression3*)(_self);
	CAst::postfix_expression3 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token2();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression4

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_postfix_expression4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::postfix_expression4\033[0m\n");
    PyCAst_object_postfix_expression4 *self;
    self = (PyCAst_object_postfix_expression4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_postfix_expression4(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::postfix_expression4\033[0m\n");
    PyCAst_object_postfix_expression4 *self=(PyCAst_object_postfix_expression4*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_postfix_expression4(PyCAst_object_postfix_expression4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression4\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_postfix_expression4_code(PyObject *_self)
{
	PyCAst_object_postfix_expression4 *self=(PyCAst_object_postfix_expression4*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_postfix_expression4_postfix_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression4 *self=(PyCAst_object_postfix_expression4*)(_self);
	CAst::postfix_expression4 *_c_obj=self->_p_cast_object;
	CAst::postfix_expression *_p_parameter=_c_obj->get_p_postfix_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION1)
	{
		PyCAst_object_postfix_expression1 *pyObj=(PyCAst_object_postfix_expression1*)PyCAst_type_postfix_expression1.tp_new(&PyCAst_type_postfix_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression1(*dynamic_cast<CAst::postfix_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION2)
	{
		PyCAst_object_postfix_expression2 *pyObj=(PyCAst_object_postfix_expression2*)PyCAst_type_postfix_expression2.tp_new(&PyCAst_type_postfix_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression2(*dynamic_cast<CAst::postfix_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION3)
	{
		PyCAst_object_postfix_expression3 *pyObj=(PyCAst_object_postfix_expression3*)PyCAst_type_postfix_expression3.tp_new(&PyCAst_type_postfix_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression3(*dynamic_cast<CAst::postfix_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION4)
	{
		PyCAst_object_postfix_expression4 *pyObj=(PyCAst_object_postfix_expression4*)PyCAst_type_postfix_expression4.tp_new(&PyCAst_type_postfix_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression4(*dynamic_cast<CAst::postfix_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POSTFIX_EXPRESSION5)
	{
		PyCAst_object_postfix_expression5 *pyObj=(PyCAst_object_postfix_expression5*)PyCAst_type_postfix_expression5.tp_new(&PyCAst_type_postfix_expression5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::postfix_expression5(*dynamic_cast<CAst::postfix_expression5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_postfix_expression4_token1(PyObject *_self)
{
	PyCAst_object_postfix_expression4 *self=(PyCAst_object_postfix_expression4*)(_self);
	CAst::postfix_expression4 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF postfix_expression5

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_postfix_expression5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::postfix_expression5\033[0m\n");
    PyCAst_object_postfix_expression5 *self;
    self = (PyCAst_object_postfix_expression5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_postfix_expression5(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::postfix_expression5\033[0m\n");
    PyCAst_object_postfix_expression5 *self=(PyCAst_object_postfix_expression5*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_postfix_expression5(PyCAst_object_postfix_expression5 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::postfix_expression5\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_postfix_expression5_code(PyObject *_self)
{
	PyCAst_object_postfix_expression5 *self=(PyCAst_object_postfix_expression5*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_postfix_expression5_primary_expression(PyObject *_self)
{
	PyCAst_object_postfix_expression5 *self=(PyCAst_object_postfix_expression5*)(_self);
	CAst::postfix_expression5 *_c_obj=self->_p_cast_object;
	CAst::primary_expression *_p_parameter=_c_obj->get_p_primary_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_PRIMARY_EXPRESSION1)
	{
		PyCAst_object_primary_expression1 *pyObj=(PyCAst_object_primary_expression1*)PyCAst_type_primary_expression1.tp_new(&PyCAst_type_primary_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::primary_expression1(*dynamic_cast<CAst::primary_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_PRIMARY_EXPRESSION2)
	{
		PyCAst_object_primary_expression2 *pyObj=(PyCAst_object_primary_expression2*)PyCAst_type_primary_expression2.tp_new(&PyCAst_type_primary_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::primary_expression2(*dynamic_cast<CAst::primary_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF and_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_and_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::and_expression_iterator\033[0m\n");
    PyCAst_object_and_expression_iterator *self;
    self = (PyCAst_object_and_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_and_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::and_expression_iterator\033[0m\n");
    PyCAst_object_and_expression_iterator *self=(PyCAst_object_and_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF and_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::and_expression_item\033[0m\n");
    PyCAst_object_and_expression_item *self;
    self = (PyCAst_object_and_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_and_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::and_expression_item\033[0m\n");
    PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_and_expression_item_ast(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);
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

static PyObject *PyCAst_getter_and_expression_item_code(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF and_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::and_expression\033[0m\n");
    PyCAst_object_and_expression *self;
    self = (PyCAst_object_and_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_and_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::and_expression\033[0m\n");
    PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_and_expression(PyCAst_object_and_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::and_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_and_expression_code(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_and_expression(PyObject *_self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)_self;
	CAst::and_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_and_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)_self;
	CAst::and_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_and_expression_item *ret=(PyCAst_object_and_expression_item*)PyCAst_type_and_expression_item.tp_new(&PyCAst_type_and_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::and_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_and_expression(PyObject* _self)
{
	PyCAst_object_and_expression *self=(PyCAst_object_and_expression*)_self;
	PyCAst_object_and_expression_iterator *iter=(PyCAst_object_and_expression_iterator*)PyCAst_type_and_expression_iterator.tp_new(&PyCAst_type_and_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::and_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_and_expression_iterator(PyObject* _self)
{
	PyCAst_object_and_expression_iterator *self=(PyCAst_object_and_expression_iterator*)_self;
	CAst::and_expression_iterator *iter=self->_p_cast_object;
	CAst::and_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_and_expression_item *ret=(PyCAst_object_and_expression_item*)PyCAst_type_and_expression_item.tp_new(&PyCAst_type_and_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::and_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_and_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_and_expression_item_equality_expression(PyObject *_self)
{
	PyCAst_object_and_expression_item *self=(PyCAst_object_and_expression_item*)(_self);
	CAst::and_expression_item *_c_obj=self->_p_cast_object;
	CAst::equality_expression *_p_parameter=const_cast<CAst::equality_expression*>(_c_obj->get_p_equality_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EQUALITY_EXPRESSION)
	{
		PyCAst_object_equality_expression *pyObj=(PyCAst_object_equality_expression*)PyCAst_type_equality_expression.tp_new(&PyCAst_type_equality_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::equality_expression(*dynamic_cast<CAst::equality_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF statement1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement1\033[0m\n");
    PyCAst_object_statement1 *self;
    self = (PyCAst_object_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement1\033[0m\n");
    PyCAst_object_statement1 *self=(PyCAst_object_statement1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_statement1(PyCAst_object_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_statement1_code(PyObject *_self)
{
	PyCAst_object_statement1 *self=(PyCAst_object_statement1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_statement1_labeled_statement(PyObject *_self)
{
	PyCAst_object_statement1 *self=(PyCAst_object_statement1*)(_self);
	CAst::statement1 *_c_obj=self->_p_cast_object;
	CAst::labeled_statement *_p_parameter=_c_obj->get_p_labeled_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_LABELED_STATEMENT1)
	{
		PyCAst_object_labeled_statement1 *pyObj=(PyCAst_object_labeled_statement1*)PyCAst_type_labeled_statement1.tp_new(&PyCAst_type_labeled_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::labeled_statement1(*dynamic_cast<CAst::labeled_statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_LABELED_STATEMENT2)
	{
		PyCAst_object_labeled_statement2 *pyObj=(PyCAst_object_labeled_statement2*)PyCAst_type_labeled_statement2.tp_new(&PyCAst_type_labeled_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::labeled_statement2(*dynamic_cast<CAst::labeled_statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF statement2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement2\033[0m\n");
    PyCAst_object_statement2 *self;
    self = (PyCAst_object_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement2\033[0m\n");
    PyCAst_object_statement2 *self=(PyCAst_object_statement2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_statement2(PyCAst_object_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_statement2_code(PyObject *_self)
{
	PyCAst_object_statement2 *self=(PyCAst_object_statement2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_statement2_compound_statement(PyObject *_self)
{
	PyCAst_object_statement2 *self=(PyCAst_object_statement2*)(_self);
	CAst::statement2 *_c_obj=self->_p_cast_object;
	CAst::compound_statement *_p_parameter=_c_obj->get_p_compound_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_COMPOUND_STATEMENT)
	{
		PyCAst_object_compound_statement *pyObj=(PyCAst_object_compound_statement*)PyCAst_type_compound_statement.tp_new(&PyCAst_type_compound_statement,NULL,NULL);
		pyObj->_p_cast_object=new CAst::compound_statement(*dynamic_cast<CAst::compound_statement*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF statement3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement3\033[0m\n");
    PyCAst_object_statement3 *self;
    self = (PyCAst_object_statement3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement3\033[0m\n");
    PyCAst_object_statement3 *self=(PyCAst_object_statement3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_statement3(PyCAst_object_statement3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_statement3_code(PyObject *_self)
{
	PyCAst_object_statement3 *self=(PyCAst_object_statement3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_statement3_expression_statement(PyObject *_self)
{
	PyCAst_object_statement3 *self=(PyCAst_object_statement3*)(_self);
	CAst::statement3 *_c_obj=self->_p_cast_object;
	CAst::expression_statement *_p_parameter=_c_obj->get_p_expression_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION_STATEMENT)
	{
		PyCAst_object_expression_statement *pyObj=(PyCAst_object_expression_statement*)PyCAst_type_expression_statement.tp_new(&PyCAst_type_expression_statement,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression_statement(*dynamic_cast<CAst::expression_statement*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF statement4

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement4\033[0m\n");
    PyCAst_object_statement4 *self;
    self = (PyCAst_object_statement4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement4(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement4\033[0m\n");
    PyCAst_object_statement4 *self=(PyCAst_object_statement4*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_statement4(PyCAst_object_statement4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement4\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_statement4_code(PyObject *_self)
{
	PyCAst_object_statement4 *self=(PyCAst_object_statement4*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_statement4_selection_statement(PyObject *_self)
{
	PyCAst_object_statement4 *self=(PyCAst_object_statement4*)(_self);
	CAst::statement4 *_c_obj=self->_p_cast_object;
	CAst::selection_statement *_p_parameter=_c_obj->get_p_selection_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_SELECTION_STATEMENT1)
	{
		PyCAst_object_selection_statement1 *pyObj=(PyCAst_object_selection_statement1*)PyCAst_type_selection_statement1.tp_new(&PyCAst_type_selection_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::selection_statement1(*dynamic_cast<CAst::selection_statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_SELECTION_STATEMENT2)
	{
		PyCAst_object_selection_statement2 *pyObj=(PyCAst_object_selection_statement2*)PyCAst_type_selection_statement2.tp_new(&PyCAst_type_selection_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::selection_statement2(*dynamic_cast<CAst::selection_statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF statement5

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement5\033[0m\n");
    PyCAst_object_statement5 *self;
    self = (PyCAst_object_statement5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement5(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement5\033[0m\n");
    PyCAst_object_statement5 *self=(PyCAst_object_statement5*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_statement5(PyCAst_object_statement5 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement5\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_statement5_code(PyObject *_self)
{
	PyCAst_object_statement5 *self=(PyCAst_object_statement5*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_statement5_iteration_statement(PyObject *_self)
{
	PyCAst_object_statement5 *self=(PyCAst_object_statement5*)(_self);
	CAst::statement5 *_c_obj=self->_p_cast_object;
	CAst::iteration_statement *_p_parameter=_c_obj->get_p_iteration_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ITERATION_STATEMENT1)
	{
		PyCAst_object_iteration_statement1 *pyObj=(PyCAst_object_iteration_statement1*)PyCAst_type_iteration_statement1.tp_new(&PyCAst_type_iteration_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::iteration_statement1(*dynamic_cast<CAst::iteration_statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ITERATION_STATEMENT2)
	{
		PyCAst_object_iteration_statement2 *pyObj=(PyCAst_object_iteration_statement2*)PyCAst_type_iteration_statement2.tp_new(&PyCAst_type_iteration_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::iteration_statement2(*dynamic_cast<CAst::iteration_statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ITERATION_STATEMENT3)
	{
		PyCAst_object_iteration_statement3 *pyObj=(PyCAst_object_iteration_statement3*)PyCAst_type_iteration_statement3.tp_new(&PyCAst_type_iteration_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::iteration_statement3(*dynamic_cast<CAst::iteration_statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF statement6

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement6(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement6\033[0m\n");
    PyCAst_object_statement6 *self;
    self = (PyCAst_object_statement6*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement6(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement6\033[0m\n");
    PyCAst_object_statement6 *self=(PyCAst_object_statement6*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_statement6(PyCAst_object_statement6 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement6\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_statement6_code(PyObject *_self)
{
	PyCAst_object_statement6 *self=(PyCAst_object_statement6*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_statement6_jump_statement(PyObject *_self)
{
	PyCAst_object_statement6 *self=(PyCAst_object_statement6*)(_self);
	CAst::statement6 *_c_obj=self->_p_cast_object;
	CAst::jump_statement *_p_parameter=_c_obj->get_p_jump_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_JUMP_STATEMENT1)
	{
		PyCAst_object_jump_statement1 *pyObj=(PyCAst_object_jump_statement1*)PyCAst_type_jump_statement1.tp_new(&PyCAst_type_jump_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::jump_statement1(*dynamic_cast<CAst::jump_statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_JUMP_STATEMENT2)
	{
		PyCAst_object_jump_statement2 *pyObj=(PyCAst_object_jump_statement2*)PyCAst_type_jump_statement2.tp_new(&PyCAst_type_jump_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::jump_statement2(*dynamic_cast<CAst::jump_statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_JUMP_STATEMENT3)
	{
		PyCAst_object_jump_statement3 *pyObj=(PyCAst_object_jump_statement3*)PyCAst_type_jump_statement3.tp_new(&PyCAst_type_jump_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::jump_statement3(*dynamic_cast<CAst::jump_statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF cast_expression1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_cast_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::cast_expression1\033[0m\n");
    PyCAst_object_cast_expression1 *self;
    self = (PyCAst_object_cast_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_cast_expression1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::cast_expression1\033[0m\n");
    PyCAst_object_cast_expression1 *self=(PyCAst_object_cast_expression1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_cast_expression1(PyCAst_object_cast_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::cast_expression1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_cast_expression1_code(PyObject *_self)
{
	PyCAst_object_cast_expression1 *self=(PyCAst_object_cast_expression1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_cast_expression1_type_name(PyObject *_self)
{
	PyCAst_object_cast_expression1 *self=(PyCAst_object_cast_expression1*)(_self);
	CAst::cast_expression1 *_c_obj=self->_p_cast_object;
	CAst::type_name *_p_parameter=_c_obj->get_p_type_name();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_NAME)
	{
		PyCAst_object_type_name *pyObj=(PyCAst_object_type_name*)PyCAst_type_type_name.tp_new(&PyCAst_type_type_name,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_name(*dynamic_cast<CAst::type_name*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_cast_expression1_cast_expression(PyObject *_self)
{
	PyCAst_object_cast_expression1 *self=(PyCAst_object_cast_expression1*)(_self);
	CAst::cast_expression1 *_c_obj=self->_p_cast_object;
	CAst::cast_expression *_p_parameter=_c_obj->get_p_cast_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CAST_EXPRESSION1)
	{
		PyCAst_object_cast_expression1 *pyObj=(PyCAst_object_cast_expression1*)PyCAst_type_cast_expression1.tp_new(&PyCAst_type_cast_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::cast_expression1(*dynamic_cast<CAst::cast_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CAST_EXPRESSION2)
	{
		PyCAst_object_cast_expression2 *pyObj=(PyCAst_object_cast_expression2*)PyCAst_type_cast_expression2.tp_new(&PyCAst_type_cast_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::cast_expression2(*dynamic_cast<CAst::cast_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF cast_expression2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_cast_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::cast_expression2\033[0m\n");
    PyCAst_object_cast_expression2 *self;
    self = (PyCAst_object_cast_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_cast_expression2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::cast_expression2\033[0m\n");
    PyCAst_object_cast_expression2 *self=(PyCAst_object_cast_expression2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_cast_expression2(PyCAst_object_cast_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::cast_expression2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_cast_expression2_code(PyObject *_self)
{
	PyCAst_object_cast_expression2 *self=(PyCAst_object_cast_expression2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_cast_expression2_unary_expression(PyObject *_self)
{
	PyCAst_object_cast_expression2 *self=(PyCAst_object_cast_expression2*)(_self);
	CAst::cast_expression2 *_c_obj=self->_p_cast_object;
	CAst::unary_expression *_p_parameter=_c_obj->get_p_unary_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION1)
	{
		PyCAst_object_unary_expression1 *pyObj=(PyCAst_object_unary_expression1*)PyCAst_type_unary_expression1.tp_new(&PyCAst_type_unary_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression1(*dynamic_cast<CAst::unary_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION2)
	{
		PyCAst_object_unary_expression2 *pyObj=(PyCAst_object_unary_expression2*)PyCAst_type_unary_expression2.tp_new(&PyCAst_type_unary_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression2(*dynamic_cast<CAst::unary_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION3)
	{
		PyCAst_object_unary_expression3 *pyObj=(PyCAst_object_unary_expression3*)PyCAst_type_unary_expression3.tp_new(&PyCAst_type_unary_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression3(*dynamic_cast<CAst::unary_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION4)
	{
		PyCAst_object_unary_expression4 *pyObj=(PyCAst_object_unary_expression4*)PyCAst_type_unary_expression4.tp_new(&PyCAst_type_unary_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression4(*dynamic_cast<CAst::unary_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF init_declarator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_init_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::init_declarator\033[0m\n");
    PyCAst_object_init_declarator *self;
    self = (PyCAst_object_init_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_init_declarator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::init_declarator\033[0m\n");
    PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_init_declarator(PyCAst_object_init_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::init_declarator\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_init_declarator_code(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_init_declarator_declarator(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	CAst::init_declarator *_c_obj=self->_p_cast_object;
	CAst::declarator *_p_parameter=_c_obj->get_p_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATOR)
	{
		PyCAst_object_declarator *pyObj=(PyCAst_object_declarator*)PyCAst_type_declarator.tp_new(&PyCAst_type_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declarator(*dynamic_cast<CAst::declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_init_declarator_token1(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	CAst::init_declarator *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_init_declarator_initializer(PyObject *_self)
{
	PyCAst_object_init_declarator *self=(PyCAst_object_init_declarator*)(_self);
	CAst::init_declarator *_c_obj=self->_p_cast_object;
	CAst::initializer *_p_parameter=_c_obj->get_p_initializer();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INITIALIZER1)
	{
		PyCAst_object_initializer1 *pyObj=(PyCAst_object_initializer1*)PyCAst_type_initializer1.tp_new(&PyCAst_type_initializer1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::initializer1(*dynamic_cast<CAst::initializer1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INITIALIZER2)
	{
		PyCAst_object_initializer2 *pyObj=(PyCAst_object_initializer2*)PyCAst_type_initializer2.tp_new(&PyCAst_type_initializer2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::initializer2(*dynamic_cast<CAst::initializer2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declarator_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declarator_list_iterator\033[0m\n");
    PyCAst_object_struct_declarator_list_iterator *self;
    self = (PyCAst_object_struct_declarator_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declarator_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declarator_list_iterator\033[0m\n");
    PyCAst_object_struct_declarator_list_iterator *self=(PyCAst_object_struct_declarator_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declarator_list_item\033[0m\n");
    PyCAst_object_struct_declarator_list_item *self;
    self = (PyCAst_object_struct_declarator_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declarator_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declarator_list_item\033[0m\n");
    PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_struct_declarator_list_item_ast(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);
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

static PyObject *PyCAst_getter_struct_declarator_list_item_code(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declarator_list\033[0m\n");
    PyCAst_object_struct_declarator_list *self;
    self = (PyCAst_object_struct_declarator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declarator_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declarator_list\033[0m\n");
    PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_struct_declarator_list(PyCAst_object_struct_declarator_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declarator_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_struct_declarator_list_code(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_struct_declarator_list(PyObject *_self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)_self;
	CAst::struct_declarator_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_struct_declarator_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)_self;
	CAst::struct_declarator_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_struct_declarator_list_item *ret=(PyCAst_object_struct_declarator_list_item*)PyCAst_type_struct_declarator_list_item.tp_new(&PyCAst_type_struct_declarator_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::struct_declarator_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_struct_declarator_list(PyObject* _self)
{
	PyCAst_object_struct_declarator_list *self=(PyCAst_object_struct_declarator_list*)_self;
	PyCAst_object_struct_declarator_list_iterator *iter=(PyCAst_object_struct_declarator_list_iterator*)PyCAst_type_struct_declarator_list_iterator.tp_new(&PyCAst_type_struct_declarator_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::struct_declarator_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_struct_declarator_list_iterator(PyObject* _self)
{
	PyCAst_object_struct_declarator_list_iterator *self=(PyCAst_object_struct_declarator_list_iterator*)_self;
	CAst::struct_declarator_list_iterator *iter=self->_p_cast_object;
	CAst::struct_declarator_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_struct_declarator_list_item *ret=(PyCAst_object_struct_declarator_list_item*)PyCAst_type_struct_declarator_list_item.tp_new(&PyCAst_type_struct_declarator_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::struct_declarator_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_struct_declarator_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_struct_declarator_list_item_struct_declarator(PyObject *_self)
{
	PyCAst_object_struct_declarator_list_item *self=(PyCAst_object_struct_declarator_list_item*)(_self);
	CAst::struct_declarator_list_item *_c_obj=self->_p_cast_object;
	CAst::struct_declarator *_p_parameter=const_cast<CAst::struct_declarator*>(_c_obj->get_p_struct_declarator());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STRUCT_DECLARATOR)
	{
		PyCAst_object_struct_declarator *pyObj=(PyCAst_object_struct_declarator*)PyCAst_type_struct_declarator.tp_new(&PyCAst_type_struct_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::struct_declarator(*dynamic_cast<CAst::struct_declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF logical_or_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_logical_or_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::logical_or_expression_iterator\033[0m\n");
    PyCAst_object_logical_or_expression_iterator *self;
    self = (PyCAst_object_logical_or_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_logical_or_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::logical_or_expression_iterator\033[0m\n");
    PyCAst_object_logical_or_expression_iterator *self=(PyCAst_object_logical_or_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF logical_or_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_logical_or_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::logical_or_expression_item\033[0m\n");
    PyCAst_object_logical_or_expression_item *self;
    self = (PyCAst_object_logical_or_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_logical_or_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::logical_or_expression_item\033[0m\n");
    PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_logical_or_expression_item_ast(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);
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

static PyObject *PyCAst_getter_logical_or_expression_item_code(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF logical_or_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_logical_or_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::logical_or_expression\033[0m\n");
    PyCAst_object_logical_or_expression *self;
    self = (PyCAst_object_logical_or_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_logical_or_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::logical_or_expression\033[0m\n");
    PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_logical_or_expression(PyCAst_object_logical_or_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::logical_or_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_logical_or_expression_code(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_logical_or_expression(PyObject *_self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)_self;
	CAst::logical_or_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_logical_or_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)_self;
	CAst::logical_or_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_logical_or_expression_item *ret=(PyCAst_object_logical_or_expression_item*)PyCAst_type_logical_or_expression_item.tp_new(&PyCAst_type_logical_or_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::logical_or_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_logical_or_expression(PyObject* _self)
{
	PyCAst_object_logical_or_expression *self=(PyCAst_object_logical_or_expression*)_self;
	PyCAst_object_logical_or_expression_iterator *iter=(PyCAst_object_logical_or_expression_iterator*)PyCAst_type_logical_or_expression_iterator.tp_new(&PyCAst_type_logical_or_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::logical_or_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_logical_or_expression_iterator(PyObject* _self)
{
	PyCAst_object_logical_or_expression_iterator *self=(PyCAst_object_logical_or_expression_iterator*)_self;
	CAst::logical_or_expression_iterator *iter=self->_p_cast_object;
	CAst::logical_or_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_logical_or_expression_item *ret=(PyCAst_object_logical_or_expression_item*)PyCAst_type_logical_or_expression_item.tp_new(&PyCAst_type_logical_or_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::logical_or_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_logical_or_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_logical_or_expression_item_logical_and_expression(PyObject *_self)
{
	PyCAst_object_logical_or_expression_item *self=(PyCAst_object_logical_or_expression_item*)(_self);
	CAst::logical_or_expression_item *_c_obj=self->_p_cast_object;
	CAst::logical_and_expression *_p_parameter=const_cast<CAst::logical_and_expression*>(_c_obj->get_p_logical_and_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_LOGICAL_AND_EXPRESSION)
	{
		PyCAst_object_logical_and_expression *pyObj=(PyCAst_object_logical_and_expression*)PyCAst_type_logical_and_expression.tp_new(&PyCAst_type_logical_and_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::logical_and_expression(*dynamic_cast<CAst::logical_and_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF unary_operator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_unary_operator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::unary_operator\033[0m\n");
    PyCAst_object_unary_operator *self;
    self = (PyCAst_object_unary_operator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_unary_operator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::unary_operator\033[0m\n");
    PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_unary_operator(PyCAst_object_unary_operator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::unary_operator\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_unary_operator_code(PyObject *_self)
{
	PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_unary_operator_token1(PyObject *_self)
{
	PyCAst_object_unary_operator *self=(PyCAst_object_unary_operator*)(_self);
	CAst::unary_operator *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF relational_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_relational_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::relational_expression_iterator\033[0m\n");
    PyCAst_object_relational_expression_iterator *self;
    self = (PyCAst_object_relational_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_relational_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::relational_expression_iterator\033[0m\n");
    PyCAst_object_relational_expression_iterator *self=(PyCAst_object_relational_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF relational_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_relational_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::relational_expression_item\033[0m\n");
    PyCAst_object_relational_expression_item *self;
    self = (PyCAst_object_relational_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_relational_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::relational_expression_item\033[0m\n");
    PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_relational_expression_item_ast(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
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

static PyObject *PyCAst_getter_relational_expression_item_code(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF relational_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_relational_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::relational_expression\033[0m\n");
    PyCAst_object_relational_expression *self;
    self = (PyCAst_object_relational_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_relational_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::relational_expression\033[0m\n");
    PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_relational_expression(PyCAst_object_relational_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::relational_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_relational_expression_code(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_relational_expression(PyObject *_self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)_self;
	CAst::relational_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_relational_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)_self;
	CAst::relational_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_relational_expression_item *ret=(PyCAst_object_relational_expression_item*)PyCAst_type_relational_expression_item.tp_new(&PyCAst_type_relational_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::relational_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_relational_expression(PyObject* _self)
{
	PyCAst_object_relational_expression *self=(PyCAst_object_relational_expression*)_self;
	PyCAst_object_relational_expression_iterator *iter=(PyCAst_object_relational_expression_iterator*)PyCAst_type_relational_expression_iterator.tp_new(&PyCAst_type_relational_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::relational_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_relational_expression_iterator(PyObject* _self)
{
	PyCAst_object_relational_expression_iterator *self=(PyCAst_object_relational_expression_iterator*)_self;
	CAst::relational_expression_iterator *iter=self->_p_cast_object;
	CAst::relational_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_relational_expression_item *ret=(PyCAst_object_relational_expression_item*)PyCAst_type_relational_expression_item.tp_new(&PyCAst_type_relational_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::relational_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_relational_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_relational_expression_item_token1(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
	CAst::relational_expression_item *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=const_cast<CAst::Token*>(_c_obj->get_p_token1());
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_relational_expression_item_shift_expression(PyObject *_self)
{
	PyCAst_object_relational_expression_item *self=(PyCAst_object_relational_expression_item*)(_self);
	CAst::relational_expression_item *_c_obj=self->_p_cast_object;
	CAst::shift_expression *_p_parameter=const_cast<CAst::shift_expression*>(_c_obj->get_p_shift_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_SHIFT_EXPRESSION)
	{
		PyCAst_object_shift_expression *pyObj=(PyCAst_object_shift_expression*)PyCAst_type_shift_expression.tp_new(&PyCAst_type_shift_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::shift_expression(*dynamic_cast<CAst::shift_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF struct_or_union

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_or_union(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_or_union\033[0m\n");
    PyCAst_object_struct_or_union *self;
    self = (PyCAst_object_struct_or_union*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_or_union(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_or_union\033[0m\n");
    PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_struct_or_union(PyCAst_object_struct_or_union *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_or_union\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_struct_or_union_code(PyObject *_self)
{
	PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_struct_or_union_token1(PyObject *_self)
{
	PyCAst_object_struct_or_union *self=(PyCAst_object_struct_or_union*)(_self);
	CAst::struct_or_union *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF enumerator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_enumerator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::enumerator\033[0m\n");
    PyCAst_object_enumerator *self;
    self = (PyCAst_object_enumerator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_enumerator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::enumerator\033[0m\n");
    PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_enumerator(PyCAst_object_enumerator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::enumerator\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_enumerator_code(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_enumerator_token1(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	CAst::enumerator *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_enumerator_token2(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	CAst::enumerator *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token2();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_enumerator_constant_expression(PyObject *_self)
{
	PyCAst_object_enumerator *self=(PyCAst_object_enumerator*)(_self);
	CAst::enumerator *_c_obj=self->_p_cast_object;
	CAst::constant_expression *_p_parameter=_c_obj->get_p_constant_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CONSTANT_EXPRESSION)
	{
		PyCAst_object_constant_expression *pyObj=(PyCAst_object_constant_expression*)PyCAst_type_constant_expression.tp_new(&PyCAst_type_constant_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::constant_expression(*dynamic_cast<CAst::constant_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF assignment_expression1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_assignment_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::assignment_expression1\033[0m\n");
    PyCAst_object_assignment_expression1 *self;
    self = (PyCAst_object_assignment_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_assignment_expression1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::assignment_expression1\033[0m\n");
    PyCAst_object_assignment_expression1 *self=(PyCAst_object_assignment_expression1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_assignment_expression1(PyCAst_object_assignment_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::assignment_expression1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_assignment_expression1_code(PyObject *_self)
{
	PyCAst_object_assignment_expression1 *self=(PyCAst_object_assignment_expression1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_assignment_expression1_unary_expression(PyObject *_self)
{
	PyCAst_object_assignment_expression1 *self=(PyCAst_object_assignment_expression1*)(_self);
	CAst::assignment_expression1 *_c_obj=self->_p_cast_object;
	CAst::unary_expression *_p_parameter=_c_obj->get_p_unary_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION1)
	{
		PyCAst_object_unary_expression1 *pyObj=(PyCAst_object_unary_expression1*)PyCAst_type_unary_expression1.tp_new(&PyCAst_type_unary_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression1(*dynamic_cast<CAst::unary_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION2)
	{
		PyCAst_object_unary_expression2 *pyObj=(PyCAst_object_unary_expression2*)PyCAst_type_unary_expression2.tp_new(&PyCAst_type_unary_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression2(*dynamic_cast<CAst::unary_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION3)
	{
		PyCAst_object_unary_expression3 *pyObj=(PyCAst_object_unary_expression3*)PyCAst_type_unary_expression3.tp_new(&PyCAst_type_unary_expression3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression3(*dynamic_cast<CAst::unary_expression3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_UNARY_EXPRESSION4)
	{
		PyCAst_object_unary_expression4 *pyObj=(PyCAst_object_unary_expression4*)PyCAst_type_unary_expression4.tp_new(&PyCAst_type_unary_expression4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::unary_expression4(*dynamic_cast<CAst::unary_expression4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_assignment_expression1_assignment_operator(PyObject *_self)
{
	PyCAst_object_assignment_expression1 *self=(PyCAst_object_assignment_expression1*)(_self);
	CAst::assignment_expression1 *_c_obj=self->_p_cast_object;
	CAst::assignment_operator *_p_parameter=_c_obj->get_p_assignment_operator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_OPERATOR)
	{
		PyCAst_object_assignment_operator *pyObj=(PyCAst_object_assignment_operator*)PyCAst_type_assignment_operator.tp_new(&PyCAst_type_assignment_operator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_operator(*dynamic_cast<CAst::assignment_operator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_assignment_expression1_assignment_expression(PyObject *_self)
{
	PyCAst_object_assignment_expression1 *self=(PyCAst_object_assignment_expression1*)(_self);
	CAst::assignment_expression1 *_c_obj=self->_p_cast_object;
	CAst::assignment_expression *_p_parameter=_c_obj->get_p_assignment_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION1)
	{
		PyCAst_object_assignment_expression1 *pyObj=(PyCAst_object_assignment_expression1*)PyCAst_type_assignment_expression1.tp_new(&PyCAst_type_assignment_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression1(*dynamic_cast<CAst::assignment_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION2)
	{
		PyCAst_object_assignment_expression2 *pyObj=(PyCAst_object_assignment_expression2*)PyCAst_type_assignment_expression2.tp_new(&PyCAst_type_assignment_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression2(*dynamic_cast<CAst::assignment_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF assignment_expression2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_assignment_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::assignment_expression2\033[0m\n");
    PyCAst_object_assignment_expression2 *self;
    self = (PyCAst_object_assignment_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_assignment_expression2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::assignment_expression2\033[0m\n");
    PyCAst_object_assignment_expression2 *self=(PyCAst_object_assignment_expression2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_assignment_expression2(PyCAst_object_assignment_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::assignment_expression2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_assignment_expression2_code(PyObject *_self)
{
	PyCAst_object_assignment_expression2 *self=(PyCAst_object_assignment_expression2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_assignment_expression2_conditional_expression(PyObject *_self)
{
	PyCAst_object_assignment_expression2 *self=(PyCAst_object_assignment_expression2*)(_self);
	CAst::assignment_expression2 *_c_obj=self->_p_cast_object;
	CAst::conditional_expression *_p_parameter=_c_obj->get_p_conditional_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CONDITIONAL_EXPRESSION)
	{
		PyCAst_object_conditional_expression *pyObj=(PyCAst_object_conditional_expression*)PyCAst_type_conditional_expression.tp_new(&PyCAst_type_conditional_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::conditional_expression(*dynamic_cast<CAst::conditional_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF parameter_type_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_parameter_type_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::parameter_type_list\033[0m\n");
    PyCAst_object_parameter_type_list *self;
    self = (PyCAst_object_parameter_type_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_parameter_type_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::parameter_type_list\033[0m\n");
    PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_parameter_type_list(PyCAst_object_parameter_type_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_type_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_parameter_type_list_code(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_parameter_type_list_parameter_list(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	CAst::parameter_type_list *_c_obj=self->_p_cast_object;
	CAst::parameter_list *_p_parameter=_c_obj->get_p_parameter_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_PARAMETER_LIST)
	{
		PyCAst_object_parameter_list *pyObj=(PyCAst_object_parameter_list*)PyCAst_type_parameter_list.tp_new(&PyCAst_type_parameter_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::parameter_list(*dynamic_cast<CAst::parameter_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_parameter_type_list_token1(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	CAst::parameter_type_list *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_parameter_type_list_token2(PyObject *_self)
{
	PyCAst_object_parameter_type_list *self=(PyCAst_object_parameter_type_list*)(_self);
	CAst::parameter_type_list *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token2();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF parameter_declaration1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_parameter_declaration1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::parameter_declaration1\033[0m\n");
    PyCAst_object_parameter_declaration1 *self;
    self = (PyCAst_object_parameter_declaration1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_parameter_declaration1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::parameter_declaration1\033[0m\n");
    PyCAst_object_parameter_declaration1 *self=(PyCAst_object_parameter_declaration1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_parameter_declaration1(PyCAst_object_parameter_declaration1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_declaration1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_parameter_declaration1_code(PyObject *_self)
{
	PyCAst_object_parameter_declaration1 *self=(PyCAst_object_parameter_declaration1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_parameter_declaration1_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_parameter_declaration1 *self=(PyCAst_object_parameter_declaration1*)(_self);
	CAst::parameter_declaration1 *_c_obj=self->_p_cast_object;
	CAst::declaration_specifiers *_p_parameter=_c_obj->get_p_declaration_specifiers();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS1)
	{
		PyCAst_object_declaration_specifiers1 *pyObj=(PyCAst_object_declaration_specifiers1*)PyCAst_type_declaration_specifiers1.tp_new(&PyCAst_type_declaration_specifiers1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers1(*dynamic_cast<CAst::declaration_specifiers1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS2)
	{
		PyCAst_object_declaration_specifiers2 *pyObj=(PyCAst_object_declaration_specifiers2*)PyCAst_type_declaration_specifiers2.tp_new(&PyCAst_type_declaration_specifiers2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers2(*dynamic_cast<CAst::declaration_specifiers2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS3)
	{
		PyCAst_object_declaration_specifiers3 *pyObj=(PyCAst_object_declaration_specifiers3*)PyCAst_type_declaration_specifiers3.tp_new(&PyCAst_type_declaration_specifiers3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers3(*dynamic_cast<CAst::declaration_specifiers3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_parameter_declaration1_declarator(PyObject *_self)
{
	PyCAst_object_parameter_declaration1 *self=(PyCAst_object_parameter_declaration1*)(_self);
	CAst::parameter_declaration1 *_c_obj=self->_p_cast_object;
	CAst::declarator *_p_parameter=_c_obj->get_p_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATOR)
	{
		PyCAst_object_declarator *pyObj=(PyCAst_object_declarator*)PyCAst_type_declarator.tp_new(&PyCAst_type_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declarator(*dynamic_cast<CAst::declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF parameter_declaration2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_parameter_declaration2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::parameter_declaration2\033[0m\n");
    PyCAst_object_parameter_declaration2 *self;
    self = (PyCAst_object_parameter_declaration2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_parameter_declaration2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::parameter_declaration2\033[0m\n");
    PyCAst_object_parameter_declaration2 *self=(PyCAst_object_parameter_declaration2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_parameter_declaration2(PyCAst_object_parameter_declaration2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_declaration2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_parameter_declaration2_code(PyObject *_self)
{
	PyCAst_object_parameter_declaration2 *self=(PyCAst_object_parameter_declaration2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_parameter_declaration2_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_parameter_declaration2 *self=(PyCAst_object_parameter_declaration2*)(_self);
	CAst::parameter_declaration2 *_c_obj=self->_p_cast_object;
	CAst::declaration_specifiers *_p_parameter=_c_obj->get_p_declaration_specifiers();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS1)
	{
		PyCAst_object_declaration_specifiers1 *pyObj=(PyCAst_object_declaration_specifiers1*)PyCAst_type_declaration_specifiers1.tp_new(&PyCAst_type_declaration_specifiers1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers1(*dynamic_cast<CAst::declaration_specifiers1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS2)
	{
		PyCAst_object_declaration_specifiers2 *pyObj=(PyCAst_object_declaration_specifiers2*)PyCAst_type_declaration_specifiers2.tp_new(&PyCAst_type_declaration_specifiers2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers2(*dynamic_cast<CAst::declaration_specifiers2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS3)
	{
		PyCAst_object_declaration_specifiers3 *pyObj=(PyCAst_object_declaration_specifiers3*)PyCAst_type_declaration_specifiers3.tp_new(&PyCAst_type_declaration_specifiers3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers3(*dynamic_cast<CAst::declaration_specifiers3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_parameter_declaration2_abstract_declarator(PyObject *_self)
{
	PyCAst_object_parameter_declaration2 *self=(PyCAst_object_parameter_declaration2*)(_self);
	CAst::parameter_declaration2 *_c_obj=self->_p_cast_object;
	CAst::abstract_declarator *_p_parameter=_c_obj->get_p_abstract_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ABSTRACT_DECLARATOR)
	{
		PyCAst_object_abstract_declarator *pyObj=(PyCAst_object_abstract_declarator*)PyCAst_type_abstract_declarator.tp_new(&PyCAst_type_abstract_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::abstract_declarator(*dynamic_cast<CAst::abstract_declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF multiplicative_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_multiplicative_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::multiplicative_expression_iterator\033[0m\n");
    PyCAst_object_multiplicative_expression_iterator *self;
    self = (PyCAst_object_multiplicative_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_multiplicative_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::multiplicative_expression_iterator\033[0m\n");
    PyCAst_object_multiplicative_expression_iterator *self=(PyCAst_object_multiplicative_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF multiplicative_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_multiplicative_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::multiplicative_expression_item\033[0m\n");
    PyCAst_object_multiplicative_expression_item *self;
    self = (PyCAst_object_multiplicative_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_multiplicative_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::multiplicative_expression_item\033[0m\n");
    PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_multiplicative_expression_item_ast(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
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

static PyObject *PyCAst_getter_multiplicative_expression_item_code(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF multiplicative_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_multiplicative_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::multiplicative_expression\033[0m\n");
    PyCAst_object_multiplicative_expression *self;
    self = (PyCAst_object_multiplicative_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_multiplicative_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::multiplicative_expression\033[0m\n");
    PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_multiplicative_expression(PyCAst_object_multiplicative_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::multiplicative_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_multiplicative_expression_code(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_multiplicative_expression(PyObject *_self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)_self;
	CAst::multiplicative_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_multiplicative_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)_self;
	CAst::multiplicative_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_multiplicative_expression_item *ret=(PyCAst_object_multiplicative_expression_item*)PyCAst_type_multiplicative_expression_item.tp_new(&PyCAst_type_multiplicative_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::multiplicative_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_multiplicative_expression(PyObject* _self)
{
	PyCAst_object_multiplicative_expression *self=(PyCAst_object_multiplicative_expression*)_self;
	PyCAst_object_multiplicative_expression_iterator *iter=(PyCAst_object_multiplicative_expression_iterator*)PyCAst_type_multiplicative_expression_iterator.tp_new(&PyCAst_type_multiplicative_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::multiplicative_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_multiplicative_expression_iterator(PyObject* _self)
{
	PyCAst_object_multiplicative_expression_iterator *self=(PyCAst_object_multiplicative_expression_iterator*)_self;
	CAst::multiplicative_expression_iterator *iter=self->_p_cast_object;
	CAst::multiplicative_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_multiplicative_expression_item *ret=(PyCAst_object_multiplicative_expression_item*)PyCAst_type_multiplicative_expression_item.tp_new(&PyCAst_type_multiplicative_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::multiplicative_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_multiplicative_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_multiplicative_expression_item_token1(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
	CAst::multiplicative_expression_item *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=const_cast<CAst::Token*>(_c_obj->get_p_token1());
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_multiplicative_expression_item_cast_expression(PyObject *_self)
{
	PyCAst_object_multiplicative_expression_item *self=(PyCAst_object_multiplicative_expression_item*)(_self);
	CAst::multiplicative_expression_item *_c_obj=self->_p_cast_object;
	CAst::cast_expression *_p_parameter=const_cast<CAst::cast_expression*>(_c_obj->get_p_cast_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CAST_EXPRESSION1)
	{
		PyCAst_object_cast_expression1 *pyObj=(PyCAst_object_cast_expression1*)PyCAst_type_cast_expression1.tp_new(&PyCAst_type_cast_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::cast_expression1(*dynamic_cast<CAst::cast_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CAST_EXPRESSION2)
	{
		PyCAst_object_cast_expression2 *pyObj=(PyCAst_object_cast_expression2*)PyCAst_type_cast_expression2.tp_new(&PyCAst_type_cast_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::cast_expression2(*dynamic_cast<CAst::cast_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_qualifier_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_qualifier_list_iterator\033[0m\n");
    PyCAst_object_type_qualifier_list_iterator *self;
    self = (PyCAst_object_type_qualifier_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_qualifier_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_qualifier_list_iterator\033[0m\n");
    PyCAst_object_type_qualifier_list_iterator *self=(PyCAst_object_type_qualifier_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_qualifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_qualifier_list_item\033[0m\n");
    PyCAst_object_type_qualifier_list_item *self;
    self = (PyCAst_object_type_qualifier_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_qualifier_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_qualifier_list_item\033[0m\n");
    PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_type_qualifier_list_item_ast(PyObject *_self)
{
	PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)(_self);
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

static PyObject *PyCAst_getter_type_qualifier_list_item_code(PyObject *_self)
{
	PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_qualifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_qualifier_list\033[0m\n");
    PyCAst_object_type_qualifier_list *self;
    self = (PyCAst_object_type_qualifier_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_qualifier_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_qualifier_list\033[0m\n");
    PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_type_qualifier_list(PyCAst_object_type_qualifier_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_qualifier_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_type_qualifier_list_code(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_type_qualifier_list(PyObject *_self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)_self;
	CAst::type_qualifier_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_type_qualifier_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)_self;
	CAst::type_qualifier_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_type_qualifier_list_item *ret=(PyCAst_object_type_qualifier_list_item*)PyCAst_type_type_qualifier_list_item.tp_new(&PyCAst_type_type_qualifier_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::type_qualifier_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_type_qualifier_list(PyObject* _self)
{
	PyCAst_object_type_qualifier_list *self=(PyCAst_object_type_qualifier_list*)_self;
	PyCAst_object_type_qualifier_list_iterator *iter=(PyCAst_object_type_qualifier_list_iterator*)PyCAst_type_type_qualifier_list_iterator.tp_new(&PyCAst_type_type_qualifier_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::type_qualifier_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_type_qualifier_list_iterator(PyObject* _self)
{
	PyCAst_object_type_qualifier_list_iterator *self=(PyCAst_object_type_qualifier_list_iterator*)_self;
	CAst::type_qualifier_list_iterator *iter=self->_p_cast_object;
	CAst::type_qualifier_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_type_qualifier_list_item *ret=(PyCAst_object_type_qualifier_list_item*)PyCAst_type_type_qualifier_list_item.tp_new(&PyCAst_type_type_qualifier_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::type_qualifier_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_type_qualifier_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_type_qualifier_list_item_type_qualifier(PyObject *_self)
{
	PyCAst_object_type_qualifier_list_item *self=(PyCAst_object_type_qualifier_list_item*)(_self);
	CAst::type_qualifier_list_item *_c_obj=self->_p_cast_object;
	CAst::type_qualifier *_p_parameter=const_cast<CAst::type_qualifier*>(_c_obj->get_p_type_qualifier());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_QUALIFIER)
	{
		PyCAst_object_type_qualifier *pyObj=(PyCAst_object_type_qualifier*)PyCAst_type_type_qualifier.tp_new(&PyCAst_type_type_qualifier,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_qualifier(*dynamic_cast<CAst::type_qualifier*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF argument_expression_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_argument_expression_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::argument_expression_list_iterator\033[0m\n");
    PyCAst_object_argument_expression_list_iterator *self;
    self = (PyCAst_object_argument_expression_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_argument_expression_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::argument_expression_list_iterator\033[0m\n");
    PyCAst_object_argument_expression_list_iterator *self=(PyCAst_object_argument_expression_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF argument_expression_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_argument_expression_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::argument_expression_list_item\033[0m\n");
    PyCAst_object_argument_expression_list_item *self;
    self = (PyCAst_object_argument_expression_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_argument_expression_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::argument_expression_list_item\033[0m\n");
    PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_argument_expression_list_item_ast(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);
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

static PyObject *PyCAst_getter_argument_expression_list_item_code(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF argument_expression_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_argument_expression_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::argument_expression_list\033[0m\n");
    PyCAst_object_argument_expression_list *self;
    self = (PyCAst_object_argument_expression_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_argument_expression_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::argument_expression_list\033[0m\n");
    PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_argument_expression_list(PyCAst_object_argument_expression_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::argument_expression_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_argument_expression_list_code(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_argument_expression_list(PyObject *_self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)_self;
	CAst::argument_expression_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_argument_expression_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)_self;
	CAst::argument_expression_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_argument_expression_list_item *ret=(PyCAst_object_argument_expression_list_item*)PyCAst_type_argument_expression_list_item.tp_new(&PyCAst_type_argument_expression_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::argument_expression_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_argument_expression_list(PyObject* _self)
{
	PyCAst_object_argument_expression_list *self=(PyCAst_object_argument_expression_list*)_self;
	PyCAst_object_argument_expression_list_iterator *iter=(PyCAst_object_argument_expression_list_iterator*)PyCAst_type_argument_expression_list_iterator.tp_new(&PyCAst_type_argument_expression_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::argument_expression_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_argument_expression_list_iterator(PyObject* _self)
{
	PyCAst_object_argument_expression_list_iterator *self=(PyCAst_object_argument_expression_list_iterator*)_self;
	CAst::argument_expression_list_iterator *iter=self->_p_cast_object;
	CAst::argument_expression_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_argument_expression_list_item *ret=(PyCAst_object_argument_expression_list_item*)PyCAst_type_argument_expression_list_item.tp_new(&PyCAst_type_argument_expression_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::argument_expression_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_argument_expression_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_argument_expression_list_item_assignment_expression(PyObject *_self)
{
	PyCAst_object_argument_expression_list_item *self=(PyCAst_object_argument_expression_list_item*)(_self);
	CAst::argument_expression_list_item *_c_obj=self->_p_cast_object;
	CAst::assignment_expression *_p_parameter=const_cast<CAst::assignment_expression*>(_c_obj->get_p_assignment_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION1)
	{
		PyCAst_object_assignment_expression1 *pyObj=(PyCAst_object_assignment_expression1*)PyCAst_type_assignment_expression1.tp_new(&PyCAst_type_assignment_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression1(*dynamic_cast<CAst::assignment_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION2)
	{
		PyCAst_object_assignment_expression2 *pyObj=(PyCAst_object_assignment_expression2*)PyCAst_type_assignment_expression2.tp_new(&PyCAst_type_assignment_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression2(*dynamic_cast<CAst::assignment_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF direct_abstract_declarator1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_abstract_declarator1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_abstract_declarator1\033[0m\n");
    PyCAst_object_direct_abstract_declarator1 *self;
    self = (PyCAst_object_direct_abstract_declarator1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_abstract_declarator1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_abstract_declarator1\033[0m\n");
    PyCAst_object_direct_abstract_declarator1 *self=(PyCAst_object_direct_abstract_declarator1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_abstract_declarator1(PyCAst_object_direct_abstract_declarator1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_abstract_declarator1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_abstract_declarator1_code(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator1 *self=(PyCAst_object_direct_abstract_declarator1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_abstract_declarator1_direct_abstract_declarator(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator1 *self=(PyCAst_object_direct_abstract_declarator1*)(_self);
	CAst::direct_abstract_declarator1 *_c_obj=self->_p_cast_object;
	CAst::direct_abstract_declarator *_p_parameter=_c_obj->get_p_direct_abstract_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR1)
	{
		PyCAst_object_direct_abstract_declarator1 *pyObj=(PyCAst_object_direct_abstract_declarator1*)PyCAst_type_direct_abstract_declarator1.tp_new(&PyCAst_type_direct_abstract_declarator1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator1(*dynamic_cast<CAst::direct_abstract_declarator1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR2)
	{
		PyCAst_object_direct_abstract_declarator2 *pyObj=(PyCAst_object_direct_abstract_declarator2*)PyCAst_type_direct_abstract_declarator2.tp_new(&PyCAst_type_direct_abstract_declarator2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator2(*dynamic_cast<CAst::direct_abstract_declarator2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR3)
	{
		PyCAst_object_direct_abstract_declarator3 *pyObj=(PyCAst_object_direct_abstract_declarator3*)PyCAst_type_direct_abstract_declarator3.tp_new(&PyCAst_type_direct_abstract_declarator3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator3(*dynamic_cast<CAst::direct_abstract_declarator3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_direct_abstract_declarator1_constant_expression(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator1 *self=(PyCAst_object_direct_abstract_declarator1*)(_self);
	CAst::direct_abstract_declarator1 *_c_obj=self->_p_cast_object;
	CAst::constant_expression *_p_parameter=_c_obj->get_p_constant_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CONSTANT_EXPRESSION)
	{
		PyCAst_object_constant_expression *pyObj=(PyCAst_object_constant_expression*)PyCAst_type_constant_expression.tp_new(&PyCAst_type_constant_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::constant_expression(*dynamic_cast<CAst::constant_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF direct_abstract_declarator2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_abstract_declarator2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_abstract_declarator2\033[0m\n");
    PyCAst_object_direct_abstract_declarator2 *self;
    self = (PyCAst_object_direct_abstract_declarator2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_abstract_declarator2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_abstract_declarator2\033[0m\n");
    PyCAst_object_direct_abstract_declarator2 *self=(PyCAst_object_direct_abstract_declarator2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_abstract_declarator2(PyCAst_object_direct_abstract_declarator2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_abstract_declarator2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_abstract_declarator2_code(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator2 *self=(PyCAst_object_direct_abstract_declarator2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_abstract_declarator2_direct_abstract_declarator(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator2 *self=(PyCAst_object_direct_abstract_declarator2*)(_self);
	CAst::direct_abstract_declarator2 *_c_obj=self->_p_cast_object;
	CAst::direct_abstract_declarator *_p_parameter=_c_obj->get_p_direct_abstract_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR1)
	{
		PyCAst_object_direct_abstract_declarator1 *pyObj=(PyCAst_object_direct_abstract_declarator1*)PyCAst_type_direct_abstract_declarator1.tp_new(&PyCAst_type_direct_abstract_declarator1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator1(*dynamic_cast<CAst::direct_abstract_declarator1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR2)
	{
		PyCAst_object_direct_abstract_declarator2 *pyObj=(PyCAst_object_direct_abstract_declarator2*)PyCAst_type_direct_abstract_declarator2.tp_new(&PyCAst_type_direct_abstract_declarator2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator2(*dynamic_cast<CAst::direct_abstract_declarator2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_ABSTRACT_DECLARATOR3)
	{
		PyCAst_object_direct_abstract_declarator3 *pyObj=(PyCAst_object_direct_abstract_declarator3*)PyCAst_type_direct_abstract_declarator3.tp_new(&PyCAst_type_direct_abstract_declarator3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_abstract_declarator3(*dynamic_cast<CAst::direct_abstract_declarator3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_direct_abstract_declarator2_parameter_type_list(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator2 *self=(PyCAst_object_direct_abstract_declarator2*)(_self);
	CAst::direct_abstract_declarator2 *_c_obj=self->_p_cast_object;
	CAst::parameter_type_list *_p_parameter=_c_obj->get_p_parameter_type_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_PARAMETER_TYPE_LIST)
	{
		PyCAst_object_parameter_type_list *pyObj=(PyCAst_object_parameter_type_list*)PyCAst_type_parameter_type_list.tp_new(&PyCAst_type_parameter_type_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::parameter_type_list(*dynamic_cast<CAst::parameter_type_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF direct_abstract_declarator3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_abstract_declarator3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_abstract_declarator3\033[0m\n");
    PyCAst_object_direct_abstract_declarator3 *self;
    self = (PyCAst_object_direct_abstract_declarator3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_abstract_declarator3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_abstract_declarator3\033[0m\n");
    PyCAst_object_direct_abstract_declarator3 *self=(PyCAst_object_direct_abstract_declarator3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_abstract_declarator3(PyCAst_object_direct_abstract_declarator3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_abstract_declarator3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_abstract_declarator3_code(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator3 *self=(PyCAst_object_direct_abstract_declarator3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_abstract_declarator3_abstract_declarator(PyObject *_self)
{
	PyCAst_object_direct_abstract_declarator3 *self=(PyCAst_object_direct_abstract_declarator3*)(_self);
	CAst::direct_abstract_declarator3 *_c_obj=self->_p_cast_object;
	CAst::abstract_declarator *_p_parameter=_c_obj->get_p_abstract_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ABSTRACT_DECLARATOR)
	{
		PyCAst_object_abstract_declarator *pyObj=(PyCAst_object_abstract_declarator*)PyCAst_type_abstract_declarator.tp_new(&PyCAst_type_abstract_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::abstract_declarator(*dynamic_cast<CAst::abstract_declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF equality_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_equality_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::equality_expression_iterator\033[0m\n");
    PyCAst_object_equality_expression_iterator *self;
    self = (PyCAst_object_equality_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_equality_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::equality_expression_iterator\033[0m\n");
    PyCAst_object_equality_expression_iterator *self=(PyCAst_object_equality_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF equality_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_equality_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::equality_expression_item\033[0m\n");
    PyCAst_object_equality_expression_item *self;
    self = (PyCAst_object_equality_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_equality_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::equality_expression_item\033[0m\n");
    PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_equality_expression_item_ast(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
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

static PyObject *PyCAst_getter_equality_expression_item_code(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF equality_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_equality_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::equality_expression\033[0m\n");
    PyCAst_object_equality_expression *self;
    self = (PyCAst_object_equality_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_equality_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::equality_expression\033[0m\n");
    PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_equality_expression(PyCAst_object_equality_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::equality_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_equality_expression_code(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_equality_expression(PyObject *_self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)_self;
	CAst::equality_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_equality_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)_self;
	CAst::equality_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_equality_expression_item *ret=(PyCAst_object_equality_expression_item*)PyCAst_type_equality_expression_item.tp_new(&PyCAst_type_equality_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::equality_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_equality_expression(PyObject* _self)
{
	PyCAst_object_equality_expression *self=(PyCAst_object_equality_expression*)_self;
	PyCAst_object_equality_expression_iterator *iter=(PyCAst_object_equality_expression_iterator*)PyCAst_type_equality_expression_iterator.tp_new(&PyCAst_type_equality_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::equality_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_equality_expression_iterator(PyObject* _self)
{
	PyCAst_object_equality_expression_iterator *self=(PyCAst_object_equality_expression_iterator*)_self;
	CAst::equality_expression_iterator *iter=self->_p_cast_object;
	CAst::equality_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_equality_expression_item *ret=(PyCAst_object_equality_expression_item*)PyCAst_type_equality_expression_item.tp_new(&PyCAst_type_equality_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::equality_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_equality_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_equality_expression_item_token1(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
	CAst::equality_expression_item *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=const_cast<CAst::Token*>(_c_obj->get_p_token1());
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_equality_expression_item_relational_expression(PyObject *_self)
{
	PyCAst_object_equality_expression_item *self=(PyCAst_object_equality_expression_item*)(_self);
	CAst::equality_expression_item *_c_obj=self->_p_cast_object;
	CAst::relational_expression *_p_parameter=const_cast<CAst::relational_expression*>(_c_obj->get_p_relational_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_RELATIONAL_EXPRESSION)
	{
		PyCAst_object_relational_expression *pyObj=(PyCAst_object_relational_expression*)PyCAst_type_relational_expression.tp_new(&PyCAst_type_relational_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::relational_expression(*dynamic_cast<CAst::relational_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF primary_expression1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_primary_expression1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::primary_expression1\033[0m\n");
    PyCAst_object_primary_expression1 *self;
    self = (PyCAst_object_primary_expression1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_primary_expression1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::primary_expression1\033[0m\n");
    PyCAst_object_primary_expression1 *self=(PyCAst_object_primary_expression1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_primary_expression1(PyCAst_object_primary_expression1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::primary_expression1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_primary_expression1_code(PyObject *_self)
{
	PyCAst_object_primary_expression1 *self=(PyCAst_object_primary_expression1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_primary_expression1_expression(PyObject *_self)
{
	PyCAst_object_primary_expression1 *self=(PyCAst_object_primary_expression1*)(_self);
	CAst::primary_expression1 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF primary_expression2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_primary_expression2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::primary_expression2\033[0m\n");
    PyCAst_object_primary_expression2 *self;
    self = (PyCAst_object_primary_expression2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_primary_expression2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::primary_expression2\033[0m\n");
    PyCAst_object_primary_expression2 *self=(PyCAst_object_primary_expression2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_primary_expression2(PyCAst_object_primary_expression2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::primary_expression2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_primary_expression2_code(PyObject *_self)
{
	PyCAst_object_primary_expression2 *self=(PyCAst_object_primary_expression2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_primary_expression2_token1(PyObject *_self)
{
	PyCAst_object_primary_expression2 *self=(PyCAst_object_primary_expression2*)(_self);
	CAst::primary_expression2 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers1_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers1_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers1_iterator\033[0m\n");
    PyCAst_object_declaration_specifiers1_iterator *self;
    self = (PyCAst_object_declaration_specifiers1_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers1_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers1_iterator\033[0m\n");
    PyCAst_object_declaration_specifiers1_iterator *self=(PyCAst_object_declaration_specifiers1_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers1_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers1_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers1_item\033[0m\n");
    PyCAst_object_declaration_specifiers1_item *self;
    self = (PyCAst_object_declaration_specifiers1_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers1_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers1_item\033[0m\n");
    PyCAst_object_declaration_specifiers1_item *self=(PyCAst_object_declaration_specifiers1_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_declaration_specifiers1_item_ast(PyObject *_self)
{
	PyCAst_object_declaration_specifiers1_item *self=(PyCAst_object_declaration_specifiers1_item*)(_self);
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

static PyObject *PyCAst_getter_declaration_specifiers1_item_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers1_item *self=(PyCAst_object_declaration_specifiers1_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers1\033[0m\n");
    PyCAst_object_declaration_specifiers1 *self;
    self = (PyCAst_object_declaration_specifiers1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers1\033[0m\n");
    PyCAst_object_declaration_specifiers1 *self=(PyCAst_object_declaration_specifiers1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_declaration_specifiers1(PyCAst_object_declaration_specifiers1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_specifiers1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_declaration_specifiers1_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers1 *self=(PyCAst_object_declaration_specifiers1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_declaration_specifiers1(PyObject *_self)
{
	PyCAst_object_declaration_specifiers1 *self=(PyCAst_object_declaration_specifiers1*)_self;
	CAst::declaration_specifiers1 *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_declaration_specifiers1(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_declaration_specifiers1 *self=(PyCAst_object_declaration_specifiers1*)_self;
	CAst::declaration_specifiers1 *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_declaration_specifiers1_item *ret=(PyCAst_object_declaration_specifiers1_item*)PyCAst_type_declaration_specifiers1_item.tp_new(&PyCAst_type_declaration_specifiers1_item,NULL,NULL);
	ret->_p_cast_object=new CAst::declaration_specifiers1_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_declaration_specifiers1(PyObject* _self)
{
	PyCAst_object_declaration_specifiers1 *self=(PyCAst_object_declaration_specifiers1*)_self;
	PyCAst_object_declaration_specifiers1_iterator *iter=(PyCAst_object_declaration_specifiers1_iterator*)PyCAst_type_declaration_specifiers1_iterator.tp_new(&PyCAst_type_declaration_specifiers1_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::declaration_specifiers1_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_declaration_specifiers1_iterator(PyObject* _self)
{
	PyCAst_object_declaration_specifiers1_iterator *self=(PyCAst_object_declaration_specifiers1_iterator*)_self;
	CAst::declaration_specifiers1_iterator *iter=self->_p_cast_object;
	CAst::declaration_specifiers1 *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_declaration_specifiers1_item *ret=(PyCAst_object_declaration_specifiers1_item*)PyCAst_type_declaration_specifiers1_item.tp_new(&PyCAst_type_declaration_specifiers1_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::declaration_specifiers1_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_declaration_specifiers1_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_declaration_specifiers1_item_storage_class_specifier(PyObject *_self)
{
	PyCAst_object_declaration_specifiers1_item *self=(PyCAst_object_declaration_specifiers1_item*)(_self);
	CAst::declaration_specifiers1_item *_c_obj=self->_p_cast_object;
	CAst::storage_class_specifier *_p_parameter=const_cast<CAst::storage_class_specifier*>(_c_obj->get_p_storage_class_specifier());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STORAGE_CLASS_SPECIFIER)
	{
		PyCAst_object_storage_class_specifier *pyObj=(PyCAst_object_storage_class_specifier*)PyCAst_type_storage_class_specifier.tp_new(&PyCAst_type_storage_class_specifier,NULL,NULL);
		pyObj->_p_cast_object=new CAst::storage_class_specifier(*dynamic_cast<CAst::storage_class_specifier*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers2_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers2_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers2_iterator\033[0m\n");
    PyCAst_object_declaration_specifiers2_iterator *self;
    self = (PyCAst_object_declaration_specifiers2_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers2_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers2_iterator\033[0m\n");
    PyCAst_object_declaration_specifiers2_iterator *self=(PyCAst_object_declaration_specifiers2_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers2_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers2_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers2_item\033[0m\n");
    PyCAst_object_declaration_specifiers2_item *self;
    self = (PyCAst_object_declaration_specifiers2_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers2_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers2_item\033[0m\n");
    PyCAst_object_declaration_specifiers2_item *self=(PyCAst_object_declaration_specifiers2_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_declaration_specifiers2_item_ast(PyObject *_self)
{
	PyCAst_object_declaration_specifiers2_item *self=(PyCAst_object_declaration_specifiers2_item*)(_self);
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

static PyObject *PyCAst_getter_declaration_specifiers2_item_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers2_item *self=(PyCAst_object_declaration_specifiers2_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers2\033[0m\n");
    PyCAst_object_declaration_specifiers2 *self;
    self = (PyCAst_object_declaration_specifiers2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers2\033[0m\n");
    PyCAst_object_declaration_specifiers2 *self=(PyCAst_object_declaration_specifiers2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_declaration_specifiers2(PyCAst_object_declaration_specifiers2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_specifiers2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_declaration_specifiers2_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers2 *self=(PyCAst_object_declaration_specifiers2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_declaration_specifiers2(PyObject *_self)
{
	PyCAst_object_declaration_specifiers2 *self=(PyCAst_object_declaration_specifiers2*)_self;
	CAst::declaration_specifiers2 *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_declaration_specifiers2(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_declaration_specifiers2 *self=(PyCAst_object_declaration_specifiers2*)_self;
	CAst::declaration_specifiers2 *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_declaration_specifiers2_item *ret=(PyCAst_object_declaration_specifiers2_item*)PyCAst_type_declaration_specifiers2_item.tp_new(&PyCAst_type_declaration_specifiers2_item,NULL,NULL);
	ret->_p_cast_object=new CAst::declaration_specifiers2_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_declaration_specifiers2(PyObject* _self)
{
	PyCAst_object_declaration_specifiers2 *self=(PyCAst_object_declaration_specifiers2*)_self;
	PyCAst_object_declaration_specifiers2_iterator *iter=(PyCAst_object_declaration_specifiers2_iterator*)PyCAst_type_declaration_specifiers2_iterator.tp_new(&PyCAst_type_declaration_specifiers2_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::declaration_specifiers2_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_declaration_specifiers2_iterator(PyObject* _self)
{
	PyCAst_object_declaration_specifiers2_iterator *self=(PyCAst_object_declaration_specifiers2_iterator*)_self;
	CAst::declaration_specifiers2_iterator *iter=self->_p_cast_object;
	CAst::declaration_specifiers2 *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_declaration_specifiers2_item *ret=(PyCAst_object_declaration_specifiers2_item*)PyCAst_type_declaration_specifiers2_item.tp_new(&PyCAst_type_declaration_specifiers2_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::declaration_specifiers2_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_declaration_specifiers2_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_declaration_specifiers2_item_type_specifier(PyObject *_self)
{
	PyCAst_object_declaration_specifiers2_item *self=(PyCAst_object_declaration_specifiers2_item*)(_self);
	CAst::declaration_specifiers2_item *_c_obj=self->_p_cast_object;
	CAst::type_specifier *_p_parameter=const_cast<CAst::type_specifier*>(_c_obj->get_p_type_specifier());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_SPECIFIER1)
	{
		PyCAst_object_type_specifier1 *pyObj=(PyCAst_object_type_specifier1*)PyCAst_type_type_specifier1.tp_new(&PyCAst_type_type_specifier1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_specifier1(*dynamic_cast<CAst::type_specifier1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_SPECIFIER2)
	{
		PyCAst_object_type_specifier2 *pyObj=(PyCAst_object_type_specifier2*)PyCAst_type_type_specifier2.tp_new(&PyCAst_type_type_specifier2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_specifier2(*dynamic_cast<CAst::type_specifier2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_SPECIFIER3)
	{
		PyCAst_object_type_specifier3 *pyObj=(PyCAst_object_type_specifier3*)PyCAst_type_type_specifier3.tp_new(&PyCAst_type_type_specifier3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_specifier3(*dynamic_cast<CAst::type_specifier3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers3_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers3_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers3_iterator\033[0m\n");
    PyCAst_object_declaration_specifiers3_iterator *self;
    self = (PyCAst_object_declaration_specifiers3_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers3_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers3_iterator\033[0m\n");
    PyCAst_object_declaration_specifiers3_iterator *self=(PyCAst_object_declaration_specifiers3_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers3_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers3_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers3_item\033[0m\n");
    PyCAst_object_declaration_specifiers3_item *self;
    self = (PyCAst_object_declaration_specifiers3_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers3_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers3_item\033[0m\n");
    PyCAst_object_declaration_specifiers3_item *self=(PyCAst_object_declaration_specifiers3_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_declaration_specifiers3_item_ast(PyObject *_self)
{
	PyCAst_object_declaration_specifiers3_item *self=(PyCAst_object_declaration_specifiers3_item*)(_self);
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

static PyObject *PyCAst_getter_declaration_specifiers3_item_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers3_item *self=(PyCAst_object_declaration_specifiers3_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF declaration_specifiers3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_specifiers3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_specifiers3\033[0m\n");
    PyCAst_object_declaration_specifiers3 *self;
    self = (PyCAst_object_declaration_specifiers3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_specifiers3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_specifiers3\033[0m\n");
    PyCAst_object_declaration_specifiers3 *self=(PyCAst_object_declaration_specifiers3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_declaration_specifiers3(PyCAst_object_declaration_specifiers3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_specifiers3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_declaration_specifiers3_code(PyObject *_self)
{
	PyCAst_object_declaration_specifiers3 *self=(PyCAst_object_declaration_specifiers3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_declaration_specifiers3(PyObject *_self)
{
	PyCAst_object_declaration_specifiers3 *self=(PyCAst_object_declaration_specifiers3*)_self;
	CAst::declaration_specifiers3 *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_declaration_specifiers3(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_declaration_specifiers3 *self=(PyCAst_object_declaration_specifiers3*)_self;
	CAst::declaration_specifiers3 *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_declaration_specifiers3_item *ret=(PyCAst_object_declaration_specifiers3_item*)PyCAst_type_declaration_specifiers3_item.tp_new(&PyCAst_type_declaration_specifiers3_item,NULL,NULL);
	ret->_p_cast_object=new CAst::declaration_specifiers3_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_declaration_specifiers3(PyObject* _self)
{
	PyCAst_object_declaration_specifiers3 *self=(PyCAst_object_declaration_specifiers3*)_self;
	PyCAst_object_declaration_specifiers3_iterator *iter=(PyCAst_object_declaration_specifiers3_iterator*)PyCAst_type_declaration_specifiers3_iterator.tp_new(&PyCAst_type_declaration_specifiers3_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::declaration_specifiers3_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_declaration_specifiers3_iterator(PyObject* _self)
{
	PyCAst_object_declaration_specifiers3_iterator *self=(PyCAst_object_declaration_specifiers3_iterator*)_self;
	CAst::declaration_specifiers3_iterator *iter=self->_p_cast_object;
	CAst::declaration_specifiers3 *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_declaration_specifiers3_item *ret=(PyCAst_object_declaration_specifiers3_item*)PyCAst_type_declaration_specifiers3_item.tp_new(&PyCAst_type_declaration_specifiers3_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::declaration_specifiers3_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_declaration_specifiers3_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_declaration_specifiers3_item_type_qualifier(PyObject *_self)
{
	PyCAst_object_declaration_specifiers3_item *self=(PyCAst_object_declaration_specifiers3_item*)(_self);
	CAst::declaration_specifiers3_item *_c_obj=self->_p_cast_object;
	CAst::type_qualifier *_p_parameter=const_cast<CAst::type_qualifier*>(_c_obj->get_p_type_qualifier());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_QUALIFIER)
	{
		PyCAst_object_type_qualifier *pyObj=(PyCAst_object_type_qualifier*)PyCAst_type_type_qualifier.tp_new(&PyCAst_type_type_qualifier,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_qualifier(*dynamic_cast<CAst::type_qualifier*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF declaration

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration\033[0m\n");
    PyCAst_object_declaration *self;
    self = (PyCAst_object_declaration*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration\033[0m\n");
    PyCAst_object_declaration *self=(PyCAst_object_declaration*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_declaration(PyCAst_object_declaration *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_declaration_code(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_declaration_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
	CAst::declaration *_c_obj=self->_p_cast_object;
	CAst::declaration_specifiers *_p_parameter=_c_obj->get_p_declaration_specifiers();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS1)
	{
		PyCAst_object_declaration_specifiers1 *pyObj=(PyCAst_object_declaration_specifiers1*)PyCAst_type_declaration_specifiers1.tp_new(&PyCAst_type_declaration_specifiers1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers1(*dynamic_cast<CAst::declaration_specifiers1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS2)
	{
		PyCAst_object_declaration_specifiers2 *pyObj=(PyCAst_object_declaration_specifiers2*)PyCAst_type_declaration_specifiers2.tp_new(&PyCAst_type_declaration_specifiers2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers2(*dynamic_cast<CAst::declaration_specifiers2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS3)
	{
		PyCAst_object_declaration_specifiers3 *pyObj=(PyCAst_object_declaration_specifiers3*)PyCAst_type_declaration_specifiers3.tp_new(&PyCAst_type_declaration_specifiers3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers3(*dynamic_cast<CAst::declaration_specifiers3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_declaration_init_declarator_list(PyObject *_self)
{
	PyCAst_object_declaration *self=(PyCAst_object_declaration*)(_self);
	CAst::declaration *_c_obj=self->_p_cast_object;
	CAst::init_declarator_list *_p_parameter=_c_obj->get_p_init_declarator_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INIT_DECLARATOR_LIST)
	{
		PyCAst_object_init_declarator_list *pyObj=(PyCAst_object_init_declarator_list*)PyCAst_type_init_declarator_list.tp_new(&PyCAst_type_init_declarator_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::init_declarator_list(*dynamic_cast<CAst::init_declarator_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_declarator1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_declarator1\033[0m\n");
    PyCAst_object_direct_declarator1 *self;
    self = (PyCAst_object_direct_declarator1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_declarator1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_declarator1\033[0m\n");
    PyCAst_object_direct_declarator1 *self=(PyCAst_object_direct_declarator1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_declarator1(PyCAst_object_direct_declarator1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_declarator1_code(PyObject *_self)
{
	PyCAst_object_direct_declarator1 *self=(PyCAst_object_direct_declarator1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_declarator1_direct_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator1 *self=(PyCAst_object_direct_declarator1*)(_self);
	CAst::direct_declarator1 *_c_obj=self->_p_cast_object;
	CAst::direct_declarator *_p_parameter=_c_obj->get_p_direct_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR1)
	{
		PyCAst_object_direct_declarator1 *pyObj=(PyCAst_object_direct_declarator1*)PyCAst_type_direct_declarator1.tp_new(&PyCAst_type_direct_declarator1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator1(*dynamic_cast<CAst::direct_declarator1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR2)
	{
		PyCAst_object_direct_declarator2 *pyObj=(PyCAst_object_direct_declarator2*)PyCAst_type_direct_declarator2.tp_new(&PyCAst_type_direct_declarator2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator2(*dynamic_cast<CAst::direct_declarator2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR3)
	{
		PyCAst_object_direct_declarator3 *pyObj=(PyCAst_object_direct_declarator3*)PyCAst_type_direct_declarator3.tp_new(&PyCAst_type_direct_declarator3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator3(*dynamic_cast<CAst::direct_declarator3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR4)
	{
		PyCAst_object_direct_declarator4 *pyObj=(PyCAst_object_direct_declarator4*)PyCAst_type_direct_declarator4.tp_new(&PyCAst_type_direct_declarator4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator4(*dynamic_cast<CAst::direct_declarator4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR5)
	{
		PyCAst_object_direct_declarator5 *pyObj=(PyCAst_object_direct_declarator5*)PyCAst_type_direct_declarator5.tp_new(&PyCAst_type_direct_declarator5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator5(*dynamic_cast<CAst::direct_declarator5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_direct_declarator1_constant_expression(PyObject *_self)
{
	PyCAst_object_direct_declarator1 *self=(PyCAst_object_direct_declarator1*)(_self);
	CAst::direct_declarator1 *_c_obj=self->_p_cast_object;
	CAst::constant_expression *_p_parameter=_c_obj->get_p_constant_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CONSTANT_EXPRESSION)
	{
		PyCAst_object_constant_expression *pyObj=(PyCAst_object_constant_expression*)PyCAst_type_constant_expression.tp_new(&PyCAst_type_constant_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::constant_expression(*dynamic_cast<CAst::constant_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_declarator2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_declarator2\033[0m\n");
    PyCAst_object_direct_declarator2 *self;
    self = (PyCAst_object_direct_declarator2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_declarator2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_declarator2\033[0m\n");
    PyCAst_object_direct_declarator2 *self=(PyCAst_object_direct_declarator2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_declarator2(PyCAst_object_direct_declarator2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_declarator2_code(PyObject *_self)
{
	PyCAst_object_direct_declarator2 *self=(PyCAst_object_direct_declarator2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_declarator2_direct_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator2 *self=(PyCAst_object_direct_declarator2*)(_self);
	CAst::direct_declarator2 *_c_obj=self->_p_cast_object;
	CAst::direct_declarator *_p_parameter=_c_obj->get_p_direct_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR1)
	{
		PyCAst_object_direct_declarator1 *pyObj=(PyCAst_object_direct_declarator1*)PyCAst_type_direct_declarator1.tp_new(&PyCAst_type_direct_declarator1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator1(*dynamic_cast<CAst::direct_declarator1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR2)
	{
		PyCAst_object_direct_declarator2 *pyObj=(PyCAst_object_direct_declarator2*)PyCAst_type_direct_declarator2.tp_new(&PyCAst_type_direct_declarator2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator2(*dynamic_cast<CAst::direct_declarator2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR3)
	{
		PyCAst_object_direct_declarator3 *pyObj=(PyCAst_object_direct_declarator3*)PyCAst_type_direct_declarator3.tp_new(&PyCAst_type_direct_declarator3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator3(*dynamic_cast<CAst::direct_declarator3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR4)
	{
		PyCAst_object_direct_declarator4 *pyObj=(PyCAst_object_direct_declarator4*)PyCAst_type_direct_declarator4.tp_new(&PyCAst_type_direct_declarator4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator4(*dynamic_cast<CAst::direct_declarator4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR5)
	{
		PyCAst_object_direct_declarator5 *pyObj=(PyCAst_object_direct_declarator5*)PyCAst_type_direct_declarator5.tp_new(&PyCAst_type_direct_declarator5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator5(*dynamic_cast<CAst::direct_declarator5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_direct_declarator2_parameter_type_list(PyObject *_self)
{
	PyCAst_object_direct_declarator2 *self=(PyCAst_object_direct_declarator2*)(_self);
	CAst::direct_declarator2 *_c_obj=self->_p_cast_object;
	CAst::parameter_type_list *_p_parameter=_c_obj->get_p_parameter_type_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_PARAMETER_TYPE_LIST)
	{
		PyCAst_object_parameter_type_list *pyObj=(PyCAst_object_parameter_type_list*)PyCAst_type_parameter_type_list.tp_new(&PyCAst_type_parameter_type_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::parameter_type_list(*dynamic_cast<CAst::parameter_type_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_declarator3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_declarator3\033[0m\n");
    PyCAst_object_direct_declarator3 *self;
    self = (PyCAst_object_direct_declarator3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_declarator3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_declarator3\033[0m\n");
    PyCAst_object_direct_declarator3 *self=(PyCAst_object_direct_declarator3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_declarator3(PyCAst_object_direct_declarator3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_declarator3_code(PyObject *_self)
{
	PyCAst_object_direct_declarator3 *self=(PyCAst_object_direct_declarator3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_declarator3_direct_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator3 *self=(PyCAst_object_direct_declarator3*)(_self);
	CAst::direct_declarator3 *_c_obj=self->_p_cast_object;
	CAst::direct_declarator *_p_parameter=_c_obj->get_p_direct_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR1)
	{
		PyCAst_object_direct_declarator1 *pyObj=(PyCAst_object_direct_declarator1*)PyCAst_type_direct_declarator1.tp_new(&PyCAst_type_direct_declarator1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator1(*dynamic_cast<CAst::direct_declarator1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR2)
	{
		PyCAst_object_direct_declarator2 *pyObj=(PyCAst_object_direct_declarator2*)PyCAst_type_direct_declarator2.tp_new(&PyCAst_type_direct_declarator2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator2(*dynamic_cast<CAst::direct_declarator2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR3)
	{
		PyCAst_object_direct_declarator3 *pyObj=(PyCAst_object_direct_declarator3*)PyCAst_type_direct_declarator3.tp_new(&PyCAst_type_direct_declarator3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator3(*dynamic_cast<CAst::direct_declarator3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR4)
	{
		PyCAst_object_direct_declarator4 *pyObj=(PyCAst_object_direct_declarator4*)PyCAst_type_direct_declarator4.tp_new(&PyCAst_type_direct_declarator4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator4(*dynamic_cast<CAst::direct_declarator4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR5)
	{
		PyCAst_object_direct_declarator5 *pyObj=(PyCAst_object_direct_declarator5*)PyCAst_type_direct_declarator5.tp_new(&PyCAst_type_direct_declarator5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator5(*dynamic_cast<CAst::direct_declarator5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_direct_declarator3_identifier_list(PyObject *_self)
{
	PyCAst_object_direct_declarator3 *self=(PyCAst_object_direct_declarator3*)(_self);
	CAst::direct_declarator3 *_c_obj=self->_p_cast_object;
	CAst::identifier_list *_p_parameter=_c_obj->get_p_identifier_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_IDENTIFIER_LIST)
	{
		PyCAst_object_identifier_list *pyObj=(PyCAst_object_identifier_list*)PyCAst_type_identifier_list.tp_new(&PyCAst_type_identifier_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::identifier_list(*dynamic_cast<CAst::identifier_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator4

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_declarator4(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_declarator4\033[0m\n");
    PyCAst_object_direct_declarator4 *self;
    self = (PyCAst_object_direct_declarator4*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_declarator4(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_declarator4\033[0m\n");
    PyCAst_object_direct_declarator4 *self=(PyCAst_object_direct_declarator4*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_declarator4(PyCAst_object_direct_declarator4 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator4\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_declarator4_code(PyObject *_self)
{
	PyCAst_object_direct_declarator4 *self=(PyCAst_object_direct_declarator4*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_declarator4_declarator(PyObject *_self)
{
	PyCAst_object_direct_declarator4 *self=(PyCAst_object_direct_declarator4*)(_self);
	CAst::direct_declarator4 *_c_obj=self->_p_cast_object;
	CAst::declarator *_p_parameter=_c_obj->get_p_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATOR)
	{
		PyCAst_object_declarator *pyObj=(PyCAst_object_declarator*)PyCAst_type_declarator.tp_new(&PyCAst_type_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declarator(*dynamic_cast<CAst::declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF direct_declarator5

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_direct_declarator5(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::direct_declarator5\033[0m\n");
    PyCAst_object_direct_declarator5 *self;
    self = (PyCAst_object_direct_declarator5*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_direct_declarator5(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::direct_declarator5\033[0m\n");
    PyCAst_object_direct_declarator5 *self=(PyCAst_object_direct_declarator5*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_direct_declarator5(PyCAst_object_direct_declarator5 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::direct_declarator5\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_direct_declarator5_code(PyObject *_self)
{
	PyCAst_object_direct_declarator5 *self=(PyCAst_object_direct_declarator5*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_direct_declarator5_token1(PyObject *_self)
{
	PyCAst_object_direct_declarator5 *self=(PyCAst_object_direct_declarator5*)(_self);
	CAst::direct_declarator5 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF logical_and_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_logical_and_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::logical_and_expression_iterator\033[0m\n");
    PyCAst_object_logical_and_expression_iterator *self;
    self = (PyCAst_object_logical_and_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_logical_and_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::logical_and_expression_iterator\033[0m\n");
    PyCAst_object_logical_and_expression_iterator *self=(PyCAst_object_logical_and_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF logical_and_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_logical_and_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::logical_and_expression_item\033[0m\n");
    PyCAst_object_logical_and_expression_item *self;
    self = (PyCAst_object_logical_and_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_logical_and_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::logical_and_expression_item\033[0m\n");
    PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_logical_and_expression_item_ast(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);
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

static PyObject *PyCAst_getter_logical_and_expression_item_code(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF logical_and_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_logical_and_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::logical_and_expression\033[0m\n");
    PyCAst_object_logical_and_expression *self;
    self = (PyCAst_object_logical_and_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_logical_and_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::logical_and_expression\033[0m\n");
    PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_logical_and_expression(PyCAst_object_logical_and_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::logical_and_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_logical_and_expression_code(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_logical_and_expression(PyObject *_self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)_self;
	CAst::logical_and_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_logical_and_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)_self;
	CAst::logical_and_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_logical_and_expression_item *ret=(PyCAst_object_logical_and_expression_item*)PyCAst_type_logical_and_expression_item.tp_new(&PyCAst_type_logical_and_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::logical_and_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_logical_and_expression(PyObject* _self)
{
	PyCAst_object_logical_and_expression *self=(PyCAst_object_logical_and_expression*)_self;
	PyCAst_object_logical_and_expression_iterator *iter=(PyCAst_object_logical_and_expression_iterator*)PyCAst_type_logical_and_expression_iterator.tp_new(&PyCAst_type_logical_and_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::logical_and_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_logical_and_expression_iterator(PyObject* _self)
{
	PyCAst_object_logical_and_expression_iterator *self=(PyCAst_object_logical_and_expression_iterator*)_self;
	CAst::logical_and_expression_iterator *iter=self->_p_cast_object;
	CAst::logical_and_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_logical_and_expression_item *ret=(PyCAst_object_logical_and_expression_item*)PyCAst_type_logical_and_expression_item.tp_new(&PyCAst_type_logical_and_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::logical_and_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_logical_and_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_logical_and_expression_item_inclusive_or_expression(PyObject *_self)
{
	PyCAst_object_logical_and_expression_item *self=(PyCAst_object_logical_and_expression_item*)(_self);
	CAst::logical_and_expression_item *_c_obj=self->_p_cast_object;
	CAst::inclusive_or_expression *_p_parameter=const_cast<CAst::inclusive_or_expression*>(_c_obj->get_p_inclusive_or_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INCLUSIVE_OR_EXPRESSION)
	{
		PyCAst_object_inclusive_or_expression *pyObj=(PyCAst_object_inclusive_or_expression*)PyCAst_type_inclusive_or_expression.tp_new(&PyCAst_type_inclusive_or_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::inclusive_or_expression(*dynamic_cast<CAst::inclusive_or_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF init_declarator_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_init_declarator_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::init_declarator_list_iterator\033[0m\n");
    PyCAst_object_init_declarator_list_iterator *self;
    self = (PyCAst_object_init_declarator_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_init_declarator_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::init_declarator_list_iterator\033[0m\n");
    PyCAst_object_init_declarator_list_iterator *self=(PyCAst_object_init_declarator_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF init_declarator_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_init_declarator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::init_declarator_list_item\033[0m\n");
    PyCAst_object_init_declarator_list_item *self;
    self = (PyCAst_object_init_declarator_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_init_declarator_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::init_declarator_list_item\033[0m\n");
    PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_init_declarator_list_item_ast(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);
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

static PyObject *PyCAst_getter_init_declarator_list_item_code(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF init_declarator_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_init_declarator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::init_declarator_list\033[0m\n");
    PyCAst_object_init_declarator_list *self;
    self = (PyCAst_object_init_declarator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_init_declarator_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::init_declarator_list\033[0m\n");
    PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_init_declarator_list(PyCAst_object_init_declarator_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::init_declarator_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_init_declarator_list_code(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_init_declarator_list(PyObject *_self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)_self;
	CAst::init_declarator_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_init_declarator_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)_self;
	CAst::init_declarator_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_init_declarator_list_item *ret=(PyCAst_object_init_declarator_list_item*)PyCAst_type_init_declarator_list_item.tp_new(&PyCAst_type_init_declarator_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::init_declarator_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_init_declarator_list(PyObject* _self)
{
	PyCAst_object_init_declarator_list *self=(PyCAst_object_init_declarator_list*)_self;
	PyCAst_object_init_declarator_list_iterator *iter=(PyCAst_object_init_declarator_list_iterator*)PyCAst_type_init_declarator_list_iterator.tp_new(&PyCAst_type_init_declarator_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::init_declarator_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_init_declarator_list_iterator(PyObject* _self)
{
	PyCAst_object_init_declarator_list_iterator *self=(PyCAst_object_init_declarator_list_iterator*)_self;
	CAst::init_declarator_list_iterator *iter=self->_p_cast_object;
	CAst::init_declarator_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_init_declarator_list_item *ret=(PyCAst_object_init_declarator_list_item*)PyCAst_type_init_declarator_list_item.tp_new(&PyCAst_type_init_declarator_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::init_declarator_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_init_declarator_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_init_declarator_list_item_init_declarator(PyObject *_self)
{
	PyCAst_object_init_declarator_list_item *self=(PyCAst_object_init_declarator_list_item*)(_self);
	CAst::init_declarator_list_item *_c_obj=self->_p_cast_object;
	CAst::init_declarator *_p_parameter=const_cast<CAst::init_declarator*>(_c_obj->get_p_init_declarator());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INIT_DECLARATOR)
	{
		PyCAst_object_init_declarator *pyObj=(PyCAst_object_init_declarator*)PyCAst_type_init_declarator.tp_new(&PyCAst_type_init_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::init_declarator(*dynamic_cast<CAst::init_declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF shift_expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_shift_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::shift_expression_iterator\033[0m\n");
    PyCAst_object_shift_expression_iterator *self;
    self = (PyCAst_object_shift_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_shift_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::shift_expression_iterator\033[0m\n");
    PyCAst_object_shift_expression_iterator *self=(PyCAst_object_shift_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF shift_expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_shift_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::shift_expression_item\033[0m\n");
    PyCAst_object_shift_expression_item *self;
    self = (PyCAst_object_shift_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_shift_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::shift_expression_item\033[0m\n");
    PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_shift_expression_item_ast(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
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

static PyObject *PyCAst_getter_shift_expression_item_code(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF shift_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_shift_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::shift_expression\033[0m\n");
    PyCAst_object_shift_expression *self;
    self = (PyCAst_object_shift_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_shift_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::shift_expression\033[0m\n");
    PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_shift_expression(PyCAst_object_shift_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::shift_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_shift_expression_code(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_shift_expression(PyObject *_self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)_self;
	CAst::shift_expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_shift_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)_self;
	CAst::shift_expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_shift_expression_item *ret=(PyCAst_object_shift_expression_item*)PyCAst_type_shift_expression_item.tp_new(&PyCAst_type_shift_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::shift_expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_shift_expression(PyObject* _self)
{
	PyCAst_object_shift_expression *self=(PyCAst_object_shift_expression*)_self;
	PyCAst_object_shift_expression_iterator *iter=(PyCAst_object_shift_expression_iterator*)PyCAst_type_shift_expression_iterator.tp_new(&PyCAst_type_shift_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::shift_expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_shift_expression_iterator(PyObject* _self)
{
	PyCAst_object_shift_expression_iterator *self=(PyCAst_object_shift_expression_iterator*)_self;
	CAst::shift_expression_iterator *iter=self->_p_cast_object;
	CAst::shift_expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_shift_expression_item *ret=(PyCAst_object_shift_expression_item*)PyCAst_type_shift_expression_item.tp_new(&PyCAst_type_shift_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::shift_expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_shift_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_shift_expression_item_token1(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
	CAst::shift_expression_item *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=const_cast<CAst::Token*>(_c_obj->get_p_token1());
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_shift_expression_item_additive_expression(PyObject *_self)
{
	PyCAst_object_shift_expression_item *self=(PyCAst_object_shift_expression_item*)(_self);
	CAst::shift_expression_item *_c_obj=self->_p_cast_object;
	CAst::additive_expression *_p_parameter=const_cast<CAst::additive_expression*>(_c_obj->get_p_additive_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ADDITIVE_EXPRESSION)
	{
		PyCAst_object_additive_expression *pyObj=(PyCAst_object_additive_expression*)PyCAst_type_additive_expression.tp_new(&PyCAst_type_additive_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::additive_expression(*dynamic_cast<CAst::additive_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF identifier_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_identifier_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::identifier_list_iterator\033[0m\n");
    PyCAst_object_identifier_list_iterator *self;
    self = (PyCAst_object_identifier_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_identifier_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::identifier_list_iterator\033[0m\n");
    PyCAst_object_identifier_list_iterator *self=(PyCAst_object_identifier_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF identifier_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_identifier_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::identifier_list_item\033[0m\n");
    PyCAst_object_identifier_list_item *self;
    self = (PyCAst_object_identifier_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_identifier_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::identifier_list_item\033[0m\n");
    PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_identifier_list_item_ast(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);
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

static PyObject *PyCAst_getter_identifier_list_item_code(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF identifier_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_identifier_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::identifier_list\033[0m\n");
    PyCAst_object_identifier_list *self;
    self = (PyCAst_object_identifier_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_identifier_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::identifier_list\033[0m\n");
    PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_identifier_list(PyCAst_object_identifier_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::identifier_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_identifier_list_code(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_identifier_list(PyObject *_self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)_self;
	CAst::identifier_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_identifier_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)_self;
	CAst::identifier_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_identifier_list_item *ret=(PyCAst_object_identifier_list_item*)PyCAst_type_identifier_list_item.tp_new(&PyCAst_type_identifier_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::identifier_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_identifier_list(PyObject* _self)
{
	PyCAst_object_identifier_list *self=(PyCAst_object_identifier_list*)_self;
	PyCAst_object_identifier_list_iterator *iter=(PyCAst_object_identifier_list_iterator*)PyCAst_type_identifier_list_iterator.tp_new(&PyCAst_type_identifier_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::identifier_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_identifier_list_iterator(PyObject* _self)
{
	PyCAst_object_identifier_list_iterator *self=(PyCAst_object_identifier_list_iterator*)_self;
	CAst::identifier_list_iterator *iter=self->_p_cast_object;
	CAst::identifier_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_identifier_list_item *ret=(PyCAst_object_identifier_list_item*)PyCAst_type_identifier_list_item.tp_new(&PyCAst_type_identifier_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::identifier_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_identifier_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_identifier_list_item_token1(PyObject *_self)
{
	PyCAst_object_identifier_list_item *self=(PyCAst_object_identifier_list_item*)(_self);
	CAst::identifier_list_item *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=const_cast<CAst::Token*>(_c_obj->get_p_token1());
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF jump_statement1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_jump_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::jump_statement1\033[0m\n");
    PyCAst_object_jump_statement1 *self;
    self = (PyCAst_object_jump_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_jump_statement1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::jump_statement1\033[0m\n");
    PyCAst_object_jump_statement1 *self=(PyCAst_object_jump_statement1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_jump_statement1(PyCAst_object_jump_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::jump_statement1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_jump_statement1_code(PyObject *_self)
{
	PyCAst_object_jump_statement1 *self=(PyCAst_object_jump_statement1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_jump_statement1_token1(PyObject *_self)
{
	PyCAst_object_jump_statement1 *self=(PyCAst_object_jump_statement1*)(_self);
	CAst::jump_statement1 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF jump_statement2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_jump_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::jump_statement2\033[0m\n");
    PyCAst_object_jump_statement2 *self;
    self = (PyCAst_object_jump_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_jump_statement2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::jump_statement2\033[0m\n");
    PyCAst_object_jump_statement2 *self=(PyCAst_object_jump_statement2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_jump_statement2(PyCAst_object_jump_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::jump_statement2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_jump_statement2_code(PyObject *_self)
{
	PyCAst_object_jump_statement2 *self=(PyCAst_object_jump_statement2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_jump_statement2_expression(PyObject *_self)
{
	PyCAst_object_jump_statement2 *self=(PyCAst_object_jump_statement2*)(_self);
	CAst::jump_statement2 *_c_obj=self->_p_cast_object;
	CAst::expression *_p_parameter=_c_obj->get_p_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXPRESSION)
	{
		PyCAst_object_expression *pyObj=(PyCAst_object_expression*)PyCAst_type_expression.tp_new(&PyCAst_type_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::expression(*dynamic_cast<CAst::expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF jump_statement3

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_jump_statement3(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::jump_statement3\033[0m\n");
    PyCAst_object_jump_statement3 *self;
    self = (PyCAst_object_jump_statement3*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_jump_statement3(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::jump_statement3\033[0m\n");
    PyCAst_object_jump_statement3 *self=(PyCAst_object_jump_statement3*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_jump_statement3(PyCAst_object_jump_statement3 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::jump_statement3\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_jump_statement3_code(PyObject *_self)
{
	PyCAst_object_jump_statement3 *self=(PyCAst_object_jump_statement3*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_jump_statement3_token1(PyObject *_self)
{
	PyCAst_object_jump_statement3 *self=(PyCAst_object_jump_statement3*)(_self);
	CAst::jump_statement3 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF struct_declarator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_struct_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::struct_declarator\033[0m\n");
    PyCAst_object_struct_declarator *self;
    self = (PyCAst_object_struct_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_struct_declarator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::struct_declarator\033[0m\n");
    PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_struct_declarator(PyCAst_object_struct_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::struct_declarator\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_struct_declarator_code(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_struct_declarator_declarator(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	CAst::struct_declarator *_c_obj=self->_p_cast_object;
	CAst::declarator *_p_parameter=_c_obj->get_p_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATOR)
	{
		PyCAst_object_declarator *pyObj=(PyCAst_object_declarator*)PyCAst_type_declarator.tp_new(&PyCAst_type_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declarator(*dynamic_cast<CAst::declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_struct_declarator_token1(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	CAst::struct_declarator *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_struct_declarator_constant_expression(PyObject *_self)
{
	PyCAst_object_struct_declarator *self=(PyCAst_object_struct_declarator*)(_self);
	CAst::struct_declarator *_c_obj=self->_p_cast_object;
	CAst::constant_expression *_p_parameter=_c_obj->get_p_constant_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CONSTANT_EXPRESSION)
	{
		PyCAst_object_constant_expression *pyObj=(PyCAst_object_constant_expression*)PyCAst_type_constant_expression.tp_new(&PyCAst_type_constant_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::constant_expression(*dynamic_cast<CAst::constant_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF function_definition

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_function_definition(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::function_definition\033[0m\n");
    PyCAst_object_function_definition *self;
    self = (PyCAst_object_function_definition*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_function_definition(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::function_definition\033[0m\n");
    PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_function_definition(PyCAst_object_function_definition *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::function_definition\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_function_definition_code(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_function_definition_declaration_specifiers(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	CAst::function_definition *_c_obj=self->_p_cast_object;
	CAst::declaration_specifiers *_p_parameter=_c_obj->get_p_declaration_specifiers();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS1)
	{
		PyCAst_object_declaration_specifiers1 *pyObj=(PyCAst_object_declaration_specifiers1*)PyCAst_type_declaration_specifiers1.tp_new(&PyCAst_type_declaration_specifiers1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers1(*dynamic_cast<CAst::declaration_specifiers1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS2)
	{
		PyCAst_object_declaration_specifiers2 *pyObj=(PyCAst_object_declaration_specifiers2*)PyCAst_type_declaration_specifiers2.tp_new(&PyCAst_type_declaration_specifiers2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers2(*dynamic_cast<CAst::declaration_specifiers2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_SPECIFIERS3)
	{
		PyCAst_object_declaration_specifiers3 *pyObj=(PyCAst_object_declaration_specifiers3*)PyCAst_type_declaration_specifiers3.tp_new(&PyCAst_type_declaration_specifiers3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_specifiers3(*dynamic_cast<CAst::declaration_specifiers3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_function_definition_declarator(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	CAst::function_definition *_c_obj=self->_p_cast_object;
	CAst::declarator *_p_parameter=_c_obj->get_p_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATOR)
	{
		PyCAst_object_declarator *pyObj=(PyCAst_object_declarator*)PyCAst_type_declarator.tp_new(&PyCAst_type_declarator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declarator(*dynamic_cast<CAst::declarator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_function_definition_declaration_list(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	CAst::function_definition *_c_obj=self->_p_cast_object;
	CAst::declaration_list *_p_parameter=_c_obj->get_p_declaration_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION_LIST)
	{
		PyCAst_object_declaration_list *pyObj=(PyCAst_object_declaration_list*)PyCAst_type_declaration_list.tp_new(&PyCAst_type_declaration_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration_list(*dynamic_cast<CAst::declaration_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_function_definition_compound_statement(PyObject *_self)
{
	PyCAst_object_function_definition *self=(PyCAst_object_function_definition*)(_self);
	CAst::function_definition *_c_obj=self->_p_cast_object;
	CAst::compound_statement *_p_parameter=_c_obj->get_p_compound_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_COMPOUND_STATEMENT)
	{
		PyCAst_object_compound_statement *pyObj=(PyCAst_object_compound_statement*)PyCAst_type_compound_statement.tp_new(&PyCAst_type_compound_statement,NULL,NULL);
		pyObj->_p_cast_object=new CAst::compound_statement(*dynamic_cast<CAst::compound_statement*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF parameter_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_parameter_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::parameter_list_iterator\033[0m\n");
    PyCAst_object_parameter_list_iterator *self;
    self = (PyCAst_object_parameter_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_parameter_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::parameter_list_iterator\033[0m\n");
    PyCAst_object_parameter_list_iterator *self=(PyCAst_object_parameter_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF parameter_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_parameter_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::parameter_list_item\033[0m\n");
    PyCAst_object_parameter_list_item *self;
    self = (PyCAst_object_parameter_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_parameter_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::parameter_list_item\033[0m\n");
    PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_parameter_list_item_ast(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);
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

static PyObject *PyCAst_getter_parameter_list_item_code(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF parameter_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_parameter_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::parameter_list\033[0m\n");
    PyCAst_object_parameter_list *self;
    self = (PyCAst_object_parameter_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_parameter_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::parameter_list\033[0m\n");
    PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_parameter_list(PyCAst_object_parameter_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::parameter_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_parameter_list_code(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_parameter_list(PyObject *_self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)_self;
	CAst::parameter_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_parameter_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)_self;
	CAst::parameter_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_parameter_list_item *ret=(PyCAst_object_parameter_list_item*)PyCAst_type_parameter_list_item.tp_new(&PyCAst_type_parameter_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::parameter_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_parameter_list(PyObject* _self)
{
	PyCAst_object_parameter_list *self=(PyCAst_object_parameter_list*)_self;
	PyCAst_object_parameter_list_iterator *iter=(PyCAst_object_parameter_list_iterator*)PyCAst_type_parameter_list_iterator.tp_new(&PyCAst_type_parameter_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::parameter_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_parameter_list_iterator(PyObject* _self)
{
	PyCAst_object_parameter_list_iterator *self=(PyCAst_object_parameter_list_iterator*)_self;
	CAst::parameter_list_iterator *iter=self->_p_cast_object;
	CAst::parameter_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_parameter_list_item *ret=(PyCAst_object_parameter_list_item*)PyCAst_type_parameter_list_item.tp_new(&PyCAst_type_parameter_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::parameter_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_parameter_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_parameter_list_item_parameter_declaration(PyObject *_self)
{
	PyCAst_object_parameter_list_item *self=(PyCAst_object_parameter_list_item*)(_self);
	CAst::parameter_list_item *_c_obj=self->_p_cast_object;
	CAst::parameter_declaration *_p_parameter=const_cast<CAst::parameter_declaration*>(_c_obj->get_p_parameter_declaration());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_PARAMETER_DECLARATION1)
	{
		PyCAst_object_parameter_declaration1 *pyObj=(PyCAst_object_parameter_declaration1*)PyCAst_type_parameter_declaration1.tp_new(&PyCAst_type_parameter_declaration1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::parameter_declaration1(*dynamic_cast<CAst::parameter_declaration1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_PARAMETER_DECLARATION2)
	{
		PyCAst_object_parameter_declaration2 *pyObj=(PyCAst_object_parameter_declaration2*)PyCAst_type_parameter_declaration2.tp_new(&PyCAst_type_parameter_declaration2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::parameter_declaration2(*dynamic_cast<CAst::parameter_declaration2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF enum_specifier

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_enum_specifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::enum_specifier\033[0m\n");
    PyCAst_object_enum_specifier *self;
    self = (PyCAst_object_enum_specifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_enum_specifier(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::enum_specifier\033[0m\n");
    PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_enum_specifier(PyCAst_object_enum_specifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::enum_specifier\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_enum_specifier_code(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_enum_specifier_token1(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	CAst::enum_specifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_enum_specifier_token2(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	CAst::enum_specifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token2();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_enum_specifier_enumerator_list(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	CAst::enum_specifier *_c_obj=self->_p_cast_object;
	CAst::enumerator_list *_p_parameter=_c_obj->get_p_enumerator_list();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ENUMERATOR_LIST)
	{
		PyCAst_object_enumerator_list *pyObj=(PyCAst_object_enumerator_list*)PyCAst_type_enumerator_list.tp_new(&PyCAst_type_enumerator_list,NULL,NULL);
		pyObj->_p_cast_object=new CAst::enumerator_list(*dynamic_cast<CAst::enumerator_list*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_enum_specifier_token3(PyObject *_self)
{
	PyCAst_object_enum_specifier *self=(PyCAst_object_enum_specifier*)(_self);
	CAst::enum_specifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token3();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF type_qualifier

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_type_qualifier(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::type_qualifier\033[0m\n");
    PyCAst_object_type_qualifier *self;
    self = (PyCAst_object_type_qualifier*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_type_qualifier(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::type_qualifier\033[0m\n");
    PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_type_qualifier(PyCAst_object_type_qualifier *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::type_qualifier\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_type_qualifier_code(PyObject *_self)
{
	PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_type_qualifier_token1(PyObject *_self)
{
	PyCAst_object_type_qualifier *self=(PyCAst_object_type_qualifier*)(_self);
	CAst::type_qualifier *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF enumerator_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_enumerator_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::enumerator_list_iterator\033[0m\n");
    PyCAst_object_enumerator_list_iterator *self;
    self = (PyCAst_object_enumerator_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_enumerator_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::enumerator_list_iterator\033[0m\n");
    PyCAst_object_enumerator_list_iterator *self=(PyCAst_object_enumerator_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF enumerator_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_enumerator_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::enumerator_list_item\033[0m\n");
    PyCAst_object_enumerator_list_item *self;
    self = (PyCAst_object_enumerator_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_enumerator_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::enumerator_list_item\033[0m\n");
    PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_enumerator_list_item_ast(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);
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

static PyObject *PyCAst_getter_enumerator_list_item_code(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF enumerator_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_enumerator_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::enumerator_list\033[0m\n");
    PyCAst_object_enumerator_list *self;
    self = (PyCAst_object_enumerator_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_enumerator_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::enumerator_list\033[0m\n");
    PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_enumerator_list(PyCAst_object_enumerator_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::enumerator_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_enumerator_list_code(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_enumerator_list(PyObject *_self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)_self;
	CAst::enumerator_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_enumerator_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)_self;
	CAst::enumerator_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_enumerator_list_item *ret=(PyCAst_object_enumerator_list_item*)PyCAst_type_enumerator_list_item.tp_new(&PyCAst_type_enumerator_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::enumerator_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_enumerator_list(PyObject* _self)
{
	PyCAst_object_enumerator_list *self=(PyCAst_object_enumerator_list*)_self;
	PyCAst_object_enumerator_list_iterator *iter=(PyCAst_object_enumerator_list_iterator*)PyCAst_type_enumerator_list_iterator.tp_new(&PyCAst_type_enumerator_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::enumerator_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_enumerator_list_iterator(PyObject* _self)
{
	PyCAst_object_enumerator_list_iterator *self=(PyCAst_object_enumerator_list_iterator*)_self;
	CAst::enumerator_list_iterator *iter=self->_p_cast_object;
	CAst::enumerator_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_enumerator_list_item *ret=(PyCAst_object_enumerator_list_item*)PyCAst_type_enumerator_list_item.tp_new(&PyCAst_type_enumerator_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::enumerator_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_enumerator_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_enumerator_list_item_enumerator(PyObject *_self)
{
	PyCAst_object_enumerator_list_item *self=(PyCAst_object_enumerator_list_item*)(_self);
	CAst::enumerator_list_item *_c_obj=self->_p_cast_object;
	CAst::enumerator *_p_parameter=const_cast<CAst::enumerator*>(_c_obj->get_p_enumerator());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ENUMERATOR)
	{
		PyCAst_object_enumerator *pyObj=(PyCAst_object_enumerator*)PyCAst_type_enumerator.tp_new(&PyCAst_type_enumerator,NULL,NULL);
		pyObj->_p_cast_object=new CAst::enumerator(*dynamic_cast<CAst::enumerator*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF labeled_statement1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_labeled_statement1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::labeled_statement1\033[0m\n");
    PyCAst_object_labeled_statement1 *self;
    self = (PyCAst_object_labeled_statement1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_labeled_statement1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::labeled_statement1\033[0m\n");
    PyCAst_object_labeled_statement1 *self=(PyCAst_object_labeled_statement1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_labeled_statement1(PyCAst_object_labeled_statement1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::labeled_statement1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_labeled_statement1_code(PyObject *_self)
{
	PyCAst_object_labeled_statement1 *self=(PyCAst_object_labeled_statement1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_labeled_statement1_constant_expression(PyObject *_self)
{
	PyCAst_object_labeled_statement1 *self=(PyCAst_object_labeled_statement1*)(_self);
	CAst::labeled_statement1 *_c_obj=self->_p_cast_object;
	CAst::constant_expression *_p_parameter=_c_obj->get_p_constant_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CONSTANT_EXPRESSION)
	{
		PyCAst_object_constant_expression *pyObj=(PyCAst_object_constant_expression*)PyCAst_type_constant_expression.tp_new(&PyCAst_type_constant_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::constant_expression(*dynamic_cast<CAst::constant_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_labeled_statement1_statement(PyObject *_self)
{
	PyCAst_object_labeled_statement1 *self=(PyCAst_object_labeled_statement1*)(_self);
	CAst::labeled_statement1 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
/*=====================================================================================================================================*\

        DEFINITION OF labeled_statement2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_labeled_statement2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::labeled_statement2\033[0m\n");
    PyCAst_object_labeled_statement2 *self;
    self = (PyCAst_object_labeled_statement2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_labeled_statement2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::labeled_statement2\033[0m\n");
    PyCAst_object_labeled_statement2 *self=(PyCAst_object_labeled_statement2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_labeled_statement2(PyCAst_object_labeled_statement2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::labeled_statement2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_labeled_statement2_code(PyObject *_self)
{
	PyCAst_object_labeled_statement2 *self=(PyCAst_object_labeled_statement2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_labeled_statement2_token1(PyObject *_self)
{
	PyCAst_object_labeled_statement2 *self=(PyCAst_object_labeled_statement2*)(_self);
	CAst::labeled_statement2 *_c_obj=self->_p_cast_object;
	CAst::Token *_p_parameter=_c_obj->get_p_token1();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_Token *pyObj=(PyCAst_object_Token*)PyCAst_type_Token.tp_new(&PyCAst_type_Token,NULL,NULL);
	pyObj->_p_cast_object=new CAst::GenericToken(*(CAst::GenericToken*)(_p_parameter));
	return (PyObject*)pyObj;

}
static PyObject *PyCAst_getter_labeled_statement2_statement(PyObject *_self)
{
	PyCAst_object_labeled_statement2 *self=(PyCAst_object_labeled_statement2*)(_self);
	CAst::labeled_statement2 *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=_c_obj->get_p_statement();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF declaration_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_list_iterator\033[0m\n");
    PyCAst_object_declaration_list_iterator *self;
    self = (PyCAst_object_declaration_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_list_iterator\033[0m\n");
    PyCAst_object_declaration_list_iterator *self=(PyCAst_object_declaration_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF declaration_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_list_item\033[0m\n");
    PyCAst_object_declaration_list_item *self;
    self = (PyCAst_object_declaration_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_list_item\033[0m\n");
    PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_declaration_list_item_ast(PyObject *_self)
{
	PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)(_self);
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

static PyObject *PyCAst_getter_declaration_list_item_code(PyObject *_self)
{
	PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF declaration_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declaration_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declaration_list\033[0m\n");
    PyCAst_object_declaration_list *self;
    self = (PyCAst_object_declaration_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declaration_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declaration_list\033[0m\n");
    PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_declaration_list(PyCAst_object_declaration_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declaration_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_declaration_list_code(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_declaration_list(PyObject *_self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)_self;
	CAst::declaration_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_declaration_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)_self;
	CAst::declaration_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_declaration_list_item *ret=(PyCAst_object_declaration_list_item*)PyCAst_type_declaration_list_item.tp_new(&PyCAst_type_declaration_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::declaration_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_declaration_list(PyObject* _self)
{
	PyCAst_object_declaration_list *self=(PyCAst_object_declaration_list*)_self;
	PyCAst_object_declaration_list_iterator *iter=(PyCAst_object_declaration_list_iterator*)PyCAst_type_declaration_list_iterator.tp_new(&PyCAst_type_declaration_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::declaration_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_declaration_list_iterator(PyObject* _self)
{
	PyCAst_object_declaration_list_iterator *self=(PyCAst_object_declaration_list_iterator*)_self;
	CAst::declaration_list_iterator *iter=self->_p_cast_object;
	CAst::declaration_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_declaration_list_item *ret=(PyCAst_object_declaration_list_item*)PyCAst_type_declaration_list_item.tp_new(&PyCAst_type_declaration_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::declaration_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_declaration_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_declaration_list_item_declaration(PyObject *_self)
{
	PyCAst_object_declaration_list_item *self=(PyCAst_object_declaration_list_item*)(_self);
	CAst::declaration_list_item *_c_obj=self->_p_cast_object;
	CAst::declaration *_p_parameter=const_cast<CAst::declaration*>(_c_obj->get_p_declaration());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DECLARATION)
	{
		PyCAst_object_declaration *pyObj=(PyCAst_object_declaration*)PyCAst_type_declaration.tp_new(&PyCAst_type_declaration,NULL,NULL);
		pyObj->_p_cast_object=new CAst::declaration(*dynamic_cast<CAst::declaration*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list1_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_specifier_qualifier_list1_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::specifier_qualifier_list1_iterator\033[0m\n");
    PyCAst_object_specifier_qualifier_list1_iterator *self;
    self = (PyCAst_object_specifier_qualifier_list1_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_specifier_qualifier_list1_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::specifier_qualifier_list1_iterator\033[0m\n");
    PyCAst_object_specifier_qualifier_list1_iterator *self=(PyCAst_object_specifier_qualifier_list1_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list1_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_specifier_qualifier_list1_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::specifier_qualifier_list1_item\033[0m\n");
    PyCAst_object_specifier_qualifier_list1_item *self;
    self = (PyCAst_object_specifier_qualifier_list1_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_specifier_qualifier_list1_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::specifier_qualifier_list1_item\033[0m\n");
    PyCAst_object_specifier_qualifier_list1_item *self=(PyCAst_object_specifier_qualifier_list1_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_specifier_qualifier_list1_item_ast(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list1_item *self=(PyCAst_object_specifier_qualifier_list1_item*)(_self);
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

static PyObject *PyCAst_getter_specifier_qualifier_list1_item_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list1_item *self=(PyCAst_object_specifier_qualifier_list1_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list1

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_specifier_qualifier_list1(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::specifier_qualifier_list1\033[0m\n");
    PyCAst_object_specifier_qualifier_list1 *self;
    self = (PyCAst_object_specifier_qualifier_list1*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_specifier_qualifier_list1(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::specifier_qualifier_list1\033[0m\n");
    PyCAst_object_specifier_qualifier_list1 *self=(PyCAst_object_specifier_qualifier_list1*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_specifier_qualifier_list1(PyCAst_object_specifier_qualifier_list1 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::specifier_qualifier_list1\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_specifier_qualifier_list1_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list1 *self=(PyCAst_object_specifier_qualifier_list1*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_specifier_qualifier_list1(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list1 *self=(PyCAst_object_specifier_qualifier_list1*)_self;
	CAst::specifier_qualifier_list1 *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_specifier_qualifier_list1(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_specifier_qualifier_list1 *self=(PyCAst_object_specifier_qualifier_list1*)_self;
	CAst::specifier_qualifier_list1 *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_specifier_qualifier_list1_item *ret=(PyCAst_object_specifier_qualifier_list1_item*)PyCAst_type_specifier_qualifier_list1_item.tp_new(&PyCAst_type_specifier_qualifier_list1_item,NULL,NULL);
	ret->_p_cast_object=new CAst::specifier_qualifier_list1_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_specifier_qualifier_list1(PyObject* _self)
{
	PyCAst_object_specifier_qualifier_list1 *self=(PyCAst_object_specifier_qualifier_list1*)_self;
	PyCAst_object_specifier_qualifier_list1_iterator *iter=(PyCAst_object_specifier_qualifier_list1_iterator*)PyCAst_type_specifier_qualifier_list1_iterator.tp_new(&PyCAst_type_specifier_qualifier_list1_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::specifier_qualifier_list1_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_specifier_qualifier_list1_iterator(PyObject* _self)
{
	PyCAst_object_specifier_qualifier_list1_iterator *self=(PyCAst_object_specifier_qualifier_list1_iterator*)_self;
	CAst::specifier_qualifier_list1_iterator *iter=self->_p_cast_object;
	CAst::specifier_qualifier_list1 *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_specifier_qualifier_list1_item *ret=(PyCAst_object_specifier_qualifier_list1_item*)PyCAst_type_specifier_qualifier_list1_item.tp_new(&PyCAst_type_specifier_qualifier_list1_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::specifier_qualifier_list1_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_specifier_qualifier_list1_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_specifier_qualifier_list1_item_type_specifier(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list1_item *self=(PyCAst_object_specifier_qualifier_list1_item*)(_self);
	CAst::specifier_qualifier_list1_item *_c_obj=self->_p_cast_object;
	CAst::type_specifier *_p_parameter=const_cast<CAst::type_specifier*>(_c_obj->get_p_type_specifier());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_SPECIFIER1)
	{
		PyCAst_object_type_specifier1 *pyObj=(PyCAst_object_type_specifier1*)PyCAst_type_type_specifier1.tp_new(&PyCAst_type_type_specifier1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_specifier1(*dynamic_cast<CAst::type_specifier1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_SPECIFIER2)
	{
		PyCAst_object_type_specifier2 *pyObj=(PyCAst_object_type_specifier2*)PyCAst_type_type_specifier2.tp_new(&PyCAst_type_type_specifier2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_specifier2(*dynamic_cast<CAst::type_specifier2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_SPECIFIER3)
	{
		PyCAst_object_type_specifier3 *pyObj=(PyCAst_object_type_specifier3*)PyCAst_type_type_specifier3.tp_new(&PyCAst_type_type_specifier3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_specifier3(*dynamic_cast<CAst::type_specifier3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list2_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_specifier_qualifier_list2_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::specifier_qualifier_list2_iterator\033[0m\n");
    PyCAst_object_specifier_qualifier_list2_iterator *self;
    self = (PyCAst_object_specifier_qualifier_list2_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_specifier_qualifier_list2_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::specifier_qualifier_list2_iterator\033[0m\n");
    PyCAst_object_specifier_qualifier_list2_iterator *self=(PyCAst_object_specifier_qualifier_list2_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list2_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_specifier_qualifier_list2_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::specifier_qualifier_list2_item\033[0m\n");
    PyCAst_object_specifier_qualifier_list2_item *self;
    self = (PyCAst_object_specifier_qualifier_list2_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_specifier_qualifier_list2_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::specifier_qualifier_list2_item\033[0m\n");
    PyCAst_object_specifier_qualifier_list2_item *self=(PyCAst_object_specifier_qualifier_list2_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_specifier_qualifier_list2_item_ast(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list2_item *self=(PyCAst_object_specifier_qualifier_list2_item*)(_self);
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

static PyObject *PyCAst_getter_specifier_qualifier_list2_item_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list2_item *self=(PyCAst_object_specifier_qualifier_list2_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF specifier_qualifier_list2

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_specifier_qualifier_list2(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::specifier_qualifier_list2\033[0m\n");
    PyCAst_object_specifier_qualifier_list2 *self;
    self = (PyCAst_object_specifier_qualifier_list2*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_specifier_qualifier_list2(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::specifier_qualifier_list2\033[0m\n");
    PyCAst_object_specifier_qualifier_list2 *self=(PyCAst_object_specifier_qualifier_list2*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_specifier_qualifier_list2(PyCAst_object_specifier_qualifier_list2 *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::specifier_qualifier_list2\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_specifier_qualifier_list2_code(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list2 *self=(PyCAst_object_specifier_qualifier_list2*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_specifier_qualifier_list2(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list2 *self=(PyCAst_object_specifier_qualifier_list2*)_self;
	CAst::specifier_qualifier_list2 *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_specifier_qualifier_list2(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_specifier_qualifier_list2 *self=(PyCAst_object_specifier_qualifier_list2*)_self;
	CAst::specifier_qualifier_list2 *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_specifier_qualifier_list2_item *ret=(PyCAst_object_specifier_qualifier_list2_item*)PyCAst_type_specifier_qualifier_list2_item.tp_new(&PyCAst_type_specifier_qualifier_list2_item,NULL,NULL);
	ret->_p_cast_object=new CAst::specifier_qualifier_list2_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_specifier_qualifier_list2(PyObject* _self)
{
	PyCAst_object_specifier_qualifier_list2 *self=(PyCAst_object_specifier_qualifier_list2*)_self;
	PyCAst_object_specifier_qualifier_list2_iterator *iter=(PyCAst_object_specifier_qualifier_list2_iterator*)PyCAst_type_specifier_qualifier_list2_iterator.tp_new(&PyCAst_type_specifier_qualifier_list2_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::specifier_qualifier_list2_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_specifier_qualifier_list2_iterator(PyObject* _self)
{
	PyCAst_object_specifier_qualifier_list2_iterator *self=(PyCAst_object_specifier_qualifier_list2_iterator*)_self;
	CAst::specifier_qualifier_list2_iterator *iter=self->_p_cast_object;
	CAst::specifier_qualifier_list2 *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_specifier_qualifier_list2_item *ret=(PyCAst_object_specifier_qualifier_list2_item*)PyCAst_type_specifier_qualifier_list2_item.tp_new(&PyCAst_type_specifier_qualifier_list2_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::specifier_qualifier_list2_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_specifier_qualifier_list2_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_specifier_qualifier_list2_item_type_qualifier(PyObject *_self)
{
	PyCAst_object_specifier_qualifier_list2_item *self=(PyCAst_object_specifier_qualifier_list2_item*)(_self);
	CAst::specifier_qualifier_list2_item *_c_obj=self->_p_cast_object;
	CAst::type_qualifier *_p_parameter=const_cast<CAst::type_qualifier*>(_c_obj->get_p_type_qualifier());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_TYPE_QUALIFIER)
	{
		PyCAst_object_type_qualifier *pyObj=(PyCAst_object_type_qualifier*)PyCAst_type_type_qualifier.tp_new(&PyCAst_type_type_qualifier,NULL,NULL);
		pyObj->_p_cast_object=new CAst::type_qualifier(*dynamic_cast<CAst::type_qualifier*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF translation_unit_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_translation_unit_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::translation_unit_iterator\033[0m\n");
    PyCAst_object_translation_unit_iterator *self;
    self = (PyCAst_object_translation_unit_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_translation_unit_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::translation_unit_iterator\033[0m\n");
    PyCAst_object_translation_unit_iterator *self=(PyCAst_object_translation_unit_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF translation_unit_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_translation_unit_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::translation_unit_item\033[0m\n");
    PyCAst_object_translation_unit_item *self;
    self = (PyCAst_object_translation_unit_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_translation_unit_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::translation_unit_item\033[0m\n");
    PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_translation_unit_item_ast(PyObject *_self)
{
	PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)(_self);
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

static PyObject *PyCAst_getter_translation_unit_item_code(PyObject *_self)
{
	PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF translation_unit

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_translation_unit(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::translation_unit\033[0m\n");
    PyCAst_object_translation_unit *self;
    self = (PyCAst_object_translation_unit*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_translation_unit(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::translation_unit\033[0m\n");
    PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_translation_unit(PyCAst_object_translation_unit *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::translation_unit\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_translation_unit_code(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_translation_unit(PyObject *_self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)_self;
	CAst::translation_unit *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_translation_unit(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)_self;
	CAst::translation_unit *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_translation_unit_item *ret=(PyCAst_object_translation_unit_item*)PyCAst_type_translation_unit_item.tp_new(&PyCAst_type_translation_unit_item,NULL,NULL);
	ret->_p_cast_object=new CAst::translation_unit_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_translation_unit(PyObject* _self)
{
	PyCAst_object_translation_unit *self=(PyCAst_object_translation_unit*)_self;
	PyCAst_object_translation_unit_iterator *iter=(PyCAst_object_translation_unit_iterator*)PyCAst_type_translation_unit_iterator.tp_new(&PyCAst_type_translation_unit_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::translation_unit_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_translation_unit_iterator(PyObject* _self)
{
	PyCAst_object_translation_unit_iterator *self=(PyCAst_object_translation_unit_iterator*)_self;
	CAst::translation_unit_iterator *iter=self->_p_cast_object;
	CAst::translation_unit *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_translation_unit_item *ret=(PyCAst_object_translation_unit_item*)PyCAst_type_translation_unit_item.tp_new(&PyCAst_type_translation_unit_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::translation_unit_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_translation_unit_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_translation_unit_item_external_declaration(PyObject *_self)
{
	PyCAst_object_translation_unit_item *self=(PyCAst_object_translation_unit_item*)(_self);
	CAst::translation_unit_item *_c_obj=self->_p_cast_object;
	CAst::external_declaration *_p_parameter=const_cast<CAst::external_declaration*>(_c_obj->get_p_external_declaration());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXTERNAL_DECLARATION1)
	{
		PyCAst_object_external_declaration1 *pyObj=(PyCAst_object_external_declaration1*)PyCAst_type_external_declaration1.tp_new(&PyCAst_type_external_declaration1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::external_declaration1(*dynamic_cast<CAst::external_declaration1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_EXTERNAL_DECLARATION2)
	{
		PyCAst_object_external_declaration2 *pyObj=(PyCAst_object_external_declaration2*)PyCAst_type_external_declaration2.tp_new(&PyCAst_type_external_declaration2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::external_declaration2(*dynamic_cast<CAst::external_declaration2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF constant_expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_constant_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::constant_expression\033[0m\n");
    PyCAst_object_constant_expression *self;
    self = (PyCAst_object_constant_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_constant_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::constant_expression\033[0m\n");
    PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_constant_expression(PyCAst_object_constant_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::constant_expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_constant_expression_code(PyObject *_self)
{
	PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_constant_expression_conditional_expression(PyObject *_self)
{
	PyCAst_object_constant_expression *self=(PyCAst_object_constant_expression*)(_self);
	CAst::constant_expression *_c_obj=self->_p_cast_object;
	CAst::conditional_expression *_p_parameter=_c_obj->get_p_conditional_expression();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_CONDITIONAL_EXPRESSION)
	{
		PyCAst_object_conditional_expression *pyObj=(PyCAst_object_conditional_expression*)PyCAst_type_conditional_expression.tp_new(&PyCAst_type_conditional_expression,NULL,NULL);
		pyObj->_p_cast_object=new CAst::conditional_expression(*dynamic_cast<CAst::conditional_expression*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			

/*=====================================================================================================================================*\

        DEFINITION OF initializer_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_initializer_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::initializer_list_iterator\033[0m\n");
    PyCAst_object_initializer_list_iterator *self;
    self = (PyCAst_object_initializer_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_initializer_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::initializer_list_iterator\033[0m\n");
    PyCAst_object_initializer_list_iterator *self=(PyCAst_object_initializer_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF initializer_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_initializer_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::initializer_list_item\033[0m\n");
    PyCAst_object_initializer_list_item *self;
    self = (PyCAst_object_initializer_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_initializer_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::initializer_list_item\033[0m\n");
    PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_initializer_list_item_ast(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);
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

static PyObject *PyCAst_getter_initializer_list_item_code(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF initializer_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_initializer_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::initializer_list\033[0m\n");
    PyCAst_object_initializer_list *self;
    self = (PyCAst_object_initializer_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_initializer_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::initializer_list\033[0m\n");
    PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_initializer_list(PyCAst_object_initializer_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::initializer_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_initializer_list_code(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_initializer_list(PyObject *_self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)_self;
	CAst::initializer_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_initializer_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)_self;
	CAst::initializer_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_initializer_list_item *ret=(PyCAst_object_initializer_list_item*)PyCAst_type_initializer_list_item.tp_new(&PyCAst_type_initializer_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::initializer_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_initializer_list(PyObject* _self)
{
	PyCAst_object_initializer_list *self=(PyCAst_object_initializer_list*)_self;
	PyCAst_object_initializer_list_iterator *iter=(PyCAst_object_initializer_list_iterator*)PyCAst_type_initializer_list_iterator.tp_new(&PyCAst_type_initializer_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::initializer_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_initializer_list_iterator(PyObject* _self)
{
	PyCAst_object_initializer_list_iterator *self=(PyCAst_object_initializer_list_iterator*)_self;
	CAst::initializer_list_iterator *iter=self->_p_cast_object;
	CAst::initializer_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_initializer_list_item *ret=(PyCAst_object_initializer_list_item*)PyCAst_type_initializer_list_item.tp_new(&PyCAst_type_initializer_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::initializer_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_initializer_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_initializer_list_item_initializer(PyObject *_self)
{
	PyCAst_object_initializer_list_item *self=(PyCAst_object_initializer_list_item*)(_self);
	CAst::initializer_list_item *_c_obj=self->_p_cast_object;
	CAst::initializer *_p_parameter=const_cast<CAst::initializer*>(_c_obj->get_p_initializer());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INITIALIZER1)
	{
		PyCAst_object_initializer1 *pyObj=(PyCAst_object_initializer1*)PyCAst_type_initializer1.tp_new(&PyCAst_type_initializer1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::initializer1(*dynamic_cast<CAst::initializer1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_INITIALIZER2)
	{
		PyCAst_object_initializer2 *pyObj=(PyCAst_object_initializer2*)PyCAst_type_initializer2.tp_new(&PyCAst_type_initializer2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::initializer2(*dynamic_cast<CAst::initializer2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF statement_list_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement_list_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement_list_iterator\033[0m\n");
    PyCAst_object_statement_list_iterator *self;
    self = (PyCAst_object_statement_list_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement_list_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement_list_iterator\033[0m\n");
    PyCAst_object_statement_list_iterator *self=(PyCAst_object_statement_list_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF statement_list_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement_list_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement_list_item\033[0m\n");
    PyCAst_object_statement_list_item *self;
    self = (PyCAst_object_statement_list_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement_list_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement_list_item\033[0m\n");
    PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_statement_list_item_ast(PyObject *_self)
{
	PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)(_self);
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

static PyObject *PyCAst_getter_statement_list_item_code(PyObject *_self)
{
	PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF statement_list

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_statement_list(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::statement_list\033[0m\n");
    PyCAst_object_statement_list *self;
    self = (PyCAst_object_statement_list*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_statement_list(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::statement_list\033[0m\n");
    PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_statement_list(PyCAst_object_statement_list *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::statement_list\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_statement_list_code(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_statement_list(PyObject *_self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)_self;
	CAst::statement_list *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_statement_list(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)_self;
	CAst::statement_list *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_statement_list_item *ret=(PyCAst_object_statement_list_item*)PyCAst_type_statement_list_item.tp_new(&PyCAst_type_statement_list_item,NULL,NULL);
	ret->_p_cast_object=new CAst::statement_list_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_statement_list(PyObject* _self)
{
	PyCAst_object_statement_list *self=(PyCAst_object_statement_list*)_self;
	PyCAst_object_statement_list_iterator *iter=(PyCAst_object_statement_list_iterator*)PyCAst_type_statement_list_iterator.tp_new(&PyCAst_type_statement_list_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::statement_list_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_statement_list_iterator(PyObject* _self)
{
	PyCAst_object_statement_list_iterator *self=(PyCAst_object_statement_list_iterator*)_self;
	CAst::statement_list_iterator *iter=self->_p_cast_object;
	CAst::statement_list *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_statement_list_item *ret=(PyCAst_object_statement_list_item*)PyCAst_type_statement_list_item.tp_new(&PyCAst_type_statement_list_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::statement_list_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_statement_list_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_statement_list_item_statement(PyObject *_self)
{
	PyCAst_object_statement_list_item *self=(PyCAst_object_statement_list_item*)(_self);
	CAst::statement_list_item *_c_obj=self->_p_cast_object;
	CAst::statement *_p_parameter=const_cast<CAst::statement*>(_c_obj->get_p_statement());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT1)
	{
		PyCAst_object_statement1 *pyObj=(PyCAst_object_statement1*)PyCAst_type_statement1.tp_new(&PyCAst_type_statement1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement1(*dynamic_cast<CAst::statement1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT2)
	{
		PyCAst_object_statement2 *pyObj=(PyCAst_object_statement2*)PyCAst_type_statement2.tp_new(&PyCAst_type_statement2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement2(*dynamic_cast<CAst::statement2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT3)
	{
		PyCAst_object_statement3 *pyObj=(PyCAst_object_statement3*)PyCAst_type_statement3.tp_new(&PyCAst_type_statement3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement3(*dynamic_cast<CAst::statement3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT4)
	{
		PyCAst_object_statement4 *pyObj=(PyCAst_object_statement4*)PyCAst_type_statement4.tp_new(&PyCAst_type_statement4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement4(*dynamic_cast<CAst::statement4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT5)
	{
		PyCAst_object_statement5 *pyObj=(PyCAst_object_statement5*)PyCAst_type_statement5.tp_new(&PyCAst_type_statement5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement5(*dynamic_cast<CAst::statement5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_STATEMENT6)
	{
		PyCAst_object_statement6 *pyObj=(PyCAst_object_statement6*)PyCAst_type_statement6.tp_new(&PyCAst_type_statement6,NULL,NULL);
		pyObj->_p_cast_object=new CAst::statement6(*dynamic_cast<CAst::statement6*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			

/*=====================================================================================================================================*\

        DEFINITION OF expression_iterator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_expression_iterator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::expression_iterator\033[0m\n");
    PyCAst_object_expression_iterator *self;
    self = (PyCAst_object_expression_iterator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_expression_iterator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::expression_iterator\033[0m\n");
    PyCAst_object_expression_iterator *self=(PyCAst_object_expression_iterator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/





/*=====================================================================================================================================*\

        DEFINITION OF expression_item

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_expression_item(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::expression_item\033[0m\n");
    PyCAst_object_expression_item *self;
    self = (PyCAst_object_expression_item*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_expression_item(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::expression_item\033[0m\n");
    PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

static PyObject *PyCAst_getter_expression_item_ast(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);
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

static PyObject *PyCAst_getter_expression_item_code(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


/*=====================================================================================================================================*\

        DEFINITION OF expression

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_expression(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::expression\033[0m\n");
    PyCAst_object_expression *self;
    self = (PyCAst_object_expression*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_expression(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::expression\033[0m\n");
    PyCAst_object_expression *self=(PyCAst_object_expression*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_expression(PyCAst_object_expression *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::expression\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_expression_code(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


Py_ssize_t PyCAst_length_expression(PyObject *_self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)_self;
	CAst::expression *obj=self->_p_cast_object;
	return obj->size();
}
PyObject* PyCAst_item_expression(PyObject *_self, Py_ssize_t i)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)_self;
	CAst::expression *obj=self->_p_cast_object;
	if(i<0 || i>obj->size())
	{
		Py_RETURN_NONE;
	}
	PyCAst_object_expression_item *ret=(PyCAst_object_expression_item*)PyCAst_type_expression_item.tp_new(&PyCAst_type_expression_item,NULL,NULL);
	ret->_p_cast_object=new CAst::expression_item((*obj)[i]);
	return (PyObject*)ret;
}


PyObject* PyCAst_iter_expression(PyObject* _self)
{
	PyCAst_object_expression *self=(PyCAst_object_expression*)_self;
	PyCAst_object_expression_iterator *iter=(PyCAst_object_expression_iterator*)PyCAst_type_expression_iterator.tp_new(&PyCAst_type_expression_iterator,NULL,NULL);
	iter->_p_cast_object=new CAst::expression_iterator(self->_p_cast_object->begin());
	iter->_p_cast_list_object=self->_p_cast_object;
	return (PyObject*)iter;
}

PyObject* PyCAst_iter_next_expression_iterator(PyObject* _self)
{
	PyCAst_object_expression_iterator *self=(PyCAst_object_expression_iterator*)_self;
	CAst::expression_iterator *iter=self->_p_cast_object;
	CAst::expression *list=self->_p_cast_list_object;
	if((*iter)==(list->end()))
	{
      		PyErr_SetNone(PyExc_StopIteration);
		return NULL;
	}
	PyCAst_object_expression_item *ret=(PyCAst_object_expression_item*)PyCAst_type_expression_item.tp_new(&PyCAst_type_expression_item,NULL,NULL);
	
	ret->_p_cast_object=new CAst::expression_item(*(*iter));
	(*iter)++;
	return (PyObject*)ret;
}

PyObject* PyCAst_iter_expression_iterator(PyObject* _self)
{
	return _self;
}
static PyObject *PyCAst_getter_expression_item_assignment_expression(PyObject *_self)
{
	PyCAst_object_expression_item *self=(PyCAst_object_expression_item*)(_self);
	CAst::expression_item *_c_obj=self->_p_cast_object;
	CAst::assignment_expression *_p_parameter=const_cast<CAst::assignment_expression*>(_c_obj->get_p_assignment_expression());
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION1)
	{
		PyCAst_object_assignment_expression1 *pyObj=(PyCAst_object_assignment_expression1*)PyCAst_type_assignment_expression1.tp_new(&PyCAst_type_assignment_expression1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression1(*dynamic_cast<CAst::assignment_expression1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_ASSIGNMENT_EXPRESSION2)
	{
		PyCAst_object_assignment_expression2 *pyObj=(PyCAst_object_assignment_expression2*)PyCAst_type_assignment_expression2.tp_new(&PyCAst_type_assignment_expression2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::assignment_expression2(*dynamic_cast<CAst::assignment_expression2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			
			
			

			
/*=====================================================================================================================================*\

        DEFINITION OF declarator

\*=====================================================================================================================================*/

/*---------------------------------------------------------------------------------------------*\

      Class New and Init

\*---------------------------------------------------------------------------------------------*/

static PyObject * PyCAst_new_declarator(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    printf("\033[32mnew PyCAst::declarator\033[0m\n");
    PyCAst_object_declarator *self;
    self = (PyCAst_object_declarator*)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static void PyCAst_delete_declarator(PyObject *_self)
{
    printf("\033[31mDeleting PyCAst::declarator\033[0m\n");
    PyCAst_object_declarator *self=(PyCAst_object_declarator*)_self;
    delete self->_p_cast_object;
    self->_p_cast_object=0;
}
static int PyCAst_init_declarator(PyCAst_object_declarator *self, PyObject *args, PyObject *kwds)
{
    printf("initializing PyCAst::declarator\n\n");
    return 0;
}





/*---------------------------------------------------------------------------------------------*\

      Class Getters and Setters

\*---------------------------------------------------------------------------------------------*/

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

static PyObject *PyCAst_getter_declarator_code(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
	if(!self->_p_cast_object)
		Py_RETURN_NONE;
	
	return PyString_FromString
	(
		self->_p_cast_object->code().c_str()
	);


}


static PyObject *PyCAst_getter_declarator_pointer(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
	CAst::declarator *_c_obj=self->_p_cast_object;
	CAst::pointer *_p_parameter=_c_obj->get_p_pointer();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_POINTER)
	{
		PyCAst_object_pointer *pyObj=(PyCAst_object_pointer*)PyCAst_type_pointer.tp_new(&PyCAst_type_pointer,NULL,NULL);
		pyObj->_p_cast_object=new CAst::pointer(*dynamic_cast<CAst::pointer*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}
static PyObject *PyCAst_getter_declarator_direct_declarator(PyObject *_self)
{
	PyCAst_object_declarator *self=(PyCAst_object_declarator*)(_self);
	CAst::declarator *_c_obj=self->_p_cast_object;
	CAst::direct_declarator *_p_parameter=_c_obj->get_p_direct_declarator();
	if(!_p_parameter)
	{
		Py_RETURN_NONE;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR1)
	{
		PyCAst_object_direct_declarator1 *pyObj=(PyCAst_object_direct_declarator1*)PyCAst_type_direct_declarator1.tp_new(&PyCAst_type_direct_declarator1,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator1(*dynamic_cast<CAst::direct_declarator1*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR2)
	{
		PyCAst_object_direct_declarator2 *pyObj=(PyCAst_object_direct_declarator2*)PyCAst_type_direct_declarator2.tp_new(&PyCAst_type_direct_declarator2,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator2(*dynamic_cast<CAst::direct_declarator2*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR3)
	{
		PyCAst_object_direct_declarator3 *pyObj=(PyCAst_object_direct_declarator3*)PyCAst_type_direct_declarator3.tp_new(&PyCAst_type_direct_declarator3,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator3(*dynamic_cast<CAst::direct_declarator3*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR4)
	{
		PyCAst_object_direct_declarator4 *pyObj=(PyCAst_object_direct_declarator4*)PyCAst_type_direct_declarator4.tp_new(&PyCAst_type_direct_declarator4,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator4(*dynamic_cast<CAst::direct_declarator4*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	if(_p_parameter->typeId()==CAst::CAST_TYPE_DIRECT_DECLARATOR5)
	{
		PyCAst_object_direct_declarator5 *pyObj=(PyCAst_object_direct_declarator5*)PyCAst_type_direct_declarator5.tp_new(&PyCAst_type_direct_declarator5,NULL,NULL);
		pyObj->_p_cast_object=new CAst::direct_declarator5(*dynamic_cast<CAst::direct_declarator5*>(_p_parameter));
		return (PyObject*)pyObj;
	}
	return (PyObject*)(PyString_FromString("NotFound!!! Report bug"));

}

			



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

	if (PyType_Ready(&PyCAst_type_Token) < 0) {printf("Initialization of PyCAst_type_Tokens FAILED");return;}
	if (PyType_Ready(&PyCAst_type_storage_class_specifier) < 0) {printf("Initialization of PyCAst_type_storage_class_specifiers FAILED");return;}
	if (PyType_Ready(&PyCAst_type_expression_statement) < 0) {printf("Initialization of PyCAst_type_expression_statements FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_name) < 0) {printf("Initialization of PyCAst_type_type_names FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression1) < 0) {printf("Initialization of PyCAst_type_unary_expression1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression2) < 0) {printf("Initialization of PyCAst_type_unary_expression2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression3) < 0) {printf("Initialization of PyCAst_type_unary_expression3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_expression4) < 0) {printf("Initialization of PyCAst_type_unary_expression4s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_conditional_expression) < 0) {printf("Initialization of PyCAst_type_conditional_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_conditional_expression_iterator) < 0) {printf("Initialization of PyCAst_type_conditional_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_conditional_expression_item) < 0) {printf("Initialization of PyCAst_type_conditional_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_or_union_specifier) < 0) {printf("Initialization of PyCAst_type_struct_or_union_specifiers FAILED");return;}
	if (PyType_Ready(&PyCAst_type_exclusive_or_expression) < 0) {printf("Initialization of PyCAst_type_exclusive_or_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_exclusive_or_expression_iterator) < 0) {printf("Initialization of PyCAst_type_exclusive_or_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_exclusive_or_expression_item) < 0) {printf("Initialization of PyCAst_type_exclusive_or_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer1) < 0) {printf("Initialization of PyCAst_type_initializer1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer2) < 0) {printf("Initialization of PyCAst_type_initializer2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration_list) < 0) {printf("Initialization of PyCAst_type_struct_declaration_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration_list_iterator) < 0) {printf("Initialization of PyCAst_type_struct_declaration_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration_list_item) < 0) {printf("Initialization of PyCAst_type_struct_declaration_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_assignment_operator) < 0) {printf("Initialization of PyCAst_type_assignment_operators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declaration) < 0) {printf("Initialization of PyCAst_type_struct_declarations FAILED");return;}
	if (PyType_Ready(&PyCAst_type_abstract_declarator) < 0) {printf("Initialization of PyCAst_type_abstract_declarators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement1) < 0) {printf("Initialization of PyCAst_type_iteration_statement1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement2) < 0) {printf("Initialization of PyCAst_type_iteration_statement2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_iteration_statement3) < 0) {printf("Initialization of PyCAst_type_iteration_statement3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_additive_expression) < 0) {printf("Initialization of PyCAst_type_additive_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_additive_expression_iterator) < 0) {printf("Initialization of PyCAst_type_additive_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_additive_expression_item) < 0) {printf("Initialization of PyCAst_type_additive_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_external_declaration1) < 0) {printf("Initialization of PyCAst_type_external_declaration1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_external_declaration2) < 0) {printf("Initialization of PyCAst_type_external_declaration2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier1) < 0) {printf("Initialization of PyCAst_type_type_specifier1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier2) < 0) {printf("Initialization of PyCAst_type_type_specifier2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_specifier3) < 0) {printf("Initialization of PyCAst_type_type_specifier3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_compound_statement) < 0) {printf("Initialization of PyCAst_type_compound_statements FAILED");return;}
	if (PyType_Ready(&PyCAst_type_inclusive_or_expression) < 0) {printf("Initialization of PyCAst_type_inclusive_or_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_inclusive_or_expression_iterator) < 0) {printf("Initialization of PyCAst_type_inclusive_or_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_inclusive_or_expression_item) < 0) {printf("Initialization of PyCAst_type_inclusive_or_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_pointer) < 0) {printf("Initialization of PyCAst_type_pointers FAILED");return;}
	if (PyType_Ready(&PyCAst_type_pointer_iterator) < 0) {printf("Initialization of PyCAst_type_pointer_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_pointer_item) < 0) {printf("Initialization of PyCAst_type_pointer_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_selection_statement1) < 0) {printf("Initialization of PyCAst_type_selection_statement1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_selection_statement2) < 0) {printf("Initialization of PyCAst_type_selection_statement2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression1) < 0) {printf("Initialization of PyCAst_type_postfix_expression1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression2) < 0) {printf("Initialization of PyCAst_type_postfix_expression2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression3) < 0) {printf("Initialization of PyCAst_type_postfix_expression3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression4) < 0) {printf("Initialization of PyCAst_type_postfix_expression4s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_postfix_expression5) < 0) {printf("Initialization of PyCAst_type_postfix_expression5s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_and_expression) < 0) {printf("Initialization of PyCAst_type_and_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_and_expression_iterator) < 0) {printf("Initialization of PyCAst_type_and_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_and_expression_item) < 0) {printf("Initialization of PyCAst_type_and_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement1) < 0) {printf("Initialization of PyCAst_type_statement1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement2) < 0) {printf("Initialization of PyCAst_type_statement2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement3) < 0) {printf("Initialization of PyCAst_type_statement3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement4) < 0) {printf("Initialization of PyCAst_type_statement4s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement5) < 0) {printf("Initialization of PyCAst_type_statement5s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement6) < 0) {printf("Initialization of PyCAst_type_statement6s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_cast_expression1) < 0) {printf("Initialization of PyCAst_type_cast_expression1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_cast_expression2) < 0) {printf("Initialization of PyCAst_type_cast_expression2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator) < 0) {printf("Initialization of PyCAst_type_init_declarators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator_list) < 0) {printf("Initialization of PyCAst_type_struct_declarator_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator_list_iterator) < 0) {printf("Initialization of PyCAst_type_struct_declarator_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator_list_item) < 0) {printf("Initialization of PyCAst_type_struct_declarator_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_or_expression) < 0) {printf("Initialization of PyCAst_type_logical_or_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_or_expression_iterator) < 0) {printf("Initialization of PyCAst_type_logical_or_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_or_expression_item) < 0) {printf("Initialization of PyCAst_type_logical_or_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_unary_operator) < 0) {printf("Initialization of PyCAst_type_unary_operators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_relational_expression) < 0) {printf("Initialization of PyCAst_type_relational_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_relational_expression_iterator) < 0) {printf("Initialization of PyCAst_type_relational_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_relational_expression_item) < 0) {printf("Initialization of PyCAst_type_relational_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_or_union) < 0) {printf("Initialization of PyCAst_type_struct_or_unions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enumerator) < 0) {printf("Initialization of PyCAst_type_enumerators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_assignment_expression1) < 0) {printf("Initialization of PyCAst_type_assignment_expression1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_assignment_expression2) < 0) {printf("Initialization of PyCAst_type_assignment_expression2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_type_list) < 0) {printf("Initialization of PyCAst_type_parameter_type_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_declaration1) < 0) {printf("Initialization of PyCAst_type_parameter_declaration1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_declaration2) < 0) {printf("Initialization of PyCAst_type_parameter_declaration2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_multiplicative_expression) < 0) {printf("Initialization of PyCAst_type_multiplicative_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_multiplicative_expression_iterator) < 0) {printf("Initialization of PyCAst_type_multiplicative_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_multiplicative_expression_item) < 0) {printf("Initialization of PyCAst_type_multiplicative_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier_list) < 0) {printf("Initialization of PyCAst_type_type_qualifier_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier_list_iterator) < 0) {printf("Initialization of PyCAst_type_type_qualifier_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier_list_item) < 0) {printf("Initialization of PyCAst_type_type_qualifier_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_argument_expression_list) < 0) {printf("Initialization of PyCAst_type_argument_expression_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_argument_expression_list_iterator) < 0) {printf("Initialization of PyCAst_type_argument_expression_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_argument_expression_list_item) < 0) {printf("Initialization of PyCAst_type_argument_expression_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator1) < 0) {printf("Initialization of PyCAst_type_direct_abstract_declarator1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator2) < 0) {printf("Initialization of PyCAst_type_direct_abstract_declarator2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_abstract_declarator3) < 0) {printf("Initialization of PyCAst_type_direct_abstract_declarator3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_equality_expression) < 0) {printf("Initialization of PyCAst_type_equality_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_equality_expression_iterator) < 0) {printf("Initialization of PyCAst_type_equality_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_equality_expression_item) < 0) {printf("Initialization of PyCAst_type_equality_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_primary_expression1) < 0) {printf("Initialization of PyCAst_type_primary_expression1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_primary_expression2) < 0) {printf("Initialization of PyCAst_type_primary_expression2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers1) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers1_iterator) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers1_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers1_item) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers1_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers2) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers2_iterator) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers2_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers2_item) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers2_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers3) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers3_iterator) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers3_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_specifiers3_item) < 0) {printf("Initialization of PyCAst_type_declaration_specifiers3_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration) < 0) {printf("Initialization of PyCAst_type_declarations FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator1) < 0) {printf("Initialization of PyCAst_type_direct_declarator1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator2) < 0) {printf("Initialization of PyCAst_type_direct_declarator2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator3) < 0) {printf("Initialization of PyCAst_type_direct_declarator3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator4) < 0) {printf("Initialization of PyCAst_type_direct_declarator4s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_direct_declarator5) < 0) {printf("Initialization of PyCAst_type_direct_declarator5s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_and_expression) < 0) {printf("Initialization of PyCAst_type_logical_and_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_and_expression_iterator) < 0) {printf("Initialization of PyCAst_type_logical_and_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_logical_and_expression_item) < 0) {printf("Initialization of PyCAst_type_logical_and_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator_list) < 0) {printf("Initialization of PyCAst_type_init_declarator_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator_list_iterator) < 0) {printf("Initialization of PyCAst_type_init_declarator_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_init_declarator_list_item) < 0) {printf("Initialization of PyCAst_type_init_declarator_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_shift_expression) < 0) {printf("Initialization of PyCAst_type_shift_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_shift_expression_iterator) < 0) {printf("Initialization of PyCAst_type_shift_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_shift_expression_item) < 0) {printf("Initialization of PyCAst_type_shift_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_identifier_list) < 0) {printf("Initialization of PyCAst_type_identifier_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_identifier_list_iterator) < 0) {printf("Initialization of PyCAst_type_identifier_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_identifier_list_item) < 0) {printf("Initialization of PyCAst_type_identifier_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement1) < 0) {printf("Initialization of PyCAst_type_jump_statement1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement2) < 0) {printf("Initialization of PyCAst_type_jump_statement2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_jump_statement3) < 0) {printf("Initialization of PyCAst_type_jump_statement3s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_struct_declarator) < 0) {printf("Initialization of PyCAst_type_struct_declarators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_function_definition) < 0) {printf("Initialization of PyCAst_type_function_definitions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_list) < 0) {printf("Initialization of PyCAst_type_parameter_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_list_iterator) < 0) {printf("Initialization of PyCAst_type_parameter_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_parameter_list_item) < 0) {printf("Initialization of PyCAst_type_parameter_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enum_specifier) < 0) {printf("Initialization of PyCAst_type_enum_specifiers FAILED");return;}
	if (PyType_Ready(&PyCAst_type_type_qualifier) < 0) {printf("Initialization of PyCAst_type_type_qualifiers FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enumerator_list) < 0) {printf("Initialization of PyCAst_type_enumerator_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enumerator_list_iterator) < 0) {printf("Initialization of PyCAst_type_enumerator_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_enumerator_list_item) < 0) {printf("Initialization of PyCAst_type_enumerator_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_labeled_statement1) < 0) {printf("Initialization of PyCAst_type_labeled_statement1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_labeled_statement2) < 0) {printf("Initialization of PyCAst_type_labeled_statement2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_list) < 0) {printf("Initialization of PyCAst_type_declaration_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_list_iterator) < 0) {printf("Initialization of PyCAst_type_declaration_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declaration_list_item) < 0) {printf("Initialization of PyCAst_type_declaration_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list1) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list1s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list1_iterator) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list1_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list1_item) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list1_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list2) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list2s FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list2_iterator) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list2_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_specifier_qualifier_list2_item) < 0) {printf("Initialization of PyCAst_type_specifier_qualifier_list2_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_translation_unit) < 0) {printf("Initialization of PyCAst_type_translation_units FAILED");return;}
	if (PyType_Ready(&PyCAst_type_translation_unit_iterator) < 0) {printf("Initialization of PyCAst_type_translation_unit_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_translation_unit_item) < 0) {printf("Initialization of PyCAst_type_translation_unit_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_constant_expression) < 0) {printf("Initialization of PyCAst_type_constant_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer_list) < 0) {printf("Initialization of PyCAst_type_initializer_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer_list_iterator) < 0) {printf("Initialization of PyCAst_type_initializer_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_initializer_list_item) < 0) {printf("Initialization of PyCAst_type_initializer_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_list) < 0) {printf("Initialization of PyCAst_type_statement_lists FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_list_iterator) < 0) {printf("Initialization of PyCAst_type_statement_list_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_statement_list_item) < 0) {printf("Initialization of PyCAst_type_statement_list_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_expression) < 0) {printf("Initialization of PyCAst_type_expressions FAILED");return;}
	if (PyType_Ready(&PyCAst_type_expression_iterator) < 0) {printf("Initialization of PyCAst_type_expression_iterators FAILED");return;}
	if (PyType_Ready(&PyCAst_type_expression_item) < 0) {printf("Initialization of PyCAst_type_expression_items FAILED");return;}
	if (PyType_Ready(&PyCAst_type_declarator) < 0) {printf("Initialization of PyCAst_type_declarators FAILED");return;}
	m = Py_InitModule3("PyCAst", module_methods,"The PyCAst Module");
	if (m == NULL) return;
	Py_INCREF(&PyCAst_type_Token);
	PyModule_AddObject(m,"Token", (PyObject *)&PyCAst_type_Token);
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
	Py_INCREF(&PyCAst_type_conditional_expression_iterator);
	PyModule_AddObject(m,"conditional_expression_iterator", (PyObject *)&PyCAst_type_conditional_expression_iterator);
	Py_INCREF(&PyCAst_type_conditional_expression_item);
	PyModule_AddObject(m,"conditional_expression_item", (PyObject *)&PyCAst_type_conditional_expression_item);
	Py_INCREF(&PyCAst_type_struct_or_union_specifier);
	PyModule_AddObject(m,"struct_or_union_specifier", (PyObject *)&PyCAst_type_struct_or_union_specifier);
	Py_INCREF(&PyCAst_type_exclusive_or_expression);
	PyModule_AddObject(m,"exclusive_or_expression", (PyObject *)&PyCAst_type_exclusive_or_expression);
	Py_INCREF(&PyCAst_type_exclusive_or_expression_iterator);
	PyModule_AddObject(m,"exclusive_or_expression_iterator", (PyObject *)&PyCAst_type_exclusive_or_expression_iterator);
	Py_INCREF(&PyCAst_type_exclusive_or_expression_item);
	PyModule_AddObject(m,"exclusive_or_expression_item", (PyObject *)&PyCAst_type_exclusive_or_expression_item);
	Py_INCREF(&PyCAst_type_initializer1);
	PyModule_AddObject(m,"initializer1", (PyObject *)&PyCAst_type_initializer1);
	Py_INCREF(&PyCAst_type_initializer2);
	PyModule_AddObject(m,"initializer2", (PyObject *)&PyCAst_type_initializer2);
	Py_INCREF(&PyCAst_type_struct_declaration_list);
	PyModule_AddObject(m,"struct_declaration_list", (PyObject *)&PyCAst_type_struct_declaration_list);
	Py_INCREF(&PyCAst_type_struct_declaration_list_iterator);
	PyModule_AddObject(m,"struct_declaration_list_iterator", (PyObject *)&PyCAst_type_struct_declaration_list_iterator);
	Py_INCREF(&PyCAst_type_struct_declaration_list_item);
	PyModule_AddObject(m,"struct_declaration_list_item", (PyObject *)&PyCAst_type_struct_declaration_list_item);
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
	Py_INCREF(&PyCAst_type_additive_expression_iterator);
	PyModule_AddObject(m,"additive_expression_iterator", (PyObject *)&PyCAst_type_additive_expression_iterator);
	Py_INCREF(&PyCAst_type_additive_expression_item);
	PyModule_AddObject(m,"additive_expression_item", (PyObject *)&PyCAst_type_additive_expression_item);
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
	Py_INCREF(&PyCAst_type_inclusive_or_expression_iterator);
	PyModule_AddObject(m,"inclusive_or_expression_iterator", (PyObject *)&PyCAst_type_inclusive_or_expression_iterator);
	Py_INCREF(&PyCAst_type_inclusive_or_expression_item);
	PyModule_AddObject(m,"inclusive_or_expression_item", (PyObject *)&PyCAst_type_inclusive_or_expression_item);
	Py_INCREF(&PyCAst_type_pointer);
	PyModule_AddObject(m,"pointer", (PyObject *)&PyCAst_type_pointer);
	Py_INCREF(&PyCAst_type_pointer_iterator);
	PyModule_AddObject(m,"pointer_iterator", (PyObject *)&PyCAst_type_pointer_iterator);
	Py_INCREF(&PyCAst_type_pointer_item);
	PyModule_AddObject(m,"pointer_item", (PyObject *)&PyCAst_type_pointer_item);
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
	Py_INCREF(&PyCAst_type_and_expression_iterator);
	PyModule_AddObject(m,"and_expression_iterator", (PyObject *)&PyCAst_type_and_expression_iterator);
	Py_INCREF(&PyCAst_type_and_expression_item);
	PyModule_AddObject(m,"and_expression_item", (PyObject *)&PyCAst_type_and_expression_item);
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
	Py_INCREF(&PyCAst_type_struct_declarator_list_iterator);
	PyModule_AddObject(m,"struct_declarator_list_iterator", (PyObject *)&PyCAst_type_struct_declarator_list_iterator);
	Py_INCREF(&PyCAst_type_struct_declarator_list_item);
	PyModule_AddObject(m,"struct_declarator_list_item", (PyObject *)&PyCAst_type_struct_declarator_list_item);
	Py_INCREF(&PyCAst_type_logical_or_expression);
	PyModule_AddObject(m,"logical_or_expression", (PyObject *)&PyCAst_type_logical_or_expression);
	Py_INCREF(&PyCAst_type_logical_or_expression_iterator);
	PyModule_AddObject(m,"logical_or_expression_iterator", (PyObject *)&PyCAst_type_logical_or_expression_iterator);
	Py_INCREF(&PyCAst_type_logical_or_expression_item);
	PyModule_AddObject(m,"logical_or_expression_item", (PyObject *)&PyCAst_type_logical_or_expression_item);
	Py_INCREF(&PyCAst_type_unary_operator);
	PyModule_AddObject(m,"unary_operator", (PyObject *)&PyCAst_type_unary_operator);
	Py_INCREF(&PyCAst_type_relational_expression);
	PyModule_AddObject(m,"relational_expression", (PyObject *)&PyCAst_type_relational_expression);
	Py_INCREF(&PyCAst_type_relational_expression_iterator);
	PyModule_AddObject(m,"relational_expression_iterator", (PyObject *)&PyCAst_type_relational_expression_iterator);
	Py_INCREF(&PyCAst_type_relational_expression_item);
	PyModule_AddObject(m,"relational_expression_item", (PyObject *)&PyCAst_type_relational_expression_item);
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
	Py_INCREF(&PyCAst_type_multiplicative_expression_iterator);
	PyModule_AddObject(m,"multiplicative_expression_iterator", (PyObject *)&PyCAst_type_multiplicative_expression_iterator);
	Py_INCREF(&PyCAst_type_multiplicative_expression_item);
	PyModule_AddObject(m,"multiplicative_expression_item", (PyObject *)&PyCAst_type_multiplicative_expression_item);
	Py_INCREF(&PyCAst_type_type_qualifier_list);
	PyModule_AddObject(m,"type_qualifier_list", (PyObject *)&PyCAst_type_type_qualifier_list);
	Py_INCREF(&PyCAst_type_type_qualifier_list_iterator);
	PyModule_AddObject(m,"type_qualifier_list_iterator", (PyObject *)&PyCAst_type_type_qualifier_list_iterator);
	Py_INCREF(&PyCAst_type_type_qualifier_list_item);
	PyModule_AddObject(m,"type_qualifier_list_item", (PyObject *)&PyCAst_type_type_qualifier_list_item);
	Py_INCREF(&PyCAst_type_argument_expression_list);
	PyModule_AddObject(m,"argument_expression_list", (PyObject *)&PyCAst_type_argument_expression_list);
	Py_INCREF(&PyCAst_type_argument_expression_list_iterator);
	PyModule_AddObject(m,"argument_expression_list_iterator", (PyObject *)&PyCAst_type_argument_expression_list_iterator);
	Py_INCREF(&PyCAst_type_argument_expression_list_item);
	PyModule_AddObject(m,"argument_expression_list_item", (PyObject *)&PyCAst_type_argument_expression_list_item);
	Py_INCREF(&PyCAst_type_direct_abstract_declarator1);
	PyModule_AddObject(m,"direct_abstract_declarator1", (PyObject *)&PyCAst_type_direct_abstract_declarator1);
	Py_INCREF(&PyCAst_type_direct_abstract_declarator2);
	PyModule_AddObject(m,"direct_abstract_declarator2", (PyObject *)&PyCAst_type_direct_abstract_declarator2);
	Py_INCREF(&PyCAst_type_direct_abstract_declarator3);
	PyModule_AddObject(m,"direct_abstract_declarator3", (PyObject *)&PyCAst_type_direct_abstract_declarator3);
	Py_INCREF(&PyCAst_type_equality_expression);
	PyModule_AddObject(m,"equality_expression", (PyObject *)&PyCAst_type_equality_expression);
	Py_INCREF(&PyCAst_type_equality_expression_iterator);
	PyModule_AddObject(m,"equality_expression_iterator", (PyObject *)&PyCAst_type_equality_expression_iterator);
	Py_INCREF(&PyCAst_type_equality_expression_item);
	PyModule_AddObject(m,"equality_expression_item", (PyObject *)&PyCAst_type_equality_expression_item);
	Py_INCREF(&PyCAst_type_primary_expression1);
	PyModule_AddObject(m,"primary_expression1", (PyObject *)&PyCAst_type_primary_expression1);
	Py_INCREF(&PyCAst_type_primary_expression2);
	PyModule_AddObject(m,"primary_expression2", (PyObject *)&PyCAst_type_primary_expression2);
	Py_INCREF(&PyCAst_type_declaration_specifiers1);
	PyModule_AddObject(m,"declaration_specifiers1", (PyObject *)&PyCAst_type_declaration_specifiers1);
	Py_INCREF(&PyCAst_type_declaration_specifiers1_iterator);
	PyModule_AddObject(m,"declaration_specifiers1_iterator", (PyObject *)&PyCAst_type_declaration_specifiers1_iterator);
	Py_INCREF(&PyCAst_type_declaration_specifiers1_item);
	PyModule_AddObject(m,"declaration_specifiers1_item", (PyObject *)&PyCAst_type_declaration_specifiers1_item);
	Py_INCREF(&PyCAst_type_declaration_specifiers2);
	PyModule_AddObject(m,"declaration_specifiers2", (PyObject *)&PyCAst_type_declaration_specifiers2);
	Py_INCREF(&PyCAst_type_declaration_specifiers2_iterator);
	PyModule_AddObject(m,"declaration_specifiers2_iterator", (PyObject *)&PyCAst_type_declaration_specifiers2_iterator);
	Py_INCREF(&PyCAst_type_declaration_specifiers2_item);
	PyModule_AddObject(m,"declaration_specifiers2_item", (PyObject *)&PyCAst_type_declaration_specifiers2_item);
	Py_INCREF(&PyCAst_type_declaration_specifiers3);
	PyModule_AddObject(m,"declaration_specifiers3", (PyObject *)&PyCAst_type_declaration_specifiers3);
	Py_INCREF(&PyCAst_type_declaration_specifiers3_iterator);
	PyModule_AddObject(m,"declaration_specifiers3_iterator", (PyObject *)&PyCAst_type_declaration_specifiers3_iterator);
	Py_INCREF(&PyCAst_type_declaration_specifiers3_item);
	PyModule_AddObject(m,"declaration_specifiers3_item", (PyObject *)&PyCAst_type_declaration_specifiers3_item);
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
	Py_INCREF(&PyCAst_type_logical_and_expression_iterator);
	PyModule_AddObject(m,"logical_and_expression_iterator", (PyObject *)&PyCAst_type_logical_and_expression_iterator);
	Py_INCREF(&PyCAst_type_logical_and_expression_item);
	PyModule_AddObject(m,"logical_and_expression_item", (PyObject *)&PyCAst_type_logical_and_expression_item);
	Py_INCREF(&PyCAst_type_init_declarator_list);
	PyModule_AddObject(m,"init_declarator_list", (PyObject *)&PyCAst_type_init_declarator_list);
	Py_INCREF(&PyCAst_type_init_declarator_list_iterator);
	PyModule_AddObject(m,"init_declarator_list_iterator", (PyObject *)&PyCAst_type_init_declarator_list_iterator);
	Py_INCREF(&PyCAst_type_init_declarator_list_item);
	PyModule_AddObject(m,"init_declarator_list_item", (PyObject *)&PyCAst_type_init_declarator_list_item);
	Py_INCREF(&PyCAst_type_shift_expression);
	PyModule_AddObject(m,"shift_expression", (PyObject *)&PyCAst_type_shift_expression);
	Py_INCREF(&PyCAst_type_shift_expression_iterator);
	PyModule_AddObject(m,"shift_expression_iterator", (PyObject *)&PyCAst_type_shift_expression_iterator);
	Py_INCREF(&PyCAst_type_shift_expression_item);
	PyModule_AddObject(m,"shift_expression_item", (PyObject *)&PyCAst_type_shift_expression_item);
	Py_INCREF(&PyCAst_type_identifier_list);
	PyModule_AddObject(m,"identifier_list", (PyObject *)&PyCAst_type_identifier_list);
	Py_INCREF(&PyCAst_type_identifier_list_iterator);
	PyModule_AddObject(m,"identifier_list_iterator", (PyObject *)&PyCAst_type_identifier_list_iterator);
	Py_INCREF(&PyCAst_type_identifier_list_item);
	PyModule_AddObject(m,"identifier_list_item", (PyObject *)&PyCAst_type_identifier_list_item);
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
	Py_INCREF(&PyCAst_type_parameter_list_iterator);
	PyModule_AddObject(m,"parameter_list_iterator", (PyObject *)&PyCAst_type_parameter_list_iterator);
	Py_INCREF(&PyCAst_type_parameter_list_item);
	PyModule_AddObject(m,"parameter_list_item", (PyObject *)&PyCAst_type_parameter_list_item);
	Py_INCREF(&PyCAst_type_enum_specifier);
	PyModule_AddObject(m,"enum_specifier", (PyObject *)&PyCAst_type_enum_specifier);
	Py_INCREF(&PyCAst_type_type_qualifier);
	PyModule_AddObject(m,"type_qualifier", (PyObject *)&PyCAst_type_type_qualifier);
	Py_INCREF(&PyCAst_type_enumerator_list);
	PyModule_AddObject(m,"enumerator_list", (PyObject *)&PyCAst_type_enumerator_list);
	Py_INCREF(&PyCAst_type_enumerator_list_iterator);
	PyModule_AddObject(m,"enumerator_list_iterator", (PyObject *)&PyCAst_type_enumerator_list_iterator);
	Py_INCREF(&PyCAst_type_enumerator_list_item);
	PyModule_AddObject(m,"enumerator_list_item", (PyObject *)&PyCAst_type_enumerator_list_item);
	Py_INCREF(&PyCAst_type_labeled_statement1);
	PyModule_AddObject(m,"labeled_statement1", (PyObject *)&PyCAst_type_labeled_statement1);
	Py_INCREF(&PyCAst_type_labeled_statement2);
	PyModule_AddObject(m,"labeled_statement2", (PyObject *)&PyCAst_type_labeled_statement2);
	Py_INCREF(&PyCAst_type_declaration_list);
	PyModule_AddObject(m,"declaration_list", (PyObject *)&PyCAst_type_declaration_list);
	Py_INCREF(&PyCAst_type_declaration_list_iterator);
	PyModule_AddObject(m,"declaration_list_iterator", (PyObject *)&PyCAst_type_declaration_list_iterator);
	Py_INCREF(&PyCAst_type_declaration_list_item);
	PyModule_AddObject(m,"declaration_list_item", (PyObject *)&PyCAst_type_declaration_list_item);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list1);
	PyModule_AddObject(m,"specifier_qualifier_list1", (PyObject *)&PyCAst_type_specifier_qualifier_list1);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list1_iterator);
	PyModule_AddObject(m,"specifier_qualifier_list1_iterator", (PyObject *)&PyCAst_type_specifier_qualifier_list1_iterator);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list1_item);
	PyModule_AddObject(m,"specifier_qualifier_list1_item", (PyObject *)&PyCAst_type_specifier_qualifier_list1_item);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list2);
	PyModule_AddObject(m,"specifier_qualifier_list2", (PyObject *)&PyCAst_type_specifier_qualifier_list2);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list2_iterator);
	PyModule_AddObject(m,"specifier_qualifier_list2_iterator", (PyObject *)&PyCAst_type_specifier_qualifier_list2_iterator);
	Py_INCREF(&PyCAst_type_specifier_qualifier_list2_item);
	PyModule_AddObject(m,"specifier_qualifier_list2_item", (PyObject *)&PyCAst_type_specifier_qualifier_list2_item);
	Py_INCREF(&PyCAst_type_translation_unit);
	PyModule_AddObject(m,"translation_unit", (PyObject *)&PyCAst_type_translation_unit);
	Py_INCREF(&PyCAst_type_translation_unit_iterator);
	PyModule_AddObject(m,"translation_unit_iterator", (PyObject *)&PyCAst_type_translation_unit_iterator);
	Py_INCREF(&PyCAst_type_translation_unit_item);
	PyModule_AddObject(m,"translation_unit_item", (PyObject *)&PyCAst_type_translation_unit_item);
	Py_INCREF(&PyCAst_type_constant_expression);
	PyModule_AddObject(m,"constant_expression", (PyObject *)&PyCAst_type_constant_expression);
	Py_INCREF(&PyCAst_type_initializer_list);
	PyModule_AddObject(m,"initializer_list", (PyObject *)&PyCAst_type_initializer_list);
	Py_INCREF(&PyCAst_type_initializer_list_iterator);
	PyModule_AddObject(m,"initializer_list_iterator", (PyObject *)&PyCAst_type_initializer_list_iterator);
	Py_INCREF(&PyCAst_type_initializer_list_item);
	PyModule_AddObject(m,"initializer_list_item", (PyObject *)&PyCAst_type_initializer_list_item);
	Py_INCREF(&PyCAst_type_statement_list);
	PyModule_AddObject(m,"statement_list", (PyObject *)&PyCAst_type_statement_list);
	Py_INCREF(&PyCAst_type_statement_list_iterator);
	PyModule_AddObject(m,"statement_list_iterator", (PyObject *)&PyCAst_type_statement_list_iterator);
	Py_INCREF(&PyCAst_type_statement_list_item);
	PyModule_AddObject(m,"statement_list_item", (PyObject *)&PyCAst_type_statement_list_item);
	Py_INCREF(&PyCAst_type_expression);
	PyModule_AddObject(m,"expression", (PyObject *)&PyCAst_type_expression);
	Py_INCREF(&PyCAst_type_expression_iterator);
	PyModule_AddObject(m,"expression_iterator", (PyObject *)&PyCAst_type_expression_iterator);
	Py_INCREF(&PyCAst_type_expression_item);
	PyModule_AddObject(m,"expression_item", (PyObject *)&PyCAst_type_expression_item);
	Py_INCREF(&PyCAst_type_declarator);
	PyModule_AddObject(m,"declarator", (PyObject *)&PyCAst_type_declarator);

}
