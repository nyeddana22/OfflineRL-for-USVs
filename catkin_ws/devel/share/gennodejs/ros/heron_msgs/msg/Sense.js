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

class Sense {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.battery = null;
      this.current_left = null;
      this.current_right = null;
      this.rc = null;
      this.rc_throttle = null;
      this.rc_rotation = null;
      this.rc_enable = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('battery')) {
        this.battery = initObj.battery
      }
      else {
        this.battery = 0.0;
      }
      if (initObj.hasOwnProperty('current_left')) {
        this.current_left = initObj.current_left
      }
      else {
        this.current_left = 0.0;
      }
      if (initObj.hasOwnProperty('current_right')) {
        this.current_right = initObj.current_right
      }
      else {
        this.current_right = 0.0;
      }
      if (initObj.hasOwnProperty('rc')) {
        this.rc = initObj.rc
      }
      else {
        this.rc = 0;
      }
      if (initObj.hasOwnProperty('rc_throttle')) {
        this.rc_throttle = initObj.rc_throttle
      }
      else {
        this.rc_throttle = 0;
      }
      if (initObj.hasOwnProperty('rc_rotation')) {
        this.rc_rotation = initObj.rc_rotation
      }
      else {
        this.rc_rotation = 0;
      }
      if (initObj.hasOwnProperty('rc_enable')) {
        this.rc_enable = initObj.rc_enable
      }
      else {
        this.rc_enable = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Sense
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [battery]
    bufferOffset = _serializer.float32(obj.battery, buffer, bufferOffset);
    // Serialize message field [current_left]
    bufferOffset = _serializer.float32(obj.current_left, buffer, bufferOffset);
    // Serialize message field [current_right]
    bufferOffset = _serializer.float32(obj.current_right, buffer, bufferOffset);
    // Serialize message field [rc]
    bufferOffset = _serializer.uint8(obj.rc, buffer, bufferOffset);
    // Serialize message field [rc_throttle]
    bufferOffset = _serializer.uint16(obj.rc_throttle, buffer, bufferOffset);
    // Serialize message field [rc_rotation]
    bufferOffset = _serializer.uint16(obj.rc_rotation, buffer, bufferOffset);
    // Serialize message field [rc_enable]
    bufferOffset = _serializer.uint16(obj.rc_enable, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Sense
    let len;
    let data = new Sense(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [battery]
    data.battery = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [current_left]
    data.current_left = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [current_right]
    data.current_right = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [rc]
    data.rc = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [rc_throttle]
    data.rc_throttle = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [rc_rotation]
    data.rc_rotation = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [rc_enable]
    data.rc_enable = _deserializer.uint16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 19;
  }

  static datatype() {
    // Returns string type for a message object
    return 'heron_msgs/Sense';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '56d1cbddc5154c7883e86d1d6d7fe153';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # General MCU status for Heron transmitted from the MCU
    # to higher-level software on the /sense topic.
    
    Header header
    
    # Voltage level of battery, in volts
    float32 battery
    
    # Instantaneous current drawn by each motor, in amps.
    float32 current_left
    float32 current_right
    
    # Bitfield represents status of hobby R/C override.
    uint8 RC_INRANGE=1
    uint8 RC_INUSE=2
    uint8 rc
    
    # Pulse lengths received from the three R/C channels.
    uint16 rc_throttle
    uint16 rc_rotation
    uint16 rc_enable
    
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
    const resolved = new Sense(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.battery !== undefined) {
      resolved.battery = msg.battery;
    }
    else {
      resolved.battery = 0.0
    }

    if (msg.current_left !== undefined) {
      resolved.current_left = msg.current_left;
    }
    else {
      resolved.current_left = 0.0
    }

    if (msg.current_right !== undefined) {
      resolved.current_right = msg.current_right;
    }
    else {
      resolved.current_right = 0.0
    }

    if (msg.rc !== undefined) {
      resolved.rc = msg.rc;
    }
    else {
      resolved.rc = 0
    }

    if (msg.rc_throttle !== undefined) {
      resolved.rc_throttle = msg.rc_throttle;
    }
    else {
      resolved.rc_throttle = 0
    }

    if (msg.rc_rotation !== undefined) {
      resolved.rc_rotation = msg.rc_rotation;
    }
    else {
      resolved.rc_rotation = 0
    }

    if (msg.rc_enable !== undefined) {
      resolved.rc_enable = msg.rc_enable;
    }
    else {
      resolved.rc_enable = 0
    }

    return resolved;
    }
};

// Constants for message
Sense.Constants = {
  RC_INRANGE: 1,
  RC_INUSE: 2,
}

module.exports = Sense;
