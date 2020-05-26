#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ans = 0;

void paths(ll x1, ll y1, ll x2, ll y2)
{
  if(x1==x2 && y1==y2)
      {
        ans++;
        return;
      }

  else if(x1 >= 0 && x1 < x2 && y1 >=0 && y1 <y2)
    {
      paths( x1+1, y1, x2, y2);
      paths( x1, y1+1, x2, y2);
    }

    else if(x1 >= 0 && x1 <= x2 && y1 >=0 && y1 <y2)
        paths( x1, y1+1, x2, y2);

      else if(x1 >= 0 && x1 < x2 && y1 >=0 && y1 <=y2)
          paths( x1+1, y1, x2, y2);

  return;
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

    ans = 0;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // paths(x1, y1, x2, y2);

    if(x1 == x2 || y1 == y2)
      ans = 1;

    else if(x2 == x1+1 && y2 == y1+1)
    {
      ans = 2;
    }

    else
    {
      x2-=x1;
      x2++;
      y2-=y1;
      y2++;

      ans = (x2*y2) - 3;
    }

    cout << ans << "\n";

	}

  return 0;

}
