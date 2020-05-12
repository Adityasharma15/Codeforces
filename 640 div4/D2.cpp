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
  cin>>n;

  ll a[n];

  for(ll i=0;i<n;i++)
    cin>>a[i];

  ll i=0;
  ll j=n-1;
  ll alice=0;
  ll bob=0;
  ll count=0;
  ll x=0;
  ll y=0;

  while(j>=i)
  {
    while(x<=y&&i<=j)
    {
      x=x+a[i];
      i++;
    }
    if(x>0)
    count++;
    alice=alice+x;
  //	cout<<"i is "<<i<<" j is "<<j<<endl;
  //	cout<<x<<" "<<endl;
    y=0;
    while(y<=x&&j>=i)
    {
      y=y+a[j];
      j--;
    }
    if(y>0)
    count++;
    bob=bob+y;
    x=0;
  //	cout<<"i is "<<i<<" j is "<<j<<endl;
  //	cout<<y<<endl;
  }
  cout<<count<<" "<<alice<<" "<<bob<<endl;


	}

  return 0;

}
