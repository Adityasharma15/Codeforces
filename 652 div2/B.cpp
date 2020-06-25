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

    ll firstone = -1 , lastzero = -1;

    for(ll i = 0; i<n; i++)
    {
      if(s[i] == '1')
      {
          firstone = i;
          break;
      }
    }

    for(ll i = n-1; i>=0; i--)
    {
      if(s[i] == '0')
      {
          lastzero = i;
          break;
      }
    }

    if(firstone == -1 || lastzero == -1 || firstone>lastzero)
    {
      cout << s << "\n";
    }


    else
    {
      string ans = "";

      for(ll i = 0;i<n; i++)
      {
        if(s[i] == '1' && i<lastzero)
          continue;

        if(s[i] == '0' && i>firstone && i!=lastzero)
          continue;

        ans += s[i];
      }

      cout << ans << "\n";

    }

	}

  return 0;

}
