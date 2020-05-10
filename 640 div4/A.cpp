#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

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

  ll arr[n];

  ll i = 0;

  ll temp;

  ll maxi;

  ll ans;

  vector<ll> container;

  while(n>0)
  {
    temp = n%10;
    // cout << temp;

    ans = power(10, i)*temp;

    if(ans!=0)
      container.push_back(ans);

    arr[i] = temp;
    n/=10;
    i++;

    // maxi = max(maxi, i);
  }

  // for(i = 0; i<=maxi; i++)
  // {
  //   cout << power(10, maxi-i)*arr[i] << " ";
  // }


  cout << container.size() << "\n";

  for(auto j:container)
  {
    cout << j << " ";
  }

  cout << "\n";

	}

  return 0;

}
