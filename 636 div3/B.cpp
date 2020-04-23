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

    ll temp = n/2;

    ll temp2 = 1;

    ll arr[temp];

    vector<ll> ans;

    ll real;

    if(temp%2 == 0)
    {

      cout << "YES" << "\n";

      for(ll i = 0; i<temp; i++)
      {
        arr[i] = temp2*2;
        temp2+=2;
        ans.push_back(arr[i]);
      }

      for(ll j = 0;j < temp; j++)
      {
        if(j%2==0)
        {
          real = arr[j] +1;
        }

        else
        {
          real = arr[j] - 1;
        }

          ans.push_back(real);
      }

      for(ll i = 0 ; i<ans.size(); i++)
      {
        cout << ans[i] << " ";
      }

      cout << "\n";

    }

    else
    {
      cout << "NO" << "\n";
    }

	}

  return 0;

}
