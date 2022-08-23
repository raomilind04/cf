#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, k; 
    cin>> n>> k; 
    string s; 
    cin>> s; 
    unordered_map<char, int> last; 
    unordered_set<char> active; 
    for(int i= 0; i< n; i++){
        last[s[i]]= i; 
    }
    for(int i= 0; i< n; i++){
        active.insert(s[i]); 
        if(active.size()> k){
            cout<< "YES"<< endl; 
            return 0; 
        }
        if(last[s[i]]== i){
            active.erase(s[i]); 
        }
    }
    cout<< "NO"<< endl ;
    return 0; 
}