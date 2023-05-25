#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n , k; 
    cin >> n >> k; 
    vector<int> a(n); 
    vector<int> b(n); 
    for(int i = 0 ; i < n ; i++){
        cin >> a[i]; 
    }
    for(int i = 0 ; i < n ; i++){
        cin >> b[i]; 
    }
    vector<pair<int , int>> anew(n); 
    for(int i = 0 ; i < n ; i++){
        anew[i] = make_pair(a[i] , i); 
    }
    sort(anew.begin() , anew.end()); 
    sort(b.begin() , b.end()); 
    vector<int> ans(n); 
    for(int i = 0 ; i  < n ; i++){
        ans[anew[i].second] = b[i]; 
    }

    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " "; 
    }
    cout << endl; 
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