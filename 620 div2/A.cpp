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
		  ll x, y, a, b;
      cin >> x >> y >> a >> b ;

      ll div = abs(x-y);

      if( div%(a+b) != 0)
        cout << "-1\n";

      else
      {
        cout << div/(a+b) << "\n";
      }




	}

  return 0;

}
