#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{

	ll t;
	cin >> t;

	while(t--)
	
	{
		
    	ll a, b;
    	cin >> a >> b;

    	ll digits;

    	ll x = b;

    	while(x)
    	{
    		digits++;
    		x/=10;
    	}

    	ll count = 0, number = 9;

    	cout << "d  "<<digits << "\n";

    	for(ll i =0; i<(digits +1); i++)
    	{
    		number += 9*(i)*10;

    		if(b<= number)
    			count++;
    	}	

    	cout << count*a << "\n";


	}

}
