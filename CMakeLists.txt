project(djswig)

###########################################################################
# CMAKE STUFF
###########################################################################

cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_POSITION_INDEPENDENT_CODE TRUE)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)

include(cmake/jsmnpp/libjsmn.cmake)

###########################################################################
# SOURCE
###########################################################################

set(headers
    ./include/djswig.h
)

set(sources
    ./src/djswig.cpp
)

add_library(djswig SHARED ${sources} ${headers})

target_include_directories(djswig PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src/>
)

target_link_libraries(djswig PUBLIC libjsmn)

###########################################################################
# DIRS
###########################################################################

add_subdirectory(swig)