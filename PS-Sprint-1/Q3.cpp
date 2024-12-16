#include <iostream>
using namespace std;

int main() {
    // Validating Leap Year
    int i;
    cout << "Enter the year : "; 
    cin >> i;

    if((i%4==0 && i%100!=0 ) || i%400==0){
        cout << "Leap Year" << endl;
    }
    else{
        cout << "Not Leap Year" << endl;
    }


    return 0;
}