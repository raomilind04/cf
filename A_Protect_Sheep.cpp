#include <bits/stdc++.h>
using namespace std; 

int main(){
    int r, c; 
    cin>> r>> c; 
    char arr[r+2][c+2]; 
    for(int i= 1; i<= r; i++){
        for(int j= 1; j<= c; j++){
            cin>> arr[i][j]; 
        }
    }
    for(int i= 1; i<= r; i++){
        for(int j= 1; j<= c; j++){
            if(arr[i][j]== 'S'){
                if(arr[i+1][j]== 'W' || arr[i][j+1]== 'W' || arr[i-1][j]== 'W' || arr[i][j-1]== 'W'){
                    cout<< "No"; 
                    return 0; 
                }
            }
        }
    }
    cout<< "Yes"<< endl; 
    for(int i= 1; i<= r; i++){
        for(int j= 1; j<= c; j++){
            char curr; 
            if(arr[i][j]== '.'){
                curr= 'D'; 
            }else{
                curr= arr[i][j]; 
            }
            cout<< curr; 
        }
        cout<< endl; 
    }
    return 0; 
}