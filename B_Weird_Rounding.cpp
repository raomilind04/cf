#include <bits/stdc++.h>
using namespace std; 

int main(){
    string n; 
    int k; 
    cin>> n>> k; 
    if(n.length()<= k){
        cout<< n.length()-1; 
        return 0; 
    }
    int count= 0; 
    int zero= 0; 
    for(int i= n.length()-1; i>= 0; i--){
        if(n[i]!= '0'){
            count++; 
        }else{
            zero++; 
        }
        if(zero== k){
            break; 
        }
    }
    if(zero== k){
        cout<< count; 
    }else{
        cout<< n.length()-1; 
    }
    return 0; 
}