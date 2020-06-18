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

    ll sum = 0;
    bool zero = false;
    bool even = false;

    for(ll i = 0 ; i<s.length(); i++)
    {
      ll temp = (s[i] - '0');

      sum+=temp;

      if(temp==0 && zero==false)
        {
          zero = true;
          continue;
        }

      if(temp%2==0)
        {
          // cout << "h";
          even = true;
        }
    }

    if(even==true && zero==true && sum%3==0)
      cout << "red\n";

    else
      cout << "cyan\n";

	}
  return 0;
}
