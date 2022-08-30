#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int grade[n]; 
    int sum= 0;
    for(int i= 0; i< n; i++){
        int temp; 
        cin>> temp; 
        grade[i]= temp; 
        sum+= temp; 
    }
    sort(grade, grade+n); 
    double avg= (double)sum/(double)n;
    if(avg>= 4.5){
        cout<< 0; 
        return 0; 
    }
    int count= 1; 
    for(int i= 0; i< n; i++){
        sum= sum- grade[i] + 5; 
        avg= (double)sum/(double)n ;
        if(avg>= 4.5){
        cout<< count; 
        return 0; 
        }
        count++; 

    }

    
    return 0; 
}