# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dave_interfaces:msg/BatteryState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryState(type):
    """Metaclass of message 'BatteryState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dave_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dave_interfaces.msg.BatteryState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__battery_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__battery_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__battery_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__battery_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__battery_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatteryState(metaclass=Metaclass_BatteryState):
    """Message class 'BatteryState'."""

    __slots__ = [
        '_header',
        '_volts',
        '_milliamps',
        '_watts',
        '_watthours',
        '_charging',
        '_capacity',
        '_percent',
        '_last_charge',
        '_last_discharge',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'volts': 'float',
        'milliamps': 'float',
        'watts': 'float',
        'watthours': 'float',
        'charging': 'boolean',
        'capacity': 'int16',
        'percent': 'int16',
        'last_charge': 'float',
        'last_discharge': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.volts = kwargs.get('volts', float())
        self.milliamps = kwargs.get('milliamps', float())
        self.watts = kwargs.get('watts', float())
        self.watthours = kwargs.get('watthours', float())
        self.charging = kwargs.get('charging', bool())
        self.capacity = kwargs.get('capacity', int())
        self.percent = kwargs.get('percent', int())
        self.last_charge = kwargs.get('last_charge', float())
        self.last_discharge = kwargs.get('last_discharge', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.volts != other.volts:
            return False
        if self.milliamps != other.milliamps:
            return False
        if self.watts != other.watts:
            return False
        if self.watthours != other.watthours:
            return False
        if self.charging != other.charging:
            return False
        if self.capacity != other.capacity:
            return False
        if self.percent != other.percent:
            return False
        if self.last_charge != other.last_charge:
            return False
        if self.last_discharge != other.last_discharge:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def volts(self):
        """Message field 'volts'."""
        return self._volts

    @volts.setter
    def volts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'volts' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'volts' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._volts = value

    @builtins.property
    def milliamps(self):
        """Message field 'milliamps'."""
        return self._milliamps

    @milliamps.setter
    def milliamps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'milliamps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'milliamps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._milliamps = value

    @builtins.property
    def watts(self):
        """Message field 'watts'."""
        return self._watts

    @watts.setter
    def watts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'watts' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'watts' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._watts = value

    @builtins.property
    def watthours(self):
        """Message field 'watthours'."""
        return self._watthours

    @watthours.setter
    def watthours(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'watthours' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'watthours' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._watthours = value

    @builtins.property
    def charging(self):
        """Message field 'charging'."""
        return self._charging

    @charging.setter
    def charging(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'charging' field must be of type 'bool'"
        self._charging = value

    @builtins.property
    def capacity(self):
        """Message field 'capacity'."""
        return self._capacity

    @capacity.setter
    def capacity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'capacity' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'capacity' field must be an integer in [-32768, 32767]"
        self._capacity = value

    @builtins.property
    def percent(self):
        """Message field 'percent'."""
        return self._percent

    @percent.setter
    def percent(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'percent' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'percent' field must be an integer in [-32768, 32767]"
        self._percent = value

    @builtins.property
    def last_charge(self):
        """Message field 'last_charge'."""
        return self._last_charge

    @last_charge.setter
    def last_charge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_charge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'last_charge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._last_charge = value

    @builtins.property
    def last_discharge(self):
        """Message field 'last_discharge'."""
        return self._last_discharge

    @last_discharge.setter
    def last_discharge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_discharge' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'last_discharge' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._last_discharge = value
