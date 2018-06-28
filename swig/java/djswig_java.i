%module djswig_java

%include "std_string.i"

%{
    #include "jsmn.h"
    #include "djswig.h"

    extern std::string toJson();
    extern int fromJson(const std::string &str) noexcept;
    extern void djSwigHelloWorld();    
%}

extern std::string toJson();
extern int fromJson(const std::string &str) noexcept;
extern void djSwigHelloWorld();