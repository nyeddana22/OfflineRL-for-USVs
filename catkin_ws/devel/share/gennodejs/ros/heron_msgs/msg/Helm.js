// Auto-generated. Do not edit!

// (in-package heron_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Helm {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.thrust = null;
      this.yaw_rate = null;
    }
    else {
      if (initObj.hasOwnProperty('thrust')) {
        this.thrust = initObj.thrust
      }
      else {
        this.thrust = 0.0;
      }
      if (initObj.hasOwnProperty('yaw_rate')) {
        this.yaw_rate = initObj.yaw_rate
      }
      else {
        this.yaw_rate = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Helm
    // Serialize message field [thrust]
    bufferOffset = _serializer.float32(obj.thrust, buffer, bufferOffset);
    // Serialize message field [yaw_rate]
    bufferOffset = _serializer.float32(obj.yaw_rate, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Helm
    let len;
    let data = new Helm(null);
    // Deserialize message field [thrust]
    data.thrust = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [yaw_rate]
    data.yaw_rate = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'heron_msgs/Helm';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e2d59470d537e1bf55bc57a5005f3cd5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Command a percentage amount of total thrust capacity, and an turn rate.
    # On a conventional craft, turn rate would map to rudder.
    
    # Thrust amount ranges from [-1.0..1.0], where 1.0 pushes Heron forward.
    float32 thrust
    
    # Yaw rate specified in radians/sec, where positive values cause Heron
    # to turn toward the port deck. The controller will use feedback from the
    # IMU's gyroscopes to attempt to match the command rate.
    float32 yaw_rate
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Helm(null);
    if (msg.thrust !== undefined) {
      resolved.thrust = msg.thrust;
    }
    else {
      resolved.thrust = 0.0
    }

    if (msg.yaw_rate !== undefined) {
      resolved.yaw_rate = msg.yaw_rate;
    }
    else {
      resolved.yaw_rate = 0.0
    }

    return resolved;
    }
};

module.exports = Helm;
