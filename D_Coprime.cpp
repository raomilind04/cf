#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> a(n); 
        for(int i= 0; i< n; i++){
            cin>> a[i]; 
        }
        vector<int> b(1001, INT_MIN); 
        for(int i= 0; i< n; i++){
            b[a[i]]= i+1; 
        }
        int ans= INT_MIN; 
        for(int i= 1; i<= 1000; i++){
            for(int j= 1; j<= 1000; j++){
                if(__gcd(i, j)== 1){
                    ans= max(ans, b[i]+b[j]);
                }
            }
        }
        if(ans== 0){
            cout<< -1<< endl; 
        }else{
            cout<< ans<< endl; 
        }
        
        

        /* int n; 
        cin>> n; 
        vector<int> a(n); 
        for(int i= 0; i< n; i++){
            cin>> a[i]; 
        }
        int maxi= INT_MIN; 
        bool flag= false; 
        for(int i= 0; i< n; i++){
            for(int j= 0; j< n; j++){
                if(__gcd(a[i], a[j])== 1){
                    maxi= max(maxi, i+j); 
                    flag= true; 
                }
            }
        }
        if(!flag){
            cout<< -1<< endl; 
        }else{
            cout<< maxi+2<< endl; 
        } */
    }
    return 0; 
}