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

  vector<ll> zero((n+1),0);
  vector<ll> one((n+1),0);

  for(ll i = 0; i<n; i++)
  {

    if(s[i] == '0')
    {
        zero[i+1] = zero[i] +1;
        one[i+1] = one[i];
    }

    else
    {
      zero[i+1] = zero[i];
      one[i+1] = one[i] +1;
    }

  }

  ll ans = 0;

  for(ll i = 1; i<=n; i++)
  {
    if(zero[i] == one[i])
      ans = i;
  }

  return 0;
}
