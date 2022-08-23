#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N, K;
    cin >> N >> K;
    int tabs[N]; 
 
    for (int i = 0; i < N; i++)
        cin >> tabs[i];
 
    int most = 0;
 
    for (int b = 0; b < N; b++) {
        int sum = 0;
 
        for (int i = 0; i < N; i++)
            if (i % K != b % K)
                sum += tabs[i];
 
        most = max(most, abs(sum));
    }
 
    cout << most << '\n';

    return 0; 
}