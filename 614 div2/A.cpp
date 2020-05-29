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
    ll n, s, k;
    cin >> n >> s >> k;

    set<ll> sett;
    ll temp;

    for(ll i = 0; i<k; i++)
    {
      cin >> temp;
      sett.insert(temp);
    }

    ll  i = s, j = s+1;

    ll low = INT_MAX;
    bool foundlow = false;

    while(i>0)
    {
      if(sett.count(i) == 0)
      {
        low = i;
        foundlow = true;
        break;
      }

      i--;
    }

    if(foundlow)
      low = abs(s - i);

    ll high = INT_MAX;
    bool foundhigh = false;

    while(j<=n)
    {
      if(sett.count(j) == 0)
      {
        high = j;
        foundhigh = true;
        break;
      }

      j++;
    }

    if(foundhigh)
      high = abs(j - s);

     cout << min(low, high ) << "\n";
     sett.clear();
	}

  return 0;
}
