#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    if(n%2== 0){
        cout<< pow(n/2+1, 2)<< endl; 
        return ; 
    }else{
        cout<< 2*(n/2+1)*(n/2+2)<< endl; 
        return ;
    }
}

int main(){
    int t; 
    t= 1; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}