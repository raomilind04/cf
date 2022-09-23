#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n ; 
        cin>> n; 
        vector<int> nums(n); 
        for(int i= 0; i< n; i++){
            cin>> nums[i]; 
        }
        sort(nums.begin(), nums.end()); 
        vector<int> diff; 
        for(int i= 1; i< n; i++){
            int temp= nums[i]-nums[i-1]; 
            diff.push_back(temp); 
        }
        int mini= INT_MAX; 
        for(int i= 0; i<= diff.size()-2; i++){
            int sum= diff[i]+diff[i+1]; 
            mini= min(mini, sum); 
        }
        cout<< mini<< endl; 
    }
    return 0; 
}