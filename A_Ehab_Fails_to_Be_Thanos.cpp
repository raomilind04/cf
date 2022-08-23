#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    vector<int> v(2*n);
    for(int i= 0; i< 2*n; i++){
        cin>> v[i]; 
    }
    sort(v.begin(), v.end()); 
    int sum1= 0, sum2= 0; 
    for(int i= 0; i< n; i++){
        sum1+= v[i]; 
    }
    for(int i= n; i< 2*n; i++){
        sum2+= v[i]; 
    }
    if(sum1== sum2){
        cout<< -1; 
        return 0; 
    }
    for(int i= 0; i< 2*n ;i++){
        cout<< v[i]<< " ";
    }
    return 0; 
}