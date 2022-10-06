#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n, sum; 
        cin>> n>> sum; 
        if(n> sum){
            // never possible
            cout<< "No"<< endl; 
            continue;
        }
        if(n%2!= 0){
            // n-1(even) times one and n-m+1
            cout<< "Yes"<< endl;
            int ones= n-1; 
            while(ones){
                cout<< 1<< " "; 
                ones--; 
            }
            cout<< sum-n+1<< endl; 
        }else{
            if(sum%2!= 0){
                cout<< "No"<< endl; 
                continue;
            }else{
                cout<< "Yes"<< endl; 
                int ones2= n-2; 
                while(ones2){
                    cout<< 1<< " ";
                    ones2--; 
                }
                int max= (sum-n+2)/2; 
                cout<< max<< " "; 
                cout<< max<< endl; 
            }
        }


    }
    return 0; 
}