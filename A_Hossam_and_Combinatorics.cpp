#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    ll n; 
    cin>> n; 
    unordered_map<ll, ll> m; 
    vector<ll> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    for(int i= 0; i< n; i++){
        m[a[i]]++; 
    }
    sort(a.rbegin(), a.rend()); 
    int sz= m.size();
    if(sz== 1){
        cout<< n*(n-1)<< endl; 
        return ; 
    }
    ll maxi= m[a[0]]; 
    ll mini= m[a[n-1]]; 
    ll res= (ll) 2*mini*maxi; 
    cout<< res<< endl; 
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