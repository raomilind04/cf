#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin>> s;
    int one= 0; 
    int two= 0; 
    int three= 0; 
    for(int i= 0; i< s.length(); i+= 2){
        if(s[i]== '1'){
            one++; 
        }
        if(s[i]== '2'){
            two++; 
        }
        if(s[i]== '3'){
            three++; 
        }
    }
    int n= s.length(); 
    string ans(n, '0'); 
    for(int i= 0; i< n; i++){
        if(i%2== 0){
            if(one!= 0){
                ans[i]= '1';
                one--;  
            }else if(two!= 0){
                ans[i]= '2'; 
                two--; 
            }else{
                ans[i]= '3'; 
                three--; 
            }
        }else{
            ans[i]= '+'; 
        }
    }
    for(int i= 0; i< n; i++){
        cout<< ans[i]; 
    }
    return 0; 
}