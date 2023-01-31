#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int k , n ;
    cin >> k >> n; 
    for(int i = 1 ; i <= k ; i++){
        cout << min(n-k+i , 1+i*(i-1)/2) << " "; 
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
