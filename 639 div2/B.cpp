#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll a = 2, b = 7;
  ll temp = 0;

  vector<ll> pattern;
  pattern.push_back(a);
  pattern.push_back(b);

  while(temp<=1000000001)
  {
      temp = b + ( (b-a) + 3);
      a = b;
      b = temp;
      pattern.push_back(temp);
  }

  // for(ll i = 0 ; i<=4; i++)
  //   cout << pattern[i] << "\n";

	ll t;
	cin >> t;

	while(t--)
  {
		ll x;
    cin >> x;

    ll ans = 0;

    ll hello = 0;

    while(x>1)
    {
      ans++;
      hello = lower_bound(pattern.begin(), pattern.end(), x) - pattern.begin();

      if(x == pattern[hello])
        x-=pattern[hello];

      else
        x -= pattern[hello - 1];

      // cout << x << "\n";
    }

    cout << ans << "\n";
	}

  return 0;

}
