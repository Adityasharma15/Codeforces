#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll n;
  cin >> n;
  cout << "codeforce";
  ll tens = 100000000;
  ll temptens = tens;
  string s = "";

  while(temptens--)
  {
    s+='s';
  }

  ll div = (n/tens);
  ll tempdiv = div;
  // cout << div;

  while(tempdiv--)
  {
    cout << s;
  }

  ll left = n - (div*tens);
  ll templeft = left;
  while(templeft--)
  {
    cout << "s";
  }

  cout << "\n";
  return 0;
}
