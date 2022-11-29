#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int a, b, k; 
    cin>> a>> b>> k; 
    vector<int> v1(k); 
    vector<int> v2(k); 
    for(int i= 0; i< k; i++){
        cin>> v1[i]; 
    }
    for(int i= 0; i< k; i++){
        cin>> v2[i]; 
    }
    vector<int> countA(a, 0);
    vector<int> countB(b, 0); 
    for(int i= 0; i< k; i++){
        int tempX= v1[i]; 
        int tempY= v2[i]; 
        countA[tempX-1]++; 
        countB[tempY-1]++; 
    }
    ll res= 0; 
    for(int i= 0; i< k; i++){
        ll blocked= countA[v1[i]-1]+countB[v2[i]-1]-1; 
        res+= (k-blocked); 
    }
    cout<< res/2<< endl; 
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