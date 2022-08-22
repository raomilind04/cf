#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, k; 
    cin>> n>> k; 
    string s; 
    cin>> s; 
    if(k== 0){
        cout<< s<< endl; 
        return 0; 
    }
    if(n== 1){
        cout<< 0<< endl; 
        return 0; 
    }
    for(int i= 0; i< n; i++){
        if(k> 0){
            if(i== 0){
                if(s[i]== '1'){
                    continue;
                }
                s[i]= '1'; 
            }else{
                if(s[i]== '0'){
                    continue;
                }
                s[i]= '0'; 
            }
            k--; 
        }
    }
    cout<< s; 
    return 0; 
}