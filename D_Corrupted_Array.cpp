#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    vector<int> b(n+2); 
    for(int i= 0; i< n+2; i++){
        cin>> b[i]; 
    }
    long long sum= 0; 
    for(int i= 0; i< n+2; i++){
        sum+= b[i]; 
    }
    multiset<int> m; 
    for(auto i: b){
        m.insert(i); 
    }
    for(auto it: b){
        m.erase(m.find(it)); 
        sum-= it; 
        if(sum% 2== 0 && m.find(sum/2)!= m.end() && sum <= INT_MAX){
            m.erase(m.find(sum/2)); 
            for(auto i: m){
                cout<< i<< " "; 
            }
            cout<< endl; 
            return ; 
        }
        sum+= it; 
        m.insert(it); 
    }
    cout<< -1<< endl; 
    

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