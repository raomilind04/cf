#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

const int n= 2e5+1; 
int dp[20][n]; 

void solve(){
    int l, r; 
    cin>> l>> r;
    int res= r-l+1; 
    for(int i= 0; i< 20; i++){
        res= min(res, dp[i][r]- dp[i][l-1]); 
    }
    cout<< res<< endl; 
}

int main(){
    dp[0][0]= 0; 
    for(int i= 0; i< 20; i++){
        for(int j= 1; j<= n; j++){
            dp[i][j]= dp[i][j-1];
            if(!(j&1<<i)){
                dp[i][j]++; 
            }
        }
    }
    
    int t; 
    cin>> t; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}


