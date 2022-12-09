#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int n; 
    cin>> n; 
    vector<int> v(n); 
    for(int i= 0; i< n; i++){
        cin>> v[i]; 
    }
    sort(v.begin(), v.end()); 
    int mini= INT_MAX; 
    int count= 1; 
    for(int i= 1; i< n; i++){
        int diff= abs(v[i]-v[i-1]); 
        if(mini== diff){
            count++; 
        }
        if(mini> diff){
            count= 1; 
            mini= diff; 
        }
    }
    cout<< mini<< " "<< count; 
    return 0; 
}