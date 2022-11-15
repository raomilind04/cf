#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    vector<int> a(n); 
    vector<char> c(n); 
    bool flag= true; 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    for(int i= 0; i< n; i++){
        cin>> c[i]; 
    }
    vector<int> l, r; 
    for(int i= 0; i< n; i++){
        if(c[i]== 'B'){
            l.push_back(a[i]); 
        }else{
            r.push_back(a[i]); 
        }
    }
    sort(r.rbegin(), r.rend()); 
    sort(l.begin(), l.end()); 
    int nl= l.size(); 
    for(int i= 0; i< nl; i++){
        if(l[i]< i+1){
            cout<< "NO"<< endl; 
            return ; 
        }
    }
    int nr= r.size(); 
    for(int i= 0; i< nr; i++){
        if(r[i]> n-i){
            cout<< "NO"<< endl; 
            return ;
        }
    }
    cout<< "YES"<< endl ;
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