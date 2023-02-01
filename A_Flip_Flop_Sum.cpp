#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n ; 
    cin >> n; 
    vector<int> arr(n); 
    int sum = 0; 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; 
        sum += arr[i]; 
    }
    bool tn = false; 
    bool tp = false; 
    bool tnone = false; 
    int count = arr[n-1]; 
    for(int i = 0 ; i < n-1 ; i++){
        count += arr[i]; 
        if(arr[i] == -1 && arr[i+1] == -1){
            tn = true; 
        }else if(arr[i] == 1 && arr[i+1] == 1){
            tp = true; 
        }else{
            tnone = true; 
        }
    }
    if(tn){
        cout << sum+4 << endl; 
        return ; 
    }
    if(sum == n){
        cout << sum-4 << endl; 
        return ; 
    }
    cout << sum << endl ;
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
