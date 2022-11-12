#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        unordered_map<int, int> m; 
        long long count= 0; 
        for(int i= 1; i<= n; i++){
            int temp; 
            cin>> temp; 
            count+= m[temp-i]; 
            m[temp-i]++; 
        }
        cout<< count<< endl; 
       
        
    }
    return 0; 
}