#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, k; 
    cin>> n>> k; 
    int d[n]; 
    vector<int> v(k+1, 0); 
    for(int i= 0; i< n; i++){
        int t; 
        cin>> t; 
        v[t]++; 
    }
    int choose= ceil((double) n/ 2.0); 
    int count= 0; 
    for(int i= 1; i<= k; i++){
        if(v[i]/2){
            count+= v[i]/2; 
        }
    }
    count= min(choose, count); 
    cout<< 2*count+ (choose-count); 
    return 0; 
}