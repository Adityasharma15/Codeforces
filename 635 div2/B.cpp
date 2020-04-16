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
		ll n, a, b;
    cin >> n >> a >> b;

    ll temp = n - (10*b);
    ll temp2;

    while(a--)
    {
        n /= 2;
        n+=10;
    }

    while(b--)
      n-=10;

     if(n<=0  || temp <= 0 )
      cout << "YES";

      else
        cout << "NO";

        cout << "\n";
	}

  return 0;

}
