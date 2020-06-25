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
    vector<ll> dp((len+1), 0);
    vector<ll> summ( (len+1), 0);
    ll sum = 0;
    bool start = false;

    ll jump = 0;

    for(ll i = 0; i<len; i++)
    {
      if(s[i]=='-')
        sum--;

      else
        sum++;

      summ[i] = sum;

      if(sum<0)
        start = true;

      if(start)
      {
        if(i==0)
          {
            dp[i] = 1;

            if(dp[i] == -1)
              jump++;
          }

        else
        {
          if(s[i-1] == '-' && (summ[i-1] + jump)<0)
            {
                dp[i] = dp[i-1] + (i+1);
                  jump++;
            }

          else
            dp[i] = dp[i-1] + 1;
        }
      }
      // cout << dp[i] << "\n";
    }

    ll ans = dp[len-1];

    if(s[len-1] == '-' && (summ[len-1] + jump)<0)
        ans = dp[len-1] + len;


    if(!start)
      cout << len << "\n";

    else
      cout << ans << "\n";

}
return 0;
}
