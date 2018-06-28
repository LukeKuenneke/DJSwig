%module djswig_go

%{
    #include <iostream> 
    #include "djswig.h"
%}

%include "std_string.i"
%include "std_map.i"
%include "std_vector.i"

%include "djswig.h"