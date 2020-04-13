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

      ll temp =0 , ans = 0;

      if(n%2==0)
      {
        temp = (n-2);
        ans = temp/2;
      }

      else
      {
        temp = (n-1);
        ans = temp/2;
      }

      cout << ans << "\n";

	}

  return 0;

}
