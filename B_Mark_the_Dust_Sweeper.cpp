#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> v(n); 
        for(int i= 0; i< n; i++){
            cin>> v[i]; 
        }
        bool zero= true; 
        int count= 0; 
        long long sum= 0; 
        for(int i= 0; i< n-1; i++){
            if(v[i]!= 0){
                zero= false; 
            }
            if(v[i]== 0){
                if(!zero){
                    count++; 
                }
            }
            sum+= v[i]; 
        }
        cout<< sum+ count<< endl; 

    }
    return 0; 
}