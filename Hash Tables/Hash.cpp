#include <iostream>
#include <string>

#include "Hash.h"

Hash::Hash() {
    for (int i = 0; i < tableSize; i++) {
        this->HashTable[i] = new item;
        this->HashTable[i]->name = "empty";
        this->HashTable[i]->drink = "empty";
        this->HashTable[i]->next = NULL;
    }
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

void Hash::AddItem(std::string name, std::string drink) {
    int index = converter(name);
    if (this->HashTable[index]->name == "empty") {
        this->HashTable[index]->name = name;
        this->HashTable[index]->drink = drink;
    } else {
        item *ptr = this->HashTable[index];
        item *aux = new item;
        aux->name = name;
        aux->drink = drink;
        aux->next = NULL;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = aux;
    }
}