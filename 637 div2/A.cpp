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

    ll n, a ,b ,c ,d;
    cin >> n >> a >> b >> c >>d;

    ll x = a-b, y = a+b, z = c-d, q = c+d;

    ll temp = n*x, temp2 = n*y;

    bool ans = false;

    if( z >= temp && z<=temp2)
      ans = true;

    if(q >=temp && q <= temp2)
      ans = true;

    if(temp>=z && temp<=q)
    ans = true;

    if(temp2>=z && temp2<=q)
    ans = true;

    if(ans)
      cout << "Yes" << "\n";

    else
      cout << "No" << "\n";

	}

  return 0;

}
