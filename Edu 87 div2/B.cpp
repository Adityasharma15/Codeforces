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

    ll len = s.length();

    ll a = -1, b = -1, c = -1;

    ll ans = INT_MAX;

    ll temp;

    for(ll i = 0; i<len; i++)
    {

      if(s[i] == '1') a = i;

      if(s[i] == '2') b = i;

      if(s[i] == '3') c = i;


      if(abs (a-b) > abs(a-c) )
      {
        temp = max(abs(a-b) , abs( b-c));
      }

      else
      {
        temp = max(abs(a-c) , abs(b-c));
      }

      if(a!=-1 && b!=-1 && c!=-1)
      {
        ans = min( temp +1, ans);
      }

    }

    if(a==-1 || b==-1 || c==-1)
      ans = 0;

    cout << ans << "\n";
	}

  return 0;

}
