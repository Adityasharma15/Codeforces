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
    ll num;
    cin >> num;
    ll temp = num%14;

    if(num<=14)
    {
      cout << "NO\n";
      continue;
    }

    if(temp>=1 && temp<=6)
      cout << "YES\n";

    else
      cout <<"NO\n";
	}
  return 0;
}
