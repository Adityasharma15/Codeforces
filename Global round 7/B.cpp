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

    ll maxx = -1, temp, temp2;

    cin >> temp;
    cout << temp << " ";
    maxx = temp;

    for(ll i = 1; i<n; i++)
    {
      cin >> temp;

      temp2 = maxx + temp;

      cout << temp2 << " ";

      maxx = max(temp2, maxx);

    }

    cout << "\n";

}
