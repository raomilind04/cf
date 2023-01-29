#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n;
    cin >> n; 
    vector<int> arr(n); 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; 
    }
    vector<int> count(n+1); 
    for(int i = 0 ; i < n ; i++){
        count[arr[i]]++; 
    }
    int ans = 0; 
    int temp = 0; 
    for(int i = 0 ; i <= n ; i++){
        if(count[i] == 0 && temp == i){
            ans++; 
        }
        temp += count[i]; 
    }
    cout << ans << endl; 
}

int main(){
    int t; 
    cin>> t; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}
