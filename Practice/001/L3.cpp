#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  unordered_map<ll,ll> mapp;

  ll n;
  cin >> n;

  string s;
  cin >> s;

  mapp[0] = 0;

  ll ans = 0;
  ll sum = 0;

  for(ll i = 0; i<n; i++)
  {
    ll temp = 1;

    if(s[i] == '0')
      temp = -1;

    sum+=temp;

    if(mapp.find(sum)!= mapp.end())
    {
      cout << i << " "<< mapp[sum] <<  "\n";
      ans = max(ans, ((i+2) - mapp[sum]));
    }

    mapp[sum] = (i+1);
  }

  cout << ans << "\n";

  return 0;

}
