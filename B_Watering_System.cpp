#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n ,A, B; 
    cin>> n>> A>> B; 
    vector<int> holes(n-1); 
    int hole1; 
    cin>> hole1; 
    int sum= hole1; 
    for(int i= 0; i< n-1; i++){
        int num; 
        cin>> num;
        sum+= num; 
        holes[i]= num;
    }
    sort(holes.begin(), holes.end()); 
    double water= ((double) hole1)*((double) A)/ ((double) sum); 
    if(water>= B){
        cout<< 0<< endl; 
        return 0; 
    }
    int count= 1; 
    for(int i= n-2; i>= 0; i--){
        sum-= holes[i]; 
        water= ((double) hole1)*((double) A)/ ((double) sum);
        if(water>= B){
            cout<< count<< endl; 
            return 0; 
        }
        count++; 
    }
    
    return 0; 
}