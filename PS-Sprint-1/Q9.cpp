#include<bits/stdc++.h>
using namespace std;

void sumOfDigits(int n){
    int sum=0,digti;
    while(n>0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    } 
    cout << sum << endl;
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    sumOfDigits(n);
    return 0;
}