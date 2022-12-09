#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int n; 
    cin>> n; 
    vector<int> v(n); 
    for(int i= 0; i< n; i++){
        cin>> v[i]; 
    }
    priority_queue<int> pq; 
    int temp= n; 
    for(int i= 0; i< n; i++){
        pq.push(v[i]); 
        while(pq.size()!= 0 && pq.top()== temp){
            cout<< temp<< " ";
            temp--;  
            pq.pop(); 
        }
        cout<< endl; 
    }
    return 0; 
}
