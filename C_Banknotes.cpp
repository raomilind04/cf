#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n , k; 
    cin >> n >> k; 
    k++; 
    vector<int> arr(n); 
    for(int i = 0 ; i < n ; i++){
        int temp ; 
        cin >> temp; 
        int curr = 1; 
        while(temp--){
            curr *= 10; 
        }
        arr[i] = curr;  
    }
    ll ans = 0; 
    for(int i = 0 ; i < n ; i++){
        int count = k; 
        if(i+1 < n){
            count = min(count , (arr[i+1]/arr[i] )-1); 
        }
        ans += arr[i]*1LL*count ;
        k -= count; 
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
