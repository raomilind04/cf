#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>> n; 
    int sum= 0; 
    for(int i=1 ; i<= n; i++){
        int perc; 
        cin>> perc; 
        sum+= perc;
    }
    double ans; 
    ans= ((double) sum)/ ((double) n* 100); 
    cout<< ans*100; 
    return 0; 
}