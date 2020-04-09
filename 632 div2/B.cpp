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

    ll arr[n];

    ll one = 1000000;
    ll minusone = 1000000;

    bool onee = false, minusonee = false;

    for(ll i = 0;i<n; i++)
    {
      cin >> arr[i];

      if(arr[i] == -1 && !minusonee)
        {
          minusone = i;
          minusonee =  true;
        }

      if(arr[i]==1 && !onee)
        {
          one = i;
          onee = true;
        }
    }

    cout << one << "    " << minusone << "\n";

    ll temp;

    bool ans = true;

    for(ll i = 0;i<n; i++)
    {
      cin >> temp;

      if(temp == arr[i])
        continue;

      if(temp <= (-1))
      {
        if(minusone >= i)
          {
            cout << "lodu";
            ans = false;
            break;
          }

        else
          continue;
      }

      if(temp >= 1)
      {

        if(one >= i)
          {
            ans = false;
            break;
          }
      }

      if(temp == 0)
      {
        if(one<i && minusone <i)
        {
          ans = true;
        }

        if(arr[i] == 0)
          ans = true;

        if(!ans)
          break;
      }

    }

    if(ans)
      cout << "YES" << "\n";

    else
      cout << "NO" << "\n";

	}

}
