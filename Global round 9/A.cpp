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
    vector<ll> vec1(n);

    for(ll i = 0; i<n; i++)
    {
       cin >> vec[i];
       vec1[i] = vec[i];
    }

    bool flag = false;
    for(ll i = n-1; i>0; i--)
    {
      if(i%2==0)
      {
          if((vec1[i] - vec1[i-1]) > 0)
            vec1[i-1] = (-1)*vec1[i-1];

          if((vec1[i] - vec1[i-1]) > 0)
            flag = true;
        }

      else
      {
        if((vec1[i] - vec1[i-1]) < 0)
        {
            vec1[i-1] = (-1)*vec1[i-1];
        }

        if((vec1[i] - vec1[i-1]) < 0)
          flag = true;
      }
    }


    if(flag)
    {

      for(ll i = 0; i<(n-1); i++)
      {
        if(i%2==0)
        {
            if((vec[i+1] - vec[i]) > 0)
              vec[i+1] = (-1)*vec[i+1];
        }

        else
        {
          if((vec[i+1] - vec[i]) < 0)
          {
              vec[i+1] = (-1)*vec[i+1];
          }

        }

      }

      for(auto i:vec)
        cout << i << " ";
    }

    else
    {
      for(auto i: vec1)
        cout << i << " ";
    }

    cout << "\n";
	}
  return 0;
}
