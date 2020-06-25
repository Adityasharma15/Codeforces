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

    ll a, b, c;
    cin >> a >> b >> c;

    ll temp = b*a;

    if(a>=c)
    {
      cout << "-1 " << b << "\n";
    }

    else if(temp<=c)
    {
      cout << "1 " << "-1" << "\n";
    }

    else
    {
      cout << "1 " << b << "\n";
    }

	}

  return 0;

}
