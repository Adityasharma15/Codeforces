#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n;
  cin >> n;

  ll arr[5][n+4];

  for(ll i = 0; i<(n+4); i++)
  {
    for(ll j = 0; j<5; j++)
      arr[j][i] = 0;
  }

  for(ll i = 2; i<(n+2); i++)
  {
      arr[0][i] = 1;
      arr[2][i] = 1;
  }

  for(ll i = 0; i<(n+4); i++)
    arr[1][i] = 1;

  for(ll i = 1; i<5; i++)
    arr[i][0] = 1;

  for(ll i = 1; i<5; i++)
    arr[i][n+3] = 1;

  for(ll i = 0; i<(n+4); i++)
    arr[4][i] = 1;

  // ll count = 0;
  for(ll i = 0; i<(n+4); i++)
  {
    for(ll j = 0; j<5; j++)
      {
        if(arr[j][i])
          count++;
      }
  }

  cout << count << "\n";
  for(ll i = 0; i<(n+4); i++)
  {
    for(ll j = 0; j<5; j++)
      {
        // if(arr[j][i])
        //   cout << i << " " << j << "\n";
      }
  }


  for(ll i = 0; i<5; i++)
  {
    for(ll j = 0; j<(n+4); j++)
    {
      if(arr[i][j])
        cout <<"1";

      else
        cout << "0";
    }
    cout <<"\n";
  }

  return 0;
}
