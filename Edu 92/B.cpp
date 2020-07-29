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

    ll n, z, k;
    cin >> n >> z >> k;

    vector<ll> arr(n);
    vector<ll> sum_array(n+1);

    ll sum = 0;
    for(ll i = 0; i<n; i++)
    {
      cin >> arr[i];
      sum += arr[i];

      sum_array[i] = sum;
    }

    ll curr_sum = arr[0];
    for(ll i =1; i<n; i++)
    {
        if(k == 0)
          break;

        if(z == 0)
        {
          curr_sum += (sum_array[i+k] - sum_array[i]);
          break;
        }

        ll comp;

        if(k%2==0)
          comp = min(z,k/2)*(arr[i] + arr[i-1]) + sum_array[i + ]

        else
          comp = min(z,)

          if( sum_array[i+k] > (min(z,k/2)*(arr[i] + arr[i-1]) + sum_array[i+k])
          {

          }

          else
          {

          }
      }
	 }

  return 0;

}
