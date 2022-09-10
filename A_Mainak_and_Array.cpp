#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> nums(n ,0); 
        for(int i= 0; i< n; i++){
            cin>> nums[i]; 
        }
        int ans= INT_MIN; 
        for(int i= 1; i< n; i++){
            ans= max(ans, nums[i]- nums[0]); 
        }
        for(int i= 0; i< n-1; i++){
            ans= max(ans, nums[n-1]- nums[i]); 
        }
        for(int i= 0; i< n; i++){
            ans= max(ans, nums[(i-1+n)%n]- nums[i]); 
        }
        cout<< ans<< endl; 
    }
    return 0; 
}