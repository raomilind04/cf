#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n; 
    vector<int> v(n); 
    int odd = 0 ; 
    for(int i = 0 ; i < n ; i++){
        cin >> v[i]; 
        if(v[i]%2 != 0){
            odd++; 
        }
    }
    if(odd%2 == 0){
        cout << 0 << endl; 
        return ; 
    }
    int op = INT_MAX; 
    for(int i = 0 ; i < n ; i++){
        int count = 0; 
        int temp = v[i]; 
        if(temp%2 == 0){
            while(temp%2 == 0){
                count++; 
                temp /= 2; 
            }
        }else{
            while(temp%2 != 0){
                count++; 
                temp /= 2; 
            }
        }
        
        op = min(op , count); 
    }
    cout << op << endl;  
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
