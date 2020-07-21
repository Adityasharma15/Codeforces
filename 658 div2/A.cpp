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
    set<ll> seta;

    for(ll i = 0; i<n ;i++)
    {
      ll temp;
      cin >> temp;
      seta.insert(temp);
    }

    bool found = false;
    ll ans = 0;
    for(ll i = 0; i<m; i++)
    {
      ll temp;
      cin >> temp;

      if(seta.count(temp)>0)
      {
        found = true;
        ans = temp;
        // break;
      }
    }

    if(found)
      cout << "YES\n" << "1 " << ans << "\n";

    else
      cout << "NO\n";
	}

  return 0;

}
