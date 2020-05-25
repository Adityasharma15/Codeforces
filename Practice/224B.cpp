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

  unordered_set<ll> sett;
  ll temp1;

  for(ll i = 0; i<n; i++)
  {
      cin >> temp1;
      sett.insert(temp1);
  }

  if(sett.size() >=k)
  {
    cout << "1 " << n << "\n";

  }

  else
  {
    cout << "-1 -1\n";
  }

  return 0;

}
