#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){

        vector<vector<char>> grid(8, vector<char> (8)); 
        vector<int> rCol; 
        for(int i= 0; i< 8; i++){
            for(int j= 0; j< 8; j++){
                cin>> grid[i][j]; 
                if(grid[i][j]== 'R'){
                    rCol.push_back(i); 
                }
            }
        }
        bool printed= false; 
        for(int i: rCol){
            bool flag= true; 
            for(int j= 0; j< 8; j++){
                if(grid[i][j]!= 'R'){
                    flag= false; 
                    break; 
                }
            }
            if(flag){
                cout<< "R"<< endl;
                printed= true; 
                break;
            }
        }
        if(!printed){
            cout<< "B"<< endl; 
        }
           /*  vector<vector<char>> grid(8, vector<char> (8)); 
            for(int i= 0; i< 8; i++){
                for(int j= 0; j< 8; j++){
                  cin>> grid[i][j]; 
                }
            }
            int cb= 0; 
            int cr= 0; 
            char ans; 
            for(int i= 0; i< 8; i++){
                for(int j= 0; j< 8; j++){
                    if(grid[i][j]== 'R'){
                        cr++; 
                    }
                    if(grid[i][j]== 'B'){
                        cb++; 
                    }
                    if(cr== 8){
                        ans= 'r'; 
                    }
                    if(cb== 8){
                        ans= 'b'; 
                    }
                }
                cb= 0; 
                cr= 0; 
            }
            for(int i= 0; i< 8; i++){
                for(int j= 0; j< 8; j++){
                    if(grid[j][i]== 'R'){
                        cr++; 
                    }
                    if(grid[j][i]== 'B'){
                        cb++; 
                    }
                    if(cr== 8){
                        ans= 'r'; 
                    }
                    if(cb== 8){
                        ans= 'b'; 
                    }
                }
                cb= 0; 
                cr= 0; 
            }
            if(ans== 'r'){
                cout<< "R"<< endl; 
            }
            if(ans== 'b'){
                cout<< "B"<< endl; 
            } */
    }
    return 0; 
}