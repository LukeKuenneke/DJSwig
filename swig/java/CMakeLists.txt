###########################################################################
# JAVA
###########################################################################

find_package(JNI)
if (JNI_FOUND)
    include_directories(${JNI_INCLUDE_DIRS})

    set(MOD_NAME djswig_java)

    set_property(SOURCE ${MOD_NAME}.i PROPERTY CPLUSPLUS ON)
    swig_add_library(${MOD_NAME} LANGUAGE java SOURCES ${MOD_NAME}.i)
    swig_link_libraries(${MOD_NAME} djswig)
endif()
