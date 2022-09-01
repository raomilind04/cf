#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    unordered_set<string> set1; 
    for(int i= 0; i< n; i++){
        unordered_set<char> se; 
        string s; 
        cin>> s;
        string temp; 
        for(int i= 0; i< s.length(); i++){
            if(se.find(s[i])== se.end()){
                temp.push_back(s[i]); 
                se.insert(s[i]); 
            }
        }
        sort(temp.begin(), temp.end());
        set1.insert(temp); 
    }
    int count= set1.size(); 
    cout<< count; 
    return 0; 

}