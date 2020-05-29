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
		ll n, m ,x , y;
    cin >> n >> m >> x >> y;

    vector<string> vec;
    string s;

    for(ll i =0; i<n ;i++)
    {
      cin >> s;
      vec.push_back(s);
    }

    ll totalcost = 0;

    if((2*x) <= y)
    {
      for(ll i = 0; i<n; i++)
      {
        for(ll j = 0; j<m; j++)
        {
          if(vec[i][j] == '.')
            totalcost += x;
        }
      }

        cout << totalcost << "\n";
    }

    else
    {
      bool coveredlast;
      for(ll i = 0; i<n; i++)
      {
        coveredlast = false;

        for(ll j = 0; j<(m-1); j++)
        {
          if(vec[i][j]!= '.') continue;

          if(vec[i][j] == '.' && vec[i][j+1] == '.')
            {
              totalcost+=y;

              if((j+1) == (m-1))
                    coveredlast = true;

              j++;
            }

          else
            totalcost+=x;
        }

        if(!coveredlast && vec[i][m-1] =='.')
          totalcost+=x;

          // cout << totalcost<< "\n";
      }
      cout << totalcost << "\n";
    }
	}

  return 0;
}
