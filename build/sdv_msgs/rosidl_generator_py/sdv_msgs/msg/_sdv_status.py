# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sdv_msgs:msg/SdvStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SdvStatus(type):
    """Metaclass of message 'SdvStatus'."""

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
            module = import_type_support('sdv_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sdv_msgs.msg.SdvStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sdv_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sdv_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sdv_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sdv_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sdv_status

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


class SdvStatus(metaclass=Metaclass_SdvStatus):
    """Message class 'SdvStatus'."""

    __slots__ = [
        '_header',
        '_energized',
        '_stand_by',
        '_rotate',
        '_turn_left',
        '_turn_right',
        '_reverse',
        '_forward',
        '_low_batt',
        '_emergency_stop',
        '_reset_pc',
        '_poweroff_pc',
        '_obstacle_stop',
        '_over_load',
        '_connection_error',
        '_tag_disconnected',
        '_tag_init',
        '_tag_is_on_platform',
        '_tag_read_error',
        '_tag_write_error',
        '_tag_close',
        '_not_connection_error',
        '_connection_error_imu',
        '_connection_error_msp',
        '_connection_error_rfid',
        '_connection_error_ult',
        '_connection_error_batt',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'energized': 'boolean',
        'stand_by': 'boolean',
        'rotate': 'boolean',
        'turn_left': 'boolean',
        'turn_right': 'boolean',
        'reverse': 'boolean',
        'forward': 'boolean',
        'low_batt': 'boolean',
        'emergency_stop': 'boolean',
        'reset_pc': 'boolean',
        'poweroff_pc': 'boolean',
        'obstacle_stop': 'boolean',
        'over_load': 'boolean',
        'connection_error': 'boolean',
        'tag_disconnected': 'boolean',
        'tag_init': 'boolean',
        'tag_is_on_platform': 'boolean',
        'tag_read_error': 'boolean',
        'tag_write_error': 'boolean',
        'tag_close': 'boolean',
        'not_connection_error': 'boolean',
        'connection_error_imu': 'boolean',
        'connection_error_msp': 'boolean',
        'connection_error_rfid': 'boolean',
        'connection_error_ult': 'boolean',
        'connection_error_batt': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.energized = kwargs.get('energized', bool())
        self.stand_by = kwargs.get('stand_by', bool())
        self.rotate = kwargs.get('rotate', bool())
        self.turn_left = kwargs.get('turn_left', bool())
        self.turn_right = kwargs.get('turn_right', bool())
        self.reverse = kwargs.get('reverse', bool())
        self.forward = kwargs.get('forward', bool())
        self.low_batt = kwargs.get('low_batt', bool())
        self.emergency_stop = kwargs.get('emergency_stop', bool())
        self.reset_pc = kwargs.get('reset_pc', bool())
        self.poweroff_pc = kwargs.get('poweroff_pc', bool())
        self.obstacle_stop = kwargs.get('obstacle_stop', bool())
        self.over_load = kwargs.get('over_load', bool())
        self.connection_error = kwargs.get('connection_error', bool())
        self.tag_disconnected = kwargs.get('tag_disconnected', bool())
        self.tag_init = kwargs.get('tag_init', bool())
        self.tag_is_on_platform = kwargs.get('tag_is_on_platform', bool())
        self.tag_read_error = kwargs.get('tag_read_error', bool())
        self.tag_write_error = kwargs.get('tag_write_error', bool())
        self.tag_close = kwargs.get('tag_close', bool())
        self.not_connection_error = kwargs.get('not_connection_error', bool())
        self.connection_error_imu = kwargs.get('connection_error_imu', bool())
        self.connection_error_msp = kwargs.get('connection_error_msp', bool())
        self.connection_error_rfid = kwargs.get('connection_error_rfid', bool())
        self.connection_error_ult = kwargs.get('connection_error_ult', bool())
        self.connection_error_batt = kwargs.get('connection_error_batt', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.energized != other.energized:
            return False
        if self.stand_by != other.stand_by:
            return False
        if self.rotate != other.rotate:
            return False
        if self.turn_left != other.turn_left:
            return False
        if self.turn_right != other.turn_right:
            return False
        if self.reverse != other.reverse:
            return False
        if self.forward != other.forward:
            return False
        if self.low_batt != other.low_batt:
            return False
        if self.emergency_stop != other.emergency_stop:
            return False
        if self.reset_pc != other.reset_pc:
            return False
        if self.poweroff_pc != other.poweroff_pc:
            return False
        if self.obstacle_stop != other.obstacle_stop:
            return False
        if self.over_load != other.over_load:
            return False
        if self.connection_error != other.connection_error:
            return False
        if self.tag_disconnected != other.tag_disconnected:
            return False
        if self.tag_init != other.tag_init:
            return False
        if self.tag_is_on_platform != other.tag_is_on_platform:
            return False
        if self.tag_read_error != other.tag_read_error:
            return False
        if self.tag_write_error != other.tag_write_error:
            return False
        if self.tag_close != other.tag_close:
            return False
        if self.not_connection_error != other.not_connection_error:
            return False
        if self.connection_error_imu != other.connection_error_imu:
            return False
        if self.connection_error_msp != other.connection_error_msp:
            return False
        if self.connection_error_rfid != other.connection_error_rfid:
            return False
        if self.connection_error_ult != other.connection_error_ult:
            return False
        if self.connection_error_batt != other.connection_error_batt:
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
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def energized(self):
        """Message field 'energized'."""
        return self._energized

    @energized.setter
    def energized(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'energized' field must be of type 'bool'"
        self._energized = value

    @builtins.property
    def stand_by(self):
        """Message field 'stand_by'."""
        return self._stand_by

    @stand_by.setter
    def stand_by(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'stand_by' field must be of type 'bool'"
        self._stand_by = value

    @builtins.property
    def rotate(self):
        """Message field 'rotate'."""
        return self._rotate

    @rotate.setter
    def rotate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'rotate' field must be of type 'bool'"
        self._rotate = value

    @builtins.property
    def turn_left(self):
        """Message field 'turn_left'."""
        return self._turn_left

    @turn_left.setter
    def turn_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'turn_left' field must be of type 'bool'"
        self._turn_left = value

    @builtins.property
    def turn_right(self):
        """Message field 'turn_right'."""
        return self._turn_right

    @turn_right.setter
    def turn_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'turn_right' field must be of type 'bool'"
        self._turn_right = value

    @builtins.property
    def reverse(self):
        """Message field 'reverse'."""
        return self._reverse

    @reverse.setter
    def reverse(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'reverse' field must be of type 'bool'"
        self._reverse = value

    @builtins.property
    def forward(self):
        """Message field 'forward'."""
        return self._forward

    @forward.setter
    def forward(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'forward' field must be of type 'bool'"
        self._forward = value

    @builtins.property
    def low_batt(self):
        """Message field 'low_batt'."""
        return self._low_batt

    @low_batt.setter
    def low_batt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'low_batt' field must be of type 'bool'"
        self._low_batt = value

    @builtins.property
    def emergency_stop(self):
        """Message field 'emergency_stop'."""
        return self._emergency_stop

    @emergency_stop.setter
    def emergency_stop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'emergency_stop' field must be of type 'bool'"
        self._emergency_stop = value

    @builtins.property
    def reset_pc(self):
        """Message field 'reset_pc'."""
        return self._reset_pc

    @reset_pc.setter
    def reset_pc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'reset_pc' field must be of type 'bool'"
        self._reset_pc = value

    @builtins.property
    def poweroff_pc(self):
        """Message field 'poweroff_pc'."""
        return self._poweroff_pc

    @poweroff_pc.setter
    def poweroff_pc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'poweroff_pc' field must be of type 'bool'"
        self._poweroff_pc = value

    @builtins.property
    def obstacle_stop(self):
        """Message field 'obstacle_stop'."""
        return self._obstacle_stop

    @obstacle_stop.setter
    def obstacle_stop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'obstacle_stop' field must be of type 'bool'"
        self._obstacle_stop = value

    @builtins.property
    def over_load(self):
        """Message field 'over_load'."""
        return self._over_load

    @over_load.setter
    def over_load(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'over_load' field must be of type 'bool'"
        self._over_load = value

    @builtins.property
    def connection_error(self):
        """Message field 'connection_error'."""
        return self._connection_error

    @connection_error.setter
    def connection_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connection_error' field must be of type 'bool'"
        self._connection_error = value

    @builtins.property
    def tag_disconnected(self):
        """Message field 'tag_disconnected'."""
        return self._tag_disconnected

    @tag_disconnected.setter
    def tag_disconnected(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tag_disconnected' field must be of type 'bool'"
        self._tag_disconnected = value

    @builtins.property
    def tag_init(self):
        """Message field 'tag_init'."""
        return self._tag_init

    @tag_init.setter
    def tag_init(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tag_init' field must be of type 'bool'"
        self._tag_init = value

    @builtins.property
    def tag_is_on_platform(self):
        """Message field 'tag_is_on_platform'."""
        return self._tag_is_on_platform

    @tag_is_on_platform.setter
    def tag_is_on_platform(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tag_is_on_platform' field must be of type 'bool'"
        self._tag_is_on_platform = value

    @builtins.property
    def tag_read_error(self):
        """Message field 'tag_read_error'."""
        return self._tag_read_error

    @tag_read_error.setter
    def tag_read_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tag_read_error' field must be of type 'bool'"
        self._tag_read_error = value

    @builtins.property
    def tag_write_error(self):
        """Message field 'tag_write_error'."""
        return self._tag_write_error

    @tag_write_error.setter
    def tag_write_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tag_write_error' field must be of type 'bool'"
        self._tag_write_error = value

    @builtins.property
    def tag_close(self):
        """Message field 'tag_close'."""
        return self._tag_close

    @tag_close.setter
    def tag_close(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tag_close' field must be of type 'bool'"
        self._tag_close = value

    @builtins.property
    def not_connection_error(self):
        """Message field 'not_connection_error'."""
        return self._not_connection_error

    @not_connection_error.setter
    def not_connection_error(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'not_connection_error' field must be of type 'bool'"
        self._not_connection_error = value

    @builtins.property
    def connection_error_imu(self):
        """Message field 'connection_error_imu'."""
        return self._connection_error_imu

    @connection_error_imu.setter
    def connection_error_imu(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connection_error_imu' field must be of type 'bool'"
        self._connection_error_imu = value

    @builtins.property
    def connection_error_msp(self):
        """Message field 'connection_error_msp'."""
        return self._connection_error_msp

    @connection_error_msp.setter
    def connection_error_msp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connection_error_msp' field must be of type 'bool'"
        self._connection_error_msp = value

    @builtins.property
    def connection_error_rfid(self):
        """Message field 'connection_error_rfid'."""
        return self._connection_error_rfid

    @connection_error_rfid.setter
    def connection_error_rfid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connection_error_rfid' field must be of type 'bool'"
        self._connection_error_rfid = value

    @builtins.property
    def connection_error_ult(self):
        """Message field 'connection_error_ult'."""
        return self._connection_error_ult

    @connection_error_ult.setter
    def connection_error_ult(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connection_error_ult' field must be of type 'bool'"
        self._connection_error_ult = value

    @builtins.property
    def connection_error_batt(self):
        """Message field 'connection_error_batt'."""
        return self._connection_error_batt

    @connection_error_batt.setter
    def connection_error_batt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'connection_error_batt' field must be of type 'bool'"
        self._connection_error_batt = value
