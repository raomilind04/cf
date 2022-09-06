#include <bits/stdc++.h>
using namespace std; 

int main(){
    int l, r, a;
    cin>> l>> r>> a; 
    int mini= min(l, r); 
    int maxi= max(l, r); 
    int diff= maxi- mini; 
    if(diff== 0){
        mini+= a/2; 
        maxi+= a/2; 
    }else{
        if(a>= diff){
            mini+= diff; 
            a-= diff; 
            mini+= a/2; 
            maxi+= a/2; 
        }else{
            mini+= a;
        }
    }
    cout<< 2*mini; 
    return 0; 
}