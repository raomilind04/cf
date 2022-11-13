#include<bits/stdc++.h>
#define len(s) (int)s.size()
using namespace std;
using ll = long long;
 
void solve(){
    ll a, s;
    cin >> a >> s;
    vector<int>b;
    while(s){
        int x = a % 10;
        int y = s % 10;
        if(x <= y){
            b.push_back(y - x);
        } 
        else{
            s /= 10;
            y += 10 * (s % 10);
            if(x < y && y >= 10 && y <= 19){
                b.push_back(y - x);
            } 
            else{
                cout << -1 << endl;
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if(a) cout << -1 << '\n';
    else{
        while (b.back() == 0) b.pop_back();
        for(int i = len(b) - 1; i >= 0; i--) cout << b[i];
        cout << '\n';
    }
}
 
int main(){
    int t;
    cin >> t;
    while (t){
        solve();
        t--;
    }
    return 0;
}



/* #include <bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
    int t; 
    cin>> t;
    while(t--){
        int a, s; 
        cin>> a>> s; 
        int d1, d2; 
        bool flag =true;
        vector<int> ans; 
        while(s> 0){
            d1= a%10; 
            a/= 10; 
            d2= s%10; 
            s/= 10; 
            if(d1<= d2){
                ans.push_back(d2-d1); 
            }else{
                d2= d2+ (s%10)*10; 
                s/= 10; 
                if(d1< d2 && d2>= 10 && d2<= 19){
                    ans.push_back(d2-d1); 
                }else{
                    cout<< -1<< endl; 
                    flag= false; 
                    break; 
                }
                
            }
        }
        if(flag){
            if(a!= 0){
                cout<< -1<< endl;
            }else{
                while(ans.back()== 0){
                    ans.pop_back(); 
                }
                for(int i= ans.size()-1; i>= 0; i--){
                    cout<< ans[i]; 
                }
                cout<< endl; 
            }
            
        }
    }
    return 0; 
} */