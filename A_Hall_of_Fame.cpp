#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; cin >> n;
        string s; std::cin >> s;
        long long ans(-1);
        for(int i = 1; (ans < 0) && i < n; i++){
            if(s[i - 1] == 'R' && s[i] == 'L'){
                ans = 0; 
                break;
            }
        }
        for(int i = 1; (ans < 0) && i < n; i++){
            if(s[i - 1] == 'L' && s[i] == 'R'){
                ans = i; 
                break;
            }
        }
        cout << ans << endl; 
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
