#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, m; 
    cin>> n>> m; 
    vector<vector<char>> v(n, vector<char>(m)); 
    for(int i= 0; i< n; i++){
        for(int j= 0; j< m; j++){
            cin>> v[i][j]; 
        }
    }
    vector<vector<int>> ans(n, vector<int>(m)); 
    for(int i= 0; i< n; i++){
        for(int j= 0; j< m; j++){
            if(v[i][j]== '*'){
                if(i> 0){
                    if(j> 0){
                        ans[i-1][j-1]++; 
                    }
                    if(j< m-1){
                        ans[i-1][j+1]++; 
                    }
                    ans[i-1][j]++; 
                    
                }
                if(i< n-1){
                    if(j> 0){
                        ans[i+1][j-1]++; 
                    }
                    if(j< m-1){
                        ans[i+1][j+1]++; 
                    }
                    ans[i+1][j]++; 
                }
                if(j> 0){
                    ans[i][j-1]++; 
                }
                if(j< m-1){
                    ans[i][j+1]++; 
                }
            }
        }
    }
    for(int i= 0; i< n; i++){
            for(int j= 0; j< m; j++){
                if(v[i][j]== '.'){
                    if(ans[i][j]!= 0){
                        cout<< "NO"; 
                        return 0; 
                    }
                }else if(v[i][j]!= '*'){
                    if(ans[i][j]!= v[i][j]-'0'){
                        cout<< "NO"; 
                        return 0;
                    }
                }
            }
        }
        cout<< "YES"; 
        return 0; 
}