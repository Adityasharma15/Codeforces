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

      n/=2;

      ll ans;

      ans = n*(n+1);

      ans *=((2*n)+1);

      ans*=8;

      ans /= 6;

      cout << ans << "\n";


	}

  return 0;

}
