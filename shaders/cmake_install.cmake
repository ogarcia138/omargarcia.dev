# Install script for directory: /home/ogarcia138/aqsis/shaders

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "main" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/displacement" TYPE FILE FILES
    "/home/ogarcia138/shaders/rslshaders/AqDMap.slx"
    "/home/ogarcia138/shaders/rslshaders/asteroid.slx"
    "/home/ogarcia138/shaders/rslshaders/borg_metal.slx"
    "/home/ogarcia138/shaders/rslshaders/bumpy.slx"
    "/home/ogarcia138/shaders/rslshaders/dented.slx"
    "/home/ogarcia138/shaders/rslshaders/micro_bumps.slx"
    "/home/ogarcia138/shaders/rslshaders/wavy.slx"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/displacement" TYPE FILE FILES
    "/home/ogarcia138/aqsis/shaders/displacement/AqDMap.sl"
    "/home/ogarcia138/aqsis/shaders/displacement/asteroid.sl"
    "/home/ogarcia138/aqsis/shaders/displacement/borg_metal.sl"
    "/home/ogarcia138/aqsis/shaders/displacement/bumpy.sl"
    "/home/ogarcia138/aqsis/shaders/displacement/dented.sl"
    "/home/ogarcia138/aqsis/shaders/displacement/micro_bumps.sl"
    "/home/ogarcia138/aqsis/shaders/displacement/wavy.sl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "main" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/imager" TYPE FILE FILES
    "/home/ogarcia138/shaders/rslshaders/background.slx"
    "/home/ogarcia138/shaders/rslshaders/bluescreen.slx"
    "/home/ogarcia138/shaders/rslshaders/exposure.slx"
    "/home/ogarcia138/shaders/rslshaders/fakesky.slx"
    "/home/ogarcia138/shaders/rslshaders/filmgrain.slx"
    "/home/ogarcia138/shaders/rslshaders/gradient.slx"
    "/home/ogarcia138/shaders/rslshaders/iramp.slx"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/imager" TYPE FILE FILES
    "/home/ogarcia138/aqsis/shaders/imager/background.sl"
    "/home/ogarcia138/aqsis/shaders/imager/bluescreen.sl"
    "/home/ogarcia138/aqsis/shaders/imager/exposure.sl"
    "/home/ogarcia138/aqsis/shaders/imager/fakesky.sl"
    "/home/ogarcia138/aqsis/shaders/imager/filmgrain.sl"
    "/home/ogarcia138/aqsis/shaders/imager/gradient.sl"
    "/home/ogarcia138/aqsis/shaders/imager/iramp.sl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "main" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/light" TYPE FILE FILES
    "/home/ogarcia138/shaders/rslshaders/ambientlight.slx"
    "/home/ogarcia138/shaders/rslshaders/distantlight.slx"
    "/home/ogarcia138/shaders/rslshaders/pointlight.slx"
    "/home/ogarcia138/shaders/rslshaders/shadowdistant.slx"
    "/home/ogarcia138/shaders/rslshaders/shadowpoint.slx"
    "/home/ogarcia138/shaders/rslshaders/shadowspot.slx"
    "/home/ogarcia138/shaders/rslshaders/spotlight.slx"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/light" TYPE FILE FILES
    "/home/ogarcia138/aqsis/shaders/light/ambientlight.sl"
    "/home/ogarcia138/aqsis/shaders/light/distantlight.sl"
    "/home/ogarcia138/aqsis/shaders/light/pointlight.sl"
    "/home/ogarcia138/aqsis/shaders/light/shadowdistant.sl"
    "/home/ogarcia138/aqsis/shaders/light/shadowpoint.sl"
    "/home/ogarcia138/aqsis/shaders/light/shadowspot.sl"
    "/home/ogarcia138/aqsis/shaders/light/spotlight.sl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "main" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/surface" TYPE FILE FILES
    "/home/ogarcia138/shaders/rslshaders/AqSMap.slx"
    "/home/ogarcia138/shaders/rslshaders/DPBlueMarble.slx"
    "/home/ogarcia138/shaders/rslshaders/SpaceTest.slx"
    "/home/ogarcia138/shaders/rslshaders/cd.slx"
    "/home/ogarcia138/shaders/rslshaders/cellnoisetest.slx"
    "/home/ogarcia138/shaders/rslshaders/constant.slx"
    "/home/ogarcia138/shaders/rslshaders/curvetube.slx"
    "/home/ogarcia138/shaders/rslshaders/debug.slx"
    "/home/ogarcia138/shaders/rslshaders/expensive.slx"
    "/home/ogarcia138/shaders/rslshaders/face_plastic.slx"
    "/home/ogarcia138/shaders/rslshaders/matte.slx"
    "/home/ogarcia138/shaders/rslshaders/metal.slx"
    "/home/ogarcia138/shaders/rslshaders/microscope.slx"
    "/home/ogarcia138/shaders/rslshaders/paintedplastic.slx"
    "/home/ogarcia138/shaders/rslshaders/pinkGranite.slx"
    "/home/ogarcia138/shaders/rslshaders/plastic.slx"
    "/home/ogarcia138/shaders/rslshaders/randgrid.slx"
    "/home/ogarcia138/shaders/rslshaders/shinymetal.slx"
    "/home/ogarcia138/shaders/rslshaders/show_N.slx"
    "/home/ogarcia138/shaders/rslshaders/show_st.slx"
    "/home/ogarcia138/shaders/rslshaders/showuser.slx"
    "/home/ogarcia138/shaders/rslshaders/sticky_texture.slx"
    "/home/ogarcia138/shaders/rslshaders/uvtest.slx"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/surface" TYPE FILE FILES
    "/home/ogarcia138/aqsis/shaders/surface/AqSMap.sl"
    "/home/ogarcia138/aqsis/shaders/surface/DPBlueMarble.sl"
    "/home/ogarcia138/aqsis/shaders/surface/SpaceTest.sl"
    "/home/ogarcia138/aqsis/shaders/surface/cd.sl"
    "/home/ogarcia138/aqsis/shaders/surface/cellnoisetest.sl"
    "/home/ogarcia138/aqsis/shaders/surface/constant.sl"
    "/home/ogarcia138/aqsis/shaders/surface/curvetube.sl"
    "/home/ogarcia138/aqsis/shaders/surface/debug.sl"
    "/home/ogarcia138/aqsis/shaders/surface/expensive.sl"
    "/home/ogarcia138/aqsis/shaders/surface/face_plastic.sl"
    "/home/ogarcia138/aqsis/shaders/surface/matte.sl"
    "/home/ogarcia138/aqsis/shaders/surface/metal.sl"
    "/home/ogarcia138/aqsis/shaders/surface/microscope.sl"
    "/home/ogarcia138/aqsis/shaders/surface/paintedplastic.sl"
    "/home/ogarcia138/aqsis/shaders/surface/pinkGranite.sl"
    "/home/ogarcia138/aqsis/shaders/surface/plastic.sl"
    "/home/ogarcia138/aqsis/shaders/surface/randgrid.sl"
    "/home/ogarcia138/aqsis/shaders/surface/shinymetal.sl"
    "/home/ogarcia138/aqsis/shaders/surface/show_N.sl"
    "/home/ogarcia138/aqsis/shaders/surface/show_st.sl"
    "/home/ogarcia138/aqsis/shaders/surface/showuser.sl"
    "/home/ogarcia138/aqsis/shaders/surface/sticky_texture.sl"
    "/home/ogarcia138/aqsis/shaders/surface/uvtest.sl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "main" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/volume" TYPE FILE FILES
    "/home/ogarcia138/shaders/rslshaders/depthcue.slx"
    "/home/ogarcia138/shaders/rslshaders/fog.slx"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders/volume" TYPE FILE FILES
    "/home/ogarcia138/aqsis/shaders/volume/depthcue.sl"
    "/home/ogarcia138/aqsis/shaders/volume/fog.sl"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "shaders" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aqsis/shaders" TYPE DIRECTORY FILES "/home/ogarcia138/aqsis/shaders/include")
endif()

