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
		ll a, b , c , r;
    cin >> a >> b >> c >> r;

    ll ans = abs(b-a);

    ll mini = min(a, b);
    ll maxi = max(a,b);

    a = mini;
    b = maxi;

    ll zero = 0;

    ll temp, temp1;

    if(c >= b)
    {
      temp = c-b;

      if(temp <= r)
      {
        ans-= (r - temp);
        ans = max(zero, ans);
      }
    }

    else if(c>=a && c <=b)
    {
        ans -= (  min((b-c), r) );
        ans -= ( min((c-a) , r));
    }

    else
    {

      temp = a -c;

      if( temp <=r)
      {
        ans -= (r-temp);
        ans = max(zero, ans);

      }

    }
      cout << ans << "\n";
	 }
  return 0;
}
