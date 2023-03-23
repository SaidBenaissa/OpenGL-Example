cmake_minimum_required(VERSION 3.0)
project(my_opengl_program)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Find FreeGLUT
find_package(GLUT REQUIRED)

# Add the path to the FreeGLUT header file
include_directories(${OPENGL_INCLUDE_DIRS} /opt/homebrew/Cellar/mesa/22.3.6/include)

# Add the path to the FreeGLUT header file
include_directories(${GLUT_INCLUDE_DIRS} /opt/homebrew/Cellar/freeglut/3.4.0/include)

# Add the path to the OpenGL library
link_directories(/opt/homebrew/Cellar/mesa/22.3.6/lib)

# Add the path to the FreeGLUT library
link_directories(/opt/homebrew/Cellar/freeglut/3.4.0/lib)

# Add your source files
add_executable(my_opengl_program main.cpp)

# Link with OpenGL and FreeGLUT
target_link_libraries(my_opengl_program ${OPENGL_LIBRARIES} glut)
