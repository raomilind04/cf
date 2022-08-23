#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, a, x, b, y; 
    cin>> n>> a>> x>> b>> y;
    a--; 
    b--; 
    x--; 
    y--;   
    while(1){
        if(a== b){
            cout<< "YES"; 
            return 0; 
        }
        if(a== x || b== y){
            break; 
        }
        a= (a+1)%n; 
        b= (b-1+n)%n; 
    }
    cout<< "NO"; 
    return 0; 
}