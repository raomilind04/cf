#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        string s; 
        cin >> s; 
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                count++; 
            }
        }
        int three = false; 
        for (int i = 0; i <= n-3; i++) {
            if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                three = true; 
                break; 
            }
        }
        if (three) {
            cout << 2 << endl; 
            continue; 
        }
        cout << count << endl; 
    }    
}