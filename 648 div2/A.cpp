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

    ll n , m;
    cin >> n >> m;
    ll arr[n][m];

    vector<bool> row(n);
    vector<bool> column(m);

    for(ll i = 0;i<n;i++)
    {
      for(ll j = 0; j<m; j++)
      {
        cin >> arr[i][j];

        if(arr[i][j]==1)
        {
          row[i] = true;
          column[j]=true;
        }
      }
    }

    ll count = 0;

    ll i = 0, j = 0;
    while(i<n && j<n)
    {
      if(row[i]==false && column[j]==false)
      {
        count++;
      }
      i++;
      j++;
    }

    if(count%2==0)
      cout << "Vivek\n";

    else
      cout << "Ashish\n";
	}
  return 0;
}
