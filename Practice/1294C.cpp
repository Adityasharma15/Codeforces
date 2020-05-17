#include<bits/stdc++.h>
#define ll long long
using namespace std;
//
// ll smallestDivisor(ll a)
// {
// 	if(a%2==0)
// 		return 2;
//
// 		for(ll i = 3; i*i<a; i+=3)
// 		{
// 			if(a%i==0)
// 				return i;
// 		}
//
// 		return a;
// }
//
//
// ll largestDivisor(ll a)
// {
// 	ll ans = 1;
//
// 	if(a%2==0)
// 	{
// 			ans = 2;
// 	}
//
// 		for(ll i = 3; i*i<a; i+=3)
// 		{
// 			if(a%i==0)
// 				ans = max(i, ans);
// 		}
//
// 		return ans;
// }


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

		ll a = 0, b = 0,c;

		set<ll> divisors;

		for(ll i = 2; i*i<=n; i++)
		{
				if(n%i==0)
				{
					n/=i;
					divisors.insert(i);
					a = i;
					break;
				}
		}

		for(ll i = 2; i*i<=n; i++)
		{

				if(n%i==0  && divisors.count(i) == 0)
				{
					n/=i;
					divisors.insert(i);
					b = i;
					break;
				}
		}

			if(a!=0 && b!=0)
				c = (n/(a*b));

			if(c == 1 || a == b || b == c || a == c)
				cout << "NO\n";

			else
			cout << "YES\n" << a << " " << b << " " << c <<"\n";
	}

  return 0;

}
