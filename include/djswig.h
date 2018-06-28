#ifndef DJSWIG_H
#define DJSWIG_H

#include "jsmn.h"
#include <string>

namespace djswig {
    std::string toJson();
    int fromJson(const std::string &str) noexcept;
    void djSwigHelloWorld();
}

#endif