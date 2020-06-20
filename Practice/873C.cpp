#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, m, k;
  cin >> n >> m >> k;

  ll arr[n][m];

  for(ll i = 0;i<n; i++)
  {
    for(ll j = 0; j<m; j++)
    {
      cin >> arr[i][j];
    }
  }

  ll one = 0, change = 0;

  for(ll i = 0; i<m; i++)
  {

    ll tempone = 0, tempchange = 0;

    for(ll j =0; j<k && j<n; j++)
    {
      tempone+=arr[j][i];
    }

    ll currone = tempone;
    ll currchange = 0;
    for(ll j = k; j<n; j++)
    {
      currone = (currone + arr[j][i]) - arr[j-k][i];
      currchange = currchange + arr[j-k][i];

      if(currone>tempone)
      {
        tempchange = currchange;
        tempone = currone;
      }
    }

    one+= tempone;
    change+= tempchange;
  }

  cout << one << " " << change << "\n";
  return 0;
}
