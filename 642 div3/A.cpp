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

    ll a,b;
    cin >> a >> b;

    if(a == 1)
      cout << "0\n";

    else if(a == 2)
      cout << b << "\n";


    else
       cout << 2*b << "\n";
    
	}

  return 0;

}
