#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 
 
int main(){
    map <int,int> mp;
    ll n, k, i = 1, d;
    cin>> n ;
    int a[n];
 
    for (i= 0; i< n; i++ ){
        cin>> a[i];
        mp[a[i]] ++;
    }
    int m, idx = 0;
    cin >> m ;
    int aud[m];
    int sub[m];
    int mx = 0, res;
 
    for(int i= 0; i< m; i++){
        cin >> aud[i];
    }
    for(int i= 0; i< m; i++){
        cin >> sub[i];
    }
    for(int i= 0; i< m; i++){
        if (mp[aud[i]] > mx || mp[aud[i]] == mx && mp[sub[i]] > mp[sub[idx]]){
            idx = i ; 
            mx = mp[aud[i]];
        }
    }
    cout << idx + 1;
}