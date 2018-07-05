cmake_minimum_required (VERSION 2.6)
project (capture)

FIND_PACKAGE( OpenCV REQUIRED )
find_package (OpenGL REQUIRED)


ADD_EXECUTABLE(capture capture.cpp)
TARGET_LINK_LIBRARIES(capture ${OpenCV_LIBS} ${OPENGL_LIBRARIES} )
