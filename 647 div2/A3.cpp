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
    ll a, b;
		cin>>a >> b;

		if(a==b)
			cout<<"0\n";

		else
		{
			ll maxi=max(a,b), mini=min(a,b);

      if(maxi%mini==0)
			{
				ll div=maxi/mini;

				 if ( ( div & ( div - 1 ) ) == 0 )
				 {
				 	ll x=0,y=0,r=0;
				 	ll z=log2(div);

          if(z>0)
				 	{
						x=z/3;
						z=z-x*3;
					}

					if(z>0)
					{
						y=z/2;
						z=z-y*2;
					}

					if(z>0)
					r=z;

					cout<<(x+y+r)<<"\n";
				}
				else
				cout<<"-1\n";

			}
			else
				cout<<"-1\n";
		}

	}
  return 0;
}
