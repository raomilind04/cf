#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n; 
    vector<ll> arr(n); 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; 
    }
    vector<ll> pref(n); 
    pref[0] = arr[0]; 
    for(int i = 1 ; i < n ; i++){
        pref[i] = arr[i]+pref[i-1]; 
    }
    ll sum = pref[n-1]; 
    ll ans = 1; 
    for(int i = 0 ; i < n-1 ; i++){
        ans = max(ans , __gcd(pref[i] , sum-pref[i])); 
    }
    cout << ans << endl; 
    return ;
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
