#include "hello-time.h"

#include <iostream>

void print_localtime() {
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result));
    std::cout << "今夕是何年——牛年..." << std::endl;
}
