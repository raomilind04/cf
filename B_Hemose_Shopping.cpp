#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n, x; 
    cin>> n>> x; 
    vector<int> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    if(n>= 2*x){
        cout<< "YES"<< endl ;
        return ; 
    }
    vector<int> v(a); 
    sort(v.begin(), v.end()); 
    for(int i= n-x; i< x; i++){
        if(v[i]!= a[i]){
            cout<< "NO"<< endl; 
            return ; 
        }
    }
    cout<< "YES"<< endl; 
    return; 
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