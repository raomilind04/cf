#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n,a,b,c; 
    cin>> n>> a>> b>> c; 
    n--; 
    if(n== 0){
        cout<< 0; 
        return 0; 
    }
    int d1= a; 
    int d2= b; 
    int sum= a+b+c; 
    int dis= 0; 
    while(n--){
        int mind= min(d1, d2);
        dis+= mind; 
        d2= sum-d1-d2; 
        d1= mind;
    }
    cout<< dis; 
    return 0; 
}