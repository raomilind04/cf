#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n, k; 
    cin>> n>> k; 
    vector<int> v(n); 
    for(int i= 0; i< n; i++){
        cin>> v[i]; 
    }
    unordered_map<int, int> m ;
    for(int i= 0; i< n; i++){
        m[v[i]]++; 
    }
    vector<int> freq; 
    for(auto it: m){
        freq.push_back(it.second); 
    }
    sort(freq.rbegin(), freq.rend());
    int ans= 1;
    for(int i= 0; i< freq.size(); i++){
        k-= freq[i]; 
        if(k<= 0){
            cout<< ans; 
            return 0; 
        }
        ans++; 
    }
    cout<< ans; 
    return 0; 
    
}