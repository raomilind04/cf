#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    string s; 
    cin >> n; 
    cin >> s; 
    set<string> st; 
    for(int i = 1 ; i < n ; i++){
        string temp = s.substr(i-1, 2); 
        st.insert(temp); 
    }
    cout << st.size() << endl; 
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