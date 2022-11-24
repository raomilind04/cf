#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    vector<ll> a(n); 
    vector<ll> b(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    for(int i= 0; i< n; i++){
        cin>> b[i]; 
    }
    sort(a.rbegin(), a.rend()); 
    sort(b.rbegin(), b.rend()); 
    int idx= n- (n/4);
    ll score1= 0; 
    ll score2= 0;  
    for(int i= 0; i< idx; i++){
        score1+= a[i]; 
        score2+= b[i]; 
    }
    if(score1>= score2){
        cout<< 0<< endl; 
        return ; 
    }
    int res= 0;
    int len= n; 
    int p1= idx; 
    int p2= idx; 
    while(score1< score2){
        res++; 
        len++; 
        score1+= 100; 
        if(len%4== 0){
            score1-= a[p1-1]; 
            p1--;
        }
        if(len%4!= 0){
            if(p2< n){
                score2+= b[p2]; 
                p2++;
            }
        }
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