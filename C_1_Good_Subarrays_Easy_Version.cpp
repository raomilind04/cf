#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> arr(n); 
        for(int i= 0; i< n; i++){
            cin>> arr[i]; 
        }
        int count= 0;
       for(int i= 0; i< n; i++){
        for(int j= i+1; j< n; j++){
            bool flag= true; 
            for(int k= i; k< j; k++){
                if(arr[k]< k+1){
                    flag= false; 
                    break; 
                }    
            }
            if(flag){
                count++; 
            }
        }
       }
       cout<< count+n<< endl; 
    }
    return 0; 
}