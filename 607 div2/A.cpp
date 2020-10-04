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

    string temp;

    if(len>=2)
    {
      temp = s.substr((len-2), 2);
      // cout << temp << "\n";

      if(temp == "po")
      {
        cout << "FILIPINO\n";
        continue;
      }
    }

    if(len>=4)
    {
      temp = s.substr((len-4), 4);
      // cout << temp << "\n";//
      if(temp == "masu" || temp == "desu")
      {
        cout << "JAPANESE\n";
        continue;
      }
    }

    if(len>=5)
    {
      temp = s.substr((len-5), 5);

      if(temp == "mnida")
      {
        cout << "KOREAN\n";
        continue;
      }

    }

	}
  return 0;
}
