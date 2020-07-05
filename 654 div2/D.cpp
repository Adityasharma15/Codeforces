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
    ll n, k;
    cin >> n >> k;

    if(n%k==0)
      cout <<"0\n";

    else
      cout << "2\n";

    vector<vector<ll>> mat((n,0), vector<ll>(n,0));
    ll row = 0, col = 0;

    while(k>0)
    {
      ll rr = row, cc = 0;
      while(rr<n && cc<n && k--)
      {
          mat[rr++][cc++] = 1;
      }

      row++;
      rr++;

      
      while(rr<n && cc<n && k--)
      {
        mat[rr++][cc++] =1;
      }
      col++;
    }



	}

  return 0;

}
