#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, k;
  cin >> n >> k;

  vector<ll> vec(n);

  ll maxx = INT_MIN, minn = INT_MAX;

  for(ll i = 0; i<n; i++)
  {
      cin >> vec[i];

      maxx = max(maxx, vec[i]);
      minn = min(minn, vec[i]);
  }

  if(k==1)
  {
    cout << minn << "\n";
  }

  else if(k>=3)
  {
    cout << maxx << "\n";
  }

  else
  {
    ll minn1 = INT_MAX;
    ll maxx1 = INT_MIN;

    for(ll i = 0; i<(n-1); i++)
    {
      minn1 = min(minn1, vec[i]);
      maxx1 = max(minn1, maxx1);
    }

    ll minn2 = INT_MAX;
    ll maxx2 = INT_MIN;

    for(ll i = (n-1); i>0; i--)
    {
      minn2 = min(minn2, vec[i]);
      maxx2 = max(minn2, maxx2);
    }

    cout << max(maxx2, maxx2) << "\n";
  }

  return 0;
}
