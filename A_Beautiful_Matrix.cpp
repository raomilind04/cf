#include <bits/stdc++.h>
using namespace std; 

int main(){
    int mat[6][6]; 
    int col, row; 
    for(int i= 1; i<= 5; i++){
        for(int j= 1; j<= 5; j++){
            int in; 
            cin>> in; 
            if(in== 1){
                col= j; 
                row= i; 
            }
            mat[i][j]= in; 
        }
    }
    int ans; 
    ans= abs(col-3)+abs(row-3); 
    cout<< ans<< endl; 
}