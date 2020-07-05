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

    for(ll i = 0; i<n ; i++)
      cin >> vec[i];

    if(vec[0] == n || vec[n-1] == 1)
      cout << "NO\n";

    else
      cout << "YES\n";



	}

  return 0;

}
