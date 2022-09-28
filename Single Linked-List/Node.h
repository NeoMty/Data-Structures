
#pragma
#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
    public:
        T key;
        T data;
        Node* next;

        Node<T>();
        Node<T>(T, T);
};

#endif