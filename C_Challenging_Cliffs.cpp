#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> arr(n); 
        for(int i= 0; i< n; i++){
            cin>> arr[i]; 
        }
        sort(arr.begin(), arr.end()); 
        if(n==2){
            for(int i= 0; i< 2; i++){
                cout<< arr[i]<< " ";
            }
            cout<< endl;
            continue;
        }
        int mini= INT_MAX; 
        pair<int, int> idx; 
        for(int i= 1; i< n; i++){
            int diff= abs(arr[i]- arr[i-1]); 
            if(mini> diff){
                mini= diff; 
                idx= {i,i-1}; 
            }
        }
        int temp= idx.first; 
        vector<int> ans(n); 
        int j= 0; 
        for(int i= temp; i< n; i++){
            ans[j]= arr[i]; 
            j++; 
        }
        for(int i= 0; i< temp; i++){
            ans[j]= arr[i]; 
            j++; 
        }
        for(int i= 0; i< n; i++){
            cout<< ans[i]<< " "; 
        }
        cout<< endl;
    }
    return 0; 
}