	#include<bits/stdc++.h>
	#define ll long long
	using namespace std;

	int main()
	{
		ios_base::sync_with_stdio(0);
	  cin.tie(0);
		cout.tie(0);

			string s;
	    cin >> s;

	    ll len = s.length();

	    ll a[len+1], b[len+1];

	    memset(a, 0, sizeof(a));
	    memset(b, 0, sizeof(b));

	    for(ll i = 0; i<len; i++)
	    {
	        if(s[i] == 'a')
	          {
							a[i+1] = a[i] +1;
							b[i+1] =b[i];
						}

	        else
	          {
							b[i+1] = b[i] +1;
							a[i+1] =a[i];
						}
	    }

	    // for(ll i = 0; i<=len; i++)
	    //   cout << a[i] << " ";
			//
	    // cout << "\n";
			//
	    // for(ll i = 0; i<=len; i++)
	    //   cout << b[i] << " ";

	    ll ans = INT_MIN;
	    ll temp = 0;

	    for(ll i = 0; i<=len; i++)
	    {
	      for(ll j = i; j<=len ; j++)
	      {
	        temp += a[i];

					// if(i == 1 && j == 3)
						// cout << temp <<"\n";

	        temp += (b[j] - b[i]);

					// if(i == 1 && j == 3)
					// 	cout << temp <<"\n";

	        temp += (a[len] - a[j]);

					// if(i == 1 && j == 3)
					// 	cout << temp <<"\n";

	        ans = max(ans,  temp);

	        temp = 0;
	      }
	    }

	      cout << ans << "\n";

	  return 0;

	}
