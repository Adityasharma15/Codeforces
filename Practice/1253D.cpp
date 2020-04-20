#include<bits/stdc++.h>
#define ll long long
#define maxx 200001

using namespace std;

vector<ll> graph[maxx];
vector<bool> visited(maxx, 0);

void dfs(ll i,  ll &low ,ll &high)
{
   visited[i] = true;

   low = min(low, i);
   high  = max(high , i);

   for(auto j: graph[i])
   {
     if(!visited[j])
     {
       dfs(j, low, high);
     }
   }

}

int main()
{
  ll nodes, edges;
  cin >> nodes >> edges;

  ll temp1, temp2;

  for(ll i = 0; i<edges; i++ )
  {
    cin >> temp1 >> temp2;

    graph[temp1].push_back(temp2);
    graph[temp2].push_back(temp1);
  }

  ll low;
  ll high;

  vector<pair<ll,ll>> limits;

  for(ll i = 1;i<=nodes; i++)
  {
    if(!visited[i])
    {
      low = i;
      high = i;
      dfs(i ,low, high);
      limits.push_back(make_pair(low, high));
    }
  }

  ll ans = 0, currmax = -1;

  for(ll i = 0;i <limits.size() ; i++)
  {
      if(limits[i].first <= currmax)
        ans++;
      currmax = max(currmax, limits[i].second);
  }

  cout << ans << "\n";

}
