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

    bool ans = true;

    for(ll i =0; i<(n-1) ; i++)
    {
      if(arr[i] < arr[i+1] && arr[i+1] - arr[i]!=1)
        ans = false;
    }


    if(ans)
      cout << "Yes" << "\n";

    else
      cout << "No" << "\n";

	}

  return 0;

}
