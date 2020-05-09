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

    ll n; cin >> n;

    ll arr[n];

    ll odds = 0, evens = 0;

    for(ll i = 0; i<n; i++)
    {
      cin >> arr[i];

      if(arr[i]%2==0)
        evens++;

      else
        odds++;
    }

    bool ans = false;

    if(n%2!=0 && odds>0)
      ans = true;

    if(odds > 0 && evens > 0)
      ans = true;

    if(ans)
      cout << "YES\n";

    else
      cout << "NO\n";

	}

  return 0;

}
