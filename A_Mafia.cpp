#include <bits/stdc++.h>
using namespace std; 

int main(){
    long long n; 
    cin>> n; 
    long long sum= 0; 
    long long maxi= 0; 
    for(long long i= 0; i< n; i++){
        long long num; 
        cin>> num;
        maxi= max(num, maxi); 
        sum+= num;
    }
    long long ans= sum/(n-1); 
    if(sum%(n-1)!= 0){
        ans+= 1; 
    }
    if(ans< maxi){
        cout<< maxi; 
        return 0; 
    }
    cout<< ans; 
    return 0; 
}