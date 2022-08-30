#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int col; 
        cin>> col; 
        string r1, r2;
        cin>> r1>> r2; 
        for(int i= 0; i< col; i++){
            if(r1[i]== 'B'){
                r1[i]= 'G'; 
            }
            if(r2[i]== 'B'){
                r2[i]= 'G'; 
            }
        }
        if(r1== r2){
            cout<< "YES"<< endl; 
        }else{
            cout<< "NO"<< endl; 
        }
    }
}