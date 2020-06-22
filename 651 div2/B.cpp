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

      if(temp%2==0)
      {
        evens++;
        even.push_back(temp);
      }

      else
      {
        odds++;
        odd.push_back(temp);
      }
    }

    if(evens%2==0)
    {
        even.pop_back();
        even.pop_back();

        ll lena = even.size();

        for(ll i = 0; i<lena; i=i+2)
        {
          cout << even[i] << " " << even[i+1] << "\n";
        }

        for(ll j = 0; j<odd.size(); j=j+2)
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

          for(ll j = 0; j<odd.size(); j=j+2)
          {
            cout << odd[i] << " " << odd[i+1] << "\n";
          }
	}


  return 0;

}
