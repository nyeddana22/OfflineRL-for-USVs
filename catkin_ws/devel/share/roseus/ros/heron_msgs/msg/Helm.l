;; Auto-generated. Do not edit!


(when (boundp 'heron_msgs::Helm)
  (if (not (find-package "HERON_MSGS"))
    (make-package "HERON_MSGS"))
  (shadow 'Helm (find-package "HERON_MSGS")))
(unless (find-package "HERON_MSGS::HELM")
  (make-package "HERON_MSGS::HELM"))

(in-package "ROS")
;;//! \htmlinclude Helm.msg.html


(defclass heron_msgs::Helm
  :super ros::object
  :slots (_thrust _yaw_rate ))

(defmethod heron_msgs::Helm
  (:init
   (&key
    ((:thrust __thrust) 0.0)
    ((:yaw_rate __yaw_rate) 0.0)
    )
   (send-super :init)
   (setq _thrust (float __thrust))
   (setq _yaw_rate (float __yaw_rate))
   self)
  (:thrust
   (&optional __thrust)
   (if __thrust (setq _thrust __thrust)) _thrust)
  (:yaw_rate
   (&optional __yaw_rate)
   (if __yaw_rate (setq _yaw_rate __yaw_rate)) _yaw_rate)
  (:serialization-length
   ()
   (+
    ;; float32 _thrust
    4
    ;; float32 _yaw_rate
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _thrust
       (sys::poke _thrust (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _yaw_rate
       (sys::poke _yaw_rate (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _thrust
     (setq _thrust (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _yaw_rate
     (setq _yaw_rate (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get heron_msgs::Helm :md5sum-) "e2d59470d537e1bf55bc57a5005f3cd5")
(setf (get heron_msgs::Helm :datatype-) "heron_msgs/Helm")
(setf (get heron_msgs::Helm :definition-)
      "# Command a percentage amount of total thrust capacity, and an turn rate.
# On a conventional craft, turn rate would map to rudder.

# Thrust amount ranges from [-1.0..1.0], where 1.0 pushes Heron forward.
float32 thrust

# Yaw rate specified in radians/sec, where positive values cause Heron
# to turn toward the port deck. The controller will use feedback from the
# IMU's gyroscopes to attempt to match the command rate.
float32 yaw_rate


")



(provide :heron_msgs/Helm "e2d59470d537e1bf55bc57a5005f3cd5")


