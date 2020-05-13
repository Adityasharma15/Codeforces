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

    ll a, b;
    cin >> a >> b;

    ll ans =0;

    if(a > b)
    {
      if((a-b)%2==0)
      {
        ans = 1;
      }

      else
      {
        ans = 2;
      }
    }

    else
    {
      if((b-a)%2==0)
      {
        ans = 2;
      }

      else
      {
        ans = 1;
      }
    }


    if(a==b)
      ans = 0;

    cout << ans << "\n";

	}

  return 0;

}
