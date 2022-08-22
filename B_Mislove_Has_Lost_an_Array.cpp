#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, l, r; 
    cin>> n>> l>> r;
    int minSum= 0; 
    int maxSum= 0;  
    for(int i= 0; i< l; i++){
        minSum+= pow(2, i); 
    }
    int diff= n- l; 
    while(diff> 0){
        minSum+= 1; 
        diff--; 
    }
    for(int i= 0; i< r; i++){
        maxSum+= pow(2,i); 
    }
    diff= n- r; 
    while(diff> 0){
        maxSum+= pow(2, r-1); 
        diff--; 
    }
    cout<< minSum<< " "<< maxSum; 
    return 0; 
}