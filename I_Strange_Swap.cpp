#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
   int n; 
   cin>> n; 
   vector<pair<int,int>> a; 
   for(int i= 0; i< n; i++){
    int temp; 
    cin>> temp; 
    a.push_back({temp,i}); 
   }
   sort(a.begin(), a.end()); 
   vector<int> swaps(n); 
   for(int i= 0; i< n; i++){
    swaps[i]= abs(i-a[i].second); 
   }
   for(int i= 0; i< n; i++){
    if(swaps[i]%2!= 0){
        cout<< "NO"<< endl; 
        return ; 
    } 
   }
   cout<< "YES"<< endl;
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