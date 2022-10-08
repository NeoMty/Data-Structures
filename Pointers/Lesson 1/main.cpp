#include <iostream>

int main() {
    int a;
    int *p = &a;
    a = 10;
    //  p = &a;     //  &a = address of a
    std::cout << p << std::endl;
    std::cout << *p << std::endl;   //  *p - value at address pointed by p
    std::cout << &a << std::endl;
    std::cout << "a = " << a << std::endl;

    *p = 12;    //  Dereferencing
    std::cout << "a = " << a << std::endl;

    int b = 20;
    *p = b;
    std::cout << "Address of p is " << p << std::endl;
    std::cout << "Value at address p is " << *p << std::endl;

    a = 10;
    int *d;
    d = &a;
    std::cout << "Address of d is" << d << std::endl;    //  d is 2002
    std::cout << "Value at address d is " << *d << std::endl;
    std::cout << "Size of integer is " << sizeof(int) << " bytes" << std::endl; 
    std::cout << "Address of d + 1 is " << d + 1 << std::endl;    //  d + 1 is 2006
    std::cout << "Value at address d + 1 is " << *(d + 1) << std::endl;
    std::cout << "Address of d + 2 is " << d + 2 << std::endl;    //  d + 2 is 2010
    return 0;
}