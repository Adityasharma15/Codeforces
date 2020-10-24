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

      ll n, m;
      cin >> n>> m;

      ll sum = 0;

      for(int i = 0; i<n; i++){
        ll temp;
        cin >> temp;
        sum += temp;
      }

      if(sum == m)
        cout << "YES" << "\n";

      else
        cout <<"NO" << "\n";
	}

  return 0;

}
