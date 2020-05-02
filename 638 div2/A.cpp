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

    ll temp = n/2;

    ll ans1 = 0;
    ll ans2 = 0;

    ll end = n/2;

    ll arr[n];

    ll total = 0;

    for(ll i = 0; i<n; i++)
    {
      arr[i] = 1<<(i+1);
      total += arr[i];
      // cout << arr[i] << "\n";
    }



    if(temp%2==0)
    {
      end = n/4;
    }

    else
      end = (n/4) + 1;

    for(ll i = 0;i<end; i++)
    {
      ans1+= arr[i];

    }

    for(ll i = n-1; i>= (n - n/4); i--)
    {
      ans1+=arr[i];
    }

    for(ll i = end; i<(n - n/4) ; i++ )
    {
      ans2+=arr[i];
    }


    // ans2 = total - ans1;

    // cout << total;

    // cout << ans1 << " " << ans2 << "\n";
    cout << abs(ans1 - ans2) << "\n";

	}

  return 0;

}
