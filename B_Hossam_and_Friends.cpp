#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    ll n, m; 
    cin>> n>> m; 
    ll count= 0; 
    ll rem= 0; 
    bool f= true; 
    ll c= 0; 
    for(int i= 0; i< m; i++){
        ll n1; 
        ll n2; 
        cin>> n1; 
        cin>> n2; 
        int diff= abs(n1-n2);
        rem+= (n-diff-c); 
        c++; 
    }
    ll total= n*(n+1)/2; 
    ll ans= total-rem; 
    cout<< ans<< endl; 
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