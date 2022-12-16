#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

vector<int> dp;


bool isRound(int n){
    int count = 0; 
    while(n > 0){
        int temp = n%10; 
        n /= 10; 
        if(temp != 0){
            count++; 
        }
        if(count > 1){
            return false; 
        }
    }
    return true; 
}

void solve(){
    ll n ; 
    cin >> n;
    int res = 0; 
    for(int i = 0 ; i < dp.size() ; i++){
        if(dp[i] <= n){
            res++;
        }else{
            break; 
        }
    }
    cout << res << endl;
}

int main(){
     for(int i = 1 ; i <= 999999 ; i++){
        if(isRound(i)){
            dp.push_back(i); 
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
