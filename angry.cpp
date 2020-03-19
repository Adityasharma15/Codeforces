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

		ll maxx = 0, count = 0, temp = -1;

		for(ll i = 0; i<n; i++)
		{
			if(s[i]=='A')
			{
				count = 0;
				temp = 0;
			}

			if(s[i] == 'P'  && temp == 0)
			{
					count++;
					maxx = max(maxx, count); 
					
			}
		}
    
		maxx = max(maxx, count); 

		cout << maxx << "\n";

	}
}