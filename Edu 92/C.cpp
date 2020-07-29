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
      ll maxcount = 0;

      vector<ll> occurences(10);

      for(ll i = 0; i<len; i++)
      {
        ll temp = s[i] - '0';
        occurences[temp]++;
      }

      ll maxoccurence = 0;

      for(ll i = 0; i<=9; i++)
        maxoccurence = max(maxoccurence, occurences[i]);

      maxoccurence = len - maxoccurence;
      for(ll i = 0; i<=9; i++)
      {
        for(ll j = 0; j<=9; j++)
        {
            if(i == j)
              continue;

            bool ioccur = false, joccur= false;
            ll count = 0;
            for(ll x = 0; x<len; x++)
            {
                ll temp = s[x] - '0';

                if(temp == i)
                {
                    ioccur = true;
                }

                if(temp == j)
                {
                  if(ioccur)
                      count++;

                  ioccur = false;
                }
            }

            maxcount = max(maxcount, count);
        }
      }

      maxcount = len - 2*maxcount;

      cout << min(maxoccurence, maxcount) << "\n";
	}

  return 0;

}
