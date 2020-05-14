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

	    ll n, k;
	    cin >> n >> k;

	    ll ans = n;

	    if(n%2==0)
	    {
	        ans += 2*k;
	        cout << ans << "\n";
	    }

	    else
	    {

	      ll minelement = INT_MAX;

	  		while(n%2==0)
	  		{
	  			// mapp[2]++;
	  			 n/=2;

	  			 if(minelement > 2) minelement = 2;
	  			 		// cout << "mini " << minelement << "\n";
	  			 // if(maxelement > 2) maxelement = 2;

	  			 // minelement = min( 2 , minelement);
	  			 // maxelement = max( 2 , maxelement);
	  		}

	  		while(n%3==0)
	  		{
	  			// mapp[3]++;
	  			n/=3;


	        // cout << "********************";
	  			if(minelement > 3) minelement = 3;
	  					// cout << "mini " << minelement << "\n";
	  			// if(maxelement > 3) maxelement = 3;


	  			// minelement = min(3, minelement);
	  			// maxelement = max(3, maxelement);
	  		}

	  		for(ll i = 5; i*i<=n; i+=2)
	  		{
	  			while(n%i==0)
	  			{
	  				// mapp[i]++;
	  				n/=i;
	  				minelement = min(i , minelement);
	  						// cout << "mini " << minelement << "\n";
	  				// maxelement = max(i, maxelement);
	  			}
	  		}

	  		if(n>2)
	  			{
	  				// mapp[n]++;
	  				// maxelement = max(n, maxelement);
	  				minelement = min(n, minelement);
	  						// cout << "mini " << minelement << "\n";
	  			}

			    // cout << "mini " << minelement << "\n";

	        ans  = ans + minelement + 2*(k-1);

	        cout << ans << "\n";

	    }


		}

	  return 0;

	}
