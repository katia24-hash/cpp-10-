#include <iostream>

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Пример с int
    int a = 5, b = 10;
    std::cout << "Before: a = " << a << ", b = " << b << std::endl;
    swapValues(a, b);
    std::cout << "After: a = " << a << ", b = " << b << std::endl;
    
    // Пример с double
    double x = 1.5, y = 3.7;
    std::cout << "Before: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After: x = " << x << ", y = " << y << std::endl;
    
    return 0;
}