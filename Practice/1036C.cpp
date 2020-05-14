#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> ans;

void dp(ll idx, ll count)
{
	if(idx == 18)
	{
		if(count<=3)
	}


}


int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	dp(0,0,0);

	ll t;
	cin >> t;

	while(t--)
  {

		ll a, b;
		cin >> a >> b;


		ll answer = upper_bound(ans.begin(), ans.end(), b) - lower_bound(ans.begin(), ans.end(), a);

		cout << answer << "\n";

	}

  return 0;

}
