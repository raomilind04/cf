#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    vector<int> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    if(n== 1){
        cout<< 1<< " "<< 1<< endl ;
        return ; 
    }
    unordered_map<int, int> m; 
    for(int i= 0; i< n; i++){
        m[a[i]]++; 
    }
    int l= 1; 
    for(int i= 0; i< n; i++){
        if(m[a[i]]> 1){
            l= i+1; 
            break; 
        }
    }
    int r= n; 
    for(int i= n-1; i>= 0; i--){
        if(m[a[i]]> 1){
            r= i+1; 
            break; 
        }
    }
    if(l== 1){
        cout<< l<< " "<< r << endl; 
        return ; 
    }
    cout<< l-1<< " "<< r << endl; 
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