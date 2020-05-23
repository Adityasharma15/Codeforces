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

  for(ll i = 0; i<n; i++)
  {
    cin >> temp;
		dq.push_back(temp);
  }

	unordered_map<ll , pair<ll,ll> > mp;
	ll a, b;

  for(ll i = 0; i<n; i++)
  {
    a = dq.front();
    dq.pop_front();
    b = dq.front();
    dq.pop_front();

    mp[i] = {a,b};

    dq.push_back(min(a,b));
    dq.push_front(max(a,b));
  }

	vector<ll> pattern;

	ll maxo = dq.front();
	dq.pop_front();

	while(!dq.empty())
	{
		temp = dq.front();
		pattern.push_back(temp);
		dq.pop_front();
	}

	ll patternsize = pattern.size();

  ll qu;

  // for(auto i: pattern) cout << i << "\n";

	while(q--)
	{
    cin >> qu;

		if(qu<=n)
			cout << mp[qu-1].first << " " << mp[qu-1].second << "\n";

		else
    {
      // cout << qu - n << "%" << patternsize << "\n";
			cout << maxo << " " << pattern[(qu - (n+1) )%patternsize] << "\n";
    }
  }

  return 0;

}
