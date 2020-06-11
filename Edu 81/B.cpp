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
    ll n, dif;
    cin >>  n>> dif;

    string s;
    cin >> s;

    vector<ll> pre(n,0);
    vector<ll> post(n,0);

    if(s[0] == '0') pre[0] = 1;

    else pre[0] = -1;

    for(ll i = 1; i<n; i++)
    {
      if(s[i] == '0')
        pre[i] = pre[i-1] + 1;

      else
        pre[i] = pre[i-1] - 1;
    }

    if(s[n-1] == '0') post[n-1] = 1;

    else post[n-1] = -1;

    for(ll i = n-2; i>=0; i++)
    {
      if(s[i] == '0')
        post[i] = post[i+1] + 1;

      else
        post[i] = post[i+1] - 1;
    }

    ll totaldif = pre[n-1];
    ll ans = 0;


    if(totaldif == 0 && dif == 0)
    {
      cout << "-1\n";
    }

    else
    {
      if(dif%totaldif ==0)
      {
          for(auto i: pre)
          {
            if(i==0)
              ans++;
          }
          for(auto i: post)
          {
            if(i==0)
              ans++;
          }

          cout << ans << "\n";
      }

      else
      {

            



      }

    }

	}

  return 0;
}
