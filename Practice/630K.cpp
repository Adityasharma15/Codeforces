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
  vector<ll> vec = {2, 3, 5, 7};

  ll ans = 0;
  ll end = (1<<4) - 1;

  // calculating value using inclusion exclusion principle
  // with the help of bitmasking
  for(ll i = 1; i<=end; i++)
  {
    ll temp = 1;
    for(ll j = 0; j<4; j++)
    {
        if(i&(1<<j))
        {
          temp *= vec[j];
        }
    }

    temp=n/temp;
    // cout << temp << "\n";

    ll one = __builtin_popcount(i);

    // cout << one << "\n";

    //odd numbers of elements
    if(one&1)
      ans+=temp;

    else
      ans-=temp;
  }

  cout << (n - ans) << "\n";
  return 0;
}
