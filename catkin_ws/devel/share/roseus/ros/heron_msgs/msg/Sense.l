;; Auto-generated. Do not edit!


(when (boundp 'heron_msgs::Sense)
  (if (not (find-package "HERON_MSGS"))
    (make-package "HERON_MSGS"))
  (shadow 'Sense (find-package "HERON_MSGS")))
(unless (find-package "HERON_MSGS::SENSE")
  (make-package "HERON_MSGS::SENSE"))

(in-package "ROS")
;;//! \htmlinclude Sense.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*RC_INRANGE*" (find-package "HERON_MSGS::SENSE"))
(shadow '*RC_INRANGE* (find-package "HERON_MSGS::SENSE"))
(defconstant heron_msgs::Sense::*RC_INRANGE* 1)
(intern "*RC_INUSE*" (find-package "HERON_MSGS::SENSE"))
(shadow '*RC_INUSE* (find-package "HERON_MSGS::SENSE"))
(defconstant heron_msgs::Sense::*RC_INUSE* 2)
(defclass heron_msgs::Sense
  :super ros::object
  :slots (_header _battery _current_left _current_right _rc _rc_throttle _rc_rotation _rc_enable ))

(defmethod heron_msgs::Sense
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:battery __battery) 0.0)
    ((:current_left __current_left) 0.0)
    ((:current_right __current_right) 0.0)
    ((:rc __rc) 0)
    ((:rc_throttle __rc_throttle) 0)
    ((:rc_rotation __rc_rotation) 0)
    ((:rc_enable __rc_enable) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _battery (float __battery))
   (setq _current_left (float __current_left))
   (setq _current_right (float __current_right))
   (setq _rc (round __rc))
   (setq _rc_throttle (round __rc_throttle))
   (setq _rc_rotation (round __rc_rotation))
   (setq _rc_enable (round __rc_enable))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:battery
   (&optional __battery)
   (if __battery (setq _battery __battery)) _battery)
  (:current_left
   (&optional __current_left)
   (if __current_left (setq _current_left __current_left)) _current_left)
  (:current_right
   (&optional __current_right)
   (if __current_right (setq _current_right __current_right)) _current_right)
  (:rc
   (&optional __rc)
   (if __rc (setq _rc __rc)) _rc)
  (:rc_throttle
   (&optional __rc_throttle)
   (if __rc_throttle (setq _rc_throttle __rc_throttle)) _rc_throttle)
  (:rc_rotation
   (&optional __rc_rotation)
   (if __rc_rotation (setq _rc_rotation __rc_rotation)) _rc_rotation)
  (:rc_enable
   (&optional __rc_enable)
   (if __rc_enable (setq _rc_enable __rc_enable)) _rc_enable)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _battery
    4
    ;; float32 _current_left
    4
    ;; float32 _current_right
    4
    ;; uint8 _rc
    1
    ;; uint16 _rc_throttle
    2
    ;; uint16 _rc_rotation
    2
    ;; uint16 _rc_enable
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _battery
       (sys::poke _battery (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _current_left
       (sys::poke _current_left (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _current_right
       (sys::poke _current_right (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; uint8 _rc
       (write-byte _rc s)
     ;; uint16 _rc_throttle
       (write-word _rc_throttle s)
     ;; uint16 _rc_rotation
       (write-word _rc_rotation s)
     ;; uint16 _rc_enable
       (write-word _rc_enable s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _battery
     (setq _battery (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _current_left
     (setq _current_left (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _current_right
     (setq _current_right (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; uint8 _rc
     (setq _rc (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint16 _rc_throttle
     (setq _rc_throttle (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _rc_rotation
     (setq _rc_rotation (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _rc_enable
     (setq _rc_enable (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get heron_msgs::Sense :md5sum-) "56d1cbddc5154c7883e86d1d6d7fe153")
(setf (get heron_msgs::Sense :datatype-) "heron_msgs/Sense")
(setf (get heron_msgs::Sense :definition-)
      "# General MCU status for Heron transmitted from the MCU
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

")



(provide :heron_msgs/Sense "56d1cbddc5154c7883e86d1d6d7fe153")


