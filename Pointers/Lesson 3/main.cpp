#include <iostream>

int main() {
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    std::cout << *p << std::endl;
    std::cout << *q << std::endl;
    std::cout << **q << std::endl;
    std::cout << **r << std::endl;
    std::cout << ***r << std::endl;
    ***r = 10;
    std::cout << "x = " << x << std::endl;
    **q = *p + 2;
    std::cout << "x = " << x << std::endl;
    return 0;
}