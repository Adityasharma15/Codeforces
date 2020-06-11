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
    cin >>n;

    string s = "";

    ll one = n/2;
    if(n%2!=0)
      {
        s.push_back('7');
        one--;
      }

    while(one--)
    {
      s.push_back('1');
    }

    cout << s << "\n";

	}

  return 0;

}
