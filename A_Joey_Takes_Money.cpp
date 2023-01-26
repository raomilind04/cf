#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n; 
    vector<int> arr(n); 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; 
    }
    ll temp = 1; 
    for(int i = 0 ; i < n ; i++){
        temp *= arr[i]; 
    }
    temp += n-1 ;
    cout << temp*2022 << endl ; 
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
