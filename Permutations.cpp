#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int n; 
    cin>> n; 
    if(n== 1){
        cout<< 1<< endl; 
        return 0;
    }
    if(n< 4){
        cout<< "NO SOLUTION"; 
        return 0; 
    }
    for(int i= 1; i< n; i+=2){
        cout<< i+1<< " "; 
    }
    for(int i= 0; i< n; i+=2){
        cout<< i+1<< " "; 
    }
    
    return 0; 
}
