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

  string s;
  cin >> s;

  for(ll i = 0; i<n; i++)
  {
    if(s[i] == '0')
      s[i] = '-1';
  }

  // cout << s;
  vector<ll> sum(n,0);

  sum[0] = (int)(s[0] - '0');

  // cout << sum[0];

  for(ll i = 1; i<n; i++)
  {
    sum[i] = (int)(s[i-1] - '0')   + (int)(s[i] - '0');
    cout << sum[i] << "\n";
  }

  ll ans = 0;
  
  for(ll i = 0; i<n; i++)
  {
    if(sum[i]==0)
      ans = (i+1);
  }

  cout << ans << "\n";
  return 0;
}
