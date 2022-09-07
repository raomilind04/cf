#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector<int> pos(3); 
    for(int i= 0; i< 3; i++){
        cin>> pos[i]; 
    }
    int d; 
    cin>> d; 
    sort(pos.begin(), pos.end()); 
    int d1= abs(pos[1]- pos[0]); 
    int d2= abs(pos[1]- pos[2]);
    int time= 0; 
    if(d1< d){
        time+= abs(d-d1); 
    }
    if(d2< d){
        time+= abs(d-d2); 
    }
    cout<< time; 
    return 0;
}