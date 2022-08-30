#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int arr[n]; 
    for(int i= 0; i< n; i++){
        cin>> arr[i]; 
    }
    int x= arr[n-1]; 
    long long ans= x; 
    for(int i= n-2; i>= 0; i--){
        int temp= min(x-1, arr[i]); 
        if(temp>= 0){
            ans+= temp;
            x= temp; 
        }else{
            x= 0; 
        }
    }
    cout<< ans<< endl; 
    return 0; 
}