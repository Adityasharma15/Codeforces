#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll smallest(ll n)
{
  if (n % 2 == 0)
        return 2;

  for (ll j = 3; j*j <= n; j += 2)
	{
        if (n % j == 0)
            return j;
    }
    return n;
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

    ll n, k;
    cin >> n >> k;

    ll ans = n;

    if(n%2==0)
    {
        ans = ans + 2*k;
        cout << ans << "\n";
    }

    else
    {

      ll minelement = smallest(n);

      ans += minelement;

        ans  +=  2*(k-1);

        cout << ans << "\n";

    }


	}

  return 0;

}
