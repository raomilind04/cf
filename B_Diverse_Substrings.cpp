/* #include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        ll n; 
        cin>> n; 
        string s; 
        cin>> s; 
        ll ans= 0; 
        for(ll i= 0; i< s.length(); i++){
            int 
        }

    }
    return 0; 
} */





#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<char> v(n); 
        for(int i= 0; i< n; i++){
            cin>> v[i]; 
        }
        int temp= 0; 
        int maxi= INT_MIN;
        long long res= 0; 
        for(int i= 0; i< n; i++){
            unordered_map<int, int> m; 
             temp= 0; 
             maxi= INT_MIN; 
            for(int j= i; j< min(n,i+100); j++){
                if(m.find(v[j]- '0')== m.end()){
                    temp++; 
                }
                m[v[j]- '0']++; 
                for(auto it: m){
                    maxi= max(maxi, it.second); 
                }
                if(maxi<= temp){
                    res++; 
                }

            }
        }
        cout<< res<< endl; 
    }
    return 0; 
}
