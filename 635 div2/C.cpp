#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> tree[200001];
vector<ll> dist(200001, -1);
vector<bool> visited(200001, false);

void Dfs(ll i)
{
  visited[i] = true;

  for(auto j: tree[i])
  {
    if(!visited[j])
    {
      dist[j] = dist[i] + 1;
      Dfs(j);
    }
  }
}


int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);

	cout.tie(0);

  ll n, k;
  cin >> n >> k;

  ll temp1, temp2;

  for(ll i = 0;i<(n-1); i++)
  {
    cin >> temp1 >> temp2;

    tree[temp1].push_back(temp2);
    tree[temp2].push_back(temp1);
  }

  dist[1] = 0;
  Dfs(1);


  sort(dist.begin(), dist.end(), greater<int>());

  ll ans = 0;

  for(ll i = 0;i < k; i++)
  {
    ans+= dist[i];
  }

  cout << ans << "\n";

  return 0;
}
