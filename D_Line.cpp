#include <bits/stdc++.h>
using namespace std; 

int main(){
    long long t; 
    cin>> t; 
    while(t--){
        long long n; 
        cin>> n; 
        string s; 
        cin>> s;
        vector<long long> v, ans; 
        long long sum= 0; 
        for(long long i= 0; i< n; i++){
            if(s[i]== 'L'){
                sum+= i; 
            }else{
                sum+= n-i-1; 
            }

            if(i< n-1-i && s[i]== 'L'){
                v.push_back(n-1-i-i); 
            }else if(i> n-1-i && s[i]== 'R'){
                v.push_back(i-(n-i-1)); 
            }
        }
        sort(v.rbegin(), v.rend()); 
        long long res= 0; 
        for(long long i= 0; i< v.size(); i++){
            res+= v[i]; 
            ans.push_back(res+ sum); 
        } 
        for(int i= v.size(); i< n; i++){
            ans.push_back(res+ sum); 
        }
        for(long long i= 0; i< ans.size(); i++){
            cout<< ans[i]<< " "; 
        }
        cout<< endl; 
    }
    return 0; 
}