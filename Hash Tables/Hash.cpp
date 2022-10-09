#include <iostream>
#include <string>

#include "Hash.h"

Hash::Hash() {
    this->tableSize = 100;
}

int Hash::converter(std::string key) {
    int hash = 0;

    //  Sum the ASCII value of the characters
    for(int i = 0; i < key.length(); i++) {
        hash = hash + (int)key[i];
        std::cout << "hash = " << hash << std::endl;           
    }

    //  402 / 100 = 4 R 2 -> index = 2
    int index = hash % tableSize;
    return index;
}