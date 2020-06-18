#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll n, k;
  cin >> n >> k;

  map<ll, ll > m1;

  ll arr[n];

  for(ll i = 0; i<n; i++)
  {
    cin >> arr[i];
    m1[arr[i]] = i;
  }

  sort(arr, arr + sizeof(arr[n])/sizeof(arr[0]));

  ll maxx = 0;


  for(ll i = (n-1); i>= (n-k); i--)
  {
    maxx += arr[i];
  }

  ll count = 0;





  std::vector<ll> v;

  map<ll, ll>::reverse_iterator it;

  for (it = m1.rbegin(); it != m1.rend(); it++) {
      //maxx += arr[i.second];
      count++;
      ll a = it.second;

      v.push_back(a);

      if(count>k)
        break;
  }

  sort(v.begin(), v.end());

  ll numb = 1;

  for(ll j = 0; j<v.size(); j++)
  {
    numb *= v[j];
  }

  cout << maxx << " " << numb << "\n";

}
