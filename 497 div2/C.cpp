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

    vector<ll> vec(n);

    for(ll i =0; i<n; i++)
    {
      cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    ll ans = 0;

    for(ll i = n-1 , j = n-2; j>=0 && i>=0; j--)
    {
      if(vec[i]>vec[j])
      {
        ans++;
        i--;
      }
    }

    cout << ans << "\n";

  return 0;

}
