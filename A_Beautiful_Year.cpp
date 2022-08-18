#include <bits/stdc++.h>
using namespace std; 

int main(){
    int y; 
    cin>> y; 
    while(1){
        y+= 1; 
        int dig1= y/1000;
        int dig2= y/100 %10; 
        int dig3= y/10 %10; 
        int dig4= y %10; 
        if(dig1!= dig2 && dig1!= dig3 && dig1!= dig4 && dig2!= dig3 && dig2!= dig4 && dig3!= dig4){
            break; 
        } 
    }
    cout<< y; 
    return 0; 
}