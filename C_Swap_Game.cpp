#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> a(n); 
        for(int i= 0; i< n; i++){
            cin>> a[i]; 
        }
        if(a[0]== 0){
            cout<< "Bob"<< endl; 
        }
        int mini= INT_MAX; 
        for(int i= 0; i< n; i++){
            mini= min(mini, a[i]); 
        }
        if(mini== a[0]){
            cout<< "Bob"<< endl; 
        }else{
            cout<< "Alice"<< endl; 
        }
    }
    return 0; 
}