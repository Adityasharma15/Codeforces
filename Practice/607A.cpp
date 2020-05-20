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

  vector<ll> pos(n+1);
  vector<ll> pow(n+1);

  for(ll i = 1; i<=n; i++)
  {
    cin >> pos[i];
    cin >> pow[i];
  }

  vector<ll> dp(n+1, 0);

  for(ll i = 1; i<=n; i++)
  {
    dp[i] = lower_bound(pos.begin(), pos.end(), pow[i]) - upper_bound(pos.begin(), pos.end(), (pos[i] - 1));

    cout << lower_bound(pos.begin(), pos.end(), (pos[i] -  pow[i]) ) - pos.begin() << "   " << upper_bound(pos.begin(), pos.end(), (pos[i] - 1)) - pos.begin() << "\n";

    cout << dp[i] << "\n";
  }


  return 0;

}
