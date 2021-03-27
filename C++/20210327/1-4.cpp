#include <iostream>

int main() {
    std::cout << "Please input two number: ";
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    //std::cin >> b;
    std::cout << "The sum of " << a 
            << " and " << b 
            << " is " << a + b << std::endl;
    std::cout << "The product of " << a
            << " and " << b
            << " is " << a * b << std::endl;
    system("pause");
    return 0; 
}