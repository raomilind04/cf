#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t;
    while(t--){
        int n; 
        cin>> n;
        string s2= "Timur";
        sort(s2.begin(), s2.end());
        string s; 
        cin>> s; 
        sort(s.begin(), s.end());
        if(s== s2){
            cout<< "YES"<< endl; 
            continue;
        }else{
            cout<< "NO"<< endl; 
            continue;
        }
    }
}