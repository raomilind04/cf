#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, m; 
    cin>> n>> m; 
    string s, t; 
    cin>> s>> t; 
    vector<int> ans;
    for(int i= 0; i< n; i++){
        ans.push_back(i); 
    }
    vector<int> temp; 
    for(int i= 0; i< m-n+1; i++){
        temp.clear(); 
        for(int j= 0; j< n; j++){
            if(s[j]!= t[i+j]){
                temp.push_back(j); 
            }
        }
        if(temp.size()< ans.size()){
            ans= temp; 
        }
    }
    cout<< ans.size()<< endl; 
    for(int i= 0; i< ans.size(); i++){
        cout<< ans[i]+1<< " "; 
    }
    return 0; 
}