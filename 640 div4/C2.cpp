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
		ll a , x;
    cin >> a >> x;

    ll ans;
    ans = a*(x/(a-1));

    if(x%(a-1) == 0)
        ans--;

    else
          ans += x%(a-1);

    cout << ans << "\n";
	}

  return 0;

}
