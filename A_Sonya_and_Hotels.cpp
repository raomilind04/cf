#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n,d; 
    cin>> n>> d; 
    vector<int> v(n); 
    for(int i= 0; i< n; i++){
        cin>> v[i]; 
    }
    int ans= 2; 
    for(int i= 1; i< n; i++){
        int diff= v[i]- v[i-1]; 
        if(diff> 2*d){
            ans+= 2; 
        }else if(diff== 2*d){
            ans+= 1; 
        }
    }
    cout<< ans; 
    return 0; 
}