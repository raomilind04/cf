#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n, m, sx, sy, d; 
        cin>> n>> m>> sx>> sy>> d; 
        if(min(sx-1, m-sy)<= d && min(n-sx, sy-1)<= d){
            cout<< -1<< endl; 
            continue;
        }
        int dis= abs(abs(n-sx)+ abs(m- sy)); 
        if(d>= dis){
            cout<< -1<< endl; 
            continue;
        }
        int ans= n+m-2; 
        cout<< ans<< endl; 
    }
    return 0; 
}