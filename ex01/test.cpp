#include <iostream>
#include <stdint.h>
#include <cstdint>

int main() {
    int a = 10;
    int *p1 = &a;
    char *c = reinterpret_cast<char*>(p1);
    std::cout << "a: " << a << std::endl;
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "*c: " <<  +*c << std::endl;
    return 0;
}   