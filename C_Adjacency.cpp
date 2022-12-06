#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int n; 
    cin>> n; 
    if(n== 1){
        cout<< 1<< endl; 
        return ; 
    }
    if(n== 2){
        cout<< -1<< endl; 
        return ; 
    }
    int ans[n][n]; 
    if(n%2== 0){
        int curr= 1; 
        for(int i= 0; i< n; i++){
            if(i%2== 0){
                for(int j= 0; j< n; j+= 2){
                    ans[i][j]= curr; 
                    curr++; 
                }
            }else{
                for(int j= 1; j< n; j+= 2){
                    ans[i][j]= curr; 
                    curr++; 
                }
            }
        }
        for(int i= 0; i< n; i++){
            if(i%2== 1){
                for(int j= 0; j< n; j+= 2){
                    ans[i][j]= curr; 
                    curr++; 
                }
            }else{
                for(int j= 1; j< n; j+= 2){
                    ans[i][j]= curr; 
                    curr++; 
                }
            }
        }
    }else{
        int curr= 1; 
        int temp= 0; 
        while(curr<= pow(n,2)){
            int idx= temp/n; 
            idx%= n; 
            int idy=temp%n; 
            ans[idx][idy]=curr;
            curr++;
            temp+=2;

        }
    }
    for(int i= 0; i< n; i++){
        for(int j= 0; j< n; j++){
            cout<< ans[i][j]<< " "; 
        }
        cout<< endl; 
    }
}

int main(){
    int t; 
    cin>> t; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}