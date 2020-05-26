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

    ll mini = min(k,n);
    // cout << mini << "\n";

    if(n<=k)
    {
      cout << "1\n";
    }

    else
    {
    ll root = sqrt(n);
    ll end = min(root, k);
    ll maxdiv = 1;

    for(ll i = k; i>=end; i--)
    {
      if(n%i == 0)
      {
					maxdiv = max(i, maxdiv);

      }
    }

    // cout << maxdiv;

    // cout << n%maxdiv;

    ll ans = n/maxdiv;
    cout << ans << "\n";
    }
	}

  return 0;

}
