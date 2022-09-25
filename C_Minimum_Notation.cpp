#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        string s; 
        cin>> s; 
        int n= s.length(); 
        reverse(s.begin(), s.end()); 
        int k= 57; 
        vector<int> temp(10, 0); 
        for(char i: s){
            if(i<= char(k)){
                temp[i-'0']++; 
                k= i; 
            }else{
                if(i!= '9'){
                    temp[i-'0'+1]++;
                }else{
                    temp[9]++; 
                }
            }
        }
        for(int i= 0; i< 10; i++){
            while(temp[i]--){
                cout<< i; 
            }
        }
        cout<< endl; 
    }
    return 0; 
}