#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int n, k; 
    cin>> n>> k; 
    string s; 
    cin>> s;  
    int ansb= INT_MIN; 
    int count= 0; 
    int low= 0; 
    for(int i= 0; i< n; i++){
        if(s[i]== 'a'){
            count++;
        }
        if(count> k){
            while(count> k){
                if(s[low]== 'a'){
                    count--; 
                }
                low++; 
            }
        }
        ansb= max(ansb, i-low+1); 
    }
    int ansa= 0; 
    count= 0; 
    low= 0; 
    for(int i= 0; i< n; i++){
        if(s[i]== 'b'){
            count++;
        }
        if(count> k){
            while(count> k){
                if(s[low]== 'b'){ 
                    count--; 
                }
                low++; 
            }
        }
        ansa= max(ansa, i-low+1); 
    }
    int res= max(ansa, ansb); 
    cout<< res<< endl; 
    return 0; 
}
