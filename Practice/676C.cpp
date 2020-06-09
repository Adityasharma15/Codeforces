// Codeforces 676C
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll hashh[100001][2];
ll ans = 0;


ll checklen(ll len, ll k, ll n)
{
	ll a = 0, b = 0;

	for(ll i = len; i<=n; i++)
	{
		a = hashh[i][0] - hashh[i	- len][0];
		b = hashh[i][1] - hashh[i	- len][1];

		if( min(a,b) <= k)
		{
			return max(a,b);
		}
	}

	return 0;
}


int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, k;
	cin >> n >> k;

  string s;
  cin >> s;

	memset(hashh, 0, sizeof(hashh));

  for(ll i = 1; i<=n; i++)
  {
      hashh[i][s[i-1] - 'a'] = 1;
  }

	for(ll i = 2; i<=n; i++)
	{
		for(ll j = 0; j<2; j++)
		{
			hashh[i][j] += hashh[i-1][j];
		}
	}

	// for(ll i = 0; i<n; i++)
	// {
	// 	for(ll j = 0; j<2; j++)
	// 	{
	// 		cout << hashh[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }


	ll l = 1, r	 = n, mid;

	while(r>=l)
	{
		mid = (l+r)/2;
		// cout << mid << "\n";

		if(checklen(mid, k, n))
		{
			l = mid+1;
			ans = mid;
			// cout << ans << "\n";
		}

		else
		{
			r = mid-1;
		}
	}

	cout << ans<< "\n";
  return 0;
}
