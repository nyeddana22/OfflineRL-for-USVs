// Auto-generated. Do not edit!

// (in-package heron_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class Status {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.hardware_id = null;
      this.mcu_uptime = null;
      this.connection_uptime = null;
      this.pcb_temperature = null;
      this.user_current = null;
      this.user_power_consumed = null;
      this.motor_power_consumed = null;
      this.total_power_consumed = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('hardware_id')) {
        this.hardware_id = initObj.hardware_id
      }
      else {
        this.hardware_id = '';
      }
      if (initObj.hasOwnProperty('mcu_uptime')) {
        this.mcu_uptime = initObj.mcu_uptime
      }
      else {
        this.mcu_uptime = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('connection_uptime')) {
        this.connection_uptime = initObj.connection_uptime
      }
      else {
        this.connection_uptime = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('pcb_temperature')) {
        this.pcb_temperature = initObj.pcb_temperature
      }
      else {
        this.pcb_temperature = 0.0;
      }
      if (initObj.hasOwnProperty('user_current')) {
        this.user_current = initObj.user_current
      }
      else {
        this.user_current = 0.0;
      }
      if (initObj.hasOwnProperty('user_power_consumed')) {
        this.user_power_consumed = initObj.user_power_consumed
      }
      else {
        this.user_power_consumed = 0.0;
      }
      if (initObj.hasOwnProperty('motor_power_consumed')) {
        this.motor_power_consumed = initObj.motor_power_consumed
      }
      else {
        this.motor_power_consumed = 0.0;
      }
      if (initObj.hasOwnProperty('total_power_consumed')) {
        this.total_power_consumed = initObj.total_power_consumed
      }
      else {
        this.total_power_consumed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Status
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [hardware_id]
    bufferOffset = _serializer.string(obj.hardware_id, buffer, bufferOffset);
    // Serialize message field [mcu_uptime]
    bufferOffset = _serializer.duration(obj.mcu_uptime, buffer, bufferOffset);
    // Serialize message field [connection_uptime]
    bufferOffset = _serializer.duration(obj.connection_uptime, buffer, bufferOffset);
    // Serialize message field [pcb_temperature]
    bufferOffset = _serializer.float32(obj.pcb_temperature, buffer, bufferOffset);
    // Serialize message field [user_current]
    bufferOffset = _serializer.float32(obj.user_current, buffer, bufferOffset);
    // Serialize message field [user_power_consumed]
    bufferOffset = _serializer.float32(obj.user_power_consumed, buffer, bufferOffset);
    // Serialize message field [motor_power_consumed]
    bufferOffset = _serializer.float32(obj.motor_power_consumed, buffer, bufferOffset);
    // Serialize message field [total_power_consumed]
    bufferOffset = _serializer.float32(obj.total_power_consumed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Status
    let len;
    let data = new Status(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [hardware_id]
    data.hardware_id = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [mcu_uptime]
    data.mcu_uptime = _deserializer.duration(buffer, bufferOffset);
    // Deserialize message field [connection_uptime]
    data.connection_uptime = _deserializer.duration(buffer, bufferOffset);
    // Deserialize message field [pcb_temperature]
    data.pcb_temperature = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [user_current]
    data.user_current = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [user_power_consumed]
    data.user_power_consumed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [motor_power_consumed]
    data.motor_power_consumed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [total_power_consumed]
    data.total_power_consumed = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.hardware_id.length;
    return length + 40;
  }

  static datatype() {
    // Returns string type for a message object
    return 'heron_msgs/Status';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '73638ba99aee6dc46e9610079bfb59d8';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Specific system status data, transmitted by the MCU at 1Hz on status topic.
    
    Header header
    
    # Commit of firmware source.
    string hardware_id
    
    # Times since MCU power-on and MCU rosserial connection, respectively.
    duration mcu_uptime
    duration connection_uptime
    
    # Temperature of PCB as measured by internal AVR thermometer,
    # reported in degrees centigrade.
    float32 pcb_temperature
    
    # Current sense available on platform, in amps.
    # Averaged over the message period.
    float32 user_current
    
    # Integration of power consumption since MCU power-on, in watt-hours.
    float32 user_power_consumed
    float32 motor_power_consumed
    float32 total_power_consumed
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Status(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.hardware_id !== undefined) {
      resolved.hardware_id = msg.hardware_id;
    }
    else {
      resolved.hardware_id = ''
    }

    if (msg.mcu_uptime !== undefined) {
      resolved.mcu_uptime = msg.mcu_uptime;
    }
    else {
      resolved.mcu_uptime = {secs: 0, nsecs: 0}
    }

    if (msg.connection_uptime !== undefined) {
      resolved.connection_uptime = msg.connection_uptime;
    }
    else {
      resolved.connection_uptime = {secs: 0, nsecs: 0}
    }

    if (msg.pcb_temperature !== undefined) {
      resolved.pcb_temperature = msg.pcb_temperature;
    }
    else {
      resolved.pcb_temperature = 0.0
    }

    if (msg.user_current !== undefined) {
      resolved.user_current = msg.user_current;
    }
    else {
      resolved.user_current = 0.0
    }

    if (msg.user_power_consumed !== undefined) {
      resolved.user_power_consumed = msg.user_power_consumed;
    }
    else {
      resolved.user_power_consumed = 0.0
    }

    if (msg.motor_power_consumed !== undefined) {
      resolved.motor_power_consumed = msg.motor_power_consumed;
    }
    else {
      resolved.motor_power_consumed = 0.0
    }

    if (msg.total_power_consumed !== undefined) {
      resolved.total_power_consumed = msg.total_power_consumed;
    }
    else {
      resolved.total_power_consumed = 0.0
    }

    return resolved;
    }
};

module.exports = Status;
