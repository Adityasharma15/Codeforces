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
		 ll len;
     cin >> len;

     string s;
     cin >> s;

     map<pair<ll,ll>, ll> mapp;
     vector< pair<ll,ll> > substrings;
     pair<ll, ll> pairr;

     pairr = make_pair(0,0);
     mapp[pairr] = -1;

     ll lastx = 0, lasty = 0;
     ll currx = 0, curry = 0;

     for(ll i = 0; i<len ;i++)
     {
       if(s[i] == 'L')
       {
         currx = lastx - 1;
         curry = lasty;
       }

       if(s[i] == 'R')
      {
        currx = lastx + 1;
        curry = lasty;
      }

       if(s[i] == 'U')
       {
         currx = lastx ;
         curry = lasty + 1;
       }

       if(s[i] == 'D')
        {
          currx = lastx;
          curry = lasty - 1;
        }

       // pairr.first = currx; pairr.second = curry;

       pairr = make_pair(currx, curry);

       if(mapp.find(pairr) != mapp.end())
       {
         // cout << mapp[pairr] << " " << i << "\n";
         substrings.push_back( make_pair(mapp[pairr] , i) );
       }

       mapp[pairr] = i;

       lastx = currx;
       lasty = curry;

       // cout << currx << " " << curry << " " << mapp[pairr] <<"\n";

     }

     ll ans = INT_MAX;

     ll ansa, ansb;

     ll temp;

     for(auto i: substrings)
     {
       temp = i.second - i.first;

       // cout << temp << "\n";

       if(temp < ans)
       {
         ansa = i.first;
         ansb = i.second;

				 ans = temp;
       }
     }

     if(!substrings.size())
      cout << "-1\n";

     else
      cout << ansa + 2 << " " << ansb + 1 << "\n";
	}

  return 0;

}
