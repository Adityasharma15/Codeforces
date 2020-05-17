#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> graph[100001];
vector<bool> visited(100001, false);

void priority_bfs(ll start)
{

  priority_queue<ll, vector<ll> , greater<int> > pq;
  pq.push(start);
  // set<ll> sett;
  // sett.insert(start);
  visited[start] = true;

  // cout << "^^^ " << sett.size();

  while(pq.size()!=0)
  {
    // auto i =  sett.begin();
    // auto value = *i;
    // sett.erase(sett.begin());

    ll value = pq.top();
    pq.pop();
    cout << value << " ";


    for(auto j: graph[value])
    {
      if(!visited[j])
        pq.push(j);

        visited[j] = true;
    }


  }
  return;
}


void dfs(ll start)
{
  cout << start << " ";
  visited[start] = true;

  for(auto i: graph[start])
  {
    if(!visited[i])
      dfs(i);
  }

  return;
}


int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll nodes, edges;
  cin >> nodes >> edges;

  ll a, b;

  for(ll i = 0; i<edges; i++)
  {
    cin >> a >> b;

    graph[a].push_back(b);
    graph[b].push_back(a);
  }
//
//   for(ll i = 1; i<=nodes; i++)
//     {
//       for(auto j:graph[i])
//       {
//         cout << j << " ";
//       }
//
//       cout << "\n";
//     }
//
// cout << "\n" << "\n";

  // for(ll i = 0; i<=nodes ; i++)
  // {
  //   sort(graph[i].begin(), graph[i].end());
  // }

  // for(ll i = 1; i<=nodes; i++)
  //   {
  //     for(auto j:graph[i])
  //     {
  //       cout << j << " ";
  //     }
  //
  //     cout << "\n";
  //   }


  // dfs(1);
  priority_bfs(1);
  cout << "\n";

  return 0;

}
