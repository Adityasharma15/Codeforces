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
    ll n;
    cin >> n;

    ll temp;
    ll odds = 0, odd1 = -1, odd2 = -1;

    vector<ll> vec(n);
    bool ans = false;

    for(ll i = 0; i<n; i++)
    {
      cin >> vec[i];
    }

    for(ll i = 0; i<n; i++)
    {
        temp = vec[i];

        if((temp%2)==0)
        {
          cout << "1\n" << (i+1) << "\n";
          ans = true;
          break;
        }

        else
        {
          if(odds==0)
            odd1 = (i+1);

          if(odds == 1)
            odd2 = (i+1);

          odds++;
        }
    }

    if(!ans)
    {
      if(odds>=2)
      {
        cout << "2\n" << odd1 << " " << odd2 << "\n";
      }

      else
      {
        cout << "-1\n";
      }
    }

	}

  return 0;
}
