#include <iostream>

int main() {
    int a = 1025;
    int *p;
    p = &a;
    std::cout << "Size of integer is " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Address = " << p << ", value = " << *p << std::endl;
    std::cout << "Address = " << p + 1 << ", value = " << *(p + 1) << std::endl;

    char *c;
    c = (char*)p;
    std::cout << "Size of char is " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Address = " << c << ", value = " << *c << std::endl;
    /*  1025 = 00000000 00000000 00000100 00000001. Looks at the first byte
        so the variable value is equal to 1 */
    std::cout << "Address = " << c + 1 << ", value = " << *(c + 1) << std::endl;  
    
    //  Void pointer - Generic pointer
    void *p0;
    p0 = p;
    std::cout << "Address = " << p0 << std::endl;
    
    return 0;
}