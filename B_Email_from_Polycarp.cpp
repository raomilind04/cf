#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
using namespace std;
///////////////////////

void solve(){
	
	string a , b;
	cin >> a >> b;
	int alen = (int)a.size();

	int blen = (int)b.size();
	if(alen > blen){
		puts("NO");
		return ;
	}
	vector <pair < char,int > > v1,v2;
	for(int i =0 ; i < alen ; i++){
		
		
		int cnt = 0;
		int j = i;
		while (j < alen){
			if(a[i]!=a[j])
				break ;
			cnt ++;
			j++;
		}
		v1.eb(a[i],cnt);
		i= j-1 ;
	}
	
	a = b;
	alen = blen;
	for(int i =0 ; i < alen ; i++){
		
		
		int cnt = 0;
		int j = i;
		while (j < alen){
			if(a[i]!=a[j])
				break ;
			cnt ++;
			j++;
		}
		v2.eb(a[i],cnt);
		i= j-1 ;
	}

	alen = v1.size();
	blen = v2.size();
	if(alen!=blen){
		puts("NO");
		return ;
	}
	
	for(int i =0 ; i < alen ; i++){
		if(v1[i].first!=v2[i].first){
			puts("NO");
			return ;
		}
		if(v1[i].second > v2[i].second){
			puts("NO");
			return ;
		}
		
	}
	puts("YES");
	
}

int main()
{
	boost;
	int n;
	cin >> n;
	while(n--)
		solve();
    return 0;
}






/* #include <bits/stdc++.h>
using namespace std; 

int main(){
    int n; 
    cin>> n; 
    while(n--){
        string s1, s2; 
        cin>> s1; 
        cin>> s2; 
        if(s1.length()> s2.length()){
            cout<< "NO"<< endl; 
            continue;
        }
        vector<pair<char,int>> v1, v2; 
        for(int i= 0; i< s1.length(); i++){
            int count= 0;
            int j= i; 
            while(j< s1.length()){
                if(s1[i]!= s1[j]){
                    break; 
                }
                count++; 
                j++; 
            } 
            v1.push_back({s1[i], count}); 
            i= j-1; 
        }
        for(int i= 0; i< s2.length(); i++){
            int count= 0;
            int j= i; 
            while(j< s2.length()){
                if(s2[i]!= s2[j]){
                    break; 
                }
                count++; 
                j++; 
            } 
            v2.push_back({s2[i], count}); 
            i= j-1; 
        }
        int a= v1.size(); 
        int b= v2.size(); 
        if(a!= b){
            cout<< "NO"<< endl; 
            continue;
        }
        bool ans= true; 
        for(int i= 0; i< a; i++){
            if(v1[i].first!= v2[i].first){
                cout<< "NO"<< endl; 
                ans= false; 
                continue;
            }
            if(v1[i].second > v2[i].second){
			cout<< "NO"<< endl;
            ans= false; 
            continue;
		    }
        }
       if(ans){
        cout<< "YES"<< endl; 
       }
    }
    return 0; 
} */