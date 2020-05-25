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

    ll a, b;
    cin >> a >> b;

    ll mini = min(a,b);

    ll maxi = max(mini*2, max(a,b));

    cout << maxi*maxi << "\n";

	}

  return 0;

}
