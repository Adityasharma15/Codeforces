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
		 ll n , k;
     cin >>n >> k;

     ll temp;
     bool ans = false;

     ll odds = 0;
     ll evens = 0;

     for(ll i = 0; i<n; i++)
     {
       cin >> temp;
       if(temp%2!=0)
        {
          ans = true;
          odds++;
        }

        else
          evens++;
     }

      if(odds == 0)
        cout << "No\n";

      else
      {
          if(evens >= (k-1))
            cout << "Yes\n";

          else
          {
            // chahiye
            temp = k - evens;

            if(temp%2==0)
            {
                temp++;

                if(temp>k)
                  temp = k;

            }

            if( odds >= temp && temp%2!=0)
              {cout << "Yes\n";
                // cout << temp << "\n";
            }
            else
              cout << "No\n";
        }
      }
	}
  return 0;
}
