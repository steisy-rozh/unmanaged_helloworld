#include "hello.h"
#include <iostream>

void hello(const char* message) {
    std::cout << message << std::endl;
}

void hello_world() {
    hello("Hello, World!");
}

const char* say_hello_world() {
    const char* str = "Hello, World!";
    return str;
}

