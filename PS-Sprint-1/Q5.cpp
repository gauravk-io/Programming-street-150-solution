#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void fSeries(int n){
    for(int i =0; i<=n; i++){
        int fib = fibonacci(i);
        if(fib > n){
            break;
        }
        cout << fib << " ";
    }  
    cout << endl;
}
int main(){
    // Generating the fibonacci sequences
    int n;
    cout << "Enter the number limit : ";
    cin >> n;
    fSeries(n);
    return 0;
}