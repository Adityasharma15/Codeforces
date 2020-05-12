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

		// map<ll , ll> mapp;

		ll minelement = INT_MAX, maxelement = INT_MIN;

		while(!n%2)
		{
			// mapp[2]++;
			 n/=2;

			 if(minelement < 2) minelement = 2;
			 if(maxelement > 2) maxelement = 2;

			 // minelement = min( 2 , minelement);
			 // maxelement = max( 2 , maxelement);
		}

		while(!n%3)
		{
			// mapp[3]++;
			n/=3;

			if(minelement < 3) minelement = 3;
			if(maxelement > 3) maxelement = 3;


			// minelement = min(3, minelement);
			// maxelement = max(3, maxelement);
		}

		for(ll i = 5; i*i<=n; i+=2)
		{
			while(!n%i)
			{
				// mapp[i]++;
				n/=i;
				minelement = min(i , minelement);
				maxelement = max(i, maxelement);
			}
		}
		//
		// if(n>2)
		// 	{
		// 		mapp[n]++;
		// 		// maxelement = max(n, maxelement);
		// 		minelement = min(n, minelement);
		//
		// 	}

		ll a = minelement;
		ll b = maxelement;
		ll c = (n/a)*(n/b);


		if(a==b || c == 1)
			cout << "NO\n";

		else
			cout << "YES\n" << a << " " << b << " " << c <<"\n";


	}

  return 0;

}
