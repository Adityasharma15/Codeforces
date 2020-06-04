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

    ll xorr = 0, sum = 0;

    ll temp;

    for(ll i = 0; i<n; i++)
    {
      cin >> temp;
      sum+=temp;
      xorr^=temp;
    }

    cout << "2\n" << xorr << " " << sum+xorr << "\n";

	}

  return 0;
}
