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

      ll a[n];
      ll b[n];

      ll one = -1, minusone = -1;

      for(ll i = 0; i<n; i++)
      {
          cin >> a[i];

          if(a[i]==1 && one==(-1))
            one = i;

          if(a[i]==(-1) && minusone == (-1))
            minusone = i;
      }

      for(ll i = 0; i<n; i++)
        cin >> b[i];

      ll flag = true;

      for(ll i = 0;i<n; i++)
      {
        if(b[i] == a[i])
          continue;

        if(b[i] > a[i])
        {
          if(one==-1 || one >= i)
          {
            flag = false;
            break;
          }
        }

        if(b[i] < a[i])
        {
          if(minusone == -1 || minusone >=i)
          {
            flag = false;
            break;
          }
        }

      }

      if(flag)
        cout << "YES" << "\n";

      else
        cout << "NO" << "\n";

	}

  return 0;

}
