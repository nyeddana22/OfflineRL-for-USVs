;; Auto-generated. Do not edit!


(when (boundp 'heron_msgs::Status)
  (if (not (find-package "HERON_MSGS"))
    (make-package "HERON_MSGS"))
  (shadow 'Status (find-package "HERON_MSGS")))
(unless (find-package "HERON_MSGS::STATUS")
  (make-package "HERON_MSGS::STATUS"))

(in-package "ROS")
;;//! \htmlinclude Status.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass heron_msgs::Status
  :super ros::object
  :slots (_header _hardware_id _mcu_uptime _connection_uptime _pcb_temperature _user_current _user_power_consumed _motor_power_consumed _total_power_consumed ))

(defmethod heron_msgs::Status
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:hardware_id __hardware_id) "")
    ((:mcu_uptime __mcu_uptime) (instance ros::time :init))
    ((:connection_uptime __connection_uptime) (instance ros::time :init))
    ((:pcb_temperature __pcb_temperature) 0.0)
    ((:user_current __user_current) 0.0)
    ((:user_power_consumed __user_power_consumed) 0.0)
    ((:motor_power_consumed __motor_power_consumed) 0.0)
    ((:total_power_consumed __total_power_consumed) 0.0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _hardware_id (string __hardware_id))
   (setq _mcu_uptime __mcu_uptime)
   (setq _connection_uptime __connection_uptime)
   (setq _pcb_temperature (float __pcb_temperature))
   (setq _user_current (float __user_current))
   (setq _user_power_consumed (float __user_power_consumed))
   (setq _motor_power_consumed (float __motor_power_consumed))
   (setq _total_power_consumed (float __total_power_consumed))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:hardware_id
   (&optional __hardware_id)
   (if __hardware_id (setq _hardware_id __hardware_id)) _hardware_id)
  (:mcu_uptime
   (&optional __mcu_uptime)
   (if __mcu_uptime (setq _mcu_uptime __mcu_uptime)) _mcu_uptime)
  (:connection_uptime
   (&optional __connection_uptime)
   (if __connection_uptime (setq _connection_uptime __connection_uptime)) _connection_uptime)
  (:pcb_temperature
   (&optional __pcb_temperature)
   (if __pcb_temperature (setq _pcb_temperature __pcb_temperature)) _pcb_temperature)
  (:user_current
   (&optional __user_current)
   (if __user_current (setq _user_current __user_current)) _user_current)
  (:user_power_consumed
   (&optional __user_power_consumed)
   (if __user_power_consumed (setq _user_power_consumed __user_power_consumed)) _user_power_consumed)
  (:motor_power_consumed
   (&optional __motor_power_consumed)
   (if __motor_power_consumed (setq _motor_power_consumed __motor_power_consumed)) _motor_power_consumed)
  (:total_power_consumed
   (&optional __total_power_consumed)
   (if __total_power_consumed (setq _total_power_consumed __total_power_consumed)) _total_power_consumed)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; string _hardware_id
    4 (length _hardware_id)
    ;; duration _mcu_uptime
    8
    ;; duration _connection_uptime
    8
    ;; float32 _pcb_temperature
    4
    ;; float32 _user_current
    4
    ;; float32 _user_power_consumed
    4
    ;; float32 _motor_power_consumed
    4
    ;; float32 _total_power_consumed
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; string _hardware_id
       (write-long (length _hardware_id) s) (princ _hardware_id s)
     ;; duration _mcu_uptime
       (write-long (send _mcu_uptime :sec) s) (write-long (send _mcu_uptime :nsec) s)
     ;; duration _connection_uptime
       (write-long (send _connection_uptime :sec) s) (write-long (send _connection_uptime :nsec) s)
     ;; float32 _pcb_temperature
       (sys::poke _pcb_temperature (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _user_current
       (sys::poke _user_current (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _user_power_consumed
       (sys::poke _user_power_consumed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _motor_power_consumed
       (sys::poke _motor_power_consumed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _total_power_consumed
       (sys::poke _total_power_consumed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; string _hardware_id
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _hardware_id (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; duration _mcu_uptime
     (send _mcu_uptime :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _mcu_uptime :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; duration _connection_uptime
     (send _connection_uptime :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _connection_uptime :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float32 _pcb_temperature
     (setq _pcb_temperature (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _user_current
     (setq _user_current (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _user_power_consumed
     (setq _user_power_consumed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _motor_power_consumed
     (setq _motor_power_consumed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _total_power_consumed
     (setq _total_power_consumed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get heron_msgs::Status :md5sum-) "73638ba99aee6dc46e9610079bfb59d8")
(setf (get heron_msgs::Status :datatype-) "heron_msgs/Status")
(setf (get heron_msgs::Status :definition-)
      "# Specific system status data, transmitted by the MCU at 1Hz on status topic.

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

")



(provide :heron_msgs/Status "73638ba99aee6dc46e9610079bfb59d8")


