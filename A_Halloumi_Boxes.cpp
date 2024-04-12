#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n, k; 
        cin >> n >> k; 
        vector<int> boxes(n, -1);  
        int prev = -1;
        bool flag = true;  
        for (int i = 0; i < n; i++) {
            cin >> boxes[i]; 
            if (prev == -1 && i == 0) {
                prev = boxes[i]; 
            } else {
                if (prev > boxes[i]) {
                   flag = false;  
                }
                prev = boxes[i];
            }
            
        }
        if (k == 1 && !flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl; 
        }
    }
}