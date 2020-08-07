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

        vector<ll> a(n);
        vector<ll> b(n);

        ll mina = INT_MAX,  minb = INT_MAX;

        for(ll i = 0; i<n; i++)
        {
          cin >> a[i];
          mina = min(mina , a[i]);
        }

        for(ll i = 0; i<n; i++)
        {
          cin >> b[i];
          minb = min(minb , b[i]);
        }

        ll operations = 0;
        for(ll i = 0; i<n; i++)
        {
          ll difa = a[i] - mina;
          ll difb = b[i] - minb;

          // cout << mina << " " << minb << "\n";
          ll ans = min(difa,difb) + (max(difa, difb) - min(difa,difb));
          // cout << difa << " " << difb << "\n";
          // cout << ans << "\n";
          operations += ans;
        }

        cout << operations << "\n";

  	}
    return 0;

  }
