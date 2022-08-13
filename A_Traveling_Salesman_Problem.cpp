#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t; 
	cin>> t; 
	while(t--){
		ll n ; 
		cin>> n; 
		ll minx= 0, maxx= 0, miny= 0, maxy= 0; 
		ll x, y; 
		for(ll i= 1; i<= n; i++){
			cin>> x>> y; 
			maxx= max(maxx, x); 
			minx= min(minx, x); 
			maxy= max(maxy, y); 
			miny= min(miny, y); 
		}

		cout<< 2*(abs(minx)+ abs(miny)+ abs(maxx)+ abs(maxy))<< "\n"; 
	}
	return 0; 
}