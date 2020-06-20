// Codeforces 607A Solution
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);
	ll n;
  cin >> n;

	vector<ll> dp(1000001,0);
	unordered_set<ll> locations;
	unordered_map<ll, ll> mapp;
	ll maxloc = 0;

	for(ll i = 0; i<n; i++)
	{
		ll temp1;
		cin >> temp1;
		locations.insert(temp1);
		maxloc = max(temp1, maxloc);
		ll temp2;
		cin >> temp2;
		mapp[temp1] = temp2;
	}

	ll ans = 0;

	for(ll i = 0; i<=maxloc; i++)
	{
		if(locations.count(i)==1)
		{
			ll temp = (i - mapp[i]) - 1;
			if(temp<0) dp[i] = 1  ;

			else
			{
				// if(i==2) cout << temp <<"\n";
				dp[i] = dp[temp] + 1;
			}
		}

		else
		{
			if((i-1) <0 ) dp[i] = 0;

			else dp[i] = dp[i-1];
		}

		// cout << i << dp[i] << "\n";
		if(dp[i]>ans) ans = dp[i];
	}

	cout << (n - ans) << "\n";

  return 0;
}
