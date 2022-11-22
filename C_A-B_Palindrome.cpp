#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int a, b;
    cin>> a>> b; 
    string s; 
    cin>> s; 
    int n= s.length(); 
    int low= 0; 
    int high= n-1; 
    while(high-low> 1){
        if(s[low]== '?' && s[high]!= '?'){
            s[low]= s[high]; 
        }
        if(s[low]!= '?' && s[high]== '?'){
            s[high]= s[low]; 
        }
        if(s[low]!= '?' && s[high]!= '?'){
            if(s[high]!= s[low]){
            cout<< -1<< endl; 
            return; 
            }
        }
        high--; 
        low++; 
    }
    if(high!= low){
        if(s[low]== '?' && s[high]!= '?'){
            s[low]= s[high]; 
        }
        if(s[low]!= '?' && s[high]== '?'){
            s[high]= s[low]; 
        }
        if(s[low]!= '?' && s[high]!= '?'){
            if(s[high]!= s[low]){
            cout<< -1<< endl; 
            return; 
            }
        }
    } 
    a-= count(s.begin(), s.end(), '0'); 
    b-= count(s.begin(), s.end(), '1'); 
    int cnt= count(s.begin(), s.end(), '?'); 
    bool fillMid= (n%2== 1 && s[n/2]== '?'); 
    if(a< 0 || b< 0 || (fillMid && a%2== 0 && b%2== 0) || a+b!= cnt){
        cout<< -1<< endl; 
        return ; 
    }
    if(a%2== 1 || b%2== 1){
        int idx= n/2; 
        if(s[idx]!= '?'){
            cout<< -1<< endl; 
            return ; 
        }
        s[idx]= (a%2== 0 ? '1': '0'); 
        if(a%2== 0){
            b--; 
        }else{ 
            a--; 
        }
    } 
    if(a%2== 1 || b%2== 1){
        cout<< -1<< endl; 
        return; 
    }
    for(int i= 0; i< n; i++){
        if(s[i]== '?'){
            int end= n-i-1; 
            if(a> 0){
                a-= 2; 
                s[i]= '0'; 
                s[end]= '0'; 
            }else{
                b-= 2; 
                s[i]= '1'; 
                s[end]= '1'; 
            }
        }
    }
    cout<< s<< endl; 

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