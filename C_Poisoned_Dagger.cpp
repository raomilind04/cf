#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        ll n, h; 
        cin>> n>> h; 
        vector<ll> v(n); 
        for(int i= 0; i< n; i++){
            cin>> v[i]; 
        }
        ll low= 1; 
        ll high= 1e18; 
        while(low<= high){
            ll mid= low+(high-low)/2; 
            ll sum= mid; 
            for(int i= 0; i< n-1; i++){
                sum+= min(mid, v[i+1]-v[i]); 
            }
            if(sum< h){
                low= mid+1; 
            }else{
                high= mid-1; 
            }
        }
        cout<< high+1<< endl; 
    }
    return 0; 
}