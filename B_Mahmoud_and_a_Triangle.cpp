#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int len[n]; 
    for(int i= 0; i< n; i++){
        cin>> len[i]; 
    }
    sort(len, len+n);
    for(int i= 1; i< n-1; i++){
        if(len[i-1]+ len[i]> len[i+1]){
            cout<< "YES"; 
            return 0; 
        }
    }
    cout<< "NO"; 
    return 0; 
}