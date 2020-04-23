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
		ll n , k;
    cin >> n >>k;

    ll arr[n];

    for(ll i = 0;i<n; i++)
    {
      cin >> arr[i];
    }

    unordered_map<ll, ll> um;


    for(ll i = 1;i<(n-1); i++)
    {
      if(um[i])
        cout << i;

      if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
        um[i] =  1;
    }

    ll loc = 0, temp = 0;

    ll maxx = 0;

    for(ll i = 0; i<(k-1); i++)
    {
        temp+=um[i];
    }

    maxx = temp;

    for(ll i = 1; i<=(n-k); i++)
    {
        temp -= um[i];
        temp += um[(i+(k-2))];

        if(temp>maxx)
        {
          maxx = temp;
          loc = i;
        }
    }

    loc++;
    maxx++;

    cout  << maxx << " " << loc << "\n";

    um.clear();

	}

  return 0;

}
