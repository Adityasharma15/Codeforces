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
  vector<ll> a(n);
  vector<ll> b(n);

  unordered_map<ll,ll> mapp;
  for(ll i = 0; i<n; i++)
  {
    cin >> a[i];
    mapp[a[i]] = i;
  }

  for(ll i = 0; i<n; i++) cin >> b[i];

  vector<ll> rotations(n);

  for(ll i = 0; i<n; i++)
  {
      if(mapp[b[i]]<i)
        rotations[i] = (mapp[b[i]]+1) + ((n-1)-i);

      else
        rotations[i] = mapp[b[i]] - i;

        // cout << rotations[i] <<"\n";
  }

  ll maxi = INT_MIN ;
  vector<ll> maxx(n);

  for(ll i = 0; i<n; i++)
  {
     maxx[rotations[i]]++;
  }

  for(ll i = 0; i<n;  i++)
  {
    if(maxx[i]>maxi) maxi = maxx[i];
  }

  cout << maxi << "\n";
  return 0;
}
