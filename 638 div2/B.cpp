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

    ll arr[n];

    unordered_set<ll> sett;

    for(ll i = 0; i<n; i++)
    {
      cin >> arr[i];
      sett.insert(arr[i]);
    }

    if(sett.size() > k)
      cout << "-1\n";

    else
    {
      vector<ll> vec;

      for(auto i: sett)
        vec.push_back(i);

      ll sizee = sett.size();

      ll ko = k - sizee;

      while(ko--)
      {
        vec.push_back(vec[0]);
      }

      ll ro = (n*n)/(k);

      for(ll i = 0; i<(k*(ro-1)); i++)
      {
          vec.push_back(vec[i]);
      }


      cout << vec.size() << "\n";

      for(auto i:vec)
        cout << i << " ";

      cout << "\n";
    }

	}

  return 0;

}
