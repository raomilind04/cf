#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    vector<int> a(n); 
    for(int i= 0; i< n; i++){
        cin>> a[i]; 
    }
    vector<int> b(n); 
    for(int i= 0; i< n; i++){
        cin>> b[i]; 
    }
    vector<vector<int>> move; 
    int count= 0; 
    for(int i= 0; i< n; i++){
        for(int j= i+1; j< n; j++){
            vector<int> temp; 
            if(a[j]< a[i]){
                temp.push_back(i+1); 
                temp.push_back(j+1); 
                count++; 
                swap(a[i], a[j]); 
                swap(b[i], b[j]); 
                move.push_back(temp); 
            }
        }
    }
    for(int i= 0; i< n; i++){
        for(int j= i+1; j< n; j++){
            vector<int> temp; 
            if(b[j]< b[i]){
                temp.push_back(i+1); 
                temp.push_back(j+1); 
                count++; 
                swap(a[i], a[j]); 
                swap(b[i], b[j]); 
                move.push_back(temp); 
            }
        }
    }
    if(is_sorted(a.begin(), a.end())){
        cout<< count<< endl; 
        for(int i= 0; i< move.size(); i++){
            cout<< move[i][0]<< " "<< move[i][1]<< endl; 
        }
    }else{
        cout<< -1<< endl; 
    }

}

int main(){
    int t; 
    cin>> t; 
    while(t--){
        solve(); 
    }
    return 0;
}