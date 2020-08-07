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

    string s;
    cin >> s;

    ll lastone = -1, lastzero = -1;
    vector<ll> next(n, 0);

    for(ll i = n-1; i>=0; i--)
    {
      if(s[i] == '0')
      {
        next[i] = lastone;
        lastzero = i;
      }

      else
      {
        next[i] = lastzero;
        lastone = i;
      }
    }
    // for(auto i:next)
    //   cout << i << " ";
    //
    // cout <<"\n";

    vector<ll> teams(n,0);
    ll teamcount = 1;

    for(ll i= 0; i<n; i++)
    {
        if(teams[i]!=0)
        {
          continue;
        }

          ll temp = next[i];
          cout << temp << "\n";

          if(teams[temp]!=0)
          {
            continue;
          }

          while( temp!=-1)
          {
            teams[temp] = teamcount;
            temp = next[temp];
          }

        teamcount++;
    }

    cout << teamcount-1 << "\n";

    for(ll i = 0; i<n; i++)
        cout << teams[i] << " ";

    cout << "\n";
	}
  return 0;

}
