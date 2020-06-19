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

    ll a, b, c;
    cin >> a >> b >> c;

    ll count = 0;
    ll minn = min(a,b);
    ll maxx = max(a,b);

    while(maxx<=c || minn<=c)
    {
      if(count%2==0)
        minn+=maxx;

      else
        maxx+=minn;

        count++;

      if(minn>c || maxx>c)
        break;
    }

    cout << count << "\n";
	}

  return 0;
}
