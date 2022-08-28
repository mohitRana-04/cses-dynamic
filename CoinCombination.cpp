#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n; cin>>n;
    int target; cin>>target;
    vector<long long int> v(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i];
    // }

    vector<long long int> dp(target+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[j]>i){
                continue;
            }
            else{
                dp[i] = (dp[i]+ dp[i-v[j]])%mod;               
            }
        }
    }
    
    
    cout<<dp[target];
    
    
    
 
    return 0;
}
