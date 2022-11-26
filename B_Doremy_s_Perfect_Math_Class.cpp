#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    vector<ll> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    bool flag= false; 
    ll gc= 0; 
    sort(a.begin(), a.end()); 
    for(int i= 0 ; i< n; i++){
        gc= __gcd(gc, a[i]); 
    }
    cout<< a[n-1]/gc<< endl; 
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