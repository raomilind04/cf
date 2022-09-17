#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int a, b, c; 
        cin>> a>> b>> c; 
        int na= b- (c-b); 
        if(na>= a && na%a== 0 && na!= 0){
            cout<<"YES"<< endl; 
            continue;
        }
        int nb= (a+c)/2; 
        if(nb>= b && (a+c)%2== 0 && nb%b== 0 && nb!= 0){
            cout<<"YES"<< endl; 
            continue;
        }
        int nc= 2*b-a; 
        if(nc>= c && nc%c== 0 && nc!= 0){
            cout<<"YES"<< endl; 
            continue;
        }
        cout<< "NO"<< endl; 
    }
    return 0; 
}