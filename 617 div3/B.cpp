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

    ll ans = 0;
    ll temp, temp2;

    while(n > 0)
    {
      temp = n%10;
      // n-=temp;

      temp2 = (n-temp)/10;

      if(temp2==0)
      {
        ans+=n;
        break;
      }

      ans += temp2*10;
      n -= temp2*10;
      n += temp2;
    }

    cout << ans << "\n";

	}

  return 0;

}
