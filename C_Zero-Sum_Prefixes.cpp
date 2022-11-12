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
        int res= 0; 
        int sum= 0; 
        for(int i= 0; i< n; i++){
            if(v[i]== 0){
                v[i]= -1*sum; 
                sum= 0;
                res++; 
            }else{
                sum+= v[i]; 
                if(sum== 0){
                    res++; 
                }
            }
        }
        cout<< res<< endl; 

    }
    return 0; 
}