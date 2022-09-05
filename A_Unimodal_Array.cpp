#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    vector<int> v(n); 
    for(int i= 0; i< n; i++){
        cin>> v[i]; 
    }
    int low= 0; 
    int high= n-1; 
    for(int i= 1; i< n; i++){
        if(v[i]> v[low]){
            low++; 
        }else{
            break; 
        }
    }
    for(int i= n-2; i>= 0; i--){
        if(v[i]> v[high]){
            high--; 
        }else{
            break; 
        }
    }
    for(int i= low; i< high; i++){
        if(v[i]!= v[i+1]){
            cout<< "NO"; 
            return 0; 
        }
    }
    cout<< "YES"; 
    return 0; 
}