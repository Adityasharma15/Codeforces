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
    ll arr[n][n];

    string s;

    for(ll i = 0;i<n; i++)
    {
      cin >> s;

      for(ll j = 0; j<n; j++)
        {
            arr[i][j] = s[j] - '0' ;
        }
    }




    bool flag = true;

    bool flag1 = true;
    bool flag2 = true;

    for(ll i = 0;i<n; i++)
    {
      for(ll j = 0; j<n; j++)
        {

          if(arr[i][j] == 1)
          {
            flag1 = true;
            flag2 = true;

            if((i+1)<n && arr[i+1][j] == 0)
            {
              flag1 = false;
            }

            if((j+1)<n && arr[i][j+1] == 0)
            {
              flag2 = false;
            }
          }


          if(flag1==false && flag2 == false)
            flag = false;

        }
    }

    if(flag)
    cout << "YES\n";

    else
      cout << "NO\n";

	}

  return 0;

}
