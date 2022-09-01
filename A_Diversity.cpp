#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin>> s; 
    int k; 
    cin>> k; 
    int n= s.length(); 
    if(n< k){
        cout<< "impossible"; 
        return 0; 
    }
    unordered_set<char> se; 
    int count= 0; 
    for(int i= 0; i< n; i++){
        if(se.find(s[i])== se.end()){
            count++; 
            se.insert(s[i]); 
        }
    }
    if(count>= k){
        cout<< 0; 
    }else{
        cout<< k- count; 
    }
    return 0; 
}