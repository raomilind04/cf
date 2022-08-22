#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    string s; 
    cin>> s; 
    string ans; 
    for(int i= 0; i< s.length(); i++){
        if(n%2== 0){
            ans= s[i]+ ans;  
        }else{
            ans= ans+ s[i]; 
        }
        n--; 
    }
    cout<< ans; 
    return 0; 
}