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

      vector< pair<ll,ll> > game;

      ll temp1 = 0, temp2 = 0;

      for(ll i = 0;i<n;i ++)
      {
          cin >> temp1 >> temp2;

          game.push_back(make_pair(temp1, temp2));
      }

      ll lasttemp1 = 0, lasttemp2 = 0;

      bool flag = true;

      for(ll i = 0; (i<(n-1)); i++)
      {

          //if( temp1 < lasttemp1))
          if(game[i+1].first< game[i].first)
          {
            flag = false;
          }

          //if(temp2 < lasttemp2))
          if(game[i+1].second < game[i].second )
          {
            flag = false;
          }

          //if(temp2>temp1)
          if(game[i].first < game[i].second)
          {
            flag = false;
          }

      }


      if(game[n-1].first < game[n-1].second)
        flag = false;

      if(flag)
        cout << "YES" << "\n";

      else
        cout << "NO" << "\n";
	}
  return 0;
}
