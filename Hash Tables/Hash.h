#include <iostream>
#include <string>

#ifndef HASH_H
#define HASH_H

class Hash {
    private:
        static const int tableSize = 10;
        struct item {
            std::string name;
            std::string drink;
            item *next;
        };

        item *HashTable[tableSize];

    public:
        Hash();
        int converter(std::string);
        void AddItem(std::string, std::string);
};

#endif