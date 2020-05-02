#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll a, ll b)
{
    ll ro;
    if( b == 0)
        return 1;

    ro = power(a, b/2);

    if (b%2 == 0)
        return ro*ro;

    else
        return a*ro*ro;
}


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


    ll ans1=0;
		ll ans2=0;
		ll x=n/2;

		if (n==2)
			cout<<2<<"\n";

		else
		{
			for(ll i=1;i<=n/2-1;i++)
			{
				ans1=ans1+power(2,i);
			}

			ans1+=power(2,n);

			for(ll i=n/2;i<=n-1;i++)
			{
				ans2+=power(2,i);
			}

			cout<<abs(ans1-ans2)<<"\n";
		}

	}

  return 0;

}
