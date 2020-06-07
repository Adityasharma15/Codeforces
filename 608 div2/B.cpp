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

  string s;
  cin >> s;

  ll countB = 0, countW = 0;

  for(ll i = 0; i<n; i++)
  {
       if(s[i] == 'B')
        countB++;

        else
          countW++;
  }

  if(countB == 0 || countW==0)
  {
    cout << "0\n";
  }

  else if( countB%2==0 || countW%2==0)
  {
    char c;
    (countB%2==0)?c='W':c='B';

    vector<ll> vec;

    for(ll i = 0; i<(n-1); i++)
    {
      if(s[i] == c) continue;

      s[i]=='W'?s[i]='B':s[i]='W';
      s[i+1]=='W'?s[i+1]='B':s[i+1]='W';

      vec.push_back((i+1));
    }

    cout << vec.size() << "\n";

    for(auto i:vec)
      cout << i << " ";

      cout << "\n";
  }

  else
  {
      cout << "-1\n";
  }

  return 0;
}
