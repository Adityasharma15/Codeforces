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
    ll n, k;
    cin >> n >> k;

    vector<ll> ints(n);

    for(ll i = 0; i<n; i++)
      cin >> ints[i];

    vector<ll> lens(k);

    for(ll i = 0; i<k; i++)
      cin >> lens[i];

    sort(ints.begin(), ints.end() ,greater<int>());
    sort(lens.begin(), lens.end());

    ll a = 0, b = n-1;
    ll ans = 0;

    for(ll i = 0; i<lens.size(); i++)
    {
        if(lens[i]==1)
        {
              ans += (2*(ints[a]));
              a++;
        }

        if(lens[i]==2)
        {
          ans = ans + ints[a] + ints[a+1];
          a = a+2;
        }

      //   else
      //   {
      //     ans +=ints[a];
      //     ans += ints[b];
      //     a++;
      //     ll temp = (lens[i] - 1);
      //     b -= temp;
      // }
    }

    sort(lens.begin(), lens.end(), greater<int>());

    for(ll i = 0; i<lens.size(); i++)
    {
      if(lens[i] == 1 || lens[i] == 2)
        continue;

          ans +=ints[a];
          ans += ints[b];
          a++;
          ll temp = (lens[i] - 1);
          b -= temp;
    }

    cout << ans << "\n";
	}
  return 0;
}
