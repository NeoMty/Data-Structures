#include <iostream>
#include "Node.cpp"
#include "LinkedList.cpp"

int main() {
    LinkedList<int> list;
    int option, key, data;

    do {
        std::cout << "What operation do you want to perform? Select an option. Enter 0 to exit"  << std::endl;
        std::cout << "1. appendNode()" << std::endl;
        std::cout << "2. prependNode()" << std::endl;
        std::cout << "3. insertNodeAfter()" << std::endl;
        std::cout << "4. deleteNodeByKey()" << std::endl;
        std::cout << "5. updateNodeByKey()" << std::endl;
        std::cout << "6. print()" << std::endl;
        std::cout << "7. Clear screen" << std::endl;
        std::cout << "0. Exit" << std::endl;

        std::cin >> option;
        Node<int> *n1 = new Node<int>();
        
        switch(option) {
            case 0:
                break;
            case 1:
                std::cout << "Enter key and data to be appended:" << std::endl;
                std::cin >> key;
                std::cin >> data;
                n1->key = key;
                n1->data = data;
                list.appendNode(n1);
                break;
            case 2:
                std::cout << "Enter key and data to be prepend:" << std::endl;
                std::cin >> key;
                std::cin >> data;
                n1->key = key;
                n1->data = data;
                list.prependNode(n1);
                break;
            case 3:
                int secondKey;
                std::cout << "Enter key of node after which you want to insert:" << std::endl;
                std::cin >> secondKey;

                std::cout << "Enter key and data to be inserted:" << std::endl;
                std::cin >> key;
                std::cin >> data;
                n1->key = key;
                n1->data = data;
                list.insertNodeAfter(secondKey, n1);
                break;
            case 4:
                std::cout << "Enter key of the node you wish to delete:" << std::endl;
                std::cin >> key;
                list.deleteNodeByKey(key);
                break;
            case 5:
                std::cout << "Enter key of the node to update and the new data:" << std::endl;
                std::cin >> key;
                std::cin >> data;
                list.updateNodeByKey(key, data);
                break;
            case 6:
                list.printList();
                break;
            case 7:
                system("cls");
                break;
            default:
                std::cout << "Enter a valid option" << std::endl;
                break;
        } 
    } while(option != 0);

    return 0;
}