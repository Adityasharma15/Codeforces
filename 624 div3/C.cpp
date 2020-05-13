#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {
		ll n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    ll p[m+1];

    vector<ll> dp(n+1, 0);

    for(ll i = 1; i<=m; i++)
    {
      cin >> p[i];
      dp[p[i]]++;
    }

    dp[n]++;

    // for(auto i:  dp)
    //   cout << i << " ";
    //
    //   cout << "\n";


    for(ll i = n-1; i>0; i--)
    {
      dp[i] += dp[i+1];
    }

    // for(auto i:  dp)
    //   cout << i << " ";
    //
    //   cout << "\n";

    vector<ll> alphabets(26, 0);

    for(ll i = 1; i<=n; i++)
    {
        alphabets[ s[i-1] - 'a'] += dp[i];
    }

    for(auto i: alphabets)
      cout << i << " ";

      cout << "\n";

	}

  return 0;

}
