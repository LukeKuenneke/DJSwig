#include "djswig.h"
#include <string.h>
#include <iostream>
#include <jsmn.hpp>

using namespace djswig;

std::string djswig::serializeJson(jsmn::Object jsmnObject) {
    return jsmn::serialize(jsmnObject);
}

jsmn::Object djswig::fromJson(const std::string &jsonFile) {
    return jsmn::parse(jsonFile);
}

void djswig::djSwigHelloWorld()
{
    std::cout << "DJ Swig in the house!" << std::endl;
}