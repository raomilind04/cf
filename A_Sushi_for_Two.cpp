#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    vector<int> v(n); 
    for(int i= 0; i< n; i++){
        cin>> v[i]; 
    }
    int count= 1; 
    vector<int> temp; 
    for(int i= 1; i< n; i++){
        if(v[i]!= v[i-1]){
            temp.push_back(count); 
            count= 1; 
        }else{
            count++; 
        }
    }
    temp.push_back(count); 
    int ans= 0; 
    if(temp.size()> 1){
        int s= temp.size(); 
        for(int i= 0; i< s-1; i++){
            ans= max(ans, min(temp[i], temp[i+1])); 
        }
    }
    cout<< ans*2; 
    return 0; 
}