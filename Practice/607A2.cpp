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
  unordered_set<ll> positions;

  for(ll i = 1; i<=n; i++)
  {
    cin >> pos[i];
    positions.insert(pos[i]);
    cin >> pow[i];
  }

  vector<ll> dp(n+1, 0);

  for(ll i = 1; i<=n; i++)
  {
    dp[i] = upper_bound(pos.begin(), pos.end(), (pos[i] - 1)) - lower_bound(pos.begin(), pos.end(), (pos[i] -pow[i])) ;
    // cout << lower_bound(pos.begin(), pos.end(), (pos[i] -  pow[i]) ) - pos.begin() << "   " << upper_bound(pos.begin(), pos.end(), (pos[i] - 1)) - pos.begin() << "\n";
    // cout << dp[i] << "\n";
  }

  ll kill = n + 1;
  // cout << "&";
  ll ans = 0;

  for(ll i = n; i>0; i--)
  {
      if(dp[i] > ((n+2) - i))
        {
          kill = i;
        }

      else
      {
        ll tempp = dp[i];
        ll pos = i - 1;

        while(tempp-- && pos > 0)
        {
          dp[pos] = 0;

          if(positions.count(pos) > 0)
            ans++;

          pos--;
        }

        i = pos+1;
      }
  }

  ans += ((n+1) - kill);
  cout << ans << "\n";
  return 0;
}
