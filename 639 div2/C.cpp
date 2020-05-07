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
      cin >> vec[i];

    // sort(vec.begin(), vec.end(), greater<int>());

    set<ll> sett;

    ll temp;
    bool ans = true;

    for(ll i = 0;i<9*n; i++)
    {

      temp = vec[i%n] + i;

      // cout << temp;

      if(sett.count(temp) == 1 )
      {
        // cout << temp << "\n";
        ans = false;
        break;
      }

      sett.insert(temp);

    }

    if(!ans)
      cout << "NO\n";

    else
      cout << "YES\n";

	}

  return 0;

}
