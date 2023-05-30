#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    map<char , int> m; 
    string s; 
    cin >> s; 
    for(int i = 0 ; i < s.length() ; i++){
        m[s[i]]++; 
    }
    int oddCount = 0; 
    int evenCount = 0; 
    for(auto it : m){
        if(it.second%2 != 0){
            oddCount++;
            if(it.second > 1){
                evenCount++; 
            }  
        }else{
            evenCount++; 
        }
    }
    if((oddCount == 1 || oddCount == 0) && evenCount >= 2){
        cout << "YES" << endl; 
        return ; 
    }
    cout << "NO" << endl; 
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