#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    string ans; 
    for(int i= 0; i< n; i++){
        if(i & 2){
            ans+= 'b'; 
        }else{
            ans+= 'a'; 
        }
    }
    cout<< ans; 
    return 0; 
}