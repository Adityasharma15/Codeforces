#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll x, y;

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
    ll a, b, q;
    cin >> a >>  b >> q;

    ll temp, temp1, temp2,  hcf;
    hcf = (a*b)/gcd(a,b);

    ll maxi = max(a, b);

    ll ans = 0;

    while(q--)
    {
      cin >> x >> y;

      ans = 0;

      ll curr = x;

      temp = x%hcf;

      if(temp!=0)
      curr -=temp;

      // cout << "curr " << curr;

      if((curr + maxi) >= x)
      {
        if((curr + (maxi)) > y )
        {
          ans+= y - (x-1);
        }

        else
        {
        ans+= ( (curr + (maxi-1)) - (x-1));
        }
        // cout << ans;
      }

      while(1)
      {

        curr+= hcf;

        // cout << "curr" << curr << "\n";

            // temp1 = (x/hcf);
            // temp2 = (temp1+temp)*hcf;
            if(curr > y)
            break;

            ans += min(maxi, abs(y-(curr-1)));

            // cout << temp2 << "  " << ans << "\n";
      }
      // cout << ans;

      ans = (y-(x-1)) - ans;

      cout << ans << " ";

    }
      cout << "\n";
	}

  return 0;
}
