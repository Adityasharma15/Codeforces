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
        temp = b/a;

        if(temp%8==0)
        {
          b/=8;
          ops++;
        }

        else if(temp%4==0)
        { 
          b/=4;
          ops++;
        }

        else if(temp%2==0)
        {
          b/=2;
          ops++;
        }

        else
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
        temp = a/b;

        if(temp%8==0)
        {
          a/=8;
          ops++;
        }

        else if(temp%4==0)
        {
          a/=4;
          ops++;
        }

        else if(temp%2==0)
        {
          a/=2;
          ops++;
        }

        else
        {
          ans = false;
          break;
        }
    }



	}

  if(!ans)
  cout << "-1\n";

  else
    cout << ops << "\n";
}

  return 0;
}
