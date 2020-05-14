#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll smallestDivisor(ll a)
{
	if(a%2==0)
		return 2;

		for(ll i = 3; i*i<a; i+=3)
		{
			if(a%i==0)
				return i;
		}

		return a;
}


ll largestDivisor(ll a)
{
	ll ans = 1;

	if(a%2==0)
	{
			ans = 2;
	}

		for(ll i = 3; i*i<a; i+=3)
		{
			if(a%i==0)
				ans = max(i, ans);
		}

		return ans;
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

		bool ans = true;

		ll a = 0, b = 0,c;

		for(ll i = 2; i*i<=n; i++)
		{
				while(n%i==0)
				{
					a = i;
					n/=i;
				}

				if(!a)
					break;
		}

		for(ll i = 2; i*i<=n; i++)
		{

				while(n%i==0)
				{
					b = i;
					n/=i;
				}

				if(!b)
					break;
		}

		if(a == 0 || b == 0)
			{
				ans = false;
			}

		else
		c = n/(a*b);

		// ll a = smallestDivisor(n);
		// ll b = largestDivisor(n);
		//

		if(c == 1 || c == a || c == b)
			ans = false;

			if(!ans)
			cout << "NO\n";

			else
			cout << "YES\n" << a << " " << b << " " << c <<"\n";
	}

  return 0;

}
