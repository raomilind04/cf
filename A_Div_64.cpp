#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin>> s; 
    int n= s.length();
    bool seen= false;  
    int count= 0; 
    for(int i= 0; i< n; i++){
        if(s[i]== '1'){
            seen= true; 
        }else if(s[i]== '0' && seen== true){
            count++; 
        }
    }
    if(count>= 6){
        cout<< "yes"; 
    }else{
        cout<< "no"; 
    }
    return 0; 
}