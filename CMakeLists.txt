cmake_minimum_required(VERSION 3.15)

project(net C)

set(C_STANDARD 11)

include(cmake/CompilerWarnings.cmake)
add_library(project_warnings INTERFACE)
set_project_warnings(project_warnings)

include(cmake/EnableTests.cmake)
include(cmake/BuildType.cmake)

include(cmake/Sanitizers.cmake)
add_library(sanitizers INTERFACE)
set_sanitizers(sanitizers)

add_library(net)
add_library(net::network ALIAS net)

target_sources(net PRIVATE
    src/net.c
)

target_include_directories(net PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(net
    PRIVATE project_warnings sanitizers
)