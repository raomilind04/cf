#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    string s; 
    cin>> s; 
    int num= count(s.begin(), s.end(), '*'); 
    int c= num/2 + (num%2!= 0); 
    int count= 0; 
    int idx= -1; 
    for(int i= 0; i< n; i++){
        if(s[i]== '*'){
            count++; 
            if(count== c){
                idx= i; 
                break; 
            }
        }
    }
    int left= num/2-(num%2== 0); 
    int right= 1; 
    ll moves= 0; 
    for(int i= 0; i< n; i++){
        if(s[i]== '*'){
            if(i== idx){
            continue;
            }else if(i< idx){
                moves+= (idx-i-left);
                left--;  
            }else if(i> idx){
                moves+= (i-idx-right); 
                right++; 
            }
        }
    }
    if(idx== -1){
        cout<< 0<< endl; 
        return ; 
    }
    cout<< moves<< endl; 
    return ; 
}

int main(){
    int t; 
    cin>> t; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}
