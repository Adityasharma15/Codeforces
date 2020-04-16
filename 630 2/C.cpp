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
		 ll n, k;
     cin >> n >> k;

     string s;
     cin >> s;

     ll arr[k][27];

     memset(arr, 0, sizeof(arr));

     for(ll i = 0;i<n; i++)
        arr[i%k][s[i]- 'a']++;

    ll count = 0, ans = 0, maxx = INT_MIN;

     for(ll i = 0;i<k; i++)
     {
       count = 0;
       maxx = INT_MIN;

       for(ll j = 0;j<=26 ; j++)
       {
         count+= arr[i][j];
         maxx = max(maxx, arr[i][j]);
       }

       cout << (count-maxx) << "\n";

       ans = ans + (count - maxx);

     }

     cout << ans << "\n";

	}

  return 0;

}
