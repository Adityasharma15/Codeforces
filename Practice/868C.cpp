#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, k;
  cin >> n >> k;

  ll mask[16];

  for(ll i = 0; i<16 ; i++) mask[i] = 0;

  ll number, value;

  for(ll i = 0; i<n; i++)
  {
    number = 0;
    for(ll j = 0; j<k; j++)
    {
      cin >> value;
      number += (value>>j);
    }

    mask[number]++;
  }

  ll ans = 0;
  for(ll i = 0; i<16 ; i++)
  {
    for(ll j = 0; j<16 ; j++)
    {
      if( mask[i] && mask[j])
      {
        value = (mask[i]&mask[j]);

        if(value == 0) ans++;
      }
    }
  }

  if(ans)
    cout << "YES\n";

  else
    cout << "NO\n";

  return 0;
}
