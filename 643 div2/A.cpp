#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll product(ll x)
{

  ll mini = 9, maxi = 0;

  ll temp;

  while(x>0)
  {
    temp = x%10;

    mini = min(temp, mini);
    maxi = max(temp, maxi);

    x/=10;
  }

  return mini*maxi;
}



int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	while(t--)
  {
		ll a, k;
    cin >> a >> k;

    k--;

    ll ak = a;

    ll temp;

    while(k--)
    {
      temp = product(ak);


      if(temp==0)
        break;

        ak+=temp;
    }

    cout << ak << "\n";

	}

  return 0;

}
