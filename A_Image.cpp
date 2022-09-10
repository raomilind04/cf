#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        string s1, s2; 
        cin>> s1; 
        cin>> s2; 
        unordered_set<char> s; 
        s.insert(s1[0]); 
        s.insert(s1[1]); 
        s.insert(s2[0]); 
        s.insert(s2[1]); 
        int n= s.size(); 
        /* if(n== 1){
            cout<< 0<< endl; 
        }else if(n== 2){
            cout<< 1<< endl; 
        }else if(n== 3){
            cout<< 2<< endl; 
        }else if(n== 4){
            cout<< 3<< endl; 
        } */
        cout<< n-1<< endl; 
    }
    return 0; 
}
