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

    ll a, b;
    cin >> a >> b;

    ll ops = 0, temp;

    bool ans = true;

    if(b==a)
      ops = 0;

    else if(b>a)
    {
      while(a!=b)
      {
        a=a<<1;
        ops++;

        cout << a << "\n";

        if(a>b)
          {
            ans = false;
            break;
          }

      }

    }

    else if(b<a)
    {
        while(a!=b)
        {
          b=b<<1;
          ops++;

          // cout << b;
          if(b>a)
            {
              ans = false;
              break;
            }
        }
	   }

	ll total;

  if(!ans)
  cout << "-1\n";

  else
    {
			cout << ops << "\n";
			total = ops%3;
			cout << total << "\n";
			ops/=3;
      total += ops;
			cout << total << "\n";
    }
}

  return 0;
}
