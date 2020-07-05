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

    cout << max(vec[0], vec[n-1]) << "\n";
  }

  return 0;
}
