#include <iostream>
#include <string>

#ifndef HASH_H
#define HASH_H

class Hash {
    private:
        int tableSize;

    public:
        Hash();
        int converter(std::string);
};

#endif