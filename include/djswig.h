#ifndef DJSWIG_H
#define DJSWIG_H

#include <jsmn.hpp>
#include <string>

namespace djswig {
    std::string serializeJson(jsmn::Object jsmnObject);
    jsmn::Object fromJson(const std::string &jsonFile);
    void djSwigHelloWorld();
}

#endif