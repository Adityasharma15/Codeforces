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

    sort(s.begin(), s.end());

    string ans = "";

    ll z = 0;
    ll mod ;

    bool first = true;
    // bool ans = true;

    for(ll i = 0;i<n; i++)
    {
      if(s[i] == s[0])
      {
        z++;
      }

      else
      {
        first = false;
      }

      if(z == k)
      {
          if(s[i+1]!=s[n-1])
          {
          for(ll j = i; j<n; j++)
          {
            ans+= s[j];
          }
          }

          else
          {
            // cout << "@";

            ans+= s[0];

            mod = (n-(i+1))/k;

            for(ll j = 0; j<mod ; j++)
                ans+= s[i+1];

            if((n-(i+1))%k != 0 )
                ans+=s[i+1];
          }

          break;

      }

      if(!first)
      {
        ans+= s[(k-1)];
        break;
      }
    }

    cout << ans << "\n";

	}

  return 0;

}
