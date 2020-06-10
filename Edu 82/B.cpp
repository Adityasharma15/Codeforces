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

    ll n, g, b;
    cin >> n >> g >> b;

    ll half = (n+1)/2;

    if(g>=half)
    {
      cout << n << "\n";
    }

    else
    {
      ll temp = n%(g+d);
      half-=(n/(g+d));
      half -= min(temp,g);

      max(n,(n-1)/2/g*(g+b)+(n-1)/2%g+1)

    }


	}
  return 0;
}
