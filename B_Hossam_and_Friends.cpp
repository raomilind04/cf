#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
     int n, m;
        cin>>n>>m;
        int u, v;
        vector<int> r(n, n+1);
        for(int i=0;i<m;i++) {
            cin>>u>>v;
            u--;
            v--;
            if(u<v) {
                r[u]=min(r[u], v);
            }
            else {
                r[v]=min(r[v], u);
            }
        }
        vector<int> b(n);
        b[n-1]=n-1;
        ll res=1;
        for(int i=n-2;i>=0;i--) {
            b[i]=min(r[i]-1, b[i+1]);
            res+=(b[i]-i+1);
        }
        cout<<res<<endl;
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