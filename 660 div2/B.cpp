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
    ll count = n/4;

    if(n%4!=0)
      count++;

    ll ans = 0;
    for(ll i = 0; i<(n-count); i++)
    {
      cout << "9";
    }

    while(count--)
    {
      cout <<"8";
    }
    cout << "\n";
	}
  return 0;
}
