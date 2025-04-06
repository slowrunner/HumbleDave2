// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from dave_interfaces:msg/BatteryState.idl
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
#include "dave_interfaces/msg/detail/battery_state__struct.h"
#include "dave_interfaces/msg/detail/battery_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool dave_interfaces__msg__battery_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("dave_interfaces.msg._battery_state.BatteryState", full_classname_dest, 47) == 0);
  }
  dave_interfaces__msg__BatteryState * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // volts
    PyObject * field = PyObject_GetAttrString(_pymsg, "volts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->volts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // milliamps
    PyObject * field = PyObject_GetAttrString(_pymsg, "milliamps");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->milliamps = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // watts
    PyObject * field = PyObject_GetAttrString(_pymsg, "watts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->watts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // watthours
    PyObject * field = PyObject_GetAttrString(_pymsg, "watthours");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->watthours = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // charging
    PyObject * field = PyObject_GetAttrString(_pymsg, "charging");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->charging = (Py_True == field);
    Py_DECREF(field);
  }
  {  // capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->capacity = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->percent = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // last_charge
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_charge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_charge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // last_discharge
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_discharge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_discharge = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * dave_interfaces__msg__battery_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BatteryState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("dave_interfaces.msg._battery_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BatteryState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  dave_interfaces__msg__BatteryState * ros_message = (dave_interfaces__msg__BatteryState *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // volts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->volts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "volts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // milliamps
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->milliamps);
    {
      int rc = PyObject_SetAttrString(_pymessage, "milliamps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // watts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->watts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "watts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // watthours
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->watthours);
    {
      int rc = PyObject_SetAttrString(_pymessage, "watthours", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charging
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->charging ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charging", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capacity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // percent
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_charge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_charge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_charge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_discharge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_discharge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_discharge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
