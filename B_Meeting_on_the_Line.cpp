#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n; 
        cin>> n; 
        vector<int> x(n); 
        int s= INT_MAX; 
        int e= INT_MIN; 
        for(int i= 0; i< n; i++){
            int temp; 
            cin>> temp; 
            s= min(temp, s); 
            e= max(e, temp); 
            x[i]= temp; 
        }
        vector<int> t(n); 
        for(int i= 0; i< n; i++){
            cin>> t[i]; 
        }
        double inc= pow(10, -6); 
        int ans= -1;  
        double mini= DBL_MAX; 
        double time= 0; 
        for(double i= s; i<= e; i= i+inc){
            for(int j= 0; j< n; j++){
                time+= (abs(x[j]- i))+t[j]; 
            }
            if(time< mini){
                mini= time; 
                ans= i; 
            }
        }
        cout<< ans<< endl;
    }
    return 0; 
}