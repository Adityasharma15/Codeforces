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

    ll arr[n][m];

    for(ll i = 0; i<n ;i++)
    {
        for(ll j = 0; j<m; j++)
          cin >> arr[i][j];
    }

    bool ans = true;

    for(ll i = 0; i<n ; i++)
    {
      for(ll j = 0; j<m ; j++)
      {
        if(arr[i][j] > 4)
          ans = false;

        if(i==0 && j==0 && arr[i][j] > 2)
          ans = false;

        if(i==(n-1) && j==0 && arr[i][j] > 2)
          ans = false;

        if(i==0 && j==(m-1) && arr[i][j] > 2)
            ans = false;

        if(i==(n-1) && j==(m-1) && arr[i][j] > 2)
            ans = false;


        if(i==0 || i == (n-1) || j == 0 || j == (m-1))
          {
            if(arr[i][j] > 3)
              ans = false;
          }

      }

    }

    if(!ans)
    {
      cout << "NO\n";
    }

    else
    {
      cout << "YES\n";

      bool two = false;

      for(ll i = 0; i<n ; i++)
      {
        two = false;
        for(ll j = 0; j<m ; j++)
        {
          arr[i][j] = 4;

          if(i==0 && j==0)
          {
              arr[i][j] = 2;
              two = true;
          }
          if(i==(n-1) && j==0)
          {
              arr[i][j] = 2;
              two = true;
        }

          if(i==0 && j==(m-1))
          {
              arr[i][j] = 2;
              two = true;
          }

          if(i==(n-1) && j==(m-1))
          {
              arr[i][j] = 2;
              two = true;
          }

          if(!two)
          {
            if(i==0 || i == (n-1) || j == 0 || j == (m-1))
                arr[i][j] = 3;
          }

          cout << arr[i][j] << " ";
          two = false;
        }

        cout << "\n";
      }

    }



	}

  return 0;

}
