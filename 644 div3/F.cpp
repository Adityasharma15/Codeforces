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

     ll n, m;
     cin >> n >> m;

     string temp, main;

     cin >> temp;
     main = temp;

     ll diff = 0;

     bool ans = true;

     string first = temp;

    for(ll i = 1;i<n; i++)
    {
      diff = 0;
      cin >> temp;

      for(ll j = 0; j<m;j++)
      {
          if(main[j]!=temp[j])
            {
              if(diff == 0)
              {
                main[j] = temp[j];
              }

              else if(diff == 1 && i == 1)
              {
                main[j] = temp[j];
              }

              else
                ans = false;

              diff++;
            }
      }


    }

    if(ans)
      {

        // for(ll j = 0; j<m; j++)
        // {
        //   if(main[j] != first[j])
        //     {
        //       main[j] = first[j];
        //       break;
        //     }
        // }

        cout << main << "\n";
      }
    else
      cout << "-1\n";

	}

  return 0;

}
