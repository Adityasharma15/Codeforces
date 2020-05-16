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
	   ll n,k;
     cin >> n >> k;

     vector<ll> a;
     vector<ll > b;

      ll temp;

      for(ll i = 0;i <n; i++)
      {
        cin >> temp;
        a.push_back(temp);
      }

      for(ll i = 0;i <n; i++)
      {
        cin >> temp;
        b.push_back(temp);
      }

      sort(a.begin(), a.end());
      sort(b.begin(), b.end(), greater<int>());

      for(ll i = 0; i<k; i++)
      {
        a[i] = max(a[i], b[i]);
      }

      ll sum = 0;

      for(ll i= 0; i<n; i++)
        sum+= a[i];

      cout << sum << "\n";

	}

  return 0;

}
