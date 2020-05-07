#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

		 ll n;
     cin >> n;

     string s;
     cin >> s;

     ll ans = 0;

     // stack<char> stck;

     ll open = 0, close = 0;

      for(ll i = 0;i<n; i++)
      {
        if(s[i] ==  '(')
          open++;

        else
          close++;

      }
      // stck.push_back(s[i]);

      if(open!=close)
      {
        cout << "-1\n";
      }

      else
      {
        ll temp = 0, h = 0;

        for(ll i  = 0; i<n; i++)
        {

          if(s[i] == '(')
            temp++;

          else
            temp--;

          if(temp<0)
          {
            h  = i;

            while(temp<0 && i<n)
            {
              i++;

                        if(s[i] == '(')
                          temp++;

                        else
                          temp--;
            }

            ans+= ( i - h +1);

          }


        }
        cout << ans << "\n";

      }

  return 0;

}
