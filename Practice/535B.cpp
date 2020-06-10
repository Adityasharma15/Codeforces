#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

		 string s;
     cin >> s;

     ll ans = 0;
     ll len = s.length();
     reverse(s.begin(), s.end());

     for(ll i = 0; i<s.length(); i++)
     {
        if(s[i]=='7')
        {
          // cout << s[i] << "\n";
          ans += 2*(1<<i);
          // cout << (1<<i) <<" " << ans ;
        }
        else
        {
          ans += (1<<i);
        }
        // cout << ans << "\n";
     }

    cout << ans << "\n";

  return 0;
}
