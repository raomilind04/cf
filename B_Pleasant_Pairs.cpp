#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<pair<int,int>> v(n); 
        for(int i= 0; i< n; i++){
            int temp; 
            cin>> temp; 
            v[i]= {temp, i+1}; 
        }
        sort(v.begin(), v.end()); 
        long long count= 0; 
        for(int i= 0; i< n; i++){
            for(int j= i+1; j< n; j++){
                long long prod= (long long)v[i].first*(long long)v[j].first; 
                if(prod> 2*n){
                    break; 
                }
                if(prod== v[i].second+v[j].second){
                    count++; 
                }
            }
        }
        cout<< count<< endl; 

    }
    return 0; 
}