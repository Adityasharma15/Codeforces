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

    ll len = s.length(), minans1, minans2 = INT_MAX, minans3 = INT_MAX;


    ll ones = 0, zero = 0;
    for(ll i = 0; i<len; i++)
      {
        if(s[i] == '0')
          ones++;

        else
          zero++;
      }
    // to form string using only one
    minans1 = min(ones, zero);

    vector<ll> oneb(len, 0);
    vector<ll> zeroa(len, 0);
    bool start = false;

    // to form 00001111
		if(s[0]=='1') oneb[0] = 1;

		for(ll i = 1; i<len; i++)
    {
      if(s[i] == '1')
        oneb[i] = oneb[i-1]+1;

      else
          oneb[i] = oneb[i-1];
    }

		if(s[len-1] == '0') zeroa[len-1] = 1;

    for(ll i = len-2; i>=0 ;i--)
    {

      if(s[i] == '0')
        zeroa[i] = zeroa[i+1] + 1;

      else
        {
            zeroa[i] = zeroa[i+1];
        }
    }

    // cout << "ONeb\n";
    // for(auto i: oneb) cout << i << " ";
    // cout << "\n";
    // for(auto i: zeroa) cout << i << " ";
    // cout << "\n";

    for(ll i = i = 0; i<len ; i++)
    {
      minans2 = min( minans2 , (zeroa[i] + oneb[i]));
    }

    vector<ll> onea(len, 0);
    vector<ll> zerob(len, 0);

    // to form 11110000
		if(s[0] == '0') zeroa[0] = 1;
    for(ll i = 1; i<len-1; i++)
    {
      if(s[i] == '0')
        zerob[i] = zerob[i-1]+1;

      else
        zerob[i] = zerob[i-1];
    }

		if(s[len-1] == '1') onea[len-1] = 1;
    for(ll i = len-2; i>0 ;i--)
    {
      if(s[i] == '1')
        onea[i] = onea[i+1] + 1;

      else
        onea[i] = onea[i+1];
    }

    for(ll i = i = 0; i<len ; i++)
    {
      minans3 = min( minans3, (zerob[i] + onea[i]));
    }

    ll realans = min(minans2, minans3);
    realans = min(realans, minans1);
    cout << minans1 << " " << minans2 << " " << minans3 << "\n";

	}
  return 0;
}
