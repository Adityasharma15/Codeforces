#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n;
	cin >> n;

  vector< ll > tree[n+1];
  ll mem[n+1];

  memset(mem, -1, sizeof(mem));

  ll temp1, temp2;

  for(ll i =1; i<n; i++)
  {
      cin >> temp1 >> temp2;

      tree[temp1].push_back(i);
      tree[temp2].push_back(i);
  }

  pair<ll, ll> maxi(0,0);

  for(ll i = 1; i<=n; i++)
    maxi = max(maxi , make_pair((ll)(tree[i].size()), i));

  ll label = 0;

  for(auto i : tree[maxi.second])
  {
      mem[i] = label++;
  }


  for(ll i = 1; i<n; i++)
  {
      if(mem[i]== -1)
        mem[i] = label++;

      cout << mem[i] << "\n";
  }

  return 0;

}
