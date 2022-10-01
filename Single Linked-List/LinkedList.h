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
        Node<T>* nodeExists(int);
        void appendNode(Node<T> *);
        void prependNode(Node<T> *);
        void insertNodeAfter(int, Node<T> *);
        void deleteNodeByKey(int);
};

#endif