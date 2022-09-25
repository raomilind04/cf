#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n, c; 
        cin>> n>> c; 
        vector<int> v(n); 
        unordered_map<int, int> m; 
        for(int i= 0; i< n; i++){
           int temp; 
           cin>> temp; 
           m[temp]++; 
        }
        int cost= 0; 
        for(auto it: m){
            if(c<= it.second){
                cost+= c; 
            }else{
                cost+= it.second; 
            }
        }
        cout<< cost<< endl; 

    }
    return 0; 
}