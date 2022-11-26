#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n, k; 
    cin>> n>> k; 
    vector<int> p(n); 
    for(int i= 0; i< n; i++){
        cin>> p[i]; 
    }
    vector<ll> preSum(n); 
    preSum[0]= p[0]; 
    for(int i= 1; i< n; i++){
        preSum[i]= preSum[i-1]+p[i]; 
    }
    ll maxi= 0; 
    for(int i= 1; i< n; i++){
        maxi= max(maxi, ( (ll)100*p[i]- k*preSum[i-1]+k-1)/k); 
    }
    cout<< maxi<< endl; 

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