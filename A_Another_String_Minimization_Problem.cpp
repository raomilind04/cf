#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n, m; 
        cin>> n>> m; 
        int arr[n]; 
        string str(m, 'B'); 
        for(int i= 0; i< n; i++){
            cin>> arr[i]; 
        }
        int index1;
        int index2;  
        for(int i= 0; i< n; i++){
            int sum= arr[i]+ m-arr[i]+1; 
            index1= min(arr[i], m- arr[i]+ 1); 
            index2= sum- index1; 
            if(str[index1-1]== 'B'){
                str[index1-1]= 'A' ;
            }else{
                str[index2-1]= 'A'; 
            }   
        }
        cout<< str<< endl; 
    }
}