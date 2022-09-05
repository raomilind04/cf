#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s; 
    cin >> s; 
    string h, m; 
    h.push_back(s[0]); 
    h.push_back(s[1]);
    m.push_back(s[3]); 
    m.push_back(s[4]);  

    int count = 0; 
    int mm , hh;
    while(1){
        if(h[0] == m[1] && h[1]== m[0]){
            break; 
        }
        mm= ((m[0]-48)*10)+ (m[1]-48); 
        hh= ((h[0]-48)*10)+ (h[1]-48); 
        mm++; 
        if(mm== 60){
            hh++; 
            mm= 0; 
        }
        if(hh> 23){
            hh= 0; 
        }
        // convert back to string 
        int j= mm%10; 
        mm= mm/10; 
        m[1]= j+48; 
        m[0]= mm+48; 

        int i= hh%10; 
        hh= hh/10; 
        h[1]= i+48; 
        h[0]= hh+48; 

        count++; 
    }

    cout << count; 

    return 0; 
}