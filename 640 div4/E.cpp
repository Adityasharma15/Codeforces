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
  		ll n;
      cin >> n;

      vector<ll> vec;
      ll temp;

      for(ll i = 0; i<n; i++)
      {
        cin >> temp;
        vec.push_back(temp);
      }

      ll sum1 = 0, sum2 = 0;

      unordered_set<ll> sett;

      for(ll i = 0; i<n; i++)
      {
        sum1 = vec[i];
        sum2 = vec[i];

        for(ll j = i-1, y = i+1; y<n && j>=0; j--, y++)
        {
          sum1 += vec[j];

          if(sum1 <= n)
          sett.insert(sum1);

          sum2+=vec[y];

          if(sum2 <= n)
          sett.insert(sum2);
        }

      }

      ll ans = 0;

      for(auto i:vec)
      {
        if(sett.count(i) != 0)
          {
            cout << i << "\n";
            ans++;
          }
      }

      cout << ans << "\n";

  	}

    return 0;

  }
