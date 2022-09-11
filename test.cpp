#include<bits/stdc++.h> 
using namespace std; 
int main(){
    int t; 
    cin>> t;
    while(t--){
        int n; 
        cin>> n; 
        string s; 
        cin>> s;
        vector<int> v(n); 
        int sum= 0; 
        for(int i= 0; i< n; i++){
            int temp; 
            cin>> temp; 
            sum+= temp; 
            v[i]= temp; 
        }
        unordered_map<char, int> m; 
        for(int i= 0; i< n; i++){
            if(m.find(s[i])== m.end()){
                m[s[i]]= v[i]; 
            }else{
                if(m[s[i]]< v[i]){
                    m[s[i]]= v[i]; 
                }
            }
        }
        for(auto it: m){
            sum-= it.second; 
        }
        cout<< sum<< endl; 
    }
    return 0; 
}