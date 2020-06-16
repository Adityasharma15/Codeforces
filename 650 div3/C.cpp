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

    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<pair<ll,ll>> pairs;

    pairs.push_back({0,0});

    ll ones = 0;

    for(ll i = 0; i<s.length(); i++)
    {

      if(s[i] == '1')
      {
        ones++;
          pairs.push_back( {(i-(k+1)), (i+(k+1))});
      }

    }

    pairs.push_back({n-1,n-1});

    ll ans = 0;

    for(ll i= 0; i<(pairs.size()-1); i++)
    {
      // cout << pairs[i].first << "  " << pairs[i].second <<" \n";

          for(ll j = pairs[i].second; j<=pairs[i+1].first ; j++)
          {
            if(i<0 && i>=n)
              continue;

            s[j] = '1';

            // if(s[i]=='0')
            //   {
            //     // cout << i << " ";
            //     ans++;
            //   }
          }
    }

    // cout << s <<" \n";

    for(ll i = 0; i<n; i++)
    {

      if(s[i]=='1')
      {
        for(ll j = i+1; j<(i+k+1); j++)
        {
          // cout << j << " ";
          s[j]='0';
        }
        // cout << "\n";

        i = i+k;
      }
    }

    // cout << s << "\n";
    for(ll i = 0; i<n; i++)
    {
      if(s[i]=='1')
        ans++;
    }

    ans = abs(ans-ones);

    cout << ans << "\n";
	}
  return 0;
}
