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
		ll a,b, c,d ;
    cin >> a >> b >> c >> d;

    if(b >= a)
      cout << b << "\n";


    else if( d >= c)
      cout << "-1\n";

    else
    {
      ll temp = a - b;

      ll temp2 = c - d;

      ll ans = b + (temp/temp2)*c;

      if(temp%temp2!=0)
        ans += c;

      cout << ans <<" \n";

    }


	}

  return 0;

}
