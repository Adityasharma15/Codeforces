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

    ll ans = 0;

    if(a==0 || b==0)
    {
      cout << "0\n";
    }

    else
    {
      ll dif = abs(a-b);

      ll maxx = max(a,b);
      ll minn = min(a,b);

      ll temp = maxx/2;

      if(minn<=temp)
      {
        // cout << "hey";
        cout << min(temp, minn) << "\n";
      }

      else
      {
        ll temp2 = maxx-minn;

        maxx = maxx - 2*temp2;
        minn = minn - temp2;
        ans += temp2;

        // while(temp2--)
        // {
        //     maxx-=2;
        //     minn--;
        //     ans++;
        // }

        ll i = 0;

        //if even
        ll div = maxx/2;
        ll two = div/2;
        ll one = div - div/2;

        if(div%2==0)
        {
          
        }

        else
        {
          two = div/2;
          one = (div - div/2)*2;
        }


        // while(maxx >0 && minn>0 && (minn+maxx)>=3)
        // {
        //   if(i%2!=0)
        //   {
        //     maxx-=2;
        //     minn--;
        //   }
        //
        //   else
        //   {
        //     maxx--;
        //     minn-=2;
        //   }
        //
        //   ans++;
        //   i++;
        // }

        cout << ans << "\n";
      }
    }
	}
  return 0;
}
