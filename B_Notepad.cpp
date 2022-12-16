#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n; 
    string s; 
    cin >> s; 
    unordered_set<string> st; 
    for(int i = 0 ; i <= n-2 ; i++){
        string temp = s.substr(i , 2);
        st.insert(temp); 
        if(st.find(temp) != st.end()){
            cout << "YES" << endl; 
            return ; 
        }
    }
    cout << "NO" << endl; 
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
