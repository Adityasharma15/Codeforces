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
    cin >>a >> b;

    bool ans = false;

    if(a ==1 || b==1)
        ans = true;

    if(a==2 && b==2)
      ans = true;

    if(ans)
      cout << "YES\n";

    else
      cout << "NO\n";

	}

  return 0;

}
