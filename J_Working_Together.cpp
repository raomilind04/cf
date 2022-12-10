#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int k, n, m; 
    cin>> k>> n>> m; 
    vector<int> a(n); 
    vector<int> b(m); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    for(int i= 0; i< m; i++){
        cin>> b[i]; 
    }
    int ptra= 0; 
    int ptrb= 0; 
    vector<int> ans; 
    while(ptra< n || ptrb< m){
        if(ptra< n && a[ptra]== 0){
            ans.push_back(a[ptra]);
            k++; 
            ptra++; 
        }else if(ptrb< m && b[ptrb]== 0){
            ans.push_back(b[ptrb]); 
            k++; 
            ptrb++; 
        }else if(ptra< n && a[ptra]<= k){
            ans.push_back(a[ptra]); 
            ptra++; 
        }else if(ptrb< m && b[ptrb]<= k){
            ans.push_back(b[ptrb]); 
            ptrb++; 
        }else{
            cout<< -1<< endl; 
            return ; 
        }
    }

    int sz= ans.size(); 
    for(int i= 0; i< sz; i++){
        cout<< ans[i]<< " "; 
    }
    cout<< endl; 
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