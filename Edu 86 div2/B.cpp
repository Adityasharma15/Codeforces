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

    ll n = s.length();

    set<ll> sett;

    for(ll i = 0; i<n; i++)
      sett.insert(s[i]);


    bool one = -1;

    if(s[0] == 1)
    one*=-1;

    string ans = "";

    ans+= s[0];

    ll curr;

    for(ll i = 1; i<n; i++)
    {
      curr = ans.length();

      if(ans[curr -1] == '1')
      {
        if(s[i] == '0')
        {
          ans+=s[i];
        }
        else
        {
          ans+= '0';
          ans+='1';
        }
      }

      else
      {
        if(s[i] == '1')
        {
          ans+=s[i];
        }
        else
        {
          ans+='1';
          ans+='0';
        }

      }
	}


      if(sett.size() == 1)
      {
        cout << s <<"\n";
      }

      else
        cout << ans << "\n";


}
  return 0;

}
