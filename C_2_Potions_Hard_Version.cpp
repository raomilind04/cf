#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n; 
    vector<int> a(n); 
    priority_queue<int , vector<int> , greater<int>> pq; 
    ll sum= 0; 
    for(int i = 0 ; i < n ; i++){
        cin >> a[i]; 
    }
    for(int i = 0 ; i < n ; i++){
        sum += a[i]; 
        pq.push(a[i]); 
        if(sum < 0){
            sum -= pq.top(); 
            pq.pop(); 
        }
    }
    int ans = pq.size(); 
    cout << ans << endl; 
}

int main(){
    int t; 
    t = 1; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}