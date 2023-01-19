#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n ; 
    cin >> n; 
    vector<int> v(n); 
    for(int i = 0 ; i < n ; i++){
        cin >> v[i]; 
    }
    int maxi = v[n-1] ; 
    int mini = v[0] ;
    if(maxi == mini){
        cout << "NO" << endl; 
        return ;
    }
    swap(v[0] , v[n-1]) ; 
    swap(v[1] , v[n-1]) ; 
    cout << "YES" << endl; 
    for(int i = 0 ; i < n ; i++){
        cout << v[i] << " "; 
    }
    cout << endl ;
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
