#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int n; 
    cin>> n; 
    vector<int> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    int res= 1; 
    for(int i= 2; i<= n; i++){
        res= res^i; 
    }
    for(auto it: a){
        res= res^it; 
    }
    cout<< res; 
    return 0; 
}
