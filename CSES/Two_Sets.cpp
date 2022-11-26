#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int n; 
    cin>> n; 
    ll sum= n*(n+1)/2; 
    if(sum%2!= 0){
        cout<< "NO"<< endl;
    }else{
        cout<< "YES"<< endl; 
        vector<int> s1; 
        vector<int> s2; 
        if(n%2== 0){
            for(int i= 0; i< n/2; i++){
                if(i%2== 0){
                    s1.push_back(i+1); 
                    s1.push_back(n-i); 
                }else{
                    s2.push_back(i+1); 
                    s2.push_back(n-i); 
                }
            }
        }else{
            for(int i= 0; i< (n-1)/2; i++){
                if(i%2== 0){
                    s1.push_back(i+1); 
                    s1.push_back(n-i-1); 
                }else{
                    s2.push_back(i+1); 
                    s2.push_back(n-i-1); 
                }
            }
            if(s1.size()> s2.size()){
                s2.push_back(n); 
            }else{
                s1.push_back(n);
            }
        }
        cout<< s1.size()<< endl; 
        for(int i= 0; i< s1.size(); i++){
            cout<< s1[i]<< " "; 
        }
        cout<< endl; 
        cout<< s2.size()<< endl; 
        for(int i= 0; i< s2.size(); i++){
            cout<< s2[i]<< " "; 
        }
    }
    return 0; 
}