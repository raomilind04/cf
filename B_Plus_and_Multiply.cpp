#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int a, b, n; 
    cin>> n>> a>> b; 
    if(n==1){
        cout<< "YES"<< endl; 
        return ; 
    }
    ll x= 1;
    if(a== 1){
        if((n-x)%b== 0){
            cout<< "Yes"<< endl; 
        }else{
            cout<< "No"<< endl; 
        }
        return ; 
    }
    while(x<= n){
        if((n-x)%b== 0){
            cout<< "Yes"<< endl ;
            return ; 
        }
        x*= a;
    } 
    cout<< "No"<< endl; 
    return; 
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