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
    
    int n; cin>> n;

    if(n<10){
    	cout<<1;
    }
    else{
    	vector<long long int> dp(n+1, 1e9);

	    for(int i = 0; i<=9; i++){
	    	dp[i] =1;
	    }



	    for(long long int i = 10; i<= n; i++){
	    	vector<long long int> v;
	    	int temp = i;
	    	while(temp>0){
	    		int store = temp%10;
	    		v.push_back(store);
	    		temp/=10;
	    	}
	    	// 11

	    	
	    	for(int j = 0; j< v.size(); j++){
	    		dp[i] = min(dp[i], dp[i-v[j]]+1);
	    	}
	    }


	    cout<<dp[n];
	}
    
    return 0;
}
