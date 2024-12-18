#include <iostream>
using namespace std;

// Function to create a pyramid pattern
void pyramid(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

// Function to create a diamond pattern
void diamond(int height) {
    // Upper part
    pyramid(height);
    // Lower part
    for (int i = height - 1; i > 0; i--) {
        for (int j = 1; j <= height - i; j++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }
}

// Main function
int main() {
    string patternType;
    int height;

    cout << "Enter pattern type (pyramid/diamond): ";
    cin >> patternType;
    cout << "Enter height: ";
    cin >> height;

    if (patternType == "pyramid") {
        pyramid(height);
    } else if (patternType == "diamond") {
        diamond(height);
    } else {
        cout << "Invalid pattern type!" << endl;
    }

    return 0;
}
