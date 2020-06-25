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

    ll i = 0;
    ll count = 0;

    for(i = 0; i<(len-1); i++)
    {
      // cout << s[i] <<"  " << i << "\n";
      if(s[i] == '0' && s[i+1] == '1')
        {
            s.erase(i,2);
            // cout << "*" << s << "\n";
            len = len-2;
            i = -1;
            count++;
            // cout << count << "&&&&"<< "\n";
            continue;
        }

      if(s[i] == '1' && s[i+1] == '0')
      {
        s.erase(i,2);
        len = len-2;
        i = -1;
        count++;
        // cout << count<< "\n";
        continue;
      }
    }

    if(count%2!=0)
      cout << "DA\n";

    else
      cout << "NET\n";

    }

  return 0;
}
