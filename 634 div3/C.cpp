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
		 ll n;
     cin >> n;

     ll arr[n] ;

     set<ll> sett;

     unordered_map<ll, ll> um;

     ll maxxrep = 1;
     ll repeats = 0;

     for(ll i = 0;i <n ;i++)
     {
       cin >> arr[i];

        um[arr[i]]++;

        if(um[arr[i]] > 1)
        {
           maxxrep = um[arr[i]];
        }

       sett.insert(arr[i]);
     }

     for(auto i: um)
     {
       if(i.second > 1)
        repeats++;

        maxxrep = max(maxxrep, i.second);
     }

     ll distinct, similar;

     // similar = (n - sett.size()) + 1;

     distinct = (sett.size() - 1);

     // cout << maxxrep << " " << distinct << " ";

     ll ans = min( maxxrep, distinct);

     ll ans2 = min(maxxrep - 1, distinct + 1);

     ll anss = max(ans, ans2);

     cout << anss << "\n";

    }

  return 0;
}
