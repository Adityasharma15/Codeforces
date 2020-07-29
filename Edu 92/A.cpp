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

    if( (2*a) <= b)
      cout << a << " " << 2*a << "\n";

    else
      cout << "-1 -1\n";

	}

  return 0;

}
