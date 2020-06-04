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
      map<ll,ll> mapp;
      ll array[n];

      for(ll i=0;i<n;i++)
  		{
  			cin>>array[i];
  			mapp[array[i]]=1;
  		}

      bool check = false;
      set<ll> sett;
  		ll index = 1;

      while(index<=1023)
  		{
  			sett.clear();

      	for(ll i=0;i<n;i++)
  			{
  				ll number = array[i]^index;

          if(mapp[number]==0)
  				{
  					check=false;
  					break;
  				}

          else
  				{
            sett.insert(number);
  					check=true;
  				}
  			}

  			if(check && sett.size()==n)
  			   break;

  			index++;
  		}

  		if(!check)
  			cout<<"-1\n";

  		else
  			cout<<index<<"\n";
	}
  return 0;
}
