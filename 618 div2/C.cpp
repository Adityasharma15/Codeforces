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

  vector<ll> arr;
  vector<string> s;
  ll temp;
  string temps;

  for(ll i = 0;i< n; i++)
  {
    cin >> temp;
    arr.push_back(temp);

    temps = bitset< 64 >( temp).to_string();
    s.push_back(temps);
  }

  ll anspos = 0 , count = 0;
  bool found = false;

    for(ll j = 0; j<64; j++)
    {
      count = 0;

        for( ll i = 0; i<n; i++ )
        {
              if(s[i][j] == '1')
              {
                anspos = i;
                count++;
              }
        }

        if(count == 1)
        {
          found = true;
          break;
        }
  }

  cout << arr[anspos] << " ";

  for(ll i = 0;i <n; i++)
  {
    if(i != anspos) cout << arr[i] << " ";

  }

  cout << "\n";

  return 0;
}
