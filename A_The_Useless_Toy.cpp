#include <bits/stdc++.h>
using namespace std; 

int main(){
    char c1, c2; 
    cin>> c1>> c2; 
    int n; 
    cin>> n; 
    n= n%4; 
    int start; 
    if(c1== '^'){
        start= 0; 
    }else if(c1== '>'){
        start= 1;
        
    }else if(c1== 'v'){
        start= 2; 
    }else if(c1== '<'){
        start= 3; 
    }
    int end; 
    if(c2== '^'){
        end= 0; 
    }else if(c2== '>'){
        end= 1;
        
    }else if(c2== 'v'){
        end= 2; 
    }else if(c2== '<'){
        end= 3; 
    }
    if(start== end || abs(start-end)== 2){
        cout<< "undefined"; 
        return 0; 
    }
    int cwEnd= (start+n)%4; 
    int ccwEnd= (start+ (4-n))%4;

    if(cwEnd== end){
        cout<< "cw"; 
        return 0; 
    }else if(ccwEnd== end){
        cout<< "ccw"; 
        return 0; 
    }
    cout<< "undefined"; 
    return 0; 
}