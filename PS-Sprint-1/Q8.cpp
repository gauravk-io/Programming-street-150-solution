#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for( int i = 1; i<=n; i++){
        fact *= i;
    }
    cout << fact << endl;

    return 0;
}

int main(){
    int n;
    cout <<" Enter the Number : ";
    cin >> n;
    factorial(n);
    return 0;
}