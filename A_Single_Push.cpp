#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        int a[n]; 
        int b[n];  
        for(int i= 0; i< n; i++){
            cin>> a[i]; 
        }
        for(int i= 0; i< n; i++){
            cin>> b[i]; 
        }
        int start= 0, end= n-1; 
        for(int i= 0; i< n; i++){
            if(a[i]!= b[i]){
                start= i; 
                break; 
            }
        }
        for(int i= n-1; i>= 0; i--){
            if(a[i]!= b[i]){
                end= i; 
                break; 
            }
        }
        int diff; 
        bool ans= true; 
        for(int i= start; i<= end; i++){
            int temp= a[i]- b[i]; 
            if(temp> 0){
                ans= false; 
                break; 
            }
            if(i== start){
                diff= temp; 
            }
            if(temp!= diff){
                ans= false; 
                break; 
            }

        }
        if(ans){
            cout<< "YES"<< endl;
        }else{
            cout<< "NO"<< endl; 
        }
  
    }
    return 0; 
}