# generated from rosidl_generator_py/resource/_idl.py.em
# with input from matrix_interface:srv/Matrix3x3.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Matrix3x3_Request(type):
    """Metaclass of message 'Matrix3x3_Request'."""

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
            module = import_type_support('matrix_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'matrix_interface.srv.Matrix3x3_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__matrix3x3__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__matrix3x3__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__matrix3x3__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__matrix3x3__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__matrix3x3__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Matrix3x3_Request(metaclass=Metaclass_Matrix3x3_Request):
    """Message class 'Matrix3x3_Request'."""

    __slots__ = [
        '_first',
        '_second',
        '_third',
        '_four',
        '_five',
        '_six',
        '_seven',
        '_eight',
        '_nine',
    ]

    _fields_and_field_types = {
        'first': 'int64',
        'second': 'int64',
        'third': 'int64',
        'four': 'int64',
        'five': 'int64',
        'six': 'int64',
        'seven': 'int64',
        'eight': 'int64',
        'nine': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.first = kwargs.get('first', int())
        self.second = kwargs.get('second', int())
        self.third = kwargs.get('third', int())
        self.four = kwargs.get('four', int())
        self.five = kwargs.get('five', int())
        self.six = kwargs.get('six', int())
        self.seven = kwargs.get('seven', int())
        self.eight = kwargs.get('eight', int())
        self.nine = kwargs.get('nine', int())

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
        if self.first != other.first:
            return False
        if self.second != other.second:
            return False
        if self.third != other.third:
            return False
        if self.four != other.four:
            return False
        if self.five != other.five:
            return False
        if self.six != other.six:
            return False
        if self.seven != other.seven:
            return False
        if self.eight != other.eight:
            return False
        if self.nine != other.nine:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def first(self):
        """Message field 'first'."""
        return self._first

    @first.setter
    def first(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'first' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'first' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._first = value

    @builtins.property
    def second(self):
        """Message field 'second'."""
        return self._second

    @second.setter
    def second(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'second' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'second' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._second = value

    @builtins.property
    def third(self):
        """Message field 'third'."""
        return self._third

    @third.setter
    def third(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'third' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'third' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._third = value

    @builtins.property
    def four(self):
        """Message field 'four'."""
        return self._four

    @four.setter
    def four(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'four' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'four' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._four = value

    @builtins.property
    def five(self):
        """Message field 'five'."""
        return self._five

    @five.setter
    def five(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'five' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'five' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._five = value

    @builtins.property
    def six(self):
        """Message field 'six'."""
        return self._six

    @six.setter
    def six(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'six' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'six' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._six = value

    @builtins.property
    def seven(self):
        """Message field 'seven'."""
        return self._seven

    @seven.setter
    def seven(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seven' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'seven' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._seven = value

    @builtins.property
    def eight(self):
        """Message field 'eight'."""
        return self._eight

    @eight.setter
    def eight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eight' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'eight' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._eight = value

    @builtins.property
    def nine(self):
        """Message field 'nine'."""
        return self._nine

    @nine.setter
    def nine(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nine' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'nine' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._nine = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Matrix3x3_Response(type):
    """Metaclass of message 'Matrix3x3_Response'."""

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
            module = import_type_support('matrix_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'matrix_interface.srv.Matrix3x3_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__matrix3x3__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__matrix3x3__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__matrix3x3__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__matrix3x3__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__matrix3x3__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Matrix3x3_Response(metaclass=Metaclass_Matrix3x3_Response):
    """Message class 'Matrix3x3_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', float())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'result' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'result' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._result = value


class Metaclass_Matrix3x3(type):
    """Metaclass of service 'Matrix3x3'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('matrix_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'matrix_interface.srv.Matrix3x3')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__matrix3x3

            from matrix_interface.srv import _matrix3x3
            if _matrix3x3.Metaclass_Matrix3x3_Request._TYPE_SUPPORT is None:
                _matrix3x3.Metaclass_Matrix3x3_Request.__import_type_support__()
            if _matrix3x3.Metaclass_Matrix3x3_Response._TYPE_SUPPORT is None:
                _matrix3x3.Metaclass_Matrix3x3_Response.__import_type_support__()


class Matrix3x3(metaclass=Metaclass_Matrix3x3):
    from matrix_interface.srv._matrix3x3 import Matrix3x3_Request as Request
    from matrix_interface.srv._matrix3x3 import Matrix3x3_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
