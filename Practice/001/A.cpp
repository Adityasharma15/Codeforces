#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll factors(ll n)
{
  ll count = 0;

  if(n%2==0)
  {
    count++;

    while(n%2==0)
    {
      n=n/2;
    }
  }

  for(ll i = 3; i*i<=n; i++)
  {
    if(n%i==0)
    {
      count++;
      while(n%i==0)
      {
        n=n/i;
      }
    }

  }

  if(n>2)
    count++;

  return count;

}

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n;
  cin >> n;

  ll ans = 0;

  for(ll i = 1; i<=n; i++)
  {
      if(factors(i) == 2)
        ans++;
  }


  cout << ans <<" \n";
  return 0;

}
