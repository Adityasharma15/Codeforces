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

      ll ans = 0, temp = 0;
      bool flag = false;

      for(ll i = 0; i<s.length(); i++)
      {
        if(s[i]=='1')
          flag = true;

        if(flag && s[i]=='0')
          {
            temp++;
          }

        if(s[i]=='1')
          ans = temp;
      }


      cout << ans << "\n";

  	}

    return 0;
  }
