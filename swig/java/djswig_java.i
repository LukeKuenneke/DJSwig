%module djswig_java

%include "std_string.i"

%{
    #include "jsmn.hpp"
    #include "djswig.h"

    extern std::string serializeJson(jsmn::Object jsmnObject);
    extern jsmn::Object fromJson(const std::string &jsonFile);
    extern void djSwigHelloWorld();    
%}

extern std::string serializeJson(jsmn::Object jsmnObject);
extern jsmn::Object fromJson(const std::string &jsonFile);
extern void djSwigHelloWorld();