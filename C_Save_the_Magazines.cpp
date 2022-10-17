#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        string s; 
        cin>> s; 
        vector<int> num(n); 
        for(int i= 0; i< n; i++){
            cin>> num[i]; 
        }
        int seen= false; 
        int sum= 0; 
        int previ= 0; 
        int ans= 0; 
        int t= INT_MIN;
        int j= 0; 
        while(j< n){
            if(s[j]== '0' && !seen){
                seen= true; 
            }
            seen= false; 
            if(s[j]== '1' || seen== true){
                if(t> num[j]){
                    ans+= t; 
                }else{
                    ans+= num[j]; 
                }
            }
            if(s[j]== '0' || seen== true){
                t= num[j]; 
            }
            if(num[j]< t || seen== true){
                t= num[j]; 
            }
            j++; 
        }
        for(int i= 0; i< n; i++){
            if(s[i]== '0'){
                int idx= i-1; 
                int temp= 0; 
                int mini= INT_MAX; 
                for(int i= previ; i<= idx; i++){
                    sum+= num[i]; 
                    mini= min(mini, num[i]); 
                }
                sum+= (temp-mini); 
            }
        }
        cout<< ans<< endl; 
    }
    return 0; 
}