#ifndef CORE_HELLO_H
#define CORE_HELLO_H
#include <string>

extern "C" {
    void hello_world();

    const char* say_hello_world();

    void hello(const char* message);
};



#endif //CORE_HELLO_H
