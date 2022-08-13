#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; 
    cin>> t; 
    while(t--){
        ll s; 
        cin>> s; 
        if(s>= 0 && s<=9){
            cout<< s<< endl; 
            continue;
        }
        ll ans= 9; 
        s-= 9; 
        for(int i= 8; i>= 0; i--){
            if(s>= 0 && s<=9 && s<= i){
                ans+= s*pow(10, 9-i); 
                cout<< ans<< endl; 
                break; 
            }else{
                ans+= i*pow(10, 9-i); 
                s-= i; 
            }

        }
        
    }
    return 0 ;
}