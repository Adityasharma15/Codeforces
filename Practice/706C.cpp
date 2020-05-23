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

  ll dp[n+1][2];

  ll cost[n+1];

  for(ll i= 1; i<=n; i++)
  {
    cin >> cost[i];
  }


  vector<string> strings(n+1);

  for(ll i = 1; i<n; i++)
    cin >> strings[i];

    dp[1][0] = 0;
    dp[1][1] = cost[1];

  for(ll i = 1; i<n; i++)
  {
    if(strings[i+1] > strings[i])
      {
        dp[i] = min( cost[i] , cost[i+1]) q;
      }


  }


  return 0;

}
