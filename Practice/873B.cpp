#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll len;
  cin >> len;

  string s;
  cin >> s;

	vector<ll> sumhash( ((2*len) + 2), -1);

	sumhash[len] = -1;

  ll sum = 0, temp;
	ll ans = 0;


  for(ll i = 0; i<len; i++)
  {
			if(s[i] == '0') temp = -1;
			else temp = 1;

			sum += temp;


			if(sumhash[sum + len] == -1 && sum!=0)	sumhash[sum + len] = i;

			else
			{
				// cout << "&";
				// cout << i << " " << sum;
				ans = max(ans , i - sumhash[sum + len]);
			}

			// cout << sum << " " << sumhash[sum + len] << "\n";
  }

	cout << ans << "\n";

  return 0;

}
