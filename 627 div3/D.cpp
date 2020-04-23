#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

   ll n;
   cin >> n;

   ll arr[n];

   for(ll i = 0;i <n; i++)
      cin >> arr[i];

      ll temp;

      vector<ll> vec(n);

      for(ll i = 0;i<n; i++)
      {
        cin >> temp;
        vec[i] = arr[i] - temp;
      }

      ll ans = 0;

      ll lb;

      sort(vec.begin(), vec.end());


      for(ll i = 0; i<n; i++)
      {
        if(vec[i] <=0) continue;

        lb = lower_bound(vec.begin(), vec.end(), (1 - vec [i])) - vec.begin();

        cout << "lb  " << lb <<"\n";

        ans+= (i - lb);

	    }

      cout << ans << "\n";

      return 0;
}
