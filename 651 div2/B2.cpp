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
    vector<ll> odd;
    vector<ll> even;

    ll odds = 0, evens = 0;
    for(ll i = 0; i<(2*n); i++)
    {
      ll temp;
      cin >> temp;
      // cout << temp;

      if(temp%2==0)
      {
        evens++;
        even.push_back((i+1));
      }

      else
      {
        odds++;
        odd.push_back((i+1));
      }
    }

    // cout << odds <<" " << evens;

    if(evens%2==0)
    {
        if(evens>1)
        {
        even.pop_back();
        even.pop_back();
        }

        else
        {
          odd.pop_back();
          odd.pop_back();
        }

        ll lena = even.size();
        for(ll i = 0; i<lena; i=i+2)
        {
          cout << even[i] << " " << even[i+1] << "\n";
        }

        for(ll i = 0; i<odd.size(); i=i+2)
        {
          cout << odd[i] << " " << odd[i+1] << "\n";
        }
    }

    else
    {
          even.pop_back();
          odd.pop_back();

          for(ll i = 0; i<even.size(); i=i+2)
          {
            cout << even[i] << " " << even[i+1] << "\n";
          }

          for(ll i = 0; i<odd.size(); i=i+2)
          {
            cout << odd[i] << " " << odd[i+1] << "\n";
          }
	}
}
  return 0;
}
