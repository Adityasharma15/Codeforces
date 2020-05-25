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
    ll odds = 0, evens = 0;

    for(ll i = 0; i<n; i++)
    {
      cin >> temp;
      vec.push_back(temp);

      if(temp%2==0)
       evens++;

      else
        odds++;
    }

    if(odds == 0 || evens == 0 || odds%2==0 || evens%2==0)
    {
      cout << "YES\n";
    }

    else
    {

    sort(vec.begin() , vec.end());
    for(ll i = 0; i<n-1; i++)
    {
        // cout << i << "\n";

        if( abs(vec[i+1] - vec[i]) == 1 )
        {
          odds--;
          evens--;
          i++;
        }
      }


          if(odds == 0 || evens == 0 || odds%2==0 || evens%2==0)
          {
            cout << "YES\n";
          }

          else
          {
            cout << "NO\n";
          }

	}

}
return 0;
}
