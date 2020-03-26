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

      string s;
      cin >> s;

      vector<ll> s1;
      vector<ll> s2;

      bool flag = false;

      for(ll i = 0; i<n; i++)
      {
        if(s[i] == '2' && !flag)
        {
          s1.push_back(1);
          s2.push_back(1);
        }

        else if(s[i] == '1' && !flag)
        {
          s1.push_back(1);
          s2.push_back(0);
          flag = true;
        }

        else if(s[i] == '0')
        {
          s1.push_back(0);
          s2.push_back(0);
        }


        else if(flag)
        {
          s1.push_back(0);


          if(s[i] == '0')
            s2.push_back(0);

          if(s[i] == '1')
            s2.push_back(1);

          if(s[i] == '2')
            s2.push_back(2);
        }

      }

      for(auto i:s1)
        cout << i;

      cout << "\n";

      for(auto j:s2)
        cout << j;

      cout << "\n";

	}

}
