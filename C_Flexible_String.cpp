#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n , k; 
    cin >> n >> k; 
    string a , b; 
    cin >> a >> b; 
    ll count = 0 ;
    vector<int> arr(26 , 0); 
    for(int i = 0 ; i < n ; i++){
        if(a[i] == b[i]){
            count ++; 
        }else{
            arr[a[i]-'a']++; 
        }
    }
    sort(arr.begin() , arr.end()); 
    for(int i = 0 ; i < 26-k ; i++){
        count -= arr[i]; 
    }
    cout << count << endl; 
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
