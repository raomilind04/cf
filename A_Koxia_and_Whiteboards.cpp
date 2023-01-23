#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;


ll minIn(ll a[],ll n)
{
    ll minIn=0;
    for(ll i=0;i<n;i++)
    {
        if(a[minIn]>a[i])
            minIn=i;
    }
    return minIn;
}
ll sum(ll a[],ll n)
{
    ll sum=0;
    for(ll i=0;i<n;i++)
        sum+=a[i];
    return sum;
}

void solve(){
    ll n,m;
        cin >> n >> m;
        ll a[n],b[m];
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<m;i++)
            cin >> b[i];
        ll j=0;
        while(j<m)
        {
            a[minIn(a,n)]=b[j];
            j++;
        } 
        cout << sum(a,n) << endl;
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
