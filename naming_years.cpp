#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{

		ll n , m;
		cin >> n >> m;

		char s[n][11];
		char s1[m][11];

		for(ll i = 0; i<n; i++)
			cin >> s[i];

		for(ll i = 0; i<m; i++)
			cin >> s1[i];

		ll q;
		cin >> q;

		while(q--)
		{
			ll x;
			cin >> x;

			if(x%n!=0)

			{
				
				cout << s[(x%n) - 1];
			
			}

			else
			{
				cout << s[n-1];
			}


			if(x%m!=0)
			{	
				cout << s1[(x%m) - 1];
			}

			else
				cout << s1[m-1];

			cout <<"\n";

		}		


}
