  #include<bits/stdc++.h>
  #define ll long long
  using namespace std;

  int main()
  {
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
  	cout.tie(0);

    ll n;
    cin >> n;

    ll temp = 3*n;
    ll arr[3][temp];

    for(ll i = 0; i<3; i++)
    {
      for(ll j = 0; j<temp; j++)
        arr[i][j] = 0;
    }

    ll count = 0;

    for(ll i = 0; i<temp; i=i+3)
      {
        arr[0][i] = 1;
        count++;
      }

    for(ll i = 0;i<temp; i++)
      {
        arr[1][i] = 1;
        count++;
      }

    for(ll i = 2; i<temp; i=i+3)
      {
        arr[2][i] = 1;
        count++;
      }

     for(ll i = 1; i<temp; i=i+3)
     {
       arr[0][i] = 1;
       arr[2][i] = 1;
       count = count+2;
     }

      cout << count << "\n";

      for(ll i = 0; i<3; i++)
      {
        for(ll j = 0; j<temp; j++)
        {
            if(arr[i][j])
              cout << i << " " << j << "\n";
        }
      }

    return 0;
  }
