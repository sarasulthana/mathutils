# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Declare the project
project(MathUtils)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add the source files and create a static library
add_library(mathutils STATIC
    src/mathutils.cpp
)

# Specify include directories for header files
target_include_directories(mathutils PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Optionally, add an executable to test the library
add_executable(main src/main.cpp)

# Link the library to the executable
target_link_libraries(main mathutils)

# Enable testing
enable_testing()

# Example test (create a simple test executable)
add_executable(test_mathutils tests/test_mathutils.cpp)

# Link the test executable with the mathutils library
target_link_libraries(test_mathutils mathutils)

# Register the test with CTest
add_test(NAME MathUtilsTest COMMAND test_mathutils)
