#include <iostream>
using namespace std;

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // Add the last digit of n
        n /= 10;         // Remove the last digit of n
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (num >= 10) {
        num = sumDigits(num);  // Keep summing the digits until the number is a single digit
    }

    cout << "The sum of digits until single digit: " << num << endl;
    return 0;
}
