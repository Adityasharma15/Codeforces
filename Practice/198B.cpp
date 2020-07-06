//  Codeforces Jumping on Walls - 198B

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n, k;
  cin >> n >> k;

  string a, b;
  cin >> a >> b;

	bool visited[2][n+1];
	memset(visited, false, sizeof(visited));

	queue<pair<pair<ll,ll>, ll>> q;
	q.push({{0,0}, 0});
	bool ans = false;

	while(!q.empty())
	{
		pair< pair<ll,ll>, ll> p = q.front();
		q.pop();


		if(visited[p.first.first][p.first.second]==true)
			continue;

		if(p.first.second < p.second)
		{
			// cout << "**";
			// cout << p.first.first << " " << p.first.second << "\n";
			continue;
		}

			if((p.first.second + 1)>=n)
			{
				ans = true;
				break;
			}

			if((p.first.second + k)>=n)
			{
				ans = true;
				break;
			}

		visited[p.first.first][p.first.second] = true;

		if((p.first.second-1)>0 && visited[p.first.first][p.first.second-1] == false)
		{
			if(p.first.first == 0 && a[p.first.second - 1] == '-')
				{
					q.push({{0,(p.first.second-1)} , p.second +1});
			  }

			if(p.first.first == 1 && b[p.first.second -1] == '-')
				{
					q.push({{1,(p.first.second-1)} , p.second +1});
				}
		}

		if((p.first.second+1) < n)
		{
			if(p.first.first == 0 && a[p.first.second + 1] == '-')
				{
					q.push({{0,(p.first.second+1)} , p.second +1});
			  }

			if(p.first.first == 1 && b[p.first.second +1] == '-')
				{
					q.push({{1,(p.first.second+1)} , p.second +1});
				}
		}

		if((p.first.second+k) < n)
		{
			if(p.first.first == 0 && b[p.first.second + k] == '-')
				{
					q.push({{1,(p.first.second+k)} , p.second +1});
				}

			if(p.first.first == 1 && a[p.first.second +k] == '-')
				{
					q.push({{0,(p.first.second+k)} , p.second +1});
				}
		}

		if(p.first.second >= (n-1))
		{
			ans = true;
			break;
		}

	}

	if(ans)
		cout << "YES\n";

	else
		cout << "NO\n";

  return 0;
}
