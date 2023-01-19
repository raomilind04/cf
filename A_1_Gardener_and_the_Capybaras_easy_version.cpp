#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    string s ; 
    cin >> s ; 
    int n = s.length() ;
    if(s[0] == s[1]){
        cout << s[0] << " " << s[1] << " " << s.substr(2) << endl ; 
        return ; 
    }
    if(s[n-1] == s[n-2]){
        cout << s.substr(0 , n-2) << " " << s[n-2] << " " << s[n-1] << endl ; 
        return ; 
    }
    if(s[0] > s[1]){
        for(int i = 1 ; i < n-1 ; i++){
            if(s[i] <= s[i+1]){
                cout << s.substr(0 , i) <<  " " << s[i] << " " << s.substr(i+1) << endl; 
                return ; 
            }
        }
    }else{
        for(int i = 1 ; i < n-1 ; i++){
            if(s[i] > s[i+1]){
                cout << s.substr(0 , i) <<  " " << s[i] << " " << s.substr(i+1) << endl; 
                return ; 
            }
        }
    }
    cout << ":(" << endl; 
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
