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

    vector<ll> vec(n);
    bool allone = true;

    bool contigone = true;
    ll one = 0;

    for(ll i = 0; i<n; i++)
    {
      cin >> vec[i];

      if(vec[i]!=1)
        allone = false;

      if(vec[i]!=1)
      {
        contigone = false;
      }

      if(contigone)
        one++;
    }

    if(allone)
    {
      if(n%2==0)
      {
        cout << "Second\n";
      }

      else
      {
        cout << "First\n";
      }
    }

    else
    {
      if(one%2==0)
      {
        cout << "First\n";
      }

      else
      {
        cout << "Second\n";
      }
    }
	}
  return 0;

}
