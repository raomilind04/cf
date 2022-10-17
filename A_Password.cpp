#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> no(10, 0);
        for(int i= 0; i< n; i++){
            int temp; 
            cin>> temp; 
            no[temp]= 1; 
        }
        vector<int> use; 
        for(int i= 0; i< 10; i++){
            if(no[i]== 0){
                use.push_back(i); 
            }
        }
        int sz= use.size(); 
        int ways= (sz*(sz-1))/2; 
        cout<< ways*6<< endl; 
    }
    return 0; 
}