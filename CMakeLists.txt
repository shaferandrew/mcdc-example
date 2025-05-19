cmake_minimum_required(VERSION 3.16.3)
project(Example CXX)

# Enable -std=c++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create build_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Options for this directory and below
add_compile_options(-g -Wall -Wextra -Werror)
add_compile_options(-Wfloat-conversion -Wredundant-decls -Wshadow)

# Library
set(SOURCES
    source/Printer.cpp
    source/Foo.cpp # Commenting out Foo will result in no variants
)

add_library(example_library STATIC ${SOURCES})
target_include_directories(example_library PUBLIC "include" "source")

# Example for unit tests
set(UNIT_TEST_SOURCES
    unit_test/PrinterTest.cpp
    unit_test/TrackedValueTest.cpp
)

add_executable(example_unit_test ${UNIT_TEST_SOURCES})
set_target_properties(example_unit_test PROPERTIES OUTPUT_NAME unit_tests)
target_include_directories(example_unit_test PUBLIC "include" "source")
target_link_libraries(example_unit_test example_library gtest_main gtest pthread)
