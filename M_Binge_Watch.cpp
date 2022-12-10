#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n, k, d; 
    cin>> n>> k>> d; 
    vector<int> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    map<int, int> m; 
    for(int i= 0; i< d; i++){
        m[a[i]]= i; 
    }
    int mini= m.size(); 
    for(int i= d; i< n; i++){
        int prev= a[i-d]; 
        int next= a[i]; 
        int lastseen= m[prev]; 
        int curridx= i-d; 
        if(curridx== lastseen){
            m.erase(prev); 
        }
        m[next]= i; 
        int curr= m.size(); 
        mini= min(mini, curr); 
    }
    cout<< mini<< endl; 
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