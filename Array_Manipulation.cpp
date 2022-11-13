#include <bits/stdc++.h>
using namespace std; 
const int N= 1e7+ 10; 
long long v[N]; 

int main(){
    int n, m; 
    cin>> n>> m;
    long long maxi= -1; 
    while(m--){
        int a,b,val; 
        cin>> a>> b>> val;
        v[a]+= val; 
        v[b+1]-= val;  
    }
    for(int i= 1; i<=n; i++){
            v[i]+= v[i-1]; 
        }
        for(int i= 1; i<= n; i++){
            maxi= max(maxi, v[i]); 
        }
        cout<< maxi<< endl;
     
    return 0; 
}