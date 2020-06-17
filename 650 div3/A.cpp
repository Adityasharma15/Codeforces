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

        string ans = "";

        ans+=s[0];

        for(ll i = 1; i<s.length()-1; i=i+2)
        {
          ans+=s[i];
        }

        ans+=s[s.length()-1];

        cout << ans << "\n";
  	}

    return 0;

  }
