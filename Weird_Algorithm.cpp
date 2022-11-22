#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    ll n; 
    cin>> n; 
    cout<< n<< " "; 
    while(1){
        if(n== 1){
             return 0; 
        }
        if(n%2== 0){
            cout<< n/2<< " "; 
            n/= 2; 
        }else{
            cout<< n*3+1<< " "; 
            n= n*3+1; 
        }
    }
    return 0; 
}