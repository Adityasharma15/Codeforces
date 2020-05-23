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

    ll temp , sum = 0, zero = 0;

    for(ll i = 0; i<n; i++)
    {
      cin >> temp;
      vec.push_back(temp);
      sum+= temp;

      if(temp==0) zero++;
    }

    ll ans = 0;

    ans = zero;

    if(sum+zero == 0) ans++;


    cout << ans << "\n";



	}

  return 0;

}
