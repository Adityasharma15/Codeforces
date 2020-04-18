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
		ll candies, baalak;
		cin >> candies >> baalak;

		ll temp = candies/baalak;
		ll ans = temp*baalak;

		ll temp2 = baalak/2;

		ll temp3 = candies - ans;

		ans = ans + min(temp2, temp3);

		cout << ans << "\n";

	}

  return 0;

}
