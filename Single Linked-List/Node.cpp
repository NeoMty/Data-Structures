#include <iostream>

#include "Node.h"

template <typename T>
Node<T>::Node() {
    key = 0;
    data = 0;
    next = NULL;
}

template <typename T>
Node<T>::Node(T key, T data) {
    this->key = key;
    this->data = data;
}