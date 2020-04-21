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

   ll temp = -1, maxi = INT_MIN;

   for(ll i = 0;i<len; i++)
   {
     if(s[i] == 'R')
      {
        maxi = max( maxi, abs(i - temp));
        temp = i;
      }
   }

   maxi = max( maxi , abs( len - temp));

   cout << maxi << "\n";

	}

  return 0;

}
