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
    vector<ll> dp(len, 0);
    ll sum = 0;
    bool start = false;

    for(ll i = 0; i<len; i++)
    {
      if(s[i]=='-')
        sum--;

      else
        sum++;

      if(sum<0)
        start = true;

      if(start)
      {
        if(s[i] == '+')
        {
          if(i==0)
            dp[i] = 1;

          else
            dp[i] = dp[i-1];
        }

        else
        {
          if(i==0)
            dp[i] = 1;

          else
            dp[i] = (dp[i-1] + (i+1));
        }
      }
    }

    if(s[len-1] == '-')
      dp[len-1] += len;

    if(!start)
      cout << len << "\n";

    else
      cout << dp[len-1] << "\n";
}

return 0;
}
