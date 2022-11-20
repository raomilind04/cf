#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    char c; 
    cin>> n>> c; 
    string s; 
    cin>> s; 
    int count= 0; 
    bool flag= true; 
    for(auto it: s){
        if(it!= c){
            flag= false; 
        }
    }
    if(!flag){
        cout<< 0<< endl; 
        return ; 
    }
    vector<int> nums; 
    for(int i= 1; i< n+1; i++){
        flag= true; 
        int j= i; 
        for(; j< n+1; j+= i){
            flag&= (s[j-1]== c); 
        }
        if(flag){
            nums.push_back(j); 
            count= 1; 
            break; 
        }
    }
    if(!flag){
        nums.push_back(n); 
        nums.push_back(n-1); 
        count= 2; 
    }
    cout<< count<< endl; 
    for(auto it: nums){
        cout<< it<< " "; 
    }
    cout<< endl; 
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