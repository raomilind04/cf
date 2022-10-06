#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, d;
    cin>> n>> d; 
    vector<int> p(n); 
    for(int i= 0; i< n; i++){
        cin>> p[i]; 
    } 
    sort(p.rbegin(), p.rend());
    int wins= 0; 
    int players= 0; 
    for(int i= 0; i< n && players<= n; i++){
        players+= floor(d/ p[i])+1; 
        wins++; 
    }
    if(players> n){
        wins--;
    }
    cout<< wins; 

    return 0; 
}