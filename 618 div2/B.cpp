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

      n*=2;

      vector<ll> vec;

      ll temp;

      for(ll i =0; i<n; i++)
      {
        cin >> temp;
        vec.push_back(temp);
      }


      sort(vec.begin(), vec.end());
      // for(auto i: vec) cout << i << " ";

      // for(ll i = 0; i<n; i++)
      // {
      //   if(i == n/2 || i ==( n/2 +1) )
      //     cout << vec[i];
      // }

      ll x = n/2;

      // cout << vec[x-1] << " " << vec[n/2];

      ll ans = vec[n/2] - vec[x - 1];

      cout << ans << "\n";


  	}

    return 0;

  }
