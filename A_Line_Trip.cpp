#include <bits/stdc++.h>
using namespace std; 

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n, x; 
        cin >> n >> x; 
        vector<int> a(n, -1);  
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int diff = INT_MIN; 
        for (int i = 1; i < n; i++) {
            diff = max(diff, abs(a[i]-a[i-1])); 
        }
        cout <<  max(diff, max(a[0], 2 * abs(a[n-1] - x))) << endl; 
    }
}