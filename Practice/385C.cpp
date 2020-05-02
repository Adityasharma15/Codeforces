#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll count[10000001];
ll primes[10000001];


int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  memset(count, 0, sizeof(count));

  ll n;
  cin >> n;

  ll temp;

  for(ll i = 0; i<n; i++)
  {
    cin >> temp;
    count[temp]++;
  }

  memset(primes, 0 , sizeof(primes));

  ll q;
  cin >> q;

  return 0;

}
