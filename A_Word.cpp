#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin>> s; 
    int up= 0, lo= 0; 
    for(int i= 0; i< s.length(); i++){
        if(s[i]>= 65 && s[i]<= 90){
            up++; 
        }else{
            lo++; 
        }
    }
    if(lo>= up){
        for(int i= 0; i< s.length(); i++){
            s[i]= tolower(s[i]); 
        }
    }else{
        for(int i= 0; i< s.length(); i++){
            s[i]= toupper(s[i]); 
        }
    }
    cout<< s; 
}