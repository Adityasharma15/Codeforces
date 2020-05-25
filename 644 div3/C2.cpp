#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
   ll t;
   cin>>t;
   while(t--)
   {
 		ll n;
		cin>>n;
  	vector<ll> a(n);
  	ll evens=0, odds = 0;

		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%2==0) evens++;

      else
			odds++;
		}

		sort(a.begin(),a.end());
    if(evens%2==0 && odds%2==0)
			cout<<"YES\n";

    else if(evens%2==1&&odds%2==1)
		{
			ll temp=0;

			for(ll i=0;i<n-1;i++)
			{
				if(a[i+1]-a[i]==1)
				{
          temp=1;
					cout<<"YES\n";
					break;
				}
			}
			if(temp==0)
				cout<<"NO\n";

		}
		else
			cout<<"NO\n";
   }
}
