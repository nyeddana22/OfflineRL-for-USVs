# Install script for directory: /home/niharika/catkin_ws/src/heron_simulator/heron_gazebo

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/niharika/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/heron_gazebo.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/heron_gazebo/cmake" TYPE FILE FILES
    "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/heron_gazeboConfig.cmake"
    "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/heron_gazeboConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/heron_gazebo" TYPE FILE FILES "/home/niharika/catkin_ws/src/heron_simulator/heron_gazebo/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/heron_gazebo" TYPE PROGRAM FILES "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/activate_control_service")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/heron_gazebo" TYPE PROGRAM FILES "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/cmd_drive_translate")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/heron_gazebo" TYPE PROGRAM FILES "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/navsat_vel_translate")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/heron_gazebo" TYPE PROGRAM FILES "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/rpy_translator")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/heron_gazebo" TYPE PROGRAM FILES "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/twist_translate")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/heron_gazebo" TYPE PROGRAM FILES "/home/niharika/catkin_ws/build/heron_simulator/heron_gazebo/catkin_generated/installspace/vector3_to_magnetic_field")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/heron_gazebo" TYPE DIRECTORY FILES
    "/home/niharika/catkin_ws/src/heron_simulator/heron_gazebo/config"
    "/home/niharika/catkin_ws/src/heron_simulator/heron_gazebo/launch"
    "/home/niharika/catkin_ws/src/heron_simulator/heron_gazebo/worlds"
    )
endif()

