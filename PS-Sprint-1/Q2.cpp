#include <bits/stdc++.h>

int main() {
    // Check for Prime number
      int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(num == 0 || num == 1) {
        std::cout << "Neither Prime nor Composite";
    } else {
        bool isPrime = true;
        for(int i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            std::cout << "PRIME" << std::endl;
        } else {
            std::cout << "COMPOSITE";
        }
    }
  


    return 0;
}