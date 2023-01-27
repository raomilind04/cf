#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    string s; 
    cin >> s; 
    string pi = "3141592653589793238462643383279"; 
    int count = 0 ; 
    for(int i = 0 ; i < 30 ; i++){
        if(s[i] == pi[i]){
            count++; 
        }else{
            break; 
        }
    }
    cout << count << endl; 
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
