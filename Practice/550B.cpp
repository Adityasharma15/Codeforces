#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<ll>&vec, ll number, ll mini, ll maxi , ll diff)
{
  ll i = 0;
  ll sum = 0;

  ll mins = INT_MAX, maxs = INT_MIN;

  while(number>0)
  {
    if(number&1)
    {
      sum+=vec[i];
      mins = min(mins, vec[i]);
      maxs = max(maxs, vec[i]);
    }
    i++;
    number = number>>1;
  }

  // cout << sum << "  sum  numbeer " << number << "\n";

  if(sum>=mini && sum<=maxi && (maxs-mins)>=diff)
  {
    // cout << sum << "\n";
    return true;
  }

  return false;
}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n , mini, maxi , diff;
  cin >> n >> mini >> maxi >> diff;

  vector<ll> vec(n);
  for(ll i = 0; i<n; i++)
    cin >> vec[i];

  ll end = (1<<n) - 1;
  ll ans = 0;

  for(ll i = 1; i<=end; i++)
  {
      if(__builtin_popcountll(i) >1)
        {
          if(check(vec, i , mini, maxi , diff))
          {
            ans++;
          }
        }
  }

  cout << ans << "\n";
  return 0;
}
