#include<bits/stdc++.h>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    int original = n ;
    int num_digits = log10(n) + 1;
    int sum = 0;
     while (n>0)
     {
        int digit = n % 10;
        sum += pow(digit, num_digits);
        n /= 10;
     }

     return sum == original;
     
}

int main(){
    // Calculating Armstrong Numbers
//     string s;
//     cout << "Enter the number string : ";
//     cin >> s;

//     int a = s[0] - '0';
//     int b = s[1] - '0';
//     int c = s[2] - '0';

//     int num = a*100 +b*10 + c;

// if(a*a*a + b*b*b + c*c*c == num){
//     cout << "Armstrong Number"<<endl ;
// }
// else{
//     cout << "Not Armstrong Number"<<endl;
// }


//  solved at first try without looking for any help but found out only work for 3 digit numbers.
        int n;
        cout << "Enter the number : ";
        cin >> n;
        if(isArmstrong(n)){
            cout << n << " is an Armstrong number." << endl;
        }else{
            cout << n << " is not an Armstrong number." << endl;
        }   
        return 0;
}