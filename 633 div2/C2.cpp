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

    ll arr[n];

    for(ll i = 0; i<n; i++)
      cin >> arr[i];

    ll maxx = arr[0];

    ll maxxdif = 0;

    for(ll i = 1; i<n; i++)
    {
      if(arr[i] >= maxx)
      {
        maxx = arr[i];
      }

      else
      {
        maxxdif = max(maxxdif,  (maxx - arr[i]) );
      }
    }


    // cout << maxxdif << "\n";

    ll ans = 0;

    if(maxxdif!=0)
    ans = (ll)log2(maxxdif) + 1;

    cout << ans << "\n";


	}

  return 0;

}
