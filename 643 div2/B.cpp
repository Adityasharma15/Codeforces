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

      sort(vec.begin(), vec.end());

      temp = 0;
      ll groups = 0, maxx = 0;

      for(ll i = 0; i<vec.size(); i++)
      {
        temp++;

        maxx = max(maxx, vec[i]);

        if(temp>=maxx)
          {
            temp = 0;
            groups++;
            maxx = temp;
          }

      }

      cout << groups << "\n";

  	}

    return 0;

  }
