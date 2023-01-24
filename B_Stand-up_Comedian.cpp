#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

bool check(int a, int b, int c){
    if(a != 0 || b!= 0 || c!= 0){
        return true; 
    }
    return false; 
}

bool wCheck(int a, int b, int c){
    if((a > 0 || b > 0 || c > 0)){
            return true;  
    }
    return false; 
}

void solve(){
    int a1 , a2 , a3 , a4 ;
    cin >> a1 >> a2 >> a3 >> a4; 
    int count = 0 ; 
    int sum = a1+a2+a3+a4;
    if(sum == 0){
        cout << 0 << endl; 
        return ; 
    }
    if(a1 == 0){
        cout << 1 << endl; 
        return ; 
    }
    count += a1 ; 
    int ha = a1; 
    int hb = a1; 
    int temp = min(a2 , a3);
    while(wCheck(a2 , a3 , a4)){
        if(ha > 0 && a3 > 0){
                int add = min(ha, a3);
                ha -= add; 
                hb += add; 
                count += add;
                a3 -= add;
        }
        else if(hb > 0 && a2 > 0){
                int add = min(hb, a2); 
                ha += add;
                hb -= add; 
                count += add ;
                a2 -= add;
        }
        else if(ha > 0 && a3 > 0){
                int add = min(ha, a3);
                ha -= add; 
                hb += add; 
                count += add;
                a3 -= add;
        }
        else if(ha > 0 && hb > 0 && a4 > 0){
                int mh = min(ha , hb); 
                int add = min(mh , a4);
                ha -= add; 
                a4 -= add; 
                hb -= add;
                count += add; 
        }
        else{
            if(check(a2, a3,a4)){
                count++; 
                break; 
            }
        }   
    }
    cout << count << endl; 
    return ; 
}

int main(){
    int t; 
    cin>> t; 
    while(t){
        solve(); 
        t--; 
    }
    return 0;
}
