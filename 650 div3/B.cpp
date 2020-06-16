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

    vector<ll> vec(n);

    ll even = 0, odd = 0;

    for(ll i = 0; i<n; i++)
    {
      cin >> vec[i];

      if(vec[i]%2==0)
          even++;

      else
        odd++;
    }

    ll neven , nodd;

    if(n%2==0)
    {
      neven = n/2;
      nodd = n/2;
    }

    else
    {
      neven = (n+1)/2;
      nodd = n - neven;
    }


    if(even<neven || odd<nodd)
    {
      cout << "-1\n";
    }

    else
    {
      ll ans = 0;

      for(ll i = 0; i<n; i++)
      {
        if(i%2==0 && vec[i]%2!=0)
        {
          ans++;
        }

        if(i%2!=0 && vec[i]%2==0)
        {
          ans++;
        }

      }
      cout << ans/2 << "\n";
    }
  }
  return 0;
}
