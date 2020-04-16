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

    ll ans;

    if(a%b == 0)
      ans = 0;

    else
      ans = b - (a%b);

    cout << ans << "\n";

	}

}
