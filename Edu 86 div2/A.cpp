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

    ll x, y;
    cin >> x >> y;

    ll a, b;
    cin >> a >> b;

    ll ans = 0;

    ll diff = abs(x - y);

    ans+= (diff*a);

    ll total = (x+y) - diff;

    ll costa = total*a;
    ll costb = (total/2)* b;

    ans+= min(costa, costb);

    cout << ans << "\n";

	}

  return 0;

}
