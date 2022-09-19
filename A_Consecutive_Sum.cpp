#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n, k; 
        cin>> n>> k; 
        vector<int> arr(n); 
        for(int i= 0; i< n; i++){
            cin>> arr[i]; 
        }
        vector<int> final(k); 
        for(int i= 0; i< n; i++){
            final[(i+1)%k]= max(final[(i+1)%k], arr[i]); 
        }
        long long sum= 0; 
        for(int i= 0; i< k; i++){
            sum+= final[i]; 
        }
        cout<< sum<< endl;
    }
    return 0; 
}