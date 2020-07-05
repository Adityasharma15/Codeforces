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

    vector<ll> vec(n);

    ll pos1 , posn;

    for(ll i = 0; i<n ; i++)
    {
        cin >> vec[i];

        if(vec[i]==1)
          pos1 = i;

        if(vec[i] == n)
          posn = i;
    }

    if(pos1>posn)
      cout << "NO\n";

    else
      cout << "YES\n";

	}

  return 0;
}
