#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n ;
    cin >> n; 
    string s; 
    cin >> s; 
    if(n == 1){
        cout << "NO" << endl; 
        return ; 
    }  
    map<string , int> m; 
    for(int i = 0 ; i < n-1 ; i++){
        string temp; 
        temp += s[i]; 
        temp += s[i+1]; 
        if(m.find(temp) == m.end()){
            m[temp] = i; 
        }else{
            if(m[temp]+1 < i){
                cout << "YES" << endl; 
                return ; 
            }
        }
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
