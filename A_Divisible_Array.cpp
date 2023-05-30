#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n;
    vector<int> ans(n); 
    for(int i = 0 ; i < n ; i++){
        ans[i] = 2*(i+1); 
    }
    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " "; 
    }
    cout << endl; 
    return ; 
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