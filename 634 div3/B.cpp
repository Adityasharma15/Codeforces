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

    ll n, a, b;

    cin >> n >> a >> b;

    string s = "";

    for(ll i = 0; i<a; i++)
    {
        if(i<b)
        {
          s += ('a' + i);
        }

        else
        {
          s += ('a' + (b-1));
        }

    }

    string ans = "";

    for(ll i = 0;i<n; i++)
    {
        ans += s[i%a];

    }

    cout << ans << "\n";

	}

  return 0;

}
