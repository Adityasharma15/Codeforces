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

    ll i;

    for(i = 0;i<n; i++)
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

    for(ll i = 0;i<n && ans; i++)
    {
      cin >> temp;

      if(temp == arr[i])
        continue;

      ans = false;

      if(temp <= -1)
      {

        if(minusonee)
        {
          if(minusone < i)
          {
            ans = true;
            continue;
          }
        }
      }

      else if(temp >=1)
      {
        if(onee)
        {
          if(one < i)
          {
            ans = true;
            continue;
          }
        }
      }

      else if(temp == 0)
      {
        if(minusonee <i && one < i)
        {
          ans = true;
          continue;
        }
      }

    }

    cout << " i " << i << "\n";

    if(ans)
      cout << "YES" << "\n";

    else
      cout << "NO" << "\n";
	}

  return 0;

}
