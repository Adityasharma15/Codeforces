#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

  ll y, k, n, x;
  cin >> y >> k >> n;

  x = k - (y%k);

  if(!x)
    x = k;

  if(x > (n-y))
    cout << -1 << "\n";

  while(x <= (n-y)){
    cout << x << " ";
    x += k;
  }

  cout << "\n";

  return 0;
}
