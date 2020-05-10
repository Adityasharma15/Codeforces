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
    cin >> n >>  k;

    ll temp  = 0, sum = 0;

    // vector<ll> ans;

    if(n%2==0)
    {

      if(k>n)
        cout << "NO\n";


      else if(k%2==0)
      {
        cout << "YES\n";
        temp = k-1;

        while(temp--)
        {
          cout << "1 ";
        }

        sum = (k-1);
        cout << n - sum <<"\n";
      }

      else if(k%2!=0)
      {
        temp = 2*(k-1);

        if(n-temp <=0) cout << "NO\n";

        else
        {
        cout << "YES\n";

        temp = k-1;

        while(temp--)
        {
          cout << "2 ";
        }

        sum = 2*(k-1);
        cout << n - sum <<"\n";

      }
      }

    }

    else
    {
      if(n>=k && k%2!=0)
      {
        cout << "YES\n";

        temp = k-1;

        while(temp--)
        {
          cout << "1 ";
        }

        cout << (n- (k-1)) <<"\n";

      }

      else
      {

        // if(3*k == n)
        // {
        //   while(k--)
        //     {
        //         cout << "3 ";
        //     }
        //
        //     cout << "\n";
        // }

        // else
        cout << "NO\n";

      }

    }

	}

  return 0;

}
