#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    string s; 
    cin>> s;
    int x= 0, y= 0; 
    int count= 0; 
    char k= '0'; 
    if(s[0]== 'U'){
        k= '1'; 
    }else{
        k= '2'; 
    }
    for(int i= 0; i< n; i++){
        if(s[i]== 'U'){
            y++; 
        }
        if(s[i]== 'R'){
            x++; 
        }
        if(y> x){
            if(k== '2'){
                count++; 
                k= '1'; 
            }
        }
        if(x> y){
            if(k== '1'){
                count++; 
                k= '2'; 
            } 
        }
    }

    cout<< count; 
    return 0; 
}