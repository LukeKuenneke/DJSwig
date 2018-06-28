find_package(SWIG)
if (SWIG_FOUND)
    include(${SWIG_USE_FILE})

    include_directories(${CMAKE_CURRENT_SOURCE_DIR})
    include_directories(../include)

    add_subdirectory(python)
    add_subdirectory(java)
endif(SWIG_FOUND)
