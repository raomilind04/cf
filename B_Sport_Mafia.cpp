#include <bits/stdc++.h>
using namespace std; 

int main(){
    long long n, k; 
    cin>> n>> k; 
    long long low= -1; 
    long long high= n+1;
    while(high- low> 1){
        long long mid= low+ ((high-low)/2); 
        if(((n-mid)*(n-mid+1)/2) - mid > k){
            //eat more
            low= mid; 
        }else{
            high= mid; 
        }
    } 
    cout<< high; 
    return 0; 
}