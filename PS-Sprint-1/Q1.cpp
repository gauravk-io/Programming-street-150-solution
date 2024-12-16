#include <iostream>

int main() {
    // Determine EVEN or ODD number

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(num % 2 == 0) {
        std::cout << "EVEN" << std::endl;
    } else {
        std::cout << "ODD" << std::endl;
    }
    
    return 0;
}