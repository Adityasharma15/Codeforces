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

    pair<ll, ll> range = {0,0};

    ll currtime = tempinit ;

    map<ll , pair<ll,ll>> mapp;

    for(ll i = 0; i<n; i++)
    {
      cin >> time >> low >> high;
      mapp[time] = {low, high};
    }


    for(auto i: mapp)
    {

      time = i.first;
      low = i.second.first;
      high = i.second.second;

      // cin >> time >> low >> high;

      range.first -=(time - currtime);
      range.second += (time + currtime);

      // cout << "Range  " << range.first << " " << range.second <<  " " << low << " " <<high << "\n" ;

      if( range.first >= low && range.first <=high)
        {
          ans = true;
          // cout << "&";
        }
      else if( range.second  >= low && range.second  <=high)
          {
            ans = true;
            // cout <<"*";
          }
      else if( low  >= range.first && low  <= range.second)
          {
            ans = true;
            // cout << "(";
          }
      else if( high  >= range.first && high <= range.second)
          {
            ans = true;
            // cout << ")";
          }

      else
        ans = false;



      range.first = max(low, range.first);
      range.second = min(high, range.second);
      currtime = time;
      cout << "UPdated range  " << range.first << " " << range.second << "\n";

      if(!ans)
        break;
    }

    if(ans)
      cout << "YES\n";

    else
      cout << "NO\n";


	}

  return 0;

}
