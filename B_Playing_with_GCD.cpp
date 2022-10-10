#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> arr(n); 
        int sum= 0; 
        for(int i= 0; i< n; i++){
            int temp; 
            cin>> temp; 
            arr[i]= temp; 
            sum+= temp; 
        }
        if(n== 1){
            cout<< "YES"<< endl; 
            continue;
        }
        bool flag= false; 
        for(int i= 0; i< n-2; i++){
            int set1= __gcd(arr[i], arr[i+1]); 
            int set2= __gcd(arr[i], arr[i+2]); 
            if(set2> set1){
                flag= true; 
                break; 
            }
        }
        if(flag){
            cout<< "NO"<< endl; 
        }else{
            cout<< "YES"<< endl; 
        }
    }
    return 0; 
}