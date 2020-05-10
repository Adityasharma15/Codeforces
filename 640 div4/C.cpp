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
    cin >>a >> b;

    ll temp = b/(a-1);

    ll num = b%(a-1);

    ll ans = temp*a;

    if(num==0)
        cout << ans-1 << "\n";

    else
      cout << ans+num << "\n";

	}

  return 0;

}
