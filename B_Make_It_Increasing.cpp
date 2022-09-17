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
        int count= 0; 
        bool flag= false; 
        for(int i= n-2; i>= 0; i--){
            while(v[i]>= v[i+1] && v[i]> 0){
                v[i]/= 2; 
                count++; 
            }
            if(v[i]== v[i+1]){
                cout<< -1<< endl; 
                flag= true; 
                break; 
            }
        }
        if(flag){
            continue;
        }
        cout<< count<< endl;  
    }
    return 0; 
}