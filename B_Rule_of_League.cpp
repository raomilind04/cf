#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n, x, y; 
        cin>> n>> x>> y;
        if(min(x, y)!= 0){
            cout<< -1<< endl; 
            continue;
        }
        if(max(x,y)== 0){
            cout<< -1<< endl; 
            continue;
        }
         x= max(x, y); 
        if((n-1)%x== 0){
            int winner= 1; 
            int wins= 0; 
            for(int i= 0; i< n-1; i++){
                if(x== wins){
                    wins= 0; 
                    winner= i+2; 
                }
                wins++; 
                cout<< winner<< " "; 
            }
            cout<< endl; 
        }else{
            cout<< -1<< endl; 
        }

        /* vector<int> ans; 
        int winner= 1; 
        int wins= max(x, y); 
        for(int i= 1; i<= n; i++){
            if(wins> 0){
                ans.push_back(winner);
                wins--; 
            }else if(wins== 0){
                if(i!= n){
                    winner= i+1; 
                    wins= max(x, y);
                }
               
            }
        }
        if(wins!= 0){
            cout<< -1<< endl; 
            continue;
        }
        for(int i= 0; i< ans.size(); i++){
            cout<< ans[i]<< " ";
        }
        cout<< endl;  */
    }
    return 0; 
}