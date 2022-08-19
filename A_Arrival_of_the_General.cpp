#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int arr[n]; 
    for(int i= 0; i< n; i++){
        cin>> arr[i]; 
    }
    int t= 0; 
    int s= 0; 
    for(int i= 1; i< n; i++){
        if(arr[i]<= arr[s]){
            s= i;  
        }
        if(arr[i]> arr[t]){
            t= i;  
        }
    }
    int time= 0; 
    if(t> s){
        time= t + (n-s-1) - 1; 
    }else{
        time= t+ (n-s-1);
    }
    cout<< time<< endl; 

    return 0; 
}