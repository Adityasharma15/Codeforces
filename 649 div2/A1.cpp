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


    vector<ll> vec(n);

    ll sum = 0;

    for(ll i = 0; i<n; i++)
    {
      cin >> vec[i];
      sum+=vec[i];
    }

    if(sum%x!=0)
      cout << n << "\n";

    else
    {

      ll l = 0, r = n-1;

      ll len = n;
      bool ans = false;
      while(l<n && r>=0)
      {
        if(vec[l]%x==0)
        {

        }

      }

        
    }


	}

  return 0;

}
