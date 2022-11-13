#include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int t; 
    cin>> t; 
    while(t--){

    }
    return 0; 
}





/* #include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> v(n); 
        for(int i= 0; i< n; i++){
            cin>> v[i];
        }
        int res= 0; 
        int sum= 0; 
        for(int i= 0; i< n; i++){
            if(v[i]== 0){
                v[i]= -1*sum; 
                sum= 0;
                res++; 
            }else{
                sum+= v[i]; 
                if(sum== 0){
                    res++; 
                }
            }
        }
        for(int i= n-1; i>= 0; i++){
            
        }
        cout<< res<< endl; 

    }
    return 0; 
} */