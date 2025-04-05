#include <iostream>

int main() {
    int x = 10;
    std::cout << "x의 값: " << x << std::endl;
    std::cout << "x의 주소: " << &x << std::endl;
    
    x = 20;
    std::cout << "x의 값 변경 후: " << x << std::endl;
    std::cout << "x의 주소(변하지 않음): " << &x << std::endl;
    
    return 0;
}