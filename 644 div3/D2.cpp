#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
 		ll n;
		cin>>n;
		ll k;
		cin>>k;
		if(n<=k)
		{
			cout<<"1"<<endl;
		}
		else
		{
			ll num=sqrt(n);
			ll value=min(num,k);
			ll div=1;
			for (ll i=2; i<=value; i++)
		    {
		        if (n%i == 0)
		        {
		            if (n/i == i)
		               	div=max(i,div);

		            else
		            {
		            	if(n/i<=k)
		                div=max(div,n/i);
		                else
		                div=max(div,i);
		            }
		        }
		    }
        
		    cout<<n/div<<endl;
		}
   }
}
