#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{


	ll t;
	cin >> t;

	while(t--)
	{
		vector< pair<ll,ll> > v;
		
		ll n;
		cin >> n;
		
		ll x[n], y[n];
		
		for(ll i =0; i<n; i++)
		{
			cin >> x[i];
			cin >> y[i];
		}
		
    	for(ll i = 0; i<n;i++)
    	{
    		v.push_back(make_pair(x[i],y[i]));
    		
		}
		
		sort(v.begin(), v.end());
		
		bool flag = false;
		
		for(ll i = 0; i<v.size() - 1; i++)
		{
			if(v[i].first < v[i+1].first && v[i].second>v[i+1].second)
				{
				flag = true;
				break;
				}
		}
		
		if(flag)
		{
			cout << "NO";
		}
		
		else
		{
			cout << "YES" << "\n";
			
			ll x = 0, y = 0;
			ll xx, yy;
			
			for(ll i =0; i<v.size(); i++)
			{
				
				xx = abs(v[i].first- x);
				yy = abs(v[i].second - y);
				
				while(xx--)
					cout << "R";
					
				while(yy--)
					cout << "U";
				
				x = v[i].first;
				y = v[i].second;
			}
		}
	cout << "\n";
	}
	
}

