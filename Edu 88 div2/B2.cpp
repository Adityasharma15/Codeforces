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



		ll n,m;
		cin>>n>>m;
		ll x,y;
		cin>>x>>y;
		char a[n][m];

		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				cin>>a[i][j];

			}

		}
		ll num=x+x;
		y=min(num,y);
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
			ll count=0;
			for(ll j=0;j<m;j++)
			{
				if(a[i][j]=='.')
				{
					count++;
				}
				else
				{
					if(count%2==0)
					{
						ans=ans+y*(count/2);
						count=0;
					}
					else
					{
						ans=ans+y*(count/2)+x;
						count=0;
					}
				}
			}
			if(count!=0)
			{
				if(count%2==0)
					{
						ans=ans+y*(count/2);
						count=0;
					}
					else
					{
						ans=ans+y*(count/2)+x;
						count=0;
					}
			}
		}
		cout<<ans<<"\n";
	}
}
