cmake_minimum_required(VERSION 3.22.0)
project(TwoSum VERSION 0.1.0)

# Add third party libraries (spdlog, catch2, ...) using CMake FetchContent
include(cmake/fetch_content.cmake)

# Add an object library (doesn't produce an library, only object files which can be linked to other executables or libraries)
add_library(two_sum OBJECT src/two_sum.cpp)

# Simple main exe (using spdlog for logging results)
add_executable(main_exe main.cpp)
target_link_libraries(main_exe PRIVATE $<TARGET_OBJECTS:two_sum> spdlog)

# Enable testing
include(CTest)
enable_testing()

# Add Tests
add_subdirectory(tests)

