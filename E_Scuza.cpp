#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, q;
        cin >> n >> q;
        vector<long long> pref;
        pref.push_back(0);
        vector<int> prefmax;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pref.push_back(pref.back() + x);
            if (i == 0)
            {
                prefmax.push_back(x);
            }
            else
            {
                prefmax.push_back(max(prefmax.back(), x));
            }
        }
        for (int i = 0; i < q; i++)
        {
            int k;
            cin >> k;
            int ind = upper_bound(prefmax.begin(), prefmax.end(), k) - prefmax.begin();
            cout << pref[ind] << " ";
        }
        cout << endl;


        /* int n, q;
        cin>> n>> q;
        vector<long long> h(n);
        vector<long long> l(q);
        for(int i= 0; i< n; i++){
            cin>> h[i];
        }
        for(int i= 0; i< q; i++){
            cin>> l[i];
        }
        vector<long long> preSum(n);
        vector<long long> preMax(q);
        preSum[0]= h[0];
        for(int i= 1; i< n; i++){
            preSum[i]= preSum[i-1]+h[i];
        }
        preMax[0]= h[0];
        for(int i= 1; i< n; i++){
            preMax[i]= max(preMax[i-1], h[i]);
        }

        for(int i= 0; i< q; i++){
            int idx= upper_bound(preMax.begin(), preMax.end(), l[i])- preMax.begin(); 
            cout<< preSum[idx-1]<< " ";
        }
        cout<< endl;  */

        /* vector<long long> ans;
        for(int i= 0; i< q; i++){
            long long sum= 0;
            for(int j= 0; j< n; j++){
                if(qu[i]>= h[j]){
                    sum+= h[j];
                }else{
                    break;
                }
            }
            ans.push_back(sum);
        }
        for(int i= 0; i< ans.size(); i++){
            cout<< ans[i]<< " ";
        }
        cout<< endl;  */
    }
    return 0;
}