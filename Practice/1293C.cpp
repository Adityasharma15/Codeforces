// Codeforces C. NEKO's Maze Game
// Codeforces 1293C

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, q;
  cin >> n >> q;

  set<pair<ll,ll>> sett;
  ll block = 0;
  while(q--)
  {
    ll a, b;
    cin >> a >> b;

    if(sett.count({a,b}))
    {
      sett.erase({a,b});
      ll temp = 2;

      if(a==2) temp = 1;

      if(b>1 && sett.count({temp,b-1})>0)
            block--;

      if(sett.count({temp,b})>0)
            block--;

      if(b<n && sett.count({temp,b+1})>0)
              block--;
    }

    else
    {
    sett.insert({a,b});
    ll temp = 2;

    if(a==2) temp = 1;

    if(b>1 && sett.count({temp,b-1})>0)
            block++;

    if(sett.count({temp,b})>0)
            block++;

    if(b<n && sett.count({temp,b+1})>0)
              block++;

    }

    if(block)
        cout << "No\n";

    else
      cout << "Yes\n";
  }

  return 0;
}
