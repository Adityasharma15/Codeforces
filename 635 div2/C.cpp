#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> tree[200001];
vector<ll> dist(200001, -1);
vector<bool> visited(200001, false);
vector<ll> sons(200001, 0);

void Dfs(ll i, ll parent)
{
  visited[i] = true;
  sons[i] = 1;

  for(auto j: tree[i])
  {
    // remove back edge
    if(j == parent) continue;

    if(!visited[j])
    {
      dist[j] = dist[i] + 1;
      Dfs(j, i);
    }

    sons[i] += sons[j];
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
  Dfs(1, 0);

  vector<ll> ans;

  for(ll i = 1;i<=n; i++)
    {
      ans.push_back(dist[i] - (sons[i] - 1));

      // cout << (dist[i] - (sons[i] - 1)) << "\n";

    }


      // for(ll i = 1; i<=n; i++)
      //   {
      //     cout << dist[i] << "  " << sons[i] << "\n";
      //      cout << (dist[i] - (sons[i] - 1)) << "\n
      //    }

  sort(ans.begin(), ans.end(), greater<int>());


    // for(ll i = 0; i<=n; i++)
    //   {
    //     cout << "%";
    //     cout << ans[i] << "\n";
    //    }


  ll answer = 0;

  for(ll i = 0;i < k; i++)
  {
    answer+= ans[i];
    // cout << ans[i] << "\n";
  }

  cout << answer << "\n";

  return 0;
}
