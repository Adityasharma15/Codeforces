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
		ll n, m, k;
    cin >> n >> m >> k;

    ll card = n/k;

    if(card >= m)
    {
      cout << m << "\n";
    }

    else
    {
      ll temp = (m - card);
      ll temp2 = (m-temp)/(k-1);
      if(temp%(k-1)!=0) temp2++;
      cout << abs(temp - temp2) << "\n";
    }
	}
  return 0;
}
