#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        vector<char> v(10); 
        for(int i= 0; i< 10; i++){
            cin>> v[i]; 
        }
        int res= 9; 
        int count1= 0; 
        int count2= 0; 
        for(int i= 0; i< 10; i++){
            if(i%2== 0){
                if(v[i]== '1' || v[i]== '?'){
                    count1++; 
                }
            }else{
                if(v[i]== '1'){
                    count2++; 
                }
            }
            if(count1> count2+ (10-i)/2){
                res= min(res, i); 
            }
            if(count2> count1+ (9-i)/2){
                res= min(res, i); 
            }
        }
        count1= 0; 
        count2= 0; 
        for(int i= 0; i< 10; i++){
            if(i%2== 0){
                if(v[i]== '1'){
                    count1++; 
                }
            }else{
                if(v[i]== '1' || v[i]== '?'){
                    count2++; 
                }
            }
            if(count1> count2+ (10-i)/2){
                res= min(res, i); 
            }
            if(count2> count1+ (9-i)/2){
                res= min(res, i); 
            }
        }
        cout<< res+1<< endl; 
    }
    return 0; 
}