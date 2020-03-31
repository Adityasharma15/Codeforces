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
  //
  // bool arr[1001];
  //
  // memset(arr, true, sizeof(arr));
  //
  // int p;
  //
  // for(p = 2 ; p*p<=n; p++ )
  //   {
  //     for(int x = 2; x*p<=n; x++)
  //     {
  //       arr[p*x]=false;
  //   }
  //
  // }
  //
  // vector<ll> prime;
  //
  //
  // for(ll i = 0; i< 1001; i++)
  //   {
  //     if(arr[i])
  //       prime.push_back(i);
  //   }


  ll p[10] = {2,3,5,7,11,13,17,23,29};


	while(t--)
  {

    ll n;
    cin >> n;

    ll arr[n];

    for(ll i = 0 ; i<n; i++)
      cin >> arr[i];

      bool flag = false;

    vector<ll> v[10];


    for(ll i = 0;i<n; i++)
    {

      if(arr[i]%2==0)
      {
        v[0].push_back(arr[i]);
        continue;
      }

      for(ll j = 0; j<10 && !flag; j++)
      {

          if(arr[i]%p[i] == 0)
          {
            v[j].push_back(arr[i]);
            v[j].push_back((arr[i]/p[i]));

          }

      }

      ll arrr[1001];

      for(ll i = 0; i<10; i++)
      {
        for(ll j = 0; j<v[i].size(); j++)
        {
          arrr[v[i][j]] = i+1;
        }
      }

      for(ll i = 0;i <n; i++)
      {
        cout << arrr[arr[i]];
      }


    }



	}

}
