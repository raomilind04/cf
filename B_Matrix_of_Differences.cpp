#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n ; 
    cin >> n; 
    // num between 1 and n2
    vector<vector<int>> ans(n , vector<int> (n)); 
    int low = 1 ; 
    int high = n*n ; 
    bool flag = true; 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(flag == true){
                ans[i][j] = high;  
                high--; 
            }else{
                ans[i][j] = low; 
                low++; 
            }
            flag= !flag; 
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(i%2 != 0){
            reverse(ans[i].begin() , ans[i].end()); 
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << ans[i][j] << " "; 
        }
        cout << endl; 
    }
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
