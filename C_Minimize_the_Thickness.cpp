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
        int ans= n; 
        for(int i= 1; i<= n; i++){
            int sum= 0; 
            for(int j= 0; j< i; j++){
                sum+= a[j]; 
            }
            int newSum= 0; 
            bool flag= true; 
            int left= i; 
            int right= i; 
            int sz= i; 
            for(int j= i; j< n; j++){
                newSum+= a[j]; 
                right= j; 
                if(newSum> sum){
                    flag= false; 
                    break; 
                }
                if(newSum== sum){
                    sz= max(sz, right- left+ 1); 
                    left= j+1; 
                    right= j+1; 
                    newSum= 0; 
                }
            }
            if(flag && newSum== 0){
                ans= min(ans, sz); 
            }   
        }
        cout<< ans<< endl; 
    }
    return 0; 
}