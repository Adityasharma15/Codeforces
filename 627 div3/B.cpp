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

      for(ll i = 0; i<n; i++)
        cin >> arr[i];

      bool ans = false;

      unordered_map< ll , pair<ll,ll>> um;

      // cout << " & " << um[1].first << "\n";

      ll temp;

      for(ll i = 0;i<n && !ans; i++)
      {
        temp = arr[i];

        // if(temp == 7)
        //   cout << i << "\n";
        //   //cout << " & " << um[7].first << "   " << um[7].second <<  "\n";

        if(um[temp].first>0 && um[temp].second < (i -1))
        {
          ans = true;
          // break;
        }

        if(um[temp].first == 0)
        {
          um[temp].first++;
          um[temp].second = i;
        }
      }

      // for(ll i = 3, j = 0; i<n; i++, j++)
      // {
      //   if(arr[i] == arr[j])
      //     {
      //       ans = true;
      //       break;
      //     }
      // }

      um.clear();

      if(ans)
        cout << "YES" << "\n";

      else
        cout << "NO" << "\n";
	}

  return 0;

}
