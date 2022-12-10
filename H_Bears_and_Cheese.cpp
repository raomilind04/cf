#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int a, b; 
    cin>> a>> b; 
    if(a== b){
        cout<< 0<< endl; 
        return 0; 
    }
    int count2a= 0; 
    int count3a= 0; 
    int count5a= 0; 
    int count2b= 0;
    int count3b= 0; 
    int count5b= 0;  
    while(a%2== 0){
        count2a++; 
        a/= 2; 
    }
    while(a%3== 0){
        count3a++; 
        a/= 3; 
    }
    while(a%5== 0){
        count5a++; 
        a/= 5;  
    }
    while(b%2== 0){
        count2b++; 
        b/= 2; 
    }
    while(b%3== 0){
        count3b++; 
        b/= 3; 
    }
    while(b%5== 0){
        count5b++; 
        b/= 5;  
    }
    if(a!= b){
        cout<< -1<< endl; 
        return 0; 
    }
    int res= abs(count2a-count2b)+abs(count3a-count3b)+ abs(count5a-count5b); 
    cout<< res<< endl; 

    return 0; 
}
