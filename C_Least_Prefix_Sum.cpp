#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    ll n , m ; 
    cin >> n >> m; 
    m--;
    vector<ll> arr(n) ; 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }
    vector<ll> pref(n,0);
    pref[0] = arr[0] ;  
    for(int i = 1 ; i < n ; i++){
        pref[i] = pref[i-1] + arr[i] ; 
    }

    ll temp = pref[m] ; 
    ll count = 0; 

    priority_queue<ll> pq ; 
    for(int i = m ; i >= 0 ; i--){
        while(pref[i] < temp){
            ll top = pq.top(); 
            pq.pop() ; 
            temp -= 2*top ; 
            count++ ; 
        }
        pq.push(arr[i]) ;
    }

    temp = pref[m] ; 
    priority_queue<ll , vector<ll> , greater<ll>> minpq ; 
    for(int i = m+1 ; i < n ; i++){
        minpq.push(arr[i]) ; 
        while(pref[i] < temp){
            ll top = minpq.top(); 
            minpq.pop() ; 
            temp += 2*top ; 
            count++ ;
        }
    }

    cout << count << endl; 
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
