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

    ll a, b , c ,d ;
    cin >> a >> b >> c >> d;

    ll x, y, x1, y1, x2, y2;

    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    ll arrl = abs(x1 - x2);
    //
    // cout << x1 << "  " << x2 << "  ";
    //
    // cout << arrl << endl;

    ll arrh = abs(y1 - y2);

    ll maxl = max( abs(x - x1), abs ( x - x2));
    ll maxh = max( abs(y - y1), abs ( y  - y2));

    bool flag = true;

    if(x1>x && x2 >x )
      flag = false;

    if(x1<x && x2<x)
      flag = false;

    if(y1<y && y2<y)
      flag = false;

    if(y1>y && y2>y)
      flag = false;

    if(maxl == 0 && max(a,b)!=0)
      flag = false;

    if(maxh == 0 && max(c,d)!=0)
      flag = false;

    if(abs(a - b) > arrl)
      flag = false;

    if(abs(c - d) > arrh)
      flag = false;


      if((x - (a-b)) < min(x1,x2) || (x + (b-a)) > max(x1,x2))
        flag = false;

      if( (y - (c-d)) < min(y1,y2) ||  (y + (d-c)) > max(y1,y2))
        flag = false;

    if(flag)
        cout << "Yes" << "\n";

    else
      cout << "No" << "\n";

	}

}
