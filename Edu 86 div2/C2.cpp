#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a, b, q;
ll x, y;

ll find(ll x, ll hcf)
{
  ll div = (x/hcf)*(hcf-x);
  x%=hcf;

  if(x>=a)
  {
    div+=(x-a+1);
  }

  return div;
}

ll gcd(ll a, ll b)
{
  if(a == 0)
    return b;

  return gcd(b%a, a);
}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {

    cin >> a >>  b >> q;

    ll temp, temp1, temp2,  hcf;

    if(b>a)
     swap(a,b);

    ll lcm = (a*b)/gcd(a,b);

    ll ans = 0;

    while(q--)
    {
      cin >> x >> y;
      ans = 0;

      ans = find(y, lcm) - find(x-1, lcm) ;

      cout << ans << " ";

    }
      cout << "\n";
	}

  return 0;
}
