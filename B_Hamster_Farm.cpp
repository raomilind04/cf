#include <bits/stdc++.h>
using namespace std; 

int main(){
    /* long long n, k; 
    cin>> n>> k; 
    long long cap[k]; 
    for(long long i= 0; i< k; i++){
        cin>> cap[i]; 
    }
    long long left= INT_MAX; 
    long long index= 1; 
    for(long long i= 0; i< k; i++){
        long long mod= n% cap[i]; 
        if(mod< left){
            left= mod; 
            index= i; 
        } 

    }
    cout<< index+1<< " "<< n/cap[index]; 
    return 0;  */

    long long n,k,a[100001];
    cin>>n>>k;
    for(long long i=0; i<k; i++){
        cin>>a[i];
    }
    long long ans = 0,type = 0,mod = 0;
    vector< pair<long long,long long> >v;
    for(long long i=0; i<k; i++){
        mod = n % a[i];
        v.push_back(make_pair(mod,i));
    }
    sort(v.begin(),v.end());
    type = v[0].second;
    ans = n / a[type];

    cout<<type+1<<" "<<ans<<endl;


    return 0;
}