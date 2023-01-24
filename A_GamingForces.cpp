#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin >> n; 
    vector<int> h(n); 
    for(int i = 0 ; i <n ; i++){
        cin >> h[i]; 
    }
    int count = 0; 
    for(int i = 0 ; i < n ; i++){
        if(h[i] == 1){
            count++; 
        }
    }
    if(count == 0){
        cout << n << endl;
        return ; 
    }
    if(count%2 == 0){
        cout << n-count+count/2 << endl; 
        return ; 
    }
    cout << n-count+count/2+1 << endl; 
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
