#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long int t;
    cin>> t;
    vector<long long int> dp(t+1, 0);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= t; i++){
        for (int j = 1; j <= 6; j++)
        {
            if(j> i) continue;
            else{
                dp[i] = (dp[i]%mod + dp[i-j]%mod)%mod;
            }   
            
        }
    }
    cout<<dp[t]%mod;
    
    return 0;
}