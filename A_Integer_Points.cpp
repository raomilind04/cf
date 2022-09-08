#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        long long n; 
        cin>> n; 
        long long even= 0, odd= 0; 
        long long p; 
        for(long long i= 0; i< n; i++){
            cin>> p; 
            if(p&1){
                odd++;
            } else{
                even++; 
            }
        }
        long long m; 
        cin>> m; 
        long long ans= 0; 
        long long q;  
        for(long long i= 0; i< m; i++){
            cin>> q; 
            if(q&1){
                ans+= odd; 
            }else{
                ans+= even; 
            }
        }
        cout<< ans<< endl; 
    }

    return 0; 
}