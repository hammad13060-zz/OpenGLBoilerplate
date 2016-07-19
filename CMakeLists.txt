cmake_minimum_required(VERSION 3.4)
project(OpenGLBoilerplate)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo")

set(SOURCE_FILES main.cpp Shader.cpp Shader.h)


#find packages
find_package(GLEW REQUIRED)
if (GLEW_FOUND)
    include_directories($(GLEW_INCLUDE_DIRS))
endif()

find_package(OpenGL)


find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})




add_executable(OpenGLBoilerplate ${SOURCE_FILES})
target_link_libraries(OpenGLBoilerplate  ${GLFW_STATIC_LIBRARIES} ${GLEW_LIBRARIES}  ${OPENGL_LIBRARIES})