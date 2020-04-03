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
		ll n, x;
    cin >> n >> x;

    bool arr[500];

    for(ll i = 0;i<500; i++)
      arr[i] = false;

    ll temp;

    ll maxval = INT_MIN;

    for(ll i = 0;i<n; i++)
    {
      cin >> temp;
      arr[temp] = true;

      maxval = max(maxval, temp);
    }

    bool flagg = true;

    ll ans = 0;

    for(ll i = 1; i<=500 && flagg; i++)
    {
        if(arr[i])
          continue;

        if(!arr[i])
        {
          if(x>0)
          {
            //cout << "x" << x << "\n";
            arr[i] = true;
            x--;
            continue;
          }

          else
          {
            flagg = false;
             ans = i - 1;
          }

        }
    }

    cout << ans << "\n";
	}

}
