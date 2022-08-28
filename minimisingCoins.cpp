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
  
    
    long long int n; cin>>n; // number of coins to enter
    ll target; cin>>target;
    vector<long long int> v(n+1);
 
    for(int i = 0; i< n; i++){
        cin>>v[i];
    }
 
    
 
    vector<long long int> dp(target+1, 1e9);
    dp[0] = 0;
    
    for (int i = 1; i <= target; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* 
            i ->  1,2,3,4,5,6,7,8,9,10 ... till target
            j -> choices in array;
            */
 
            if(v[j]>i){
                continue;
            }
            else{
                dp[i] = min(dp[i], dp[i-v[j]]+1);
            }
 
 
        }
 
        // cout<<dp[target];
    }
    if(dp[target] == 1e9){
        cout<<-1;
    }
    else{
        cout<<dp[target]%mod;
    }
    
 
    return 0;
}