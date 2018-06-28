###########################################################################
# GO
###########################################################################

find_package(JNI)
if (JNI_FOUND)
    include_directories(${JNI_INCLUDE_DIRS})

    set(MOD_NAME djswig_go)

    set_property(SOURCE ${MOD_NAME}.i PROPERTY CPLUSPLUS ON)
    set(CMAKE_SWIG_FLAGS -intgosize 64)
    swig_add_library(${MOD_NAME} LANGUAGE go cgo c++ SOURCES ${MOD_NAME}.i)
    swig_link_libraries(${MOD_NAME} djswig)
endif()
