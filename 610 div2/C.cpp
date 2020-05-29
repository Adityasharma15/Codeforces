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

    ll n, p ,k;
    cin >> n >> p >>k;

    vector<ll> vec;
    ll temp;

    for(ll i = 0; i<n; i++)
      {
        cin >> temp;
        vec.push_back(temp);
      }


    sort(vec.begin(), vec.end());

    for(ll i = 0; i<n; i++)
    {
        for( ll j = 0; j<k; j++)
        {

        }
    }

	}

  return 0;

}
