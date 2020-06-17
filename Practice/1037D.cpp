// Codeforces 1037D Solution
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> graph[200001];
vector<bool> visited(200001, false);
unordered_map<ll,ll> hashh;
vector<ll> ans;

void BFS(ll start)
{
    // ans.push_back(start);
    // vector<ll> ans;
    queue<ll> qu;
    qu.push(start);
    // visited[start] = true;

    while(!qu.empty())
    {
      ll temp = qu.front();
      qu.pop();
      visited[temp] = true;
      ans.push_back(temp);

      for(auto i:graph[temp])
      {
        if(!visited[i])
          qu.push(i);
      }
    }
    return;
}

bool comp(ll a, ll b)
{
  return hashh[a]<hashh[b] ;
}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n;
  cin >> n;

  ll a, b;

  for(ll i = 0; i<n-1; i++)
  {
    cin >> a >> b;
    graph[a].push_back(a);
    graph[b].push_back(b);
  }

  vector<ll> gbfs(n);

  for(ll i = 0; i<n; i++)
  {
    cin >> gbfs[i];
    hashh[gbfs[i]] = i;
  }

  for(auto i: graph)
  {
    sort(i.begin(), i.end(), comp);
  }


  BFS(1);
  bool dif = false;

  // for(auto i:ans)
  //   cout << i << " ";

    // cout << "\n";

  for(ll i = 0; i<n; i++)
  {
    cout << ans[i] << " ";
    if(ans[i]!=gbfs[i])
    {
        dif = true;
        // cout << i << " $ ";
    }

    cout << "\n";

  }

  if(dif)
   cout <<"No\n";

  else
    cout <<"Yes\n";

  return 0;
}
