#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    unordered_set<string> s; 
    for(int i= 0; i< n; i++){
        string temp; 
        cin>> temp; 
        if(s.find(temp)== s.end()){
            cout<< "NO"<< endl; 
            s.insert(temp); 
        } else{
            cout<< "YES"<< endl; 
        }
    }
    return; 
}

int main(){
    int t; 
    t= 1; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}