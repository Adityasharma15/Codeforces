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
	
	string s;
	cin >> s;
	
	ll oddcount = 0;
	
	vector<ll> v;
	
	for(ll i = 0; i<n; i++)
	{
		ll x = s[i] - '0';
		
		if(x%2==1 && oddcount<2)
    		{
    			v.push_back(x);
    			oddcount++;
			}
			
			else if(oddcount >=2)
				break;
						
	}		
    
    
		if(oddcount<=1)
			cout << "-1" << "\n";

    	else
    	{
    		for(ll i = 0; i < v.size(); i++)
    		{
    			cout << v[i];
			}
			cout << "\n";
		}
	}
}

