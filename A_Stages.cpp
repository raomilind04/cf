#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, k; 
    cin>> n>> k; 
    vector<int> present(26, 0); 
    for(int i= 0; i< 26; i++){
        char curr; 
        cin>> curr; 
        if(present[curr- 'a']== 0){
            present[curr- 'a']= 1; 
        }

    }
    int w= 0; 
    for(int i= 0; i< 26; i++){
        if(present[i]== 1){
            w+= (i+1);
            i++; 
            k--;
        }
        if(k== 0){
            break; 
        }
    }
    if(k!= 0){
        cout<< -1; 
        return 0; 
    }
    cout<< w; 
}