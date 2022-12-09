#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    priority_queue<int> pq; 
    for(int i= 1; i<= n; i++){
        pq.push(i); 
    }
    if(n== 1){
        cout<< 1<< endl; 
    }
    vector<vector<int>> res; 
    while(1){
        vector<int> temp; 
        int a= pq.top(); 
        pq.pop(); 
        int b= pq.top(); 
        pq.pop(); 
        temp.push_back(a); 
        temp.push_back(b);
        res.push_back(temp);  
        pq.push((a+b+1)/2); 
        if(pq.size()== 1){
            break; 
        }
    }
    cout<< pq.top()<< endl; 
    for(int i= 0; i< res.size(); i++){
        cout<< res[i][0]<< " "<< res[i][1]<< endl; 
    }
    cout<< endl; 
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