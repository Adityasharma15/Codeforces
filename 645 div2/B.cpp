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

    vector<ll> vec;

    ll temp;

    for(ll i = 0; i<n; i++)
    {
      cin >> temp;
      vec.push_back(temp);
    }

    vec.push_back(0);

    sort(vec.begin(), vec.end());

    ll last;

    for(ll i = 0; i<vec.size(); i++)
    {
      if( (vec[i] - i) <= 0)
        last = i;
    }

    cout << (last + 1) << "\n";
	}

  return 0;

}
