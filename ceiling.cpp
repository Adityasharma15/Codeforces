#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ll t;
	cin >> t;

	while(t--)
	{
		ll n, d;

		bool flag = false;

		cin >> n >> d;

		for(ll x = 0; x<n; x++)
		{
			if((x + ((d + (x+1) -1)/(x+1))) <= n)
				{
					//cout << "x" << x << endl;
					flag = true;
				}
		}	

	
		if(n>=d)
		{
			flag = true;
		}

    	if(flag==true)
    		cout << "YES" << "\n";

    	else
    		cout << "NO" << "\n";


	}

}
