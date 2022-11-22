#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

int main(){
    vector<bool> dp(1111, false);
    for(long p = 1; p < 1111; p++){
        if(p % 11 == 0 || p % 111 == 0){dp[p] = true;}
        else if(p > 11 && dp[p - 11]){dp[p] = true;}
        else if(p > 111 && dp[p - 111]){dp[p] = true;}
    }


    long t; 
    cin>> t; 
    while(t--){
        long x; 
        cin>> x; 
        if(x >= 1111){
            cout<< "YES"<< endl; 
        }
        else{
            cout<< (dp[x]== true ? "YES":"NO")<< endl; 
        }
    }
}