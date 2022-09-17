#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        string t; 
        cin>> t;
        int i= n-1; 
        string ans= ""; 
        while(i>= 0){
            if(t[i]!= '0'){
                ans+='a'+(t[i]-'0')-1; 
                i--;
            }else{
                ans+= 'a'+stoi(t.substr(i-2, 2))-1; 
                i-= 3; 
            }
        }
        reverse(ans.begin(), ans.end()); 
        cout<< ans<< endl; 
    }
    return 0; 
}