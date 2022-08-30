#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    if(n> 36){
        cout<< -1; 
        return 0; 
    }
    while(n> 0){
        if(n>= 2){
            cout<< 8; 
            n-=2; 
        }else{
            cout<< 4; 
            n-= 1; 
        }
    }
    return 0; 
}