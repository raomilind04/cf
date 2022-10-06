#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<vector<bool>> grid(n, vector<bool> (5, false)); 
        bool ava; 
        bool ansPrinted= false; 
        for(int i= 0; i< n; i++){
            for(int j= 0; j< 5; j++){
                cin>> ava; 
                grid[i][j]= ava; 
            }
        }
        int gs= n/2; 
        for(int i= 0; i< 4; i++){
            for(int j= i+1; j< n; j++){
                int A= 0; 
                int B= 0; 
                int AB= 0; 
                for(int k= 0; k< n; k++){
                    bool dayA= grid[k][i]; 
                    bool dayB= grid[k][j]; 
                    if(!dayA && !dayB){
                        break; 
                    }
                    if(dayA && dayB){
                        AB++; 
                    }
                    if(!dayA && dayB){
                        B++; 
                    }
                    if(dayA && !dayB){
                        A++; 
                    }
                }
                if(A> gs || B> gs){
                    continue;
                }
                if(A+ B+ AB== n){
                    cout<< "YES"<< endl; 
                    ansPrinted= true; 
                }

            }
        }
        if(!ansPrinted){
             cout<< "NO"<< endl;
        }
       
    }
    return 0; 
}