
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n;
    vector<vector<int>> v(2, vector<int> (n));  
    for(int i= 0; i< 2; i++){
        for(int j= 0; j< n; j++){
            cin>> v[i][j]; 
        }
    }
     vector<int> p1(n); 
     p1[0]= v[0][0]; 
     for(int i= 1; i< n; i++){
        p1[i]= p1[i-1]+v[0][i]; 
     } 
     vector<int> p2(n); 
     p2[0]= v[1][0]; 
     for(int i= 1; i< n; i++){
        p2[i]= p2[i-1]+v[1][i]; 
     }
    int mini= INT_MAX; 
    for(int i= 0; i< n; i++){
        int sum1= p1[n-1]-p1[i]; 
        int sum2= p2[i]-v[1][i];
        int temp= max(sum1, sum2); 
        mini= min(mini, temp); 
    }
    cout<< mini<< endl;
    return ; 
}

int main(){
    int t; 
    cin>> t; 
    while(t--){
        solve();
    }
    return 0;
}