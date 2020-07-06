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

    for(ll i = 0; i<n; i++)
          cin >> vec[i];

    bool ans = true;

    if(vec[0]==n || vec[n-1]==1)
    {  cout << "YES\n";
    }

    ll left = -1, right = -1;

    for(ll i = 0; i<(n-1) && ans; i++)
    {
      if(vec[i] < vec[i+1] && left==(-1))
      {
        left = vec[i];
        continue;
      }

      if(vec[i] > vec[i+1] && left!=(-1))
      {
        right = vec[i];
      }

      if(right!=-1)
        break;
    }


    for(ll i = max(right,1); i<n && ans; i++)
    {
      if(vec[i] < vec[i-1])
      {
        if(vec[i]<vec[left])
        {

        }
      }


    }

	}

  return 0;

}
