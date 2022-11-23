#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    string s; 
    cin>> s; 
    int res= INT_MAX; 
    for(int i= 0; i< n; i++){
        vector<int> temp(3,0); 
        temp[s[i]- 'a']++; 
        for(int j= i+1; j< min(n, i+7); j++){
            temp[s[j]- 'a']++; 
            if(temp[0]> temp[1] && temp[0]> temp[2]){
                res= min(res, j-i+1); 
            }
        }
    }
    if(res== INT_MAX){
        cout<< -1<< endl; 
        return ; 
    }
    cout<< res<< endl; 
    return ; 
    /* vector<char> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    int ans= INT_MAX; 
    for(int i= 0; i< n; i++){
        for(int j= i+1; j< n; j++){
            int ca= 0; 
            int cb= 0; 
            int cc= 0; 
            for(int k= i; k<= j; k++){
                if(a[k]== 'a'){
                    ca++; 
                }
                if(a[k]== 'b'){
                    cb++; 
                }
                if(a[k]== 'c'){
                    cc++; 
                }
            }
            if(ca> cb && ca> cc){
                ans= min(ans, j-i+1); 
            }
        }
    }
    if(ans== INT_MAX){
        cout<< -1<< endl; 
        return ; 
    }
    cout<< ans<< endl; */ 
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
