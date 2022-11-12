#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> v(n+1); 
        for(int i= 1; i<= n; i++){
            cin>> v[i]; 
        }
        if(v[1]== 1){
            cout<< n+1<< " "; 
            for(int i= 1; i<= n; i++){
                cout<< i<< " "; 
            }
            cout<< endl; 
            continue;
        }
        bool flag= true; 
        for(int i= 1; i<= n; i++){
            if(!v[i] && v[i+1]== 1){
                for(int j= 1; j<= i; j++){
                    cout<< j<< " "; 
                }
                cout<< n+1<< " "; 
                for(int j= i+1; j<=n; j++){
                    cout<< j<< " "; 
                }
                cout<< endl; 
                flag= false; 
                break;
            }
        }
        if(flag){
            for(int i= 1; i<= n; i++){
                cout<< i<< " "; 
            }
            cout<< n+1<< endl; 
        }
    }
    return 0; 
}