#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, k; 
    cin>> n>> k; 
    int w[n]; 
    for(int i= 0; i< n; i++){
        cin>> w[i]; 
    }
    int sum= 0; 
    for(int i= 0; i< n; i++){
        int temp= ceil((double) w[i]/ (double) k); 
        sum+= temp; 
    }
    int ans= ceil((double) sum/ 2.0); 
    cout<< ans; 
    return 0; 
}