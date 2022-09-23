#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n;
        cin>> n; 
        string t; 
        cin>> t; 
        vector<int> remove; 
        for(int i= 0; i< t.size(); i++){
            if(t[i]== '0'){
                remove.push_back(i+1); 
            }
        }
        if(remove.size()== 0){
            cout<< 0<< endl; 
            continue;
        }
        vector<bool> removed(n+1, false); 
        int ans= 0; 
        for(int i= 0; i< remove.size(); i++){
            int mul= 1; 
            while(binary_search(remove.begin(), remove.end(), mul*remove[i])){
                if(!removed[mul*remove[i]]){
                    ans+= remove[i]; 
                }
                removed[mul*remove[i]]= true; 
                mul++; 
            }

        }
        cout<< ans<< endl; 
        
    }
    return 0; 
}