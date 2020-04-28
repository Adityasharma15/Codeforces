#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll maxx = 100002;

vector<ll> tree[maxx];
vector<ll> dist(maxx, 0);
vector<bool> visited(maxx, false);

unordered_set<ll> leafs;
unordered_set<ll> leafparents;

void DFScountleaf(ll node)
{
    visited[node] = true;
    for(auto i: tree[node])
    {
      if(leafs.count(i) == 1)
      {
          leafparents.insert(node);
      }

      if(!visited[i])
      {
        DFScountleaf(i);
      }
    }
}


void dfsleaf(ll node, ll parent)
{
  visited[node] = true;
  dist[node] = dist[parent] + 1;

  for(auto i: tree[node])
  {
    if(!visited[i])
    {
      dfsleaf(i, node);
    }
  }
}




int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

		ll n;
    cin >> n;

    ll ansmax, ansmin = 1;

    ll temp1, temp2;

    for(ll i = 1; i<n; i++)
    {
        cin >> temp1 >> temp2;
        tree[temp1].push_back(temp2);
        tree[temp2].push_back(temp1);
    }

    ll root;
    ll leaf;

    for(ll i = 1; i<=n; i++)
    {
      if(tree[i].size() == 1)
      {
        leaf = i;
        leafs.insert(i);
      }

      else
        root = i;
    }

    dist[0] = -1;
    dfsleaf(leaf, 0);

    for(ll i = 1 ; i<=n; i++)
    {
      // if any distance between leaf nodes is odd then
      if(dist[i]%2==1 && tree[i].size() == 1)
        {
          // cout << i << "\n";
          ansmin = 3;
        }
    }

    for(ll i = 1; i<=n; i++)
      visited[i] = false;

    DFScountleaf(root);

    ansmax = ((n-1) - leafs.size()) + leafparents.size();

    cout << ansmin << " " << ansmax << "\n";

  return 0;

}
