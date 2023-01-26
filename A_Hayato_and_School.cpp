#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n ; 
    cin >> n; 
    vector<int> arr(n); 
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i]; 
    }
    vector<int> oi; 
    vector<int> ei;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]%2 == 0){
            ei.push_back(i+1); 
        }else{
            oi.push_back(i+1);
        }
    }
    int co = oi.size(); 
    int ce = ei.size(); 
    if(co >= 3){
        cout << "YES" << endl; 
        cout << oi[0] << " "; 
        cout << oi[1] << " "; 
        cout << oi[2] << " "; 
        cout << endl; 
        return ;
    }
    if(ce >= 2 && co >= 1){
        cout << "YES" << endl; 
        cout << ei[0] << " "; 
        cout << ei[1] << " "; 
        cout << oi[0] << " "; 
        cout << endl; 
        return ; 
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
