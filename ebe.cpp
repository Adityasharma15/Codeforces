#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t;
	cin >> t;

	while(t--)
	{
		ll n;
		cin >> n;	
	
		vector<ll> v;
		
		ll s;
		cin >> s;
		
		ll temp = 10;
		
		ll oddcount = 0;
		
		while(s>0)
		{
			ll x = s%10;
			
			v.push_back(x);
			
			s = s/temp;	
		}	
    	
    	reverse(v.begin(), v.end());
		    
    	for(ll i = 0; i< v.size(); i++)
    	{
    		if(v[i]%2==1 && oddcount < 2)
    		{
    			cout << " i " << i << " i" << endl;
    			cout << v[i];
    			oddcount++;
			}
			
			else if(oddcount >=2)
			{
				break;
			}	
		}
		
		if(oddcount<=1)
			cout << "-1";
		
    	cout << endl;
	}
}

