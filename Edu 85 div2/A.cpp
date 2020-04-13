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

      ll temp1 = 0, temp2 = 0;

      ll lasttemp1 = 0, lasttemp2 = 0;

      bool flag = true;

      for(ll i = 0; (i<n); i++)
      {
          cin >> temp1 >> temp2;

          if(i!=0 && (temp1 < lasttemp1))
          {
            flag = false;
          }

          if(i!=0 && (temp2 < lasttemp2))
          {
            flag = false;
          }

          if(temp2>temp1)
          {
            flag = false;
          }

          ll d1 = temp1 - lasttemp1;
          ll d2 = temp2 - lasttemp2;
          if(d2>d1)
            flag = false;

          lasttemp1 = temp1;
          lasttemp2 = temp2;
      }

      if(flag)
        cout << "YES" << "\n";

      else
        cout << "NO" << "\n";
	}
  return 0;
}
