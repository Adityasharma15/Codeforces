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
    ll n, k;
    cin >> n >> k;

    // k--;

    ll b1, b2;

    for(ll i = n-2; i>=0; i--)
    {
      // cout << "k " << k<< "\n";

      if(k<= ((n - 1) - i) )
      {
          b1 = i;
          b2 = n - k;
          // b2 = (i+1) + k;
          break;
      }

      else
      {
        k -= ((n-1) - i);
      }

    }

    for(ll i = 0;i<n; i++)
    {
        if(i == b1 || i == b2)
          cout << "b";

        else
          cout << "a";
    }

    cout << "\n";
	}

  return 0;
}
