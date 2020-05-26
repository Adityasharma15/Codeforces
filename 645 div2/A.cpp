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

    ll ans;

    if(m%2==0)
    {
      ans = (m/2)*n;
      cout << ans << "\n";
    }

    else
    {

      if(n%2==0)
      {
        ans = (m/2)*n;
        ans += n/2;
      }

      else
      {
        ans = (m/2)*n;
        ans += n/2;
        ans++;
      }

      cout << ans << "\n";

    }


	}

  return 0;

}
