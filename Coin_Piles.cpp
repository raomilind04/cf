#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int a, b; 
    cin>> a>> b;
    ll x= 2*a-b; 
    ll y= 2*b-a; 
    if(x>= 0 && x%3== 0 && y>= 0 && y%3== 0){
        cout<< "YES"<< endl; 
        return ; 
    }
    cout<< "NO"<< endl; 
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
