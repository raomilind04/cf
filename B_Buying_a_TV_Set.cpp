#include <bits/stdc++.h>
using namespace std; 

int findgcd(long long a, long long b){
    if(a== 0){
        return b; 
    } 
    if(b== 0){
        return a; 
    }
    if(a== b){
        return a; 
    }
    if(a> b){
        return gcd(a-b, b); 
    }
    return gcd(a, b-a); 

}
int main(){
    long long a, b, x, y; 
    cin>> a>> b>> x>> y;
    // w< a and h< b; 
    unsigned long long gcd= __gcd(x, y); 
     x= x/ gcd; 
     y= y/ gcd;  
    cout<< min(a/x, b/ y); 
    return 0; 
}