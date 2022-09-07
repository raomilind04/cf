#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, v; 
    cin>> n>> v; 
    int dis= n-1; 
    if(v>= dis){
       int ans; 
       ans= min(dis, v); 
       cout<< ans; 
       return 0;  
    }
    int cost= v;
    for(int i= 2; i<= n; i++){
        if(v< dis){
            cost+= i; 
            dis--; 
        }
    }
    cout<< cost; 
    return 0; 
}