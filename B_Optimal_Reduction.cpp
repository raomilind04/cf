#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while (t--)
    {
        int n;
        cin>> n; 
        int arr[n]; 
        for(int i= 0; i< n; i++){
            cin>> arr[i]; 
        }
        int prelen= 1; 
       for(int i= 0; i< n; i++){
          if(arr[i]<= arr[i+1]){
            prelen++; 
          }else{
            break; 
          }
       }
       int suflen= 1; 
       for(int i= n-1; i>= 0; i--){
        if(arr[i]<= arr[i-1]){
            suflen++; 
        }else{
            break; 
        }
       }
       if(prelen+ suflen>= n){
        cout<< "yes"<< endl ;
       }
       else{
        cout<< "no"<<  endl; 
       }
        

    }
    return 0; 
}