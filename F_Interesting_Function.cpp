#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){ 
    ll l , r ;
    cin >> l >> r ;
    ll res = 0; 
    while(l != 0 || r != 0){
        res += (r-l); 
        l /= 10; 
        r /= 10; 
    }
    cout << res << endl;
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
