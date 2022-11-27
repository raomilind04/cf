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
    // b1=> all even pos and one at all odd pos
    vector<int> b1(a);
    vector<int> b2(a); 
    ll so= 0; 
    ll se= 0; 
    ll s= 0; 
    for(int i= 0; i< n; i++){
        s+= a[i]; 
        if(i%2== 0){
            b1[i]= 1; 
            se+= a[i]; 
        }else{
            b2[i]= 1; 
            so+= a[i]; 
        }
    }
    ll dif1= 0; 
    ll dif2= 0; 
    for(int i= 0; i< n; i++){
        dif1= abs(a[i]- b1[i]); 
        dif2= abs(a[i]-b2[i]);
    }
    if(s/2>= se && se>= dif1){
        for(int i= 0; i< n; i++){
            cout<< b1[i]<< " "; 
        }
        cout<< endl; 
    }else{
        for(int i= 0; i< n; i++){
            cout<< b2[i]<< " "; 
        }
        cout<< endl;
    }
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