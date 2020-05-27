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

	unordered_set<ll> sett;
	unordered_map<ll,ll> mapp;
	unordered_set<ll> sett2;
	unordered_map<ll,ll> mapp2;

	vector<ll> vec;

  ll temp1;
  for(ll i = 0; i<n; i++)
  {
      cin >> temp1;
			vec.push_back(temp1);
			mapp[temp1]++;
      sett.insert(temp1);
			mapp2[temp1]++;
      sett2.insert(temp1);

  }

  if(sett.size() < k)
		cout << "-1 -1\n";

  else
  {
		ll i = 0, j = n-1;

		while(i<n && j>=0)
		{
			if( mapp[vec[i]] > 1)
				{
					mapp[vec[i]]--;
					i++;
				}

			else if( mapp[vec[j]] > 1)
			{
				mapp[vec[j]]--;
				j--;
			}

			else if( (sett.size()-1)>=k)
			{
				sett.erase(vec[i]);
				i++;
			}

			else
			{
				break;
			}

		}

		ll min1 = (j-i);

		ll x = 0, y = n-1;

		while(x<n && y>=0)
		{
			if( mapp2[vec[i]] > 1)
				{
					mapp2[vec[i]]--;
					x++;
				}

			else if( mapp2[vec[j]] > 1)
			{
				mapp2[vec[j]]--;
				y--;
			}


			else if( (sett2.size()-1) >=k)
			{
				sett2.erase(vec[y]);
				y--;
			}

			else
			{
				break;
			}

		}

		ll min2 = (y-x);

		if(min2 <min1)
			cout << (x+1) << " " << (y+1) << "\n";

		else
			cout << (i+1) << " " << (j+1) << "\n";
  }

  return 0;

}
