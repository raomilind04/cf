#include <bits/stdc++.h>
using namespace std; 

int main(){
    int t; 
    cin>> t; 
    while(t--){
        int n, m; 
        cin>> n>> m; 
        vector<vector<int>> grid(n, vector<int> (m)); 
        for(int i= 0; i< n; i++){
            for(int j= 0; j< m; j++){
                cin>> grid[i][j]; 
            }
        }
        int ans= INT_MIN; 
        for(int i= 0; i< n; i++){
            for(int j= 0; j< m; j++){
                int currSum= 0; 
                int currx= i; 
                int curry= j; 
                while(currx>= 0 && curry>= 0 && currx< n && curry< m){
                    currSum+= grid[currx][curry]; 
                    currx--; 
                    curry--; 
                }
                currx= i; 
                curry= j; 
                while(currx>= 0 && curry>= 0 && currx< n && curry< m){
                    currSum+= grid[currx][curry]; 
                    currx++; 
                    curry--; 
                }
                currx= i; 
                curry= j; 
                while(currx>= 0 && curry>= 0 && currx< n && curry< m){
                    currSum+= grid[currx][curry]; 
                    currx--; 
                    curry++; 
                }
                currx= i; 
                curry= j; 
                while(currx>= 0 && curry>= 0 && currx< n && curry< m){
                    currSum+= grid[currx][curry]; 
                    currx++; 
                    curry++; 
                }
                currSum-= grid[i][j]*3; 
                ans= max(ans, currSum); 
            }
            
        }
        cout<< ans<< endl;
    }
    return 0; 
}