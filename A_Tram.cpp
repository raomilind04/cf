#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int ans= INT_MIN; 
    int curr= 0; 
    for(int i= 0; i< n; i++){
        int exit, enter; 
        cin>> exit>> enter; 
        curr+= enter- exit; 
        ans= max(curr, ans); 
    }
    cout<< ans<< endl; 
    return 0; 
}