#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n;
     if(n<= 2){
        cout<< "No"; 
        return 0; 
     }
     cout<< "Yes"<< endl; 
     int k= (n%2== 0) ? n/2 : (n+1)/2; 
     cout<< "1 "<< k<< endl; 
     cout<< n-1<< " "; 
     for(int i= 1; i<= n; i++){
        if(i==k){
            continue;
        }
        cout<< i<< " "; 
     }
     cout<< endl; 
    return 0; 
}