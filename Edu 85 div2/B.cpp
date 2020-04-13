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
    vector<double> v;
    double temp;

    for(ll i = 0;i<n; i++)
    {
      cin >> temp;
      v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater<int>());

    ll ans = 0, rupee = 0;
    double each;

    for(ll i = 0;i<n; i++)
    {
        rupee += v[i];
        each = rupee/(i+1);

        if(each>=x)
          ans = max((i+1), ans);
    }

    cout << ans << "\n";
	}
  return 0;
}
