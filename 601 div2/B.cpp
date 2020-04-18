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
        ll fridge, chain;
        cin >> fridge >> chain;

        ll ans=0, temp;

        for(ll i = 0 ;i <fridge ; i++)
        {
            cin >> temp;
            ans += temp;
        }

        ans= ans*2;

        if(fridge> chain || fridge == 2 )
         {
           cout << -1 << "\n";
         }

        else
        {
        cout << ans << "\n";

        for(ll i = 1; i<fridge ; i++)
          cout << i << " " << (i+1) << "\n";

        cout << fridge << " " << 1 << "\n";

        }

   }

    return 0;
  }
