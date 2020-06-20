#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool solve(ll n)
{
  bool win;
  ll temp = n/2;
  ll temp2 = n/4;
  ll temp3 = n/6;

  if(n==1)
    win = false;

  else if(n==2)
    win = true;

  else if(n==4)
    win = false;

  else if(n%2!=0)
    win = true;

  else if(temp%2!=0)
    win = false;

  else if(n%4==0 && temp2%2!=0)
  {   win = true;
  }

  else if(n%6==0 && temp3%2!=0)
    win = true;

  else
    win = false;

    return win;
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

    bool win = false;

    for(ll i = 2; i*i<=n; i++)
    {
      ll temp1 = i;
      ll temp2 = n/i;

      if(temp1%2!=0)
      {
          win = solve(temp2);
      }

      if(temp2%2!=0)
      {
          win = solve(temp2);
      }

      if(win)
        break;
    }

    if(win)
      cout << "Ashishgup\n";

    else
      cout << "FastestFinger\n";
	}
  return 0;
}
