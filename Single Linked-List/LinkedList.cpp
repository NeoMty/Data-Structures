#include <iostream>
#include "Node.h"
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

/**
 * @brief Prepends a node in the beginning of the Linked List.
 * 
 * Transverse all the Linked List and checks if the key
 * of the new node already exists. If doesn't, prepends
 * the new node in the beginning of the Linked List.
 * 
 * @tparam T The type of data stored in the Linked List.
 * @param node A new node to prepend.
 */
template <typename T>
void LinkedList<T>::prependNode(Node<T> *node) {
    if(nodeExists(node->key) != NULL) {
        std::cout << "Node already exists with key value: " << node->key;
        std::cout << ". Append another node with differen key value" << std::endl;
    } else {
        node->next = this->head;
        this->head = node;
        std::cout << "Node prepended" << std::endl;
    }
}

/**
 * @brief Insert a node after a node with certain key.
 * 
 * Transverse all the LinkedList and checks if a node
 * with the specified key exists. If it does, then 
 * checks if a node with the key of the new node exists. 
 * If it doesn't, inserts the new node after the first 
 * node with the specified key.
 * 
 * @tparam T The type of data stored in the Linked List.
 * @param key The key of the node which after the new node will
 * be inserted. 
 * @param node The new node to be inserted.
 */
template <typename T>
void LinkedList<T>::insertNodeAfter(int key, Node<T> *node) {
    Node<T> *ptr = nodeExists(key);
    if(ptr == NULL) {
        std::cout << "A node with this key doesn't exist" << std::endl;
    } else {
        if(nodeExists(node->key) != NULL) {
            std::cout << "Node already exists with key value: " << node->key;
            std::cout << ". Append another node with differen key value" << std::endl;
        } else {
            node->next = ptr->next;
            ptr->next = node;
            std::cout << "Node inserted" << std::endl;
        }
    }
}

/**
 * @brief Deletes a node specified by a key.
 * 
 * First, checks if the Linked List is not empty. Then,
 * transverse all the LinkedList and checks if a node 
 * with the specified key exists. If it does, then 
 * deletes the node.
 * 
 * @tparam T The type of data stored in the Linked List.
 * @param key The key of the node which will be deleted.
 */
template <typename T>
void LinkedList<T>::deleteNodeByKey(int key) {
    if(this->head == NULL) {
        std::cout << "Single Linked List is empty. Can't delete a node" << std::endl;
    } else if(this->head != NULL) {
        if(this->head->key == key) {
            this->head = this->head->next;
            std::cout << "Node unlinked with key values: " << key << std::endl;
        } else {
            Node<T> *ptr = nodeExists(key);
            if(ptr == NULL) {
                std::cout << "A node with this key doesn't exist" << std::endl;
            } else {
                Node<T> *ptr2 = this->head;
                while(ptr2->next != ptr) {
                    ptr2 = ptr2->next;
                }
                ptr2->next = ptr->next;
                ptr->next = NULL;
            }
        }
    }
}

/**
 * @brief Updates data of a node specified by a key
 * 
 * Checks if the node specified by a key exists. If it does,
 * updates its data. 
 * 
 * @tparam T The type of data stored in the Linked List.
 * @param key The key of the node to update.
 * @param data The new data of the node to update.
 */
template <typename T>
void LinkedList<T>::updateNodeByKey(int key, T data) {
    Node<T> *ptr = nodeExists(key);
    if(ptr != NULL) {
        ptr->data = data;
        std::cout << "Node data updated sucessfully" << std::endl;
    } else {
        std::cout << "A node with this key value doesn't exist" << std::endl;
    }
}

/**
 * @brief Prints the Single Linked List.
 * 
 * @tparam T The type of data stored in the Linked List.
 */
template <typename T>
void LinkedList<T>::printList() {
    if(head == NULL) {
        std::cout << "There aren't any nodes in Single Linked List" << std::endl;
    } else {
        std::cout << "Values of Single Linked List:" << std::endl;
        Node<T> *temp = this->head;
        while(temp != NULL) {
            std::cout << "(" << temp->key << ", " << temp->data << ") --> ";
            temp = temp->next;
        }
        std::cout << "END" << std::endl;
    }
}