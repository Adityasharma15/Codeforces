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
    string s;
    cin >> s;

    ll res = 0;
    for(ll init = 0; init<=1000003; init++)
    {
      ll cur = init;
      bool ok = true;

      for(ll i = 0; i<s.length(); i++)
      {
        res = res + 1;

        if(s[i] == '+')
          cur = cur + 1;

        else
          cur = cur -1;

        if(cur<0)
        {
          ok = false;
          break;
        }
      }

      cout << res << "\n";

      if(ok)
        break;
    }

    cout << res << "\n";


	}

  return 0;

}
