// Codeforces 660C
#include<bits/stdc++.h>
#define ll long long
using namespace std;

pair<ll,pair<ll,ll>> maxlen(ll a, ll b, ll n, ll k, vector<ll> &vec)
{
  ll left, right, l = 0, r = 0, ans = INT_MIN , check = 0;

  while(r<n && l<n)
  {
    while(check<=k && r<n)
    {
      if(vec[r]==a)
      {
        if(check==k)
          {
            break;
          }

        else
        check++;
      }
      r++;
    }

    if(ans<(r-l))
    {
      // cout << ans << " " << l << " " << r << "\n";
      right = r-1;
      left = l;
      ans = (r-l);
    }

    while(vec[l]==b && l<n)
    {
      l++;
    }

        check--;
        l++;
        // cout << " ^ " << l << "\n";
  }

  return {ans, {left,right}};
}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, k;
  cin >> n  >> k;

  vector<ll> vec(n);

  for(ll i = 0;i <n; i++) cin >> vec[i];

  pair<ll, pair<ll,ll>> pair1;

  pair1 = maxlen(0,1, n, k, vec);

  cout << pair1.first << "\n";

    for(ll i = pair1.second.first; i<=pair1.second.second; i++)
      vec[i] = 1;


  for(auto i:vec)
    cout << i << " ";

  cout << "\n";
  return 0;
}
