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
    string s, b;
    cin >> s >> b;

  	ll lena = s.length();

    ll pos = 0;
    // char minchar;
    for(ll i = 0;i<lena; i++)
    {
      char c = 'z';

      for(ll j = i+1; j<lena; j++)
      {
        if(s[j] < c)
        {
            c = s[j];
            pos = j;
        }
      }

      if(c<s[i])
        {
          swap(s[pos], s[i]);
          break;
        }
    }

    if(s<b)
      cout << s << "\n";

    else
      cout << "---\n";

  }
  return 0;
}
