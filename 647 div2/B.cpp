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

    for(ll i =0;i <n; i++)
      cin >> vec[i];

    bitset<32> bits[n];

    ll value = 0;

    for(ll i = 0; i<n; i++)
    {
      for(ll j = 0; j<n; i++)
      {
          if(i==j)  continue;

          ll temp = vec[i]^vec[j];
          bits[i][temp] = 1;
      }

      value = value^bits[i];
    }


    if(!value)
    {
      cout << "-1\n";
    }

    else
    {

      ll i =0;
    while(value>0)
    {
      if(value&1)
        {
            cout <<
        }

      }
    }

	}

  return 0;

}
