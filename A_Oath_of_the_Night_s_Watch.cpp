#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int arr[n]; 
    for(int i= 0; i< n; i++){
        cin>> arr[i]; 
    }
    sort(arr, arr+n);
    int small= arr[0]; 
    int count= 0; 
    int big= arr[n-1]; 
    for(int i= 0; i< n; i++){
        if(arr[i]== small || arr[i]== big){
            count++; 
        }
    }
    cout<< n-count; 

    return 0; 
}