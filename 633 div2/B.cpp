	#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {
			ll n;
			cin >> n;

			vector<ll> vec;

			ll temp;

			for(ll i = 0;i <n; i++)
			{
				cin >> temp;
				vec.push_back(temp);

			}

				sort(vec.begin(),vec.end());

				ll i, j;

				if(n%2==0)
				{
				for(i = (n/2 - 1), j = n/2; i>=0 && j<n ; i--, j++)
				{
					cout <<  vec[i] << " ";
					cout << vec[j] << " ";
				}
				}

				else
				{
					ll temp = n/2;

						cout << vec[temp] << " ";

					for(i = ((n-1)/2 - 1), j = (n+1)/2 ; i>=0 && j<n ; i--, j++)
					{
						cout << vec[i] << " ";
						cout << vec[j] << " ";
					}

				}

				cout << "\n";

	}

  return 0;

}
