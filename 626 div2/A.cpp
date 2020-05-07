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

        ll arr[n];

        bool answered = false;
        ll ans = -1, ansa = -1 , ansb = -1;

        for(ll i = 0;i<n; i++)
        {
            cin >> arr[i];

            if(arr[i]%2==0)
            {
              answered = true;
              ans = i;
              // break;
            }

        }


        if(!answered)
        {
          ll odds = 0;

          for(ll i = 0; i<n; i++)
          {
            if(arr[i]%2!=0)
            {
              odds++;

              if(odds==1)
                ansa = i;

              if(odds == 2)
                ansb = i;
            }
          }

          if(odds >= 2)
          {
          cout << "2\n";
          cout << ansa+1 << " " << ansb+1 << "\n";
          }

          else
            cout << "-1\n";

        }

        else
        {
          cout << "1\n";
          cout << ans+1 << "\n";
        }

  	}

    return 0;

  }
