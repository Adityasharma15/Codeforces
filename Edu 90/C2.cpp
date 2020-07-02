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
      string s;
      cin >> s;

      ll len = s.length();
      vector<ll> vec(n, 0);
      ll sum = 0;

      bool neg = false;

      ll maxneg = INT_MIN;

      for(ll i = 0;i<n; i++)
      {
        if(s[i]=='-')
          sum--;

        else
          sum++;

        vec[i] = sum;

        if(vec[i]<0)
          neg = true;

        maxneg = min(maxneg, vec[i]);
      }

      if(!neg)
      {
          cout << len << "\n";
      }

      else
      {
          ll temp = (maxneg+1)*len;

      }
	}

  return 0;

}
