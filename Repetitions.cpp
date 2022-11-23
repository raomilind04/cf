#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    string s; 
    cin>> s; 
    int n= s.length(); 
    int ans= INT_MIN; 
    int len= 1; 
    for(int i= 1; i< n; i++){
        if(s[i]== s[i-1]){
            len++; 
            ans= max(len, ans); 
        }else{
            len= 1; 
        }
    }
    if(ans== INT_MIN){
        cout<< 1<< endl; 
        return 0; 
    }
    cout<< ans; 
    return 0; 
}
