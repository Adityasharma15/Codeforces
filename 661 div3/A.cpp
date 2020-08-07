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

    vector<ll> arr(n);

    for(ll i = 0; i<n; i++)
      cin >> arr[i];

    sort(arr.begin(), arr.end());

    bool flag = true;

    for(ll i = 0; i<(n-1); i++)
    {
      if(abs(arr[i+1] - arr[i]) > 1 )
        flag = false;
    }

    if(flag)
      cout << "YES\n";

    else
      cout << "NO\n";

	}

  return 0;

}
