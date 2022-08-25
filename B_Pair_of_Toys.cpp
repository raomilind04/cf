#include <bits/stdc++.h>
using namespace std; 

int main(){
    /* 
    TLE
    long long n, k; 
    cin>> n>> k; 
    // 1 2 3 4 5 6 7 8  
    long long low= 1;
    long long high= n;
    long long count= 0; 
    while(high- low> 1){
        if(high+ low== k){
            count++; 
            low++;
        }
        if(high+ low> k){
            high--; 
        }else if (high+ low< k){
            low++; 
        }
    } 
    if(high== low){
        cout<< count; 
        return 0; 
    }
    if(high+ low== k){
        cout<< count+1; 
        return 0; 
    }

    cout<< count;
    return 0;  */
    
      long long n,k;
    cin>>n>>k;
    if(n>=k)
        cout<<(k-1)/2<<endl;
    else
    {
        if(2*n-1<k)
            cout<<"0"<<endl;
        else
            cout<<n-k/2<<endl;
    }
    return 0;
}