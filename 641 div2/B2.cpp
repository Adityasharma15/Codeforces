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

     ll arr[n+1];
     vector<ll> dp(n+1, 1);
     ll ans = 1;

     for(ll i = 1;i<=n; i++)
      {
          cin >> arr[i];

          // for 1
          if(i > 1 && arr[i]>arr[1])
            {
                dp[i]++;
                ans = max(ans, dp[i]);
            }

          // for 2's multiple greater than 2
          if(i>2 && i%2==0 && arr[i]>arr[2])
          {
            dp[i] = max(dp[2] + 1 , dp[i]);
            ans = max(ans, dp[i]);
          }
      }


    ll temp = 1, j = 2;

     for(ll i = 3; i<=n; i++)
     {
       temp = i;
       j = 2;

      while(temp <= n)
      {
        temp = i*j;

        // cout << "temp" << temp << "\n";

        // if(temp == 6)
        // cout << "&";

        if(temp <=n)
      {
        if(temp <= n && arr[temp] > arr[i])
        {
          dp[temp] = max( dp[i] + 1 , dp[temp]);
          ans = max(ans, dp[temp]);
        }
      }

        j++;
      }

     }

     // for(auto i: dp)
     //  cout << i << " ";
     //
     //  cout << "\n";

     cout << ans << "\n";

	}

  return 0;

}
