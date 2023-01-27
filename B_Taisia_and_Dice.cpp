#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n , s , r; 
    cin >> n >> s >> r;
    int maxi = abs(r-s); 
    cout << maxi << " "; 
    int div = r/(n-1) ; 
    int extra = r%(n-1); 
    for(int i = 1 ; i < n ; i++){
        if(extra == 0){
            cout << div << " "; 
        }else{
            cout << div+1 << " "; 
            extra-- ;
        }
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
