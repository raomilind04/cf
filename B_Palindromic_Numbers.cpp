#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        char a[n];
        int b[n], c[n]= {0}; 
        bool flag= false; 
        for(int i= 0; i< n; i++){
            cin>> a[i]; 
            b[i]= (int)a[i]- 48; 
            if(i== 0 && b[i]== 9){
                flag= true; 
            }
        }
        if(flag== false){
            for(int i= 0; i< n; i++){
                cout<< (9-b[i]); 
            }
            cout<< endl;
        }else{
            c[n-2]= 1; 
            c[n-1]= 1; 
            c[0]= 11; 
            for(int i= n-1; i> 0; i--){
                if(c[i]>= b[i]){
                    c[i]-= b[i]; 
                }else{
                    c[i]-= (b[i]- 10); 
                    c[i-1]--; 
                }
            }
            c[0]-= 9; 
            for(int i= 0; i< n; i++){
                cout<< c[i]; 
            }
            cout<< endl; 
        }

    }
    return 0; 
}