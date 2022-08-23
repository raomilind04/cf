#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin>> s; 
    bool found= false; 
    for(int i= 1; i<s.length()-1; i++){
        if(s[i-1]!= s[i+1] && s[i-1]!='.' && s[i+1]!= '.' && s[i-1]!=s[i] && s[i+1]!= s[i] && s[i]!= '.'){
            found= true; 
        }
    }
    if(found){
        cout<< "Yes"; 
    }else{
        cout<< "No"; 
    }
    return 0; 
}