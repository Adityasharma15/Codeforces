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

  ll arr[n];

  for(ll i=0;i<n;i++)
    cin>>arr[i];

    ll temp1=0, temp2 = 0;
  ll i=0, j = n-1, a =0, b = 0, temp = 0;


  while(j>=i)
  {
    while(temp1<=temp2 && i<=j)
    {
      temp1=temp1+arr[i];
      i++;
    }

    if(temp1>0)
    {temp++;
}
    temp2=0;
    a+=temp1;

    while(temp2<=temp1&&j>=i)
    {
      temp2+=arr[j];
      j--;
    }

    if(temp2>0)
    temp++;

    temp1=0;
    b+=temp2;
  }

  cout << temp << " " << a << " " << b << "\n";
	}

  return 0;
}
