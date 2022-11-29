#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n, m, x;
    cin>> n>> m>> x; 
    vector<int> h(n); 
    for(int i= 0; i< n; i++){
        cin>> h[i]; 
    }
    set<pair<int,int>> s; 
    for(int i= 1; i<= m; i++){
        s.insert({0,i}); 
    }
    cout<< "YES"<< endl; 
    for(int i= 0; i< n; i++){
        pair<int,int> p= *s.begin(); 
        cout<< p.second<< " "; 
        s.erase(p); 
        s.insert({p.first+h[i], p.second}); 
    }
    cout<< endl; 
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