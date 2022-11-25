#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n, k; 
    cin>> n>> k; 
    vector<int> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    sort(a.begin(), a.end());
    int res= 0; 
    for(int i= 0; i< n-2*k; i++){
        res+= a[i]; 
    }
    for(int i= n-2*k; i< n-k; i++){
        res+= (a[i]/a[i+k]); 
    }
    cout<< res<< endl; 
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