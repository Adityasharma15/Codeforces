#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  unordered_map<char, ll> um;

  char c;
  //
  // for(ll i = 0;i <=9; i++)
  // {
  //   um[i] = i;
  // }

  um['0'] = 0;
  um['1'] = 1;
  um['2'] = 2;
  um['3'] = 3;
  um['4'] = 4;
  um['5'] = 5;
  um['6'] = 6;
  um['7'] = 7;
  um['8'] = 8;
  um['9'] = 9;


  for(ll i = 10; i<=35; i++)
  {
    c = 'A' + (i-10);
    um[c] = i;
  }

  for(ll i  = 36; i<=61; i++)
  {
    c = 'a' + (i-36);
    um[c] = i;
  }

  um['-'] =62;
  um['_'] = 63;


  string s;
  cin >> s;

  ll temp;

  ll ans = 1;

  // for(auto i: um)
  // {
  //   cout << i.first << "  " << i.second << "\n";
  // }

  for(ll i= 0; i<s.length(); i++)
  {
    temp = um[s[i]];

    for(ll j = 0; j<6; j++)
    {
      if(((1<<j)&temp)==0)
          ans = (ans*3)%mod;

      ans=ans%mod;
    }

  }

  cout << ans << "\n";

  return 0;

}
