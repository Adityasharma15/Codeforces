#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll pfactors(ll n)
{
  while(n%2==0)
  {
    n=n/2;
  }

  ll count=0;

  for(ll i = 3; i*i<=n; i=i+2)
  {
    if(n%i==0)
    {
      n=n/i;
      count++;
    }
  }

  if(n>2) count++;

  return count;
}



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

    bool win;

    if(n==1)
      win = false;

    else if(n==2)
      win = true;

    // else if(n%4==0)
    // {
    //   ll temp = n/4;
    //
    //   if(temp%2!=0)
    //     win = true;
    // }

    else if(n%2!=0)
      win = true;

    else
    {
      ll temp = pfactors(n);

      ll temp2 = n/2;
      ll temp3 = n/4;

      if(temp2%2!=0)
        {
            if(temp>1)
                  win = true;

            else
              win = false;
        }

      else
      {
        if(temp>0)
          win = true;

        else
          win = false;
      }

    }

    if(win)
      cout << "Ashishgup\n";

    else
      cout << "FastestFinger\n";
	}

  return 0;
}
