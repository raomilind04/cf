#include <bits/stdc++.h>
using namespace std; 

int main(){
    int b, g, n; 
    cin>> b>> g>> n; 
    int bmin= n- min(g,n); 
    int bmax= min(b, n); 
    cout<< bmax-bmin+1; 
    return 0; 
}