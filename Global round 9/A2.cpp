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

    vector<ll> vec(n);

    for(ll i = 0; i<n; i++)
    {
      cin >> vec[i];
    }

    for(ll i = 0; i<n; i++)
    {
      if(i%2==0)
      {
        vec[i] = abs(vec[i]);
      }

      else
      {
        vec[i] = abs(vec[i]);
        vec[i] = (-1)*vec[i];
      }
    }

    for(auto i:vec)
      cout << i << " ";

    cout << "\n";

	}

  return 0;

}
