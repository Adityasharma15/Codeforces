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

    ll n, tempinit;
    cin >> n >> tempinit;

    bool ans = true;
    ll time, low, high;

    pair<ll, ll> range;

    cin >> time >> low >> high;

    range.first = tempinit - time;
    range.second = tempinit + time;

    // cout << "Range  " << range.first << " " << range.second << " ";

    if( range.first >= low && range.first <=high)
      ans = true;

    else if( range.second  >= low && range.second  <=high)
        ans = true;

    else if( low  >= range.first && low  <= range.second)
        ans = true;


    else if( high  >= range.first && high <= range.second)
        ans = true;

    else
      ans = false;

    ll currtime = time;

    range.first = max(low, range.first);
    range.second = min(high, range.second);
    // cout << "Range  " << range.first << " " << range.second << " ";

    bool waste;

    for(ll i = 1; i<n; i++)
    {
      cin >> time >> low >> high;

      range.first -= (time - currtime)  ;
      range.second += (time - currtime)  ;

      // cout << "Range  " << range.first << " " << range.second << " ";

      if( range.first >= low && range.first <=high)
        waste = true;

      else if( range.second  >= low && range.second  <=high)
          waste = true;

      else if( low  >= range.first && low  <= range.second)
          waste = true;

      else if( high  >= range.first && high <= range.second)
          waste = true;

      else
        ans = false;

      range.first = max(low, range.first);
      range.second = min(high, range.second);
      currtime = time;
      // cout << "Range" << range.first << " " << range.second << " ";
    }

    if(ans)
      cout << "YES\n";

    else
      cout << "NO\n";


	}

  return 0;

}
