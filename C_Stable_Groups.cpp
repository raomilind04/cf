#include <bits/stdc++.h>
using namespace std; 

int main(){
        long long n,k,x; 
        cin>> n>> k>> x; 
        vector<long long> v(n); 
        for(int i= 0; i< n; i++){
            cin>> v[i]; 
        }
        sort(v.begin(), v.end());
        if(n== 1){
            cout<< 1<< endl; 
           return 0; 
        }
        vector<long long> need(n-1); 
        for(int i= 0; i< n-1; i++){
            long long diff= v[i+1]- v[i]; 
            if(diff<= x){
                need[i]= 0; 
            }else{
                long long temp= diff-x; 
                need[i]= temp/x + (temp%x != 0); 
            }
        }
        sort(need.begin(), need.end()); 
        int res= n; 
        for(auto i : need){
            if(i<= k){
                k-= i; 
                res--; 
            }
        }
        cout<< res<< endl; 
 
    return 0; 
}