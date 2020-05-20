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
		ll n;
    cin >> n;

    vector<ll> vec;
    ll temp;

    for(ll i = 0; i<n; i++)
    {
      cin >> temp;
      vec.push_back(temp);
    }

    ll sum = 0;

    unordered_set<ll> sett;

    for(ll i = 0; i<n; i++)
    {
      sum = vec[i];

      for(ll j = i-1; j>=0; j--)
      {
        sum += vec[j];

        if(sum <= n)
        sett.insert(sum);

        else
          break;
      }

      sum = vec[i];

      for(ll j = i+1; j<n; j++)
      {
        sum+=vec[j];

        if(sum <= n)
        sett.insert(sum);

        else
          break;
      }

    }

    ll ans = 0;

    for(auto i:vec)
    {
      if(sett.count(i) != 0)
        {
          // cout << i << "\n";
          ans++;
        }
    }

    cout << ans << "\n";

	}

  return 0;

}
