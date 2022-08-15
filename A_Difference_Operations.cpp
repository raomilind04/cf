#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        int arr[n+1]; 
        for(int i= 1; i<= n; i++){
            cin>> arr[i]; 
        }
        int count= 0; 
        for(int i= 2; i<= n; i++){
            if(arr[i]%arr[1]!= 0){
                cout<< "NO"<< endl; 
                break; 
            }else{
                count++; 
            }
        }
        if(count== n-1){
            cout<< "YES"<< endl; 
        }
    }

    return 0; 
}