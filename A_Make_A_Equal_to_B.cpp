#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> a(n); 
        vector<int> b(n); 
        int onesa= 0; 
        int onesb= 0; 
        for(int i= 0; i< n; i++){
            cin>> a[i]; 
            if(a[i]== 1){
                onesa++; 
            }
        }
        for(int i= 0; i< n; i++){
            cin>> b[i];
            if(b[i]== 1){
                onesb++; 
            } 
        }
        int mismatch= 0; 
        for(int i= 0; i< n; i++){
            if(a[i]!= b[i]){
                mismatch++; 
            }
        }
        int diff= abs(onesa- onesb); 
       if(mismatch== diff){
            cout<< diff<< endl; 
       }else if(mismatch== 0){
        cout<< 0<< endl; 
       }else{
            cout<< diff+1<< endl; 
       }

    }
    return 0; 
}