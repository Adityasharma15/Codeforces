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

      for(ll i = 0; i<n; i++)
      {
        cin >> temp;
        vec.push_back(temp);
      }

      sort(vec.begin(), vec.end());

      ll mindif = INT_MAX;

      for(ll i = 0; i< n-1; i++)
      {
        mindif = min( mindif, vec[i+1] - vec[i]);
      }

      cout << mindif << "\n";

      //
      // for(auto i: vec)  cout << i << " ";
      //
      // cout << vec[vec.size()-1] - vec[vec.size() - 2] <<"\n";


	}

  return 0;

}
