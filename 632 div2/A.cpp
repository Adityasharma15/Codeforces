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
		ll n, m;
    cin >> n >> m;

    for(ll i = 0;i<n; i++)
    {
      for(ll j = 0; j<m; j++)
      {
          if(i==(n-1) && j == (m-1))
            cout << "W";

          else
          cout << "B";
      }

      cout << "\n";

    }

	}

  return 0;

}
