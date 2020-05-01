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

    ll a, b, q;
    cin >> a >> b >> q;

    ll x, y;
    ll temp1, temp2;

    ll count = 0;

    while(q--)
    {
      count = 0;

      cin >> x >> y;
      for(ll i = x; i<=y; i++)
      {
        temp1 = (i%a)%b;
        temp2 = (i%b)%a;
        //
        // if(i==9)
        // {
        //   cout << temp1 << "  " << temp2 << "\n";
        // }

        if( temp1 == temp2    )
          {
            cout << i << "\n";
          // count++;
          }
      }
      // cout << count << "\n";


    }


	}

  return 0;

}
