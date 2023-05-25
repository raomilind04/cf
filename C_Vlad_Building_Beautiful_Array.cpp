#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int a; 
    cin >> a; 
    vector<int> arr(a);
    for(int i = 0 ; i < a ; i++){
        cin >> arr[i];
    } 
    sort(arr.begin() , arr.end()); 
    if(arr[0]%2 != 0){
        cout << "YES" << endl; 
        return; 
    }
    for(int i = 1 ; i < a ; i++){
        if(arr[i]%2 != 0){
            cout << "NO" << endl; 
            return ; 
        }
    }
    cout << "YES" << endl; 
    return; 
}

int main(){
    int t; 
    cin >> t; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}
