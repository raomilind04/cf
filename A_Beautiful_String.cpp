#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        string s;
        cin>> s; 
        int n= s.length(); 
        string str= "abc"; 
        for(int i= 0; i< n; i++){
            if(s[i]!= '?'){
                continue;
            }
            for(int j= 0; j< 3; j++){
                s[i]= str[j]; 
                bool okay= true; 
                if(i>= 1 && s[i]== s[i-1]){
                    okay= false; 
                }
                if(i< n-1 && s[i]== s[i+1]){
                    okay= false; 
                }
                if(okay){
                    break; 
                }
                s[i]= '?'; 
            }
        }
        bool ans= true; 
        for(int i= 1; i< n; i++){
            if(s[i]== '?' || s[i]== s[i-1]){
                ans= false; 
            }
        }
        if(ans){
            cout<< s<< endl; 
        }else{
            cout<< -1<< endl; 
        }
    }
    return 0; 
}