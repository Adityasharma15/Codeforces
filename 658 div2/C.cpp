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
    ll reverse = 1;

    ll n;
    cin >> n;

    string a , b;
    cin >> a >> b;

    vector<ll> moves;
    for(ll i = n-1; i>=0 ;i--)
    {
          if(a[i] == b[i])
            continue;

          // Ab Dangal hoga
          if(a[0] != a[i])
          {
            moves.push_back(1);
            a[0] = a[i];
          }

        moves.push_back(i+1);
        for(ll x = i , y = 0 ; x>=y ; x-- , y++)
        {
          if(x==y)
          {
            if(a[x] == '1')
              a[x] = '0';

            else
              a[x] = '1';

              continue;
          }

          if(a[x]!=a[y])
            {
              continue;
            }

            if(a[x]==a[y])
              {
                if(a[x] == '1')
                {
                  // cout << a[x] << "\n";
                  a[x] = 0 + '0' ;
                  a[y] = 0 + '0';
                  // cout << a[x] << "\n";

                }
                else
                {
                  // cout << a[x] << "\n";
                  a[x] = 1 + '0';
                  a[y] = 1 + '0';
                  // cout << a[x] << "\n";
                }
              }

        }

    }

      cout << moves.size() <<" ";

      for(auto i : moves)
        cout << i << " ";

        cout << "\n";
	}

  return 0;

}
