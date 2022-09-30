#include <iostream>
#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() {
    this->head = NULL;
}

template <typename T>
LinkedList<T>::LinkedList(Node<T> *n) {
    this->head = n;
}

/**
 * @brief Checks if the key exist in the Linked List.
 * 
 * Transverse all the nodes in the Linked List until
 * the key requested is found. 
 * 
 * @tparam T The type of data stored in the Linked List.
 * @param key The key requested.
 * @return Node<T>* – The pointer to the key requested.
 */
template <typename T>
Node<T>* LinkedList<T>::nodeExists(int key) {
    Node<T>* temp = NULL;
    Node<T>* ptr = this->head;
    while(ptr != NULL) {
        if(ptr->key == key) {
            temp = ptr;
        }
        ptr = ptr->next;
    }

    return temp;
}

/**
 * @brief Appends a node in the end of the Linked List.
 * 
 * Transverse all the Linked List and checks if the key
 * of the new node already exists. If doesn't, appends
 * the new node in the end of the Linked List.
 * 
 * @tparam T The type of data stored in the Linked List.
 * @param node A new node to append
 */
template <typename T>
void LinkedList<T>::appendNode(Node<T> *node) {
    if(nodeExists(node->key) != NULL) {
        std::cout << "Node already exists with key value: " << node->key;
        std::cout << ". Append another node with differen key value" << std::endl;
    } else {
        if(this->head == NULL) {
            this->head = node;
            std::cout << "Node appended" << std::endl;
        } else {
            Node<T>* ptr = this->head;
            while(ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = node;
            std::cout << "Node appended" << std::endl;
        }
    }
}