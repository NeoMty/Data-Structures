#include <iostream>
#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template <typename T>
LinkedList<T>::LinkedList(Node<T> *n) {
    head = n;
}