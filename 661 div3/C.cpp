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
      vector<ll> arr(n);

      for(ll i = 0 ; i<n; i++)
        cin >> arr[i];

      sort(arr.begin(), arr.end());

      set<ll> taken;
      vector<ll> pairs(101,0);
      ll maxi = 0;

      for(ll i = 2; i<=100; i++)
      {
        ll foundsum = 0;
        bool occurence[51]  =  {false};
        memset(occurence, false, sizeof(occurence));

          for(ll x = 0; x<(n-1); x++)
          {

            for(ll y = x+1; y<n; y++)
            {
              if( occurence[x] == false && occurence[y] == false )
              {
                if((arr[x] + arr[y]) == i)
                {
                  occurence[y] = true;
                  occurence[x] = true;;
                  foundsum++;
                }
              }
            }

            maxi = max(foundsum, maxi);
          }
      }
      cout << maxi << "\n";
	}
  return 0;
}
