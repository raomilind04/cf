#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n, -1); 
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        } 
        int first = a[0]; 
        if (first == 1) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }
}