#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, m;
	cin >> n >> m;

  set<ll> tree;
  set<ll> people;

  queue<pair<ll,ll>> bfs;

  ll temp, temp2;

  for(ll i = 0;i<n; i++)
  {
    cin >> temp;

    bfs.push(make_pair(temp,0));
    tree.insert(temp);
  }

  ll ans = 0;

  while(people.size()<m && !bfs.empty())
  {
      temp = bfs.front().first;
      temp2 = bfs.front().second;

      // cout << temp << " " << temp2 << "\n";

      if(people.count(temp+1)==0 && tree.count(temp+1)==0)
        bfs.push(make_pair(temp+1, temp2+1));

      if(people.count(temp-1)==0 && tree.count(temp-1)==0)
        bfs.push(make_pair(temp-1 , temp2+1));

      if(people.count(temp)==0 && tree.count(temp)==0)
        {
          people.insert(temp);
          ans+=temp2;
        }

        // cout << people.size() << "\n";

        bfs.pop();

  }

   cout << ans << "\n";

   for(auto i: people)
     cout << i << " ";

   cout << "\n";

  return 0;

}
