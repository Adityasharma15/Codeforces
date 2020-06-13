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
		ll n, x , m;
    cin >> n >> x >> m;

    ll l = x, r = x;
    ll a, b;

    bool gotcha = false;
    while(m--)
    {
      gotcha = false;
      cin >> a >> b;

      if( l>=a && l<=b)  gotcha = true;

      if( r>=a && r<=b) gotcha = true;

      if( a>=l && a<=r ) gotcha = true;

      if(b>=l && b<=r) gotcha = true;

      if(gotcha)
      {
        l = min(a, l);
        r = max(b, r);
      }
    }

    ll ans = (r-l) + 1;
    cout << ans << "\n";
	}
  return 0;
}
