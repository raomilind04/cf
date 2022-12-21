#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n; 
    vector<vector<int>> v(n , vector<int> (5)); 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> v[i][j]; 
        }
    }
    int win = 0; 
    for(int i = 1 ; i < n ; i++){
        int count = 0; 
        for(int j = 0 ; j < 5 ; j++){
            if(v[win][j] > v[i][j]){
                count++; 
            }
        }
        if(count >= 3){
            win = i; 
        }
    }
    for(int i = 0 ; i < n ; i++){
        int count = 0; 
        if(i == win){
            continue;
        }
        for(int j = 0 ; j < 5 ; j++){
            if(v[win][j] > v[i][j]){
                count++; 
            }
        }
        if(count >= 3){
            cout << -1 << endl ;
            return ;
        }
    }
    cout << win+1 << endl; 
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
