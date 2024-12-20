#include<bits/stdc++.h>
using namespace std;

int main(){
      int n;
    cout << "Enter the number : ";
    cin >> n;
    vector <int> s(n);
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s.begin(),s.end());

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    return 0;
}