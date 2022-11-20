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
    sort(a.rbegin(), a.rend()); 
    ll res= 0; 
    bool alice= true; 
    for(auto it: a){
        if(alice){
            if(it%2== 0){
                res+= it; 
            }
        }else{
            if(it%2!= 0){
                res-= it; 
            }
        }
        alice= !alice; 
    }
    if(res== 0){
        cout<< "Tie"<< endl; 
        return ; 
    }
    if(res> 0){
        cout<< "Alice"<< endl; 
        return; 
    }
    if(res< 0){
        cout<< "Bob"<< endl; 
        return ; 
    }

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