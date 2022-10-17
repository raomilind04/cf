#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        int low= 1; 
        int high= n; 
        vector<int> ans; 
        while(high-low>= 1){
            ans.push_back(low); 
            ans.push_back(high); 
            low++; 
            high--; 
        }
        if(high== low){
            ans.push_back(low); 
        }
        
        for(int i= 0; i< ans.size(); i++){
            cout<< ans[i]<< " "; 
        }
        cout<< endl; 
    }
    return 0; 
}