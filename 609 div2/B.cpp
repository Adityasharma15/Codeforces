#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  vector<ll> b(n);

  for(ll i = 0; i<n; i++)
  {
    cin >> a[i];
    a[i]%=m;
  }

  for(ll i = 0; i<n; i++)
  {
    cin >> b[i];
    b[i]%=m;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  if(a[0]==b[0])
    cout <<  "0\n";

  else
    cout << abs(a[0]-b[0]) << "\n";

  return 0;
}
