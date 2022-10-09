#include <iostream>
#include <string>

#include "Hash.cpp"

int main() {
    Hash hash;
    int index = hash.converter("Eduardo");
    std::cout << "index = " << index << std::endl;
    return 0;
}