#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    int max, min; 
    int count= 0; 
    int score; 
    cin>> score; 
    min= score; 
    max= score; 
    for(int i= 1; i< n; i++){
        cin>> score; 
        if(score> max){
            count++; 
            max= score; 
        }
        if(score< min){
            count++; 
            min= score; 
        }
    }
    cout<< count<< endl; 

    return 0; 
}