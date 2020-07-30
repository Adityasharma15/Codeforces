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

    if(n<31)
    {
        cout <<"NO\n";
        continue;
    }

    else
    {
      ll fourth = n - 30;

      if(fourth == 6 || fourth == 10 || fourth == 14)
        {
          fourth = n - 31;

          if(fourth <= 0 || fourth == 6 || fourth == 10 || fourth ==15)
            cout << "NO\n";

          else
              cout << "YES\n6 10 15 " << fourth << "\n";
        }

      else
        cout << "YES\n6 10 14 " << fourth << "\n";
    }
	}

  return 0;

}
