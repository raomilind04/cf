#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>> n; 
    int lo= 0; 
    int lc= 0; 
    int rc= 0; 
    int ro= 0; 
    for(int i= 1; i<= n; i++){
        int l, r; 
        cin>> l>> r; 
        if(l== 0){
            lo++; 
        }
        if(l== 1){
            lc++; 
        }
        if(r== 0){
            ro++; 
        }
        if(r== 1){
            rc++; 
        }
    }
    int minLeft= min(lo, lc); 
    int minRight= min(ro, rc); 
    int ans; 
    ans= minLeft+ minRight;  
    cout<< ans<< endl; 
    return 0; 
}