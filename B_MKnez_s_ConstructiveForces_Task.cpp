#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n ; 
    cin >> n; 
    if(n == 3){
        cout << "NO" << endl; 
        return ; 
    } 
    if(n%2 == 0){
        bool flag = true ;
        cout << "YES" << endl ; 
        for(int i = 0 ; i < n ; i++){
            if(flag){
                cout << 1 << " " ; 
            }else{
                cout << -1 << " " ; 
            }
            flag = !flag ;
        }
        cout << endl ; 
        return ; 
    }
    bool flag = true; 
    cout << "YES" << endl ; 
    for(int i = 0 ; i < n ; i++){
        if(flag == true){
            cout << n/2-1 << " " ;
        }else{
            cout << -1*n/2 << " "; 
        }
        flag = !flag ; 
    }
    cout << endl ; 
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
