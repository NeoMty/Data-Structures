#include <iostream>
#include "Node.h"

#pragma
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
class LinkedList {
    public:
        Node<T>* head;
        LinkedList();
        LinkedList(Node<T> *);
};

#endif