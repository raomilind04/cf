#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n , m; 
    cin >> n >> m; 
    if(m > n){
        cout << "NO" << endl; 
        return ; 
    }
    if(n == m){
        cout << "YES" << endl; 
        return ; 
    }
    int i = 1; 
    while(n >= 0){
        if(n%3 == 0){
            int temp = n/3;  
            for(int j = 0 ; j <= i ; j++){
                int temp2 = temp*pow(2,j); 
                if(temp2 == m || n-temp2 == m){
                    cout << "YES" << endl; 
                    return ;
                }
            }
            n = temp;
            i++; 
        }else{
            break; 
        }
    }
    cout << "NO" << endl; 
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