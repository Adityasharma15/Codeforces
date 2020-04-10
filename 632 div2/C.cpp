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

  set<ll> s = {0};

  vector<ll> sum(n+1, 0);

  ll temp;

  for(ll i = 1; i<=n; i++)
  {
    cin >> temp;
    sum[i]= sum[i-1] + temp;
  }

  ll end = 0, begin = 0, ans = 0;

  while(begin<n)
  {
      while(end<n && !s.count(sum[end+1]))
      {
        ++end;
        s.insert(sum[end]);
      }

      ans += (end - begin);
      s.erase(sum[begin]);
      ++begin;
  }

  cout << ans << "\n";

  return 0;

}
