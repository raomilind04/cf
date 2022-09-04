#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    vector<int> v(n); 
    for(int i= 0; i< n; i++){
        cin>> v[i]; 
    }
    int t;
    int mini= INT_MAX; 
    int anst; 
    for(t= 1; t<= 100; t++){
        int cost= 0; 
        for(int i= 0; i< n; i++){
            int diff= abs(v[i]- t); 
            if(diff>= 1){
                cost+= diff-1; 
            }
        }
        if(mini> cost){
            mini= cost; 
            anst= t; 
        }
    }
    cout<< anst<< " "<< mini; 
    return 0; 
}