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

    ll n , m;
    cin >> n >> m;

    vector<ll> arr(n);
    vector<ll> p(m);

    for(ll i = 0; i<n; i++)
        cin >> arr[i];

    for(ll i = 0; i<m; i++)
      cin >> p[i];

    sort(p.begin(), p.end());

    ll temp;

    for(ll a = 0; a<(n+n); a++)
    {
    for(ll i = 0; i<(n+n); i++)
    {

        for(ll j = 0; j<m; j++)
        {

          if(arr[p[j] -1 ] > arr[p[j]])
            {
              temp = arr[p[j]-1];
              arr[p[j]-1] = arr[p[j]];
              arr[p[j]] = temp;
              // swap(arr[p-1] , arr[p]);
            }
        }

    }
  }

    bool ans = true;

    for(ll i = 0; i<n; i++)
    {
      if(arr[i] > arr[i+1])
      ans = false;

      // cout << arr[i] <<" ";
    }

    // cout << "\n";

    if(ans)
      cout << "YES\n";

    else
      cout << "NO\n";

	}

  return 0;

}
