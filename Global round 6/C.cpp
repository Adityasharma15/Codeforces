#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

    ll n, m;
    cin >> n >> m;

    if(n==1 && m==1)
    {
      cout << "0\n";
      return 0;
    }

	if(m==1)
	{
		for(ll i = 2; i<=(n+1); i++)
		{
			cout << i << "\n";
		}
		return 0;
	}


    ll arr[n][m];
    for(ll i = 0; i<n; i++)
    {
      for(ll j = 0;j<m; j++)
      {
        arr[i][j] = 1;
      }
    }

    for(ll i = 0; i<n; i++)
    {
      for(ll j = 0; j<m; j++)
      {
        arr[i][j]=arr[i][j]*(i+1);
      }
    }


    for(ll i = 0; i<m; i++)
    {
      for(ll j = 0; j<n; j++)
      {
        arr[j][i] = arr[j][i]*(i+1+n);
      }
    }

    for(ll i = 0; i<n; i++)
    {
      for(ll j = 0; j<m; j++)
      {
        cout << arr[i][j] << " ";
      }
      cout << "\n";
    }

  return 0;

}
