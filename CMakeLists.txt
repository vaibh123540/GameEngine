cmake_minimum_required(VERSION 3.14)
project(GameEngine VERSION 0.1 LANGUAGES CXX)

# Require C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include our public headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Locate the Homebrew-installed GTest
find_package(GTest REQUIRED CONFIG)
include_directories(${GTEST_INCLUDE_DIRS})

# Enable CTest and GoogleTest discovery
enable_testing()
include(GoogleTest)

# Collect all engine source files
file(GLOB_RECURSE ENGINE_SOURCES src/*.cpp)

# Main engine executable
add_executable(engine ${ENGINE_SOURCES})

# Math unit tests executable
add_executable(math_tests
  tests/test_vector2d.cpp
  src/math/Vector2D.cpp
)

# Link tests against GTest
target_link_libraries(math_tests
  GTest::gtest_main
)

# Auto-discover and register all TEST() cases
gtest_discover_tests(math_tests)