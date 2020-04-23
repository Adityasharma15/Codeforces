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

    ll arr[n];

    for(ll i = 0; i<n; i++)
      cin >> arr[i];

    ll ans = 0;

    ll temp1 = INT_MIN;

    bool positive = false;

    if(arr[0] > 0)
    {
       positive = true;
    }

    for(ll i = 0;i <n; i++)
    {
        if(positive)
        {
          if(arr[i] > 0)
          {
              // ans+= temp1;
              // temp1 = INT_MIN;
              temp1 = max(arr[i], temp1);
              positive = true;
              // cout << "1  " << ans << "\n";

              continue;
          }

          else
          {
              positive = false;
              ans+=temp1;
              temp1 = INT_MIN;
              temp1 = max(temp1, arr[i]);

              // cout << "2  " << ans << "\n";
              continue;
          }
        }

        else
        {
            if(arr[i] > 0)
            {
              positive = true;
              ans+= temp1;

              temp1 = INT_MIN;

              temp1 = max(arr[i], temp1);

              // cout << "3  " << ans << "\n";


              continue;
            }

            else
            {
                // ans+= temp1;
                // temp1 = INT_MIN;
                temp1 = max(temp1, arr[i]);
                positive = false;

                // cout << "4  " << ans << "\n";

                continue;
            }
        }

    }

      ans+=temp1;

      cout << ans << "\n";

    }

	}
