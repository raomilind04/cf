#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n;
    cin>> n; 
    vector<int> a(n);
    map<int, int> m;
    for (auto &x : a) {
      cin>> x; 
      m[x] += 1;
    }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    if ((2 * sum) % n != 0) {
      cout<< 0<< endl; 
      return ; 
    }
    long long need = (2 * sum) / n;
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
      int a1 = a[i];
      int a2 = need - a1;
      if (m.count(a2)) ans += m[a2];
      if (a1 == a2) ans -= 1;
    }
    printf("%lld\n", ans / 2);
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