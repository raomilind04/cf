#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int arr[n]; 
    for(int i= 0; i< n; i++){
        cin>> arr[i]; 
    }
    bool flag= true; 
    int rem= arr[0]%2; 
    for(int i= 1; i< n; i++){
        if(arr[i]%2!= rem){
            flag= false; 
            break; 
        }
    }
    if(!flag){
        sort(arr, arr+n); 
        for(int i= 0; i< n; i++){
        cout<< arr[i]<< " "; 
        }
    }else{
        for(int i= 0; i< n; i++){
        cout<< arr[i]<< " "; 
        }
    }
    return 0; 
}