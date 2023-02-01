#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){   
    int n , m , d; 
    cin >> n >> m >> d; 
    vector<int> p(n); 
    vector<int> a(m); 
    for(int i = 0 ; i < n ; i++){
        cin >> p[i]; 
    }
    for(int i = 0 ; i < m ; i++){
        cin >> a[i]; 
    }
    int count = 0; 
    int pre = -1; 
    for(int i = 0 ; i < m ; i++){
        int temp = -1; 
        for(int j = 0 ; j < n ; j++){
            if(p[j] == a[i]){
                temp = j; 
                break; 
            }
        }  
        if(pre != -1){
            if(temp <= pre){
                count += (pre-temp+d)/d; 
            }
        }
        pre = temp;     
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
