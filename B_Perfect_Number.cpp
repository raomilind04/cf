#include <bits/stdc++.h>
using namespace std; 

int sum(int num){
    int ans= 0; 
    while(num){
        ans+= num%10; 
        num/= 10; 
    }
    return ans; 
}
int main(){
    int n; 
    cin>> n; 
    int ans= 0; 
    while(n){
        ans++; 
        if(sum(ans)== 10){
            n--; 
        }
    }
    cout<< ans; 
    return 0; 
}