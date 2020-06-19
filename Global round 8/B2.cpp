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
  ll seven = 10000000;
  ll tempseven = seven;
  string s7 = "";
  while(tempseven--)
  {
    s7+='s';
  }

  ll hundred = 10;
  string s9 = "";

  while(hundred--)
  {
    s9+=s7;
  }

  // nine is eight
  ll nine = 100000000;
  ll divnine = (n/nine);
  ll tempdivnine = divnine;

  while(tempdivnine--)
  {
    cout << s9;
  }

  ll leftafternine = n - (divnine*nine);
  ll templeftafternine = leftafternine;

  string s4 = "";
  ll four = 10000;
  while(four--)
  {
    s4+='s';
  }

  ll divfour = leftafternine/four;
  ll tempdivfour = divfour;
  while(tempdivfour--)
  {
    // cout << s4;
  }

  ll templeft = n - (templeftafternine - divfour*four);

  while(templeft--)
  {
    // cout << "s";
  }

  cout << "\n";
  return 0;
}
