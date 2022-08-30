#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        unordered_map<string, int> m; 
        vector<vector<string>> temp; 
        for(int i= 0; i< 3; i++){
            vector<string> str; 
            for(int i= 0; i< n; i++){
                string s; 
                cin>> s; 
                m[s]++; 
                str.push_back(s); 
            }
            temp.push_back(str); 
        }
        int ans[3]; 
        for(int i= 0; i< 3; i++){
            ans[i]= 0; 
        }
        for(int i= 0; i< 3; i++){
            for(int j =0; j< n; j++){
                if(m[temp[i][j]]== 1){
                    ans[i]+= 3; 
                }else if(m[temp[i][j]]== 2){
                    ans[i]+= 1; 
                }
            }
        }
        for(int i= 0; i< 3; i++){
            cout<< ans[i]<< " "; 
        }
        cout<< endl; 
    }
    return 0; 
}