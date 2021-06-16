cmake_minimum_required(VERSION 3.14)
project(cpp_primer_exercise)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)

enable_testing()###
add_executable(hello_gtest hello_gtest.cpp)
target_link_libraries(
	hello_gtest
	gtest_main
)
###
include(GoogleTest)
gtest_discover_tests(hello_gtest)


set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)