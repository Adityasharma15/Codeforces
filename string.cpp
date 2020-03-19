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
		
	string a, b, c;
	cin >> a >> b >> c;
	
	bool flag = true;
	
	for(ll i = 0; i<a.length(); i++)
	{
		if(c[i]!=a[i] && c[i]!= b[i])
		{
			flag = false;
			break;
		}
				
	}	
    
	if(flag)
		cout << "YES" << "\n";
		
	else
		cout << "NO" << "\n";

	}

}
