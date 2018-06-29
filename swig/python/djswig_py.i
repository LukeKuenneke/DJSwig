%module djswig_py

%{
    #include "djswig.h"
    #include "jsmn.hpp"
%}

%include "std_string.i"
%include "std_iostream.i"
%include "std_map.i"
%include "std_vector.i"
%include "std_alloc.i"

%include "djswig.h"    
%include "jsmn.hpp"