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

     vector<ll> a(n);
     vector<ll> sorta(n);
     vector<ll> b(n);

     for(ll i = 0; i<n; i++)
     {
       cin >> a[i];
       sorta[i]=a[i];
     }

     ll zero = 0, one = 0;

     for(ll i = 0; i<n; i++)
     {
       cin >> b[i];
     }

     sort(sorta.begin(), sorta.end());
     sort(b.begin(), b.end());

     bool ans = true;
     bool tempans = false;

     for(ll i = 0;i<n && ans;i++)
     {
       if(a[i]!= sorta[i])
       {
         ans = false;
       }
      }

     if(ans)
      cout <<"Yes\n";

    else
    {
        if(b[0] == b[n-1])
        cout <<"No\n";

        else
        cout <<"Yes\n";

    }
	}
  return 0;
}
