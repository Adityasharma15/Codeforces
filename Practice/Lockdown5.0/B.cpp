#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);


      ll a, b;
      cin >> a >> b;

      ll div = (a+b)/3;
      ll mini = min(a,b);

      cout <<  min(div, mini) << "\n";

  return 0;

}
