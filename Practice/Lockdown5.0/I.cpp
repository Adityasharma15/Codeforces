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
  ll arr[n][m];

  for(ll i = 0; i<n; i++)
  {
    for(ll j = 0; j<m; j++)
    {
      cin >> arr[i][j];
    }
  }


  bool one = false;
  bool ans = true;

  bool row = true;
  bool col = true;

  ll arr1[n][m];

  for(ll i = 0; i<n; i++)
  {
    for(ll j = 0; j<m; j++)
    {
      arr1[i][j] = 0;
    }
  }

  for(ll i = 0; i<n; i++)
  {
    for(ll j = 0; j<m; j++)
    {

    // one = false;
    ll num = arr[i][j];
    row = true;
    col = true;

    if(num==0)
      continue;

    for(ll x = 0; x<m; x++)
    {
      if(arr[i][x]!=num)
          row = false;
    }

    for(ll x = 0; x<n; x++)
    {
      if(arr[x][j]!=num)
        col = false;
    }

    if(row==false && col==false)
      ans = false;

    if(row==true && col==true)
      arr1[i][j] = 1;

    }

  }

  if(ans)
  {
    cout << "YES\n";
    for(ll i = 0; i<n; i++)
    {
    for(ll j = 0; j<m; j++)
      {
      cout << arr1[i][j] << " ";
      }
    cout << "\n";
    }
  }

  else
    cout <<"NO\n";

  return 0;
}
