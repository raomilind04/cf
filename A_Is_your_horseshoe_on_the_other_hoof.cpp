#include <bits/stdc++.h>
using namespace std; 

int main(){
    unordered_set<int> s;
    int num; 
    int n= 4; 
    while(n--){
        cin>> num; 
        s.insert(num);
    }
    cout<< 4-s.size();
    return 0; 
}