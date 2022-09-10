#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> count; 
        for(int i= 0; i< n; i++){
            int in; 
            cin>> in; 
            count.push_back(in); 
        }
        int maxi= INT_MIN; 
        int idx; 
        for(int i= 0; i< n; i++){
             if(maxi<= count[i]){
                idx= i; 
                maxi= count[i]; 
             }
        }
        cout<< idx+1<< endl; 
    }
    return 0; 
}