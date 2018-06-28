###########################################################################
# PYTHON
###########################################################################

find_package(PythonLibs)
if (PYTHONLIBS_FOUND)
    include_directories(${PYTHON_INCLUDE_PATH})

    set(MOD_NAME djswig_py)

    set_property(SOURCE ${MOD_NAME}.i PROPERTY CPLUSPLUS ON)
    swig_add_library(${MOD_NAME} LANGUAGE python SOURCES ${MOD_NAME}.i)
    swig_link_libraries(${MOD_NAME} djswig ${PYTHON_LIBRARIES})
endif()
