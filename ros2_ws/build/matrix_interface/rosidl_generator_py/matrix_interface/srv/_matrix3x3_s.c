// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from matrix_interface:srv/Matrix3x3.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "matrix_interface/srv/detail/matrix3x3__struct.h"
#include "matrix_interface/srv/detail/matrix3x3__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool matrix_interface__srv__matrix3x3__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("matrix_interface.srv._matrix3x3.Matrix3x3_Request", full_classname_dest, 49) == 0);
  }
  matrix_interface__srv__Matrix3x3_Request * ros_message = _ros_message;
  {  // first
    PyObject * field = PyObject_GetAttrString(_pymsg, "first");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->first = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // second
    PyObject * field = PyObject_GetAttrString(_pymsg, "second");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->second = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // third
    PyObject * field = PyObject_GetAttrString(_pymsg, "third");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->third = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // four
    PyObject * field = PyObject_GetAttrString(_pymsg, "four");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->four = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // five
    PyObject * field = PyObject_GetAttrString(_pymsg, "five");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->five = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // six
    PyObject * field = PyObject_GetAttrString(_pymsg, "six");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->six = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // seven
    PyObject * field = PyObject_GetAttrString(_pymsg, "seven");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seven = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // eight
    PyObject * field = PyObject_GetAttrString(_pymsg, "eight");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eight = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // nine
    PyObject * field = PyObject_GetAttrString(_pymsg, "nine");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nine = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * matrix_interface__srv__matrix3x3__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Matrix3x3_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("matrix_interface.srv._matrix3x3");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Matrix3x3_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  matrix_interface__srv__Matrix3x3_Request * ros_message = (matrix_interface__srv__Matrix3x3_Request *)raw_ros_message;
  {  // first
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->first);
    {
      int rc = PyObject_SetAttrString(_pymessage, "first", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // second
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->second);
    {
      int rc = PyObject_SetAttrString(_pymessage, "second", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // third
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->third);
    {
      int rc = PyObject_SetAttrString(_pymessage, "third", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // four
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->four);
    {
      int rc = PyObject_SetAttrString(_pymessage, "four", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // five
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->five);
    {
      int rc = PyObject_SetAttrString(_pymessage, "five", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // six
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->six);
    {
      int rc = PyObject_SetAttrString(_pymessage, "six", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seven
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->seven);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seven", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eight
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->eight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nine
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->nine);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nine", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "matrix_interface/srv/detail/matrix3x3__struct.h"
// already included above
// #include "matrix_interface/srv/detail/matrix3x3__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool matrix_interface__srv__matrix3x3__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("matrix_interface.srv._matrix3x3.Matrix3x3_Response", full_classname_dest, 50) == 0);
  }
  matrix_interface__srv__Matrix3x3_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->result = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * matrix_interface__srv__matrix3x3__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Matrix3x3_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("matrix_interface.srv._matrix3x3");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Matrix3x3_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  matrix_interface__srv__Matrix3x3_Response * ros_message = (matrix_interface__srv__Matrix3x3_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
