#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s1, s2, s;
    cin>> s1; 
    cin>> s2; 
    cin>> s; 
    unordered_map<char, char> map; 
    for(int i= 0; i< s1.length(); i++){
        map[s1[i]]= s2[i]; 
        map[toupper(s1[i])]= toupper(s2[i]); 
    }
    for(int i= 0; i< s.length(); i++){
        if(map.find(s[i])!= map.end()){
            s[i]= map[s[i]]; 
        }
    }
    cout<< s; 

}