#include <bits/stdc++.h>
using namespace std; 

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    if (n == 2 || n == 3)
        return true;
    
    if (n % 2 == 0 || n % 3 == 0)
        return false;
   
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

int main(){
    int m, n; 
    cin>> n>> m;
    if(!isPrime(m)){
        cout<< "NO"<<endl;
        return 0; 
    }
    for(int i= n+1; i<= m; i++){
        if(isPrime(i)){
            if(i== m){
                cout<< "YES"<< endl; 
                break; 
            }else{
                cout<< "NO"<< endl; 
                break; 
            }
        }
    }
    return 0; 
}