#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;

void solve(){
    int W, H; 
    cin>> W>> H; 
    int x1, y1, x2, y2; 
    cin>> x1>> y1>> x2>> y2; 
    int w,h; 
    cin>> w>> h; 
    int yt, yb, xr, xl; 
    yt= H-y2; 
    yb= y1; 
    xr= W-x2; 
    xl= x1; 

    int ans = INT_MAX;
	if (x2 - x1 + w <= W) {
		ans = min(ans, max(0, w - x1));
		ans = min(ans, max(0, x2 - (W - w)));
	}
	if (y2 - y1 + h <= H) {
		ans = min(ans, max(0, h - y1));
		ans = min(ans, max(0, y2 - (H - h)));
	}
    if(ans== INT_MAX){
        cout<< -1<< endl; 
        return ; 
    }
    cout<< ans<< endl; 
    return ; 
    
    /* if(w<= xl || w<= xr){
        cout<< 0<< endl; 
        return ; 
    }
    if(h<= yt || h<= yb){
        cout<< 0<< endl; 
        return ; 
    }
    if(xl+xr< w && yt+yb< h){
        cout<< -1<< endl; 
        return ; 
    }
    if(xl+xr>= w){
        cout<< w-max(xl, xr)<< endl;
        return ;  
    }
    if(yt+yb>= h){
        cout<< h-max(yt, yb)<< endl;
        return ;  
    }
    ll diff1= w-max(xr,xl); 
    ll diff2= h-max(yt, yb); 
    double res= sqrt(diff1*diff1 + diff2*diff2); 
    cout<< res<< endl; 
    return ;  */
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