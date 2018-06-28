#include "djswig.h"
#include <string>
#include <iostream>

using namespace djswig;

std::string djswig::toJson() {
    return "";
}

int djswig::fromJson(const std::string &str) noexcept {
    return -1;
}

void djswig::djSwigHelloWorld()
{
    std::cout << "DJ Swig in the house!" << std::endl;
}