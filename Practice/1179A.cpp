#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, q;
	cin >> n >> q;

  deque <ll> dq;
  ll temp;

  for(ll i = 0;i <n; i++)
  {
    cin >> temp;
    dq.push_back(temp);
  }

  vector<ll> queries;

  ll maxq = INT_MIN;

  for(ll i = 0; i<q; i++)
  {
    cin >> temp;
    maxq = max(maxq, temp);
    queries.push_back(temp);
  }

   unordered_map<ll, pair<ll,ll>> mp;

   ll a, b;

  for(ll i = 1; i<=maxq; i++)
  {

    a = dq.front();
    dq.pop_front();
    b = dq.front();
    dq.pop_front();

    // mp[i] = {a,b};

    dq.push_back(min(a,b));
    dq.push_front(max(a,b));
  }

  for(auto i: queries)
  {
    cout << mp[i].first << " " << mp[i].second << "\n";
  }


  return 0;

}
