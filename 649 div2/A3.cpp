#include<bits/stdc++.h>
#define ll long long
using namespace std;

void printSubstring(ll number, string s)
{
  ll i = 0;
  while(number>0)
  {
    (number&1)?cout<<s[i]:cout<<"";
    i++;
    number=number>>1;
  }
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
		ll n, x;
    cin >> n >> x;


    vector<ll> vec(n);

    ll sum = 0;

    for(ll i = 0; i<n; i++)
    {
      cin >> vec[i];
      sum+=vec[i];
    }

    ll end = (1<<n) - 1;

    for(ll i = 0;i <=end; i++)
    {
      Substring(i, s);
      cout << "\n";
    }



	}

  return 0;

}
