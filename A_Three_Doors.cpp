#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int x; 
        cin>> x; 
        int a, b, c; 
        cin>> a>> b>> c; 
        int keys[3]; 
        keys[0]= a; 
        keys[1]= b; 
        keys[2]= c; 
        int key= x; 
        int count= 0; 
        while(key!= 0){
            key= keys[key-1]; 
            count++; 
        }
        if(count== 3){
            cout<< "yes"<< endl; 
        }else{
            cout<< "no"<< endl; 
        }

    }
    return 0; 
}