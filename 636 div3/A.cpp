#include<bits/stdc++.h>
#define ll long long
using namespace std;
//
// ll power(ll a)
// {
//   return a<<1;
// }

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

    ll temp = 3;
    ll two = 2;

    ll ans;

    while( temp <=n)
    {
        if(n%temp==0)
        {
          ans = n/temp;
          break;
        }

        else
        {
          two = two << 1;
          temp = two - 1;
        }

    }

      cout << ans << "\n";
	}

  return 0;

}
