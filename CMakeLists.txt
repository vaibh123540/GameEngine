cmake_minimum_required(VERSION 3.14)
project(GameEngine VERSION 0.1 LANGUAGES CXX)

# — C++17 —
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# — Public headers —
include_directories(${CMAKE_SOURCE_DIR}/include)

# — Dependencies —
find_package(glfw3 3.3 REQUIRED CONFIG)  # Homebrew GLFW
find_package(GLEW REQUIRED CONFIG)       # Homebrew GLEW
find_package(OpenGL REQUIRED)            # System OpenGL
find_package(GTest REQUIRED CONFIG)      # Homebrew GTest

# — Testing setup —
enable_testing()
include(GoogleTest)

# — Engine executable —
add_executable(engine
    src/main.cpp
    src/platform/Window.cpp
    src/math/Vector2D.cpp
)

# — Include path —
target_include_directories(engine PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

# — Link libraries —
target_link_libraries(engine
    PRIVATE
      glfw
      GLEW::GLEW
      OpenGL::GL
)

# — Math unit tests —
add_executable(math_tests
    tests/test_vector2d.cpp
    src/math/Vector2D.cpp
)
target_link_libraries(math_tests
    PRIVATE
      GTest::gtest_main
)
gtest_discover_tests(math_tests)
